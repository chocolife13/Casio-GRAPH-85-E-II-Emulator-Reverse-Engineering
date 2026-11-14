// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0044a900
// entry: 0044a900  size: 511


uint FUN_0044a900(undefined4 param_1,int param_2)

{
  uint uVar1;
  short sVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int local_28;
  undefined1 local_24 [36];
  
  iVar3 = param_2;
  local_28 = 0;
  *(undefined4 *)(param_2 + 0x23c) = 0;
  iVar5 = *(int *)(param_2 + 0x200);
  if (iVar5 == 1 || iVar5 == 2) {
    if (iVar5 == 1) {
      return 1;
    }
    param_2 = (uint)CONCAT21(param_2._2_2_,*(undefined1 *)(*(int *)(param_2 + 0x1fc) + -2 + iVar5))
              << 8;
  }
  else {
    param_2 = CONCAT22(param_2._2_2_,*(undefined2 *)(iVar5 + *(int *)(param_2 + 0x1fc) + -3));
  }
  iVar5 = FUN_004b73a0((int)&param_2 + 1);
  if (iVar5 == 0) {
    bVar4 = param_2._1_1_;
    param_2._0_2_ = (ushort)param_2._1_1_;
    iVar7 = *(int *)(iVar3 + 0x200) + -1;
  }
  else {
    iVar5 = *(int *)(iVar3 + 0x1fc) + *(int *)(iVar3 + 0x200);
    iVar7 = *(int *)(iVar3 + 0x200) + -2;
    bVar4 = *(byte *)(iVar5 + -2);
    param_2 = CONCAT31(CONCAT21(param_2._2_2_,*(undefined1 *)(iVar5 + -3)),bVar4);
  }
  *(int *)(iVar3 + 0x200) = iVar7;
  sVar2 = CONCAT11(param_2._1_1_,bVar4);
  FUN_004b79f0(sVar2,local_24);
  uVar6 = FUN_004b6bd0(local_24);
  uVar1 = *(uint *)(iVar3 + 0x208);
  if (((uVar6 < uVar1) && (sVar2 != 0xd)) && (sVar2 != 0xc)) {
    *(uint *)(iVar3 + 0x208) = uVar1 - uVar6;
    return uVar6;
  }
  iVar5 = *(int *)(iVar3 + 0x20c) + -1;
  *(int *)(iVar3 + 0x20c) = iVar5;
  if (iVar5 != 0) {
    FUN_0044a610(iVar5,iVar3);
    iVar5 = *(int *)(iVar3 + 0x208) - (uVar6 - uVar1);
    *(int *)(iVar3 + 0x208) = iVar5;
    if ((sVar2 == 0xd) || (sVar2 == 0xc)) {
      local_28 = 0x15 - iVar5;
    }
  }
  if (*(int *)(iVar3 + 0x20c) == 0) {
    iVar5 = *(int *)(iVar3 + 0x1f8) + -1;
    *(undefined4 *)(iVar3 + 0x23c) = 1;
    *(undefined4 *)(iVar3 + 0x20c) = 1;
    *(int *)(iVar3 + 0x1f8) = iVar5;
    if (iVar5 == 0) {
      *(undefined4 *)(iVar3 + 0x208) = 1;
      *(undefined4 *)(iVar3 + 0x1f8) = 1;
      return uVar6;
    }
    if (*(int *)(iVar3 + 0x214) == 1) {
      *(int *)(iVar3 + 0x220) = *(int *)(iVar3 + 0x220) + 1;
    }
    if ((sVar2 != 0xd) && (sVar2 != 0xc)) {
      *(uint *)(iVar3 + 0x208) = *(int *)(iVar3 + 0x208) + (0x15 - uVar6);
      return uVar6;
    }
    FUN_0044a610(0,iVar3);
    local_28 = 0x15 - *(int *)(iVar3 + 0x208);
  }
  return local_28 + uVar6;
}

