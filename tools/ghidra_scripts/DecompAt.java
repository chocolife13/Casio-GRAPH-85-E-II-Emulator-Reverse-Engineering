// Decompile specific addresses in the GRAPH85emulator program.
// Usage: DecompAt.java <outdir> <hexaddr>[,<hexaddr>...]
import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import java.io.File;
import java.io.FileWriter;
import java.io.PrintWriter;

public class DecompAt extends GhidraScript {
    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        String outdir = args[0];
        String[] addrs = args[1].split(",");
        DecompInterface di = new DecompInterface();
        di.toggleCCode(true);
        di.toggleSyntaxTree(true);
        if (!di.openProgram(currentProgram)) {
            println("decompiler open failed");
            return;
        }
        new File(outdir).mkdirs();
        for (String s : addrs) {
            s = s.trim();
            Address a = toAddr(Long.parseLong(s.replaceFirst("^0[xX]", ""), 16));
            Function f = getFunctionAt(a);
            if (f == null) {
                f = getFunctionContaining(a);
            }
            if (f == null) {
                f = createFunction(a, null);
            }
            if (f == null) {
                println("cannot create function at " + a);
                continue;
            }
            DecompileResults res = di.decompileFunction(f, 120, monitor);
            if (!res.decompileCompleted()) {
                println("decompile failed at " + a + ": " + res.getErrorMessage());
                continue;
            }
            String c = res.getDecompiledFunction().getC();
            String name = f.getName();
            String file = outdir + "/" + a + "_" + name.replaceAll("[^A-Za-z0-9_.@-]", "_") + ".c";
            try (PrintWriter w = new PrintWriter(new FileWriter(file))) {
                w.println("// decompiled from GRAPH85emulator.exe");
                w.println("// function: " + name + " @ " + a);
                w.println();
                w.print(c);
            }
            println("wrote " + file);
        }
        di.dispose();
    }
}
