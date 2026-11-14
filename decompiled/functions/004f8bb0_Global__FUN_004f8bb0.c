// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004f8bb0
// entry: 004f8bb0  size: 401


undefined4 FUN_004f8bb0(int param_1,byte *param_2,undefined4 param_3)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar4 = param_3;
  pbVar1 = param_2;
  iVar3 = param_1;
  if (param_2[1] != 0x11) {
    iVar3 = FUN_00501ca0(param_1,param_2,param_3,1,0x8300);
    if (iVar3 == 0) {
      return 0;
    }
    iVar3 = FUN_004e4040(uVar4);
    if (iVar3 == 1) {
      FUN_0052f780(0xc0,uVar4);
      iVar3 = FUN_00414ce0(0,0x1c);
      if (iVar3 != 0) {
        uVar4 = FUN_004f58f0(iVar3,uVar4);
        return uVar4;
      }
    }
    else {
      if (iVar3 != 2) {
        uVar4 = FUN_004f58f0(2);
        return uVar4;
      }
      iVar3 = FUN_00528550(0,0,uVar4);
      if ((iVar3 != 0) || (iVar3 = FUN_00414ce0(1,0), iVar3 != 0)) {
        FUN_004f58f0(iVar3,uVar4);
        return 0;
      }
    }
    return 1;
  }
  FUN_004fe330(param_2,param_1);
  uVar4 = param_3;
  if (*pbVar1 == 0x7f) {
    if (pbVar1[1] == 0x40) {
      FUN_004fe330(pbVar1,iVar3);
      uVar4 = param_3;
      iVar2 = FUN_004f5240(pbVar1,param_3,0);
      if (iVar2 == 0) {
        return 0;
      }
      param_1 = *pbVar1 - 0x40;
      FUN_004fe330(pbVar1,iVar3);
      goto LAB_004f8c67;
    }
    if (pbVar1[1] == 0x51) {
      iVar2 = FUN_004f56b0(iVar3,pbVar1,param_3,&param_1,0x1a);
      if (iVar2 == 0) {
        return 0;
      }
      goto LAB_004f8c67;
    }
  }
  iVar2 = FUN_004f5240(pbVar1,param_3,1);
  if (iVar2 == 0) {
    return 0;
  }
  param_1 = FUN_004ab700(*pbVar1);
  FUN_004fe330(pbVar1,iVar3);
LAB_004f8c67:
  if (*pbVar1 == 0x29) {
    FUN_004fe330(pbVar1,iVar3);
  }
  iVar3 = FUN_004f9b40(pbVar1);
  if (iVar3 != 0) {
    uVar4 = FUN_004f58f0(10,uVar4);
    return uVar4;
  }
  uVar4 = FUN_004f58f0(2,uVar4);
  return uVar4;
}

