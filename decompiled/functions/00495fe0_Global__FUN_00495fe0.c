// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00495fe0
// entry: 00495fe0  size: 550


undefined4 FUN_00495fe0(char *param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  int local_44;
  undefined2 local_40;
  undefined2 local_3e;
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 local_34 [52];
  
  uVar3 = 0xffffffff;
  DAT_005d6d88 = 0;
  DAT_005d6d90 = 0;
  DAT_005d6d8c = 0;
  DAT_005d6d80 = 0;
  pcVar5 = param_1;
  do {
    pcVar6 = pcVar5;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar6 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar6;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  local_3c = 0;
  local_38 = 0;
  pcVar5 = pcVar6 + -uVar3;
  pcVar6 = DAT_005d6d84;
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar6 = pcVar6 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar6 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar6 = pcVar6 + 1;
  }
  iVar2 = FUN_0055b770(param_1,s_EACT1_005bfd10);
  pcVar5 = DAT_005d6dc0;
  if (iVar2 == 0) {
    *(undefined4 *)DAT_005d6dc0 = DAT_005bfd08;
    *(undefined2 *)(pcVar5 + 4) = DAT_005bfd0c;
  }
  else {
    *(undefined4 *)DAT_005d6dc0 = s__RUNMAT_005be2d4._0_4_;
    *(undefined4 *)(DAT_005d6dc0 + 4) = s__RUNMAT_005be2d4._4_4_;
  }
  DAT_005d6dbc = FUN_00495630();
  if (DAT_005d6dbc == 0) {
    cVar1 = FUN_004abb50(DAT_005d6dc0,DAT_005d6d84,8,&local_3c);
    if ((cVar1 == '%') || (cVar1 == '\0')) {
      if (DAT_005d6dbc != 0) goto LAB_004960bd;
      iVar2 = FUN_0055b770(DAT_005d6d84,s_EACT1_005bfd10);
      if (iVar2 == 0) {
        FUN_00495f40(local_34,DAT_005d6db8);
        local_44 = 0x7000000;
        local_40 = 0x80;
        local_3e = 8;
        iVar2 = FUN_00495b10(DAT_005d6dbc,&local_44,local_34);
        if (iVar2 == 0) goto LAB_004961e4;
      }
      iVar2 = FUN_0055b770(DAT_005d6d84,s_RUN2D1_005be2c4);
      local_44 = (-(uint)(iVar2 != 0) & 0x7e000000) + 0x3000000;
      local_40 = 6;
      local_3e = 8;
      iVar2 = FUN_00495b10(DAT_005d6dbc,&local_44,&DAT_005cd010);
      if (iVar2 != 0) {
        return 0x7593;
      }
    }
LAB_004961e4:
    FUN_0052b240(4);
    return 0x7532;
  }
LAB_004960bd:
  iVar2 = FUN_0055b770(DAT_005d6d84,s_RUN2D1_005be2c4);
  if (iVar2 == 0) {
    return 8;
  }
  iVar2 = FUN_0055b770(DAT_005d6d84,s_EACT1_005bfd10);
  if (iVar2 == 0) {
    FUN_00495f40(local_34,DAT_005d6db8);
    local_44 = 0x7000000;
    local_40 = 0x80;
    local_3e = 8;
    FUN_00496410(0,&local_44,local_34);
  }
  DAT_005d6d80 = 0;
  return 0x17;
}

