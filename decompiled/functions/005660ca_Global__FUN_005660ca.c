// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005660ca
// entry: 005660ca  size: 31


undefined4 __fastcall FUN_005660ca(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x90);
  if (((iVar1 != 0) && (iVar1 != 0xe002)) && (iVar1 != 0xe001)) {
    return 1;
  }
  return 0;
}

