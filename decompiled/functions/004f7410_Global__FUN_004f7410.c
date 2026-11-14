// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004f7410
// entry: 004f7410  size: 88


void FUN_004f7410(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  iVar2 = param_1;
  do {
    iVar1 = iVar1 + 1;
    FUN_005232d0(1,iVar1);
    FUN_00523470(iVar2,0x15);
    iVar2 = iVar2 + 0x2a;
  } while (iVar1 < 7);
  if (*(int *)(param_1 + 0x140) != 0) {
    FUN_005232d0(1,8);
    FUN_00523470(0,0x15);
    *(undefined4 *)(param_1 + 0x140) = 0;
  }
  return;
}

