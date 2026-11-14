// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00518320
// entry: 00518320  size: 106


undefined4 FUN_00518320(int param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  undefined1 auStack_4 [4];
  
  FUN_00515dd0();
  FUN_00518200();
  cVar1 = FUN_004ad2a0(2,*(undefined4 *)(&DAT_0058c248 + param_1 * 4),auStack_4);
  if (cVar1 != '\0') {
    iVar2 = FUN_00517750(2,*(undefined4 *)(&DAT_0058c248 + param_1 * 4),0x904);
    if (iVar2 != 0) {
      return 4;
    }
  }
  FUN_005176a0(2,*(undefined4 *)(&DAT_0058c248 + param_1 * 4),param_2);
  return 0;
}

