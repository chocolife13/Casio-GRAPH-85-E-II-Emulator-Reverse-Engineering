// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004a87c0
// entry: 004a87c0  size: 351


void FUN_004a87c0(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *local_48;
  undefined1 local_44 [4];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 local_30 [20];
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c;
  undefined1 local_b;
  undefined1 local_a;
  undefined1 local_9;
  
  uVar1 = 0;
  if (DAT_00585a9c != -1) {
    local_48 = &DAT_00585a9c;
LAB_004a87df:
    do {
      local_40 = 0;
      local_3c = 0;
      local_38 = 0x7f;
      local_34 = 0x3f;
      FUN_004143b0(&local_40);
      FUN_004a8770(*local_48,local_30);
      FUN_005232d0(0x12,2);
      FUN_005233e0(local_30);
      local_18 = local_3c;
      local_1c = local_40;
      local_14 = local_38;
      local_10 = local_34;
      local_c = 2;
      local_b = 5;
      local_a = 1;
      local_9 = 1;
      FUN_00412210(&local_1c);
      iVar2 = 0;
      iVar4 = 0xf;
      do {
        FUN_004125f0(iVar2,0,iVar2,0x38);
        iVar2 = iVar2 + 7;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      iVar2 = 0;
      do {
        FUN_004125f0(0,iVar2,0x62,iVar2);
        iVar2 = iVar2 + 7;
      } while (iVar2 < 0x39);
      iVar2 = 2;
      for (; iVar4 = 2, (int)uVar1 < 0x10; uVar1 = uVar1 + 1) {
        uVar3 = 0;
        do {
          FUN_00523960(iVar4,iVar2,(*local_48 << 4 | uVar3) << 4 | uVar1,0x11);
          iVar4 = iVar4 + 7;
          uVar3 = uVar3 + 1;
        } while ((int)uVar3 < 0xe);
        iVar2 = iVar2 + 7;
        if (uVar1 == 7) {
          uVar1 = 8;
          FUN_00526620(local_44);
          goto LAB_004a87df;
        }
      }
      FUN_00526620(local_44);
      local_48 = local_48 + 1;
      uVar1 = 0;
    } while (*local_48 != -1);
  }
  return;
}

