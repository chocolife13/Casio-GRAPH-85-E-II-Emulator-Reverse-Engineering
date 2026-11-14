// Ghidra headless helper for the GRAPH85emulator reverse-engineering session.
// Modes:
//   list   <out.tsv>                 - function inventory
//   decomp <outdir> [regex] [minSize]- decompile matching functions to .c files
//   sym    <out.tsv>                 - symbols (functions, labels, data)
import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionManager;
import ghidra.program.model.symbol.Symbol;
import ghidra.program.model.symbol.SymbolIterator;
import ghidra.program.model.symbol.SymbolTable;
import java.io.File;
import java.io.FileWriter;
import java.io.PrintWriter;
import java.util.regex.Pattern;

public class DumpFunctions extends GhidraScript {
    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        String mode = args.length > 0 ? args[0] : "list";
        String out = args.length > 1 ? args[1] : "dump.txt";

        if (mode.equals("list")) {
            FunctionManager fm = currentProgram.getFunctionManager();
            PrintWriter w = new PrintWriter(new FileWriter(out));
            w.println("name\tentry\tbytes\tparams\tthunk\texternal\tnamespace");
            int n = 0;
            for (Function f : fm.getFunctions(true)) {
                w.printf("%s\t%s\t%d\t%d\t%s\t%s\t%s%n",
                        f.getName(), f.getEntryPoint(),
                        f.getBody().getNumAddresses(), f.getParameterCount(),
                        f.isThunk(), f.isExternal(),
                        f.getParentNamespace() == null ? "" : f.getParentNamespace().getName());
                n++;
            }
            w.close();
            println("functions: " + n);
        } else if (mode.equals("sym")) {
            SymbolTable st = currentProgram.getSymbolTable();
            PrintWriter w = new PrintWriter(new FileWriter(out));
            w.println("name\taddress\ttype\tnamespace");
            SymbolIterator it = st.getAllSymbols(true);
            int n = 0;
            while (it.hasNext()) {
                Symbol s = it.next();
                w.printf("%s\t%s\t%s\t%s%n", s.getName(), s.getAddress(),
                        s.getSymbolType(),
                        s.getParentNamespace() == null ? "" : s.getParentNamespace().getName());
                n++;
            }
            w.close();
            println("symbols: " + n);
        } else if (mode.equals("decomp")) {
            String filter = args.length > 2 ? args[2] : ".*";
            long minSize = args.length > 3 ? Long.parseLong(args[3]) : 0;
            Pattern pat = Pattern.compile(filter);
            File dir = new File(out);
            File fdir = new File(dir, "functions");
            fdir.mkdirs();
            DecompInterface di = new DecompInterface();
            di.toggleCCode(true);
            di.toggleSyntaxTree(true);
            di.setSimplificationStyle("decompile");
            if (!di.openProgram(currentProgram)) {
                println("decompiler open failed: " + di.getLastMessage());
                return;
            }
            PrintWriter idx = new PrintWriter(new FileWriter(new File(dir, "INDEX.tsv")));
            idx.println("name\tentry\tbytes\tfile");
            FunctionManager fm = currentProgram.getFunctionManager();
            int done = 0, skipped = 0, failed = 0;
            for (Function f : fm.getFunctions(true)) {
                String ns = f.getParentNamespace() == null ? "" : f.getParentNamespace().getName();
                String key = ns + "::" + f.getName();
                if (f.isExternal() || f.isThunk() || f.getBody().getNumAddresses() < minSize
                        || !pat.matcher(key).matches()) {
                    skipped++;
                    continue;
                }
                if (monitor.isCancelled()) break;
                DecompileResults res = di.decompileFunction(f, 60, monitor);
                if (!res.decompileCompleted()) {
                    failed++;
                    continue;
                }
                String c = res.getDecompiledFunction().getC();
                String safe = key.replaceAll("[^A-Za-z0-9_.@-]", "_");
                String fn = f.getEntryPoint() + "_" + safe + ".c";
                try (PrintWriter w = new PrintWriter(new FileWriter(new File(fdir, fn)))) {
                    w.println("// decompiled from GRAPH85emulator.exe");
                    w.println("// function: " + key);
                    w.println("// entry: " + f.getEntryPoint() + "  size: " + f.getBody().getNumAddresses());
                    w.println();
                    w.print(c);
                }
                idx.printf("%s\t%s\t%d\t%s%n", key, f.getEntryPoint(),
                        f.getBody().getNumAddresses(), "functions/" + fn);
                done++;
                if (done % 250 == 0) {
                    println("decompiled " + done + " (skipped " + skipped + ", failed " + failed + ")");
                    idx.flush();
                }
            }
            idx.close();
            di.dispose();
            println("done=" + done + " skipped=" + skipped + " failed=" + failed);
        }
    }
}
