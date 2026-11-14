// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004696c0
// entry: 004696c0  size: 208


void FUN_004696c0(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_00523930(4,2,0x20,0x20);
  FUN_00523930(0xb,2,0x20,0x20);
  FUN_00523930(4,6,0x20,0x10);
  FUN_00523930(0xb,6,0x20,0x10);
  if (param_1 == 1) {
    uVar2 = 10;
    FUN_004125f0(0xc,10,0xf,10);
    FUN_004125f0(0x28,10,0x2b,10);
  }
  else {
    uVar2 = 8;
  }
  iVar1 = (param_2 - param_1) + -1;
  if (iVar1 < 0) {
    uVar2 = 0xe;
    FUN_004125f0(0xc,0xe,0xf,0xe);
    iVar1 = 0xe;
  }
  else {
    if (3 < iVar1) {
      iVar1 = 0x2f;
      goto LAB_00469774;
    }
    iVar1 = iVar1 * 8 + 0x16;
    FUN_004125f0(0xc,iVar1,0xf,iVar1);
  }
  FUN_004125f0(0x28,iVar1,0x2b,iVar1);
LAB_00469774:
  FUN_004125f0(0xc,uVar2,0xc,iVar1);
  FUN_004125f0(0x2b,uVar2,0x2b,iVar1);
  return;
}

