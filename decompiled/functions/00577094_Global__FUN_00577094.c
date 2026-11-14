// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00577094
// entry: 00577094  size: 99


undefined4 FUN_00577094(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UINT UVar1;
  int iVar2;
  
  UVar1 = SetErrorMode(0);
  SetErrorMode(UVar1 | 0x8001);
  iVar2 = FUN_0057497f();
  *(undefined4 *)(iVar2 + 8) = param_1;
  *(undefined4 *)(iVar2 + 0xc) = param_1;
  iVar2 = FUN_0057497f();
  iVar2 = *(int *)(iVar2 + 4);
  if (iVar2 != 0) {
    *(undefined4 *)(iVar2 + 0x68) = param_1;
    *(undefined4 *)(iVar2 + 0x6c) = param_2;
    *(undefined4 *)(iVar2 + 0x70) = param_3;
    *(undefined4 *)(iVar2 + 0x74) = param_4;
    FUN_005770f7();
  }
  iVar2 = FUN_0057497f();
  if (*(char *)(iVar2 + 0x14) == '\0') {
    FUN_00566b6d();
  }
  return 1;
}

