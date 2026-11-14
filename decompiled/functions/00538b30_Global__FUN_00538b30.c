// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00538b30
// entry: 00538b30  size: 466


void FUN_00538b30(void)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined *local_8;
  int local_4;
  
  local_4 = 1;
  iVar4 = 0;
  do {
    iVar2 = FUN_00538700();
    if (iVar2 < 0) {
      iVar2 = FUN_005384a0();
    }
    if ((iVar2 < 100) || (0x8c < iVar2)) {
      if ((0x8c < iVar2) && (iVar2 < 0xc0)) {
        iVar2 = *(int *)(&DAT_005d5d4c + iVar2 * 4);
        goto LAB_00538b69;
      }
      if ((0xbf < iVar2) && (iVar2 < 0xd5)) {
        if (*(short *)(*(int *)(&DAT_005d5820 + iVar2 * 4) + 2 + iVar4 * 8) == 10) {
          return;
        }
        sVar1 = *(short *)(*(int *)(&DAT_005d5820 + iVar2 * 4) + iVar4 * 8);
        goto LAB_00538b6d;
      }
      if ((0xd4 < iVar2) && (iVar2 < 0xea)) {
        if (*(short *)(*(int *)(&DAT_005d542c + iVar2 * 4) + 2 + iVar4 * 8) == 10) {
          return;
        }
        sVar1 = *(short *)(*(int *)(&DAT_005d542c + iVar2 * 4) + iVar4 * 8);
        if (sVar1 < 0) {
          iVar2 = -1 - *(short *)(*(int *)(&DAT_005d57cc + iVar2 * 4) + iVar4 * 8);
        }
        else {
          iVar2 = (int)sVar1;
        }
        goto LAB_00538cb9;
      }
      if ((0xe9 < iVar2) && (iVar2 < 0xed)) {
        iVar2 = *(int *)(&DAT_005d53c8 + iVar2 * 4);
LAB_00538c4e:
        if (*(short *)(iVar2 + 2 + iVar4 * 8) == 10) {
          return;
        }
        sVar1 = *(short *)(iVar2 + iVar4 * 8);
        if (sVar1 < 0) {
          iVar2 = -1 - sVar1;
        }
        else {
          iVar2 = (int)sVar1;
        }
        goto LAB_00538cb9;
      }
      if ((0xec < iVar2) && (iVar2 < 0xf0)) {
        iVar2 = *(int *)(&DAT_005d54b4 + iVar2 * 4);
        goto LAB_00538c4e;
      }
      if ((&DAT_005d6060)[iVar2] == 0) {
        sVar1 = 0;
        local_8 = (undefined *)0x0;
      }
      else {
        sVar1 = *(short *)((&DAT_005d6060)[iVar2] + iVar4 * 8);
      }
      iVar2 = (int)sVar1;
      if (-1 < iVar2) goto LAB_00538cb9;
      local_8 = &DAT_005d6260 + (iVar2 * 3 + 3) * -8;
      iVar3 = 1;
    }
    else {
      iVar2 = *(int *)(&DAT_005d58f0 + iVar2 * 4);
LAB_00538b69:
      sVar1 = *(short *)(iVar2 + iVar4 * 8);
LAB_00538b6d:
      if (sVar1 < 0) {
        iVar2 = -1 - sVar1;
      }
      else {
        iVar2 = (int)sVar1;
      }
LAB_00538cb9:
      iVar3 = FUN_00543d90(iVar2,&local_8);
    }
    if (iVar2 == 0x4000) {
      local_4 = 0;
    }
    if (((iVar3 != 0) && (DAT_005c4220 == '\x01')) && (local_4 == 1)) {
      FUN_00538aa0(iVar4,local_8);
    }
    iVar4 = iVar4 + 1;
    if (5 < iVar4) {
      return;
    }
  } while( true );
}

