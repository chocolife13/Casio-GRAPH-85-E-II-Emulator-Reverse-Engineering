// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004a14e0
// entry: 004a14e0  size: 234


void FUN_004a14e0(undefined4 param_1,uint param_2,int param_3)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  short *psVar4;
  int iVar5;
  int iVar6;
  
  iVar3 = param_2;
  FUN_00523740();
  FUN_005232d0(1,1);
  FUN_00523470(param_1,0x15);
  if (*(byte *)(param_2 + 0x29) != 0) {
    uVar2 = (uint)*(byte *)(param_2 + 0x29);
    iVar5 = uVar2 + 1;
    psVar4 = (short *)(param_2 + 0x10 + uVar2 * 2);
    param_3 = uVar2 * 0x30 + -0x30 + param_3;
    param_2 = uVar2;
    do {
      FUN_005232d0(1,iVar5);
      if (*(short *)(iVar3 + 2) == *psVar4) {
        FUN_00523490();
      }
      else {
        FUN_00523470(param_3,0x15);
      }
      psVar4 = psVar4 + -1;
      iVar5 = iVar5 + -1;
      param_3 = param_3 + -0x30;
      param_2 = param_2 - 1;
    } while (param_2 != 0);
  }
  bVar1 = *(byte *)(iVar3 + 0x29);
  if (bVar1 < 6) {
    iVar6 = 6 - (uint)bVar1;
    iVar5 = bVar1 + 2;
    do {
      FUN_005232d0(1,iVar5);
      FUN_00523470(&DAT_00584ed8,0x15);
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  FUN_004a1000(iVar3);
  FUN_004a11b0(iVar3);
  if (*(byte *)(iVar3 + 0x29) < 6) {
    FUN_004a1310(iVar3 + 0x24);
  }
  return;
}

