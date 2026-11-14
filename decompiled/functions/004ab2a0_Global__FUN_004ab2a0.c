// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004ab2a0
// entry: 004ab2a0  size: 24


undefined4 FUN_004ab2a0(void)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined1 auStack_410 [4];
  undefined1 auStack_40c [12];
  undefined4 auStack_400 [256];
  
  if (DAT_005d6d74 == 0) {
    return 0;
  }
  iVar2 = FUN_0049b670();
  if (iVar2 != 0) {
    puVar3 = (undefined4 *)FUN_004138b0();
    puVar4 = auStack_400;
    for (iVar2 = 0x100; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    FUN_004ab670(auStack_40c);
    cVar1 = FUN_004ad350(&DAT_005bfd08,s_EDIT_PAC_005c0638,auStack_410);
    if (cVar1 == '\0') {
      FUN_004ab470();
      FUN_004ab650(auStack_40c);
    }
    iVar2 = FUN_004aeef0(0x4000,DAT_005d6db8);
    if (iVar2 != 0) {
      puVar4 = (undefined4 *)FUN_004138b0();
      puVar3 = auStack_400;
      for (iVar5 = 0x100; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      FUN_0052b240(iVar2);
    }
  }
  FUN_004adc40();
  iVar2 = FUN_004aef40(0x8000,0);
  if (iVar2 != 0) {
    FUN_004ab190(iVar2);
    return 0;
  }
  FUN_004af060();
  return 1;
}

