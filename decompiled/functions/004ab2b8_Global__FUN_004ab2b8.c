// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004ab2b8
// entry: 004ab2b8  size: 199


undefined4 FUN_004ab2b8(void)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  
  iVar2 = FUN_0049b670();
  if (iVar2 != 0) {
    puVar3 = (undefined4 *)FUN_004138b0();
    puVar4 = (undefined4 *)&stack0x00000010;
    for (iVar2 = 0x100; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    FUN_004ab670(&stack0x00000004);
    cVar1 = FUN_004ad350(&DAT_005bfd08,s_EDIT_PAC_005c0638,&stack0x00000000);
    if (cVar1 == '\0') {
      FUN_004ab470();
      FUN_004ab650(&stack0x00000004);
    }
    iVar2 = FUN_004aeef0(0x4000,DAT_005d6db8);
    if (iVar2 != 0) {
      puVar4 = (undefined4 *)FUN_004138b0();
      puVar3 = (undefined4 *)&stack0x00000010;
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

