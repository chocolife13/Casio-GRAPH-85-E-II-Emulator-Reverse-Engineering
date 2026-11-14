// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00516d40
// entry: 00516d40  size: 89


undefined4 FUN_00516d40(undefined4 param_1)

{
  int iVar1;
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  FUN_004e4c30("-1e98",local_18);
  FUN_004e4c30(&DAT_0058c27c,local_c);
  iVar1 = FUN_004e72d0(param_1,local_18);
  if (iVar1 == 0) {
    iVar1 = FUN_004e7310(param_1,local_c);
    if (iVar1 == 0) {
      return 0;
    }
  }
  return 0x1c;
}

