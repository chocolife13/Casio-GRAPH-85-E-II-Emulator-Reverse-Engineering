// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00567287
// entry: 00567287  size: 72


void __fastcall FUN_00567287(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if ((((iVar1 != 0x40) && (iVar1 != 0x80)) && (iVar1 != 0x100)) && (iVar1 != 0x200)) {
    FUN_00566960(param_1);
    return;
  }
  FUN_00553276(param_1);
  return;
}

