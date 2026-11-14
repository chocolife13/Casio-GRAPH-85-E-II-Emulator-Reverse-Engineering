// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0055c089
// entry: 0055c089  size: 386


undefined4 FUN_0055c089(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  undefined4 *puVar6;
  undefined4 local_10;
  undefined4 local_c;
  
  bVar1 = false;
  if (param_1 == 2) {
    puVar6 = &DAT_005d56c8;
    pcVar5 = DAT_005d56c8;
LAB_0055c10f:
    bVar1 = true;
    FUN_00558590(1);
    iVar2 = param_1;
  }
  else {
    if (((param_1 != 4) && (param_1 != 8)) && (param_1 != 0xb)) {
      if (param_1 == 0xf) {
        puVar6 = &DAT_005d56d4;
        pcVar5 = DAT_005d56d4;
      }
      else if (param_1 == 0x15) {
        puVar6 = &DAT_005d56cc;
        pcVar5 = DAT_005d56cc;
      }
      else {
        if (param_1 != 0x16) {
          return 0xffffffff;
        }
        puVar6 = &DAT_005d56d0;
        pcVar5 = DAT_005d56d0;
      }
      goto LAB_0055c10f;
    }
    iVar2 = FUN_005582d3();
    iVar4 = FUN_0055c20b(param_1,*(undefined4 *)(iVar2 + 0x50));
    puVar6 = (undefined4 *)(iVar4 + 8);
    pcVar5 = (code *)*puVar6;
  }
  if (pcVar5 == (code *)0x1) {
    if (!bVar1) {
      return 0;
    }
    FUN_005585f1(1);
    return 0;
  }
  if (pcVar5 == (code *)0x0) {
    if (bVar1) {
      FUN_005585f1(1);
    }
                    /* WARNING: Subroutine does not return */
    __exit(3);
  }
  if (((param_1 == 8) || (param_1 == 0xb)) || (param_1 == 4)) {
    local_c = *(undefined4 *)(iVar2 + 0x54);
    *(undefined4 *)(iVar2 + 0x54) = 0;
    if (param_1 == 8) {
      local_10 = *(undefined4 *)(iVar2 + 0x58);
      *(undefined4 *)(iVar2 + 0x58) = 0x8c;
      goto LAB_0055c183;
    }
  }
  else {
LAB_0055c183:
    if (param_1 == 8) {
      if (DAT_005cc768 < DAT_005cc76c + DAT_005cc768) {
        iVar3 = DAT_005cc768 * 0xc;
        iVar4 = DAT_005cc768;
        do {
          iVar3 = iVar3 + 0xc;
          *(undefined4 *)(*(int *)(iVar2 + 0x50) + -4 + iVar3) = 0;
          iVar4 = iVar4 + 1;
        } while (iVar4 < DAT_005cc76c + DAT_005cc768);
      }
      goto LAB_0055c1c1;
    }
  }
  *puVar6 = 0;
LAB_0055c1c1:
  if (bVar1) {
    FUN_005585f1(1);
  }
  if (param_1 == 8) {
    (*pcVar5)(8,*(undefined4 *)(iVar2 + 0x58));
  }
  else {
    (*pcVar5)(param_1);
    if ((param_1 != 0xb) && (param_1 != 4)) {
      return 0;
    }
  }
  *(undefined4 *)(iVar2 + 0x54) = local_c;
  if (param_1 == 8) {
    *(undefined4 *)(iVar2 + 0x58) = local_10;
  }
  return 0;
}

