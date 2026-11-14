// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00514820
// entry: 00514820  size: 288


void FUN_00514820(undefined4 *param_1)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  
  if (((*(byte *)(param_1 + 0x238) & 0x30) == 0x10) &&
     ((*(byte *)((int)param_1 + 0x8e2) & 0xc0) == 0x80)) {
    FUN_00517ee0();
  }
  if ((*(byte *)((int)param_1 + 0x8e2) & 0x80) == 0) {
    puVar7 = param_1;
    for (iVar4 = 0x200; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
  }
  else if ((*(byte *)((int)param_1 + 0x8e2) & 0x40) == 0) {
    uVar5 = 0;
    do {
      iVar4 = (int)(uVar5 + ((int)uVar5 >> 0x1f & 7U)) >> 3;
      uVar6 = uVar5 & 0x80000007;
      if ((int)uVar6 < 0) {
        uVar6 = (uVar6 - 1 | 0xfffffff8) + 1;
      }
      uVar5 = uVar5 + 1;
      *(undefined1 *)(iVar4 * 0x10 + uVar6 + (int)param_1) = 0;
      *(undefined1 *)((iVar4 + 0x40) * 0x10 + uVar6 + (int)param_1) = 0;
    } while ((int)uVar5 < 0x200);
  }
  else {
    uVar5 = 0;
    do {
      iVar4 = uVar5 + ((int)uVar5 >> 0x1f & 7U);
      uVar6 = uVar5 & 0x80000007;
      if ((int)uVar6 < 0) {
        uVar6 = (uVar6 - 1 | 0xfffffff8) + 1;
      }
      uVar5 = uVar5 + 1;
      iVar4 = uVar6 + (iVar4 >> 3) * 0x10;
      *(undefined1 *)((int)param_1 + iVar4 + 8) = 0;
      *(undefined1 *)((int)param_1 + iVar4 + 0x408) = 0;
    } while ((int)uVar5 < 0x200);
    iVar4 = 0x40;
    pbVar3 = (byte *)(param_1 + 2);
    do {
      iVar4 = iVar4 + -1;
      *pbVar3 = *pbVar3 | 0x80;
      pbVar3 = pbVar3 + 0x10;
    } while (iVar4 != 0);
  }
  if (((*(byte *)((int)param_1 + 0x8e2) & 0x80) == 0) && (iVar4 = FUN_00514e90(), iVar4 != 0)) {
    FUN_005166a0(param_1,iVar4);
  }
  bVar1 = FUN_00514ea0();
  bVar2 = FUN_00514f00();
  FUN_004d8470(param_1 + 0x200,bVar1 | bVar2,param_1,*(undefined1 *)((int)param_1 + 0x8e2));
  return;
}

