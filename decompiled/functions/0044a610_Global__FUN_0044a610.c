// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0044a610
// entry: 0044a610  size: 338


void FUN_0044a610(int param_1,int param_2)

{
  char cVar1;
  short sVar2;
  int iVar3;
  undefined1 uVar4;
  undefined1 *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  char *pcVar11;
  undefined1 local_24 [36];
  
  iVar3 = param_2;
  if (param_1 != 0) {
    uVar8 = param_1 * 7;
    *(undefined4 *)(param_2 + 0x208) = 1;
    pcVar11 = (char *)(param_2 + -0x2a + param_1 * 0x2a);
    while( true ) {
      cVar1 = *pcVar11;
      if (cVar1 == '\f') {
        return;
      }
      if (cVar1 == '\r') break;
      iVar9 = FUN_004b6ab0(CONCAT31((int3)(uVar8 >> 8),cVar1));
      if (iVar9 != 0) {
        pcVar11 = pcVar11 + 1;
      }
      uVar8 = *(int *)(iVar3 + 0x208) + 1;
      pcVar11 = pcVar11 + 1;
      *(uint *)(iVar3 + 0x208) = uVar8;
      if (0x14 < uVar8) {
        return;
      }
    }
    return;
  }
  iVar9 = 0;
  iVar7 = *(int *)(param_2 + 0x200);
  do {
    iVar10 = iVar7 + -1;
    if (iVar10 < 0) goto LAB_0044a6e1;
    param_2._2_2_ = (ushort)((uint)param_2 >> 0x10);
    if (iVar10 < 1) {
      param_2 = (uint)CONCAT21(param_2._2_2_,*(undefined1 *)(*(int *)(iVar3 + 0x1fc) + iVar10)) << 8
      ;
    }
    else {
      puVar5 = (undefined1 *)(*(int *)(iVar3 + 0x1fc) + iVar10);
      param_2._0_2_ = CONCAT11(*puVar5,puVar5[-1]);
    }
    iVar6 = FUN_004b73a0((int)&param_2 + 1);
    if (iVar6 == 0) {
      uVar4 = param_2._1_1_;
      param_2 = (uint)param_2._2_2_ << 0x10;
      param_2 = CONCAT31(param_2._1_3_,uVar4);
    }
    else {
      puVar5 = (undefined1 *)(*(int *)(iVar3 + 0x1fc) + iVar10);
      iVar10 = iVar7 + -2;
      uVar4 = *puVar5;
      param_2 = CONCAT31(CONCAT21(param_2._2_2_,puVar5[-1]),uVar4);
    }
    sVar2 = CONCAT11(param_2._1_1_,uVar4);
    FUN_004b79f0(sVar2,local_24);
    iVar7 = FUN_004b6bd0(local_24);
    iVar9 = iVar9 + iVar7;
    iVar7 = iVar10;
  } while (((sVar2 != 0xd) && (sVar2 != 0xc)) || (iVar9 == 1));
  iVar9 = iVar9 + -1;
LAB_0044a6e1:
  *(uint *)(iVar3 + 0x208) = iVar9 + ((iVar9 - 1U) / 0x15) * -0x15;
  return;
}

