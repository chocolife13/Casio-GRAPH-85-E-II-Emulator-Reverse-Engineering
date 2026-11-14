// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0041cb40
// entry: 0041cb40  size: 360


int FUN_0041cb40(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint local_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  local_8 = 0xffffffff;
  uVar4 = 0;
  iVar3 = 1;
  if (0 < (int)(DAT_005d8730 - 1) / 0x7ff + 1) {
    do {
      iVar1 = FUN_00418cd0(iVar3);
      if (iVar1 < 0) {
        return -6;
      }
      FUN_00419650(0);
      FUN_00419220(&local_8,4);
      if ((local_8 & 0xfff0000) != 0x1000000) {
        return -6;
      }
      uVar4 = local_8 & 0xffff;
      FUN_00418f90();
      iVar3 = iVar3 + 1;
    } while (iVar3 <= (int)(DAT_005d8730 - 1) / 0x7ff + 1);
    if (1 < uVar4) {
      return -0xc;
    }
  }
  iVar1 = FUN_0041c350(0xff0000,uVar4 + 1);
  if (-1 < iVar1) {
    local_4 = (&DAT_0057ddf4)[iVar1];
    iVar2 = FUN_00418cd0(iVar3 + -1);
    if (iVar2 < 0) {
      return -6;
    }
    FUN_00419700(4);
    FUN_004193e0(&local_4,4);
    FUN_00418fd0();
    FUN_00418f90();
    iVar3 = FUN_00418cd0(iVar3);
    if (iVar3 < 0) {
      return -6;
    }
    local_8 = uVar4 + 1 | 0x1000000;
    FUN_00419700(0);
    FUN_004193e0(&local_8,4);
    FUN_00418fd0();
    FUN_00418f90();
  }
  return iVar1;
}

