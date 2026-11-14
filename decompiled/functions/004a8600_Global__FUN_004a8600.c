// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004a8600
// entry: 004a8600  size: 296


void FUN_004a8600(void)

{
  uint *puVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  byte *pbVar8;
  bool bVar9;
  byte local_1e;
  byte local_1d;
  uint local_1c;
  byte local_18;
  undefined3 uStack_17;
  undefined1 local_14 [4];
  undefined1 local_10 [16];
  
  FUN_00414240();
  iVar6 = 0;
  if (DAT_00585a7c != -1) {
    pbVar8 = (byte *)&DAT_00585a7c;
    do {
      local_1e = *pbVar8;
      local_1c = 0;
      do {
        iVar5 = 0;
        do {
          bVar2 = (byte)iVar5 | (byte)local_1c;
          iVar7 = 1;
          _local_18 = CONCAT31(uStack_17,bVar2);
          puVar1 = &DAT_00585a80;
          do {
            if ((uint)bVar2 == *puVar1) {
              if (iVar7 < 6) goto LAB_004a86a1;
              break;
            }
            puVar1 = puVar1 + 1;
            iVar7 = iVar7 + 1;
          } while ((int)puVar1 < 0x585a91);
          if (iVar6 == 0) {
            local_1e = bVar2;
            bVar2 = local_1d;
          }
          local_1d = bVar2;
          uVar3 = local_1c & 0x80000007;
          if ((int)uVar3 < 0) {
            uVar3 = (uVar3 - 1 | 0xfffffff8) + 1;
          }
          FUN_005232d0((iVar5 >> 4) + 1,uVar3 + 1);
          FUN_00523420(&local_1e);
LAB_004a86a1:
          iVar5 = iVar5 + 0x10;
        } while (iVar5 < 0xf1);
        uVar3 = local_1c + 1;
        uVar4 = uVar3 & 0x80000007;
        bVar9 = uVar4 == 0;
        if ((int)uVar4 < 0) {
          bVar9 = (uVar4 - 1 | 0xfffffff8) == 0xffffffff;
        }
        if (bVar9) {
          FUN_004a8770(*(undefined4 *)pbVar8,local_10);
          FUN_005232d0(0x12,2);
          FUN_005233e0(local_10);
          FUN_00526620(local_14);
          FUN_00414240();
        }
        local_1c = uVar3;
      } while ((int)uVar3 < 0x10);
      FUN_00414240();
      iVar6 = iVar6 + 1;
      pbVar8 = (byte *)(&DAT_00585a7c + iVar6);
    } while ((&DAT_00585a7c)[iVar6] != -1);
  }
  return;
}

