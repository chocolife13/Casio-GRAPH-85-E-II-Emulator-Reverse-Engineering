// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00435e30
// entry: 00435e30  size: 164


void FUN_00435e30(int param_1,uint param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar3 = 8;
  iVar1 = 0xc;
  if (1 < param_1) {
    iVar1 = 0xf;
  }
  iVar1 = iVar1 + -0x1c + param_1 * 0x1c;
  if (param_4 != 0) {
    uVar3 = 10;
  }
  iVar2 = (param_2 & 0xff) * 8;
  iVar4 = iVar2 + 8;
  if (param_3 != 0) {
    iVar4 = iVar2 + 6;
  }
  FUN_004125f0(iVar1,uVar3,iVar1,iVar4);
  if (param_4 != 0) {
    iVar2 = iVar1 + 2;
    if (param_1 != 1) {
      iVar2 = iVar1 + -2;
    }
    FUN_004125f0(iVar1,uVar3,iVar2,uVar3);
  }
  if (param_3 != 0) {
    iVar2 = iVar1 + 2;
    if (param_1 != 1) {
      iVar2 = iVar1 + -2;
    }
    FUN_004125f0(iVar1,iVar4,iVar2,iVar4);
  }
  return;
}

