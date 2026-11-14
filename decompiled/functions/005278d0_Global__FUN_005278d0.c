// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005278d0
// entry: 005278d0  size: 699


void FUN_005278d0(uint param_1,uint param_2,uint param_3,int param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint local_2c;
  uint local_28;
  undefined1 local_24 [4];
  undefined1 local_20 [4];
  undefined1 local_1c [12];
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  FUN_0052fbc0(param_1,param_2,local_1c);
  param_1 = FUN_004ad2a0(5,local_1c,&local_2c);
  param_1 = param_1 & 0xff;
  if (param_1 != 0) goto LAB_00527b76;
  param_1 = FUN_004ad3f0(1,0x10,&local_10);
  param_1 = param_1 & 0xff;
  if (param_1 != 0) goto LAB_00527b76;
  FUN_00527400(local_10,local_c,local_8,local_4,&param_2);
  iVar1 = param_4;
  uVar6 = param_3;
  if ((param_2 < param_3) || (param_3 == 0)) {
    uVar6 = param_2 + 1;
    param_3 = uVar6;
  }
  else {
    param_3 = param_2;
  }
  uVar4 = (local_2c - 0x10) / 0xc;
  iVar5 = 0;
  iVar2 = FUN_005273e0(param_4);
  if ((iVar2 == 1) || (param_2 * 0xc + 0x10 < local_2c)) {
    if ((param_2 == uVar4) && (iVar2 = FUN_005273e0(iVar1), iVar2 == 1)) {
      uVar4 = param_2;
      if (param_2 < uVar6) {
        uVar4 = param_2 + 2;
      }
      param_1 = FUN_00527330(param_2 * 0xc + 0x10,uVar4 * 0xc);
      if (param_1 != 0) goto LAB_00527b76;
    }
    else {
      if (param_2 < uVar6) {
        if ((param_2 == uVar4) && (iVar2 = FUN_005273e0(iVar1), iVar2 == 0)) {
          iVar5 = 1;
        }
        else {
          iVar5 = 2;
        }
      }
      uVar4 = FUN_00527360(param_2);
      if ((uVar4 != uVar6) || (iVar2 = FUN_005273e0(iVar1), iVar2 != 0)) goto LAB_00527a6a;
      FUN_004acb90(param_2 * 0xc,param_2 * 0xc + 0x10);
    }
    iVar5 = 0;
  }
  else if (param_2 < uVar6) {
    iVar5 = 1;
  }
LAB_00527a6a:
  FUN_004ad550(local_20,local_24,&local_28);
  if (local_28 < (uint)(iVar5 * 0xc)) {
    param_1 = 4;
    goto LAB_00527b76;
  }
  if (iVar5 == 0) {
    FUN_004ac2f0(0xc,iVar1,uVar6 * 0xc + 4);
    iVar2 = FUN_005273e0(iVar1);
    if (iVar2 == 1) {
      param_1 = FUN_004ac2f0(0xc,iVar1 + 0xc,(param_3 + uVar6) * 0xc + 4);
      goto LAB_00527b46;
    }
  }
  else if (iVar5 == 1) {
    param_1 = FUN_004abeb0(0xc,iVar1,uVar6 * 0xc + 4);
LAB_00527b46:
    param_1 = param_1 & 0xff;
  }
  else if (iVar5 == 2) {
    uVar4 = FUN_004abeb0(0xc,iVar1 + 0xc,(param_2 + uVar6) * 0xc + 4);
    uVar3 = FUN_004abeb0(0xc,iVar1,uVar6 * 0xc + 4);
    param_1 = uVar4 & 0xff | uVar3 & 0xff;
  }
  if (param_2 < uVar6) {
    FUN_00527410(&local_10,uVar6,0);
    FUN_004ac2f0(0x10,&local_10,0);
  }
LAB_00527b76:
  FUN_00529a30(param_1);
  return;
}

