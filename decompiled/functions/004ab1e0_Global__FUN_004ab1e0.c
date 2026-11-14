// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004ab1e0
// entry: 004ab1e0  size: 190


undefined4 FUN_004ab1e0(void)

{
  int iVar1;
  undefined1 local_e [2];
  int local_c;
  undefined1 local_8 [4];
  undefined1 local_4 [4];
  
  FUN_004ad550(local_4,local_8,&DAT_005d6d60);
  FUN_004adeb0(s__REV2_005be1f8,&local_c,local_e);
  DAT_005d6d60 = DAT_005d6d60 + local_c;
  iVar1 = FUN_004aeef0(0x8000,0);
  if (iVar1 != 0) {
    FUN_004ab190(iVar1);
    return 0;
  }
  FUN_004ade30(0x8000);
  FUN_004add50(0);
  DAT_005d6d74 = FUN_004adc20();
  if (DAT_005d6d74 == 0) {
    FUN_0052b240(4);
    iVar1 = FUN_004aef40(0x8000,0);
    if (iVar1 != 0) {
      FUN_004ab190(iVar1);
      return 0;
    }
    FUN_004af060();
    return 0;
  }
  return 1;
}

