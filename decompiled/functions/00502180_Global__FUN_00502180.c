// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00502180
// entry: 00502180  size: 362


undefined4 FUN_00502180(void)

{
  char cVar1;
  int iVar2;
  int local_410;
  undefined4 local_40c;
  undefined2 local_408;
  undefined1 local_400 [1024];
  
  FUN_004ab670(&local_40c);
  iVar2 = FUN_004ab6a0(s__PROG_005bec48);
  if (iVar2 != 0) {
    return 0;
  }
  iVar2 = FUN_004ab6a0(s__RUNMAT_005be2d4);
  if (iVar2 != 0) {
    cVar1 = FUN_00526090(0x53);
    if (cVar1 == '\x01') {
      return 0;
    }
    cVar1 = FUN_00526090(0x17);
    if (cVar1 != '\0') {
      return 0;
    }
  }
  iVar2 = FUN_004ab6a0(&DAT_005bfd08);
  if ((iVar2 != 0) && (iVar2 = FUN_0055b770(DAT_005d6d84,s_TEXT1_005bfd50), iVar2 == 0)) {
    local_40c = DAT_005c2e70;
    local_408 = DAT_005c2e74;
  }
  FUN_00502110(local_400);
  FUN_0052d2d0(&local_40c,&local_410);
  FUN_00502140(local_400);
  if (local_410 == 0) {
    return 0;
  }
  FUN_00515dd0();
  iVar2 = FUN_004ab6a0(s__GRAPH_005be2ac);
  if ((iVar2 == 0) && (iVar2 = FUN_004ab6a0(s__TABLE_005be208), iVar2 == 0)) {
    iVar2 = FUN_004ab6a0(s__RECUR_005be280);
    if (iVar2 != 0) {
      FUN_00518200();
      return 1;
    }
    iVar2 = FUN_004ab6a0(s__CONICS_005be270);
    if (iVar2 != 0) {
      return 1;
    }
    iVar2 = FUN_0055b770(&local_40c,s__STAT_005be2bc);
    if (iVar2 == 0) {
      return 1;
    }
    iVar2 = FUN_004ab6a0(s__RUNMAT_005be2d4);
    if (iVar2 == 0) {
      return 1;
    }
    FUN_00518200();
  }
  FUN_00518160();
  return 1;
}

