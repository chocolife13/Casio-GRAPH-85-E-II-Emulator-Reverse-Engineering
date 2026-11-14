// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005144d0
// entry: 005144d0  size: 333


undefined4 __fastcall
FUN_005144d0(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4)

{
  byte bVar1;
  byte *pbVar2;
  undefined4 uVar3;
  int iVar4;
  byte *pbVar5;
  undefined3 uVar7;
  uint uVar6;
  
  pbVar2 = (byte *)*param_3;
  bVar1 = *pbVar2;
  uVar7 = (undefined3)((uint)param_2 >> 8);
  pbVar5 = pbVar2 + 1;
  *param_3 = pbVar5;
  if ((0x32 < bVar1) && (bVar1 < 0x3a)) {
    bVar1 = *pbVar5;
    *param_3 = pbVar2 + 2;
    if (bVar1 != 0x5b) {
      *param_3 = pbVar2 + 1;
      param_3 = (undefined4 *)(CONCAT31(param_3._1_3_,*pbVar2) & 0xffffff0f);
      uVar3 = FUN_00514620(param_3,param_4);
      return uVar3;
    }
    uVar3 = FUN_00514670(param_3,param_4);
    return uVar3;
  }
  if (bVar1 == 0x31) {
    bVar1 = *pbVar5;
    *param_3 = pbVar2 + 2;
    if (bVar1 != 0x5b) {
      if ((0x2f < bVar1) && (bVar1 < 0x3a)) {
        uVar6 = CONCAT31(uVar7,bVar1) & 0xffffff0f;
        uVar3 = FUN_00514620(CONCAT31((int3)(uVar6 >> 8),(char)uVar6 + '\n'),param_4);
        return uVar3;
      }
      *param_3 = pbVar2 + 1;
      uVar3 = FUN_00514620(1,param_4);
      return uVar3;
    }
  }
  else {
    if (bVar1 != 0x32) {
      if (bVar1 == 0xc0) {
        bVar1 = *pbVar5;
        *param_3 = pbVar2 + 2;
        if (bVar1 == 0x5b) goto LAB_0051457f;
        *param_3 = pbVar2 + 1;
        iVar4 = FUN_00527440(0,0);
        if (iVar4 == 0) {
          return 9;
        }
        if (iVar4 < 0x100) {
          iVar4 = FUN_00513f30(param_4,iVar4);
          if (iVar4 != 0) {
            return 0;
          }
          return 9;
        }
      }
      return 2;
    }
    bVar1 = *pbVar5;
    *param_3 = pbVar2 + 2;
    if (bVar1 != 0x5b) {
      if ((0x2f < bVar1) && (bVar1 < 0x37)) {
        uVar6 = CONCAT31(uVar7,bVar1) & 0xffffff0f;
        uVar3 = FUN_00514620(CONCAT31((int3)(uVar6 >> 8),(char)uVar6 + '\x14'),param_4);
        return uVar3;
      }
      *param_3 = pbVar2 + 1;
      uVar3 = FUN_00514620(2,param_4);
      return uVar3;
    }
  }
LAB_0051457f:
  uVar3 = FUN_00514670(param_3,param_4);
  return uVar3;
}

