// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004f8d50
// entry: 004f8d50  size: 445


undefined4 FUN_004f8d50(int param_1,byte *param_2,undefined4 param_3)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  pbVar1 = param_2;
  iVar3 = param_1;
  if (param_2[1] != 0x12) {
    FUN_004fe330(param_2,param_1);
    uVar4 = param_3;
    if ((*pbVar1 == 0x7f) && (pbVar1[1] == 0x51)) {
      uVar5 = 1;
      iVar3 = FUN_004f56b0(iVar3,pbVar1,param_3,&param_1,0x1a);
      if (iVar3 == 0) {
        return 0;
      }
    }
    else {
      uVar5 = 0;
      iVar2 = FUN_004f5240(pbVar1,param_3,1);
      if (iVar2 == 0) {
        return 0;
      }
      param_1 = FUN_004ab700(*pbVar1);
      FUN_004fe330(pbVar1,iVar3);
    }
    iVar3 = FUN_004f9b40(pbVar1);
    if (iVar3 == 0) {
      uVar4 = FUN_004f58f0(2,uVar4);
      return uVar4;
    }
    iVar3 = FUN_00414d90(uVar5,param_1);
    if (iVar3 != 0) {
      uVar4 = FUN_004f58f0(iVar3,uVar4);
      return uVar4;
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
      goto LAB_004f8e1b;
    }
    if (pbVar1[1] != 0x51) goto LAB_004f8dc1;
    uVar5 = 0x1a;
  }
  else {
LAB_004f8dc1:
    if ((*pbVar1 != 0xf7) || (pbVar1[1] != 0x93)) {
      iVar2 = FUN_004f5240(pbVar1,param_3,1);
      if (iVar2 == 0) {
        return 0;
      }
      param_1 = FUN_004ab700(*pbVar1);
      FUN_004fe330(pbVar1,iVar3);
      goto LAB_004f8e1b;
    }
    uVar5 = 0x14;
  }
  iVar2 = FUN_004f56b0(iVar3,pbVar1,param_3,&param_1,uVar5);
  if (iVar2 == 0) {
    return 0;
  }
LAB_004f8e1b:
  if (*pbVar1 == 0x29) {
    FUN_004fe330(pbVar1,iVar3);
  }
  iVar3 = FUN_004f9b40(pbVar1);
  if (iVar3 == 0) {
    uVar4 = FUN_004f58f0(2,uVar4);
    return uVar4;
  }
  uVar4 = FUN_004f58f0(10,uVar4);
  return uVar4;
}

