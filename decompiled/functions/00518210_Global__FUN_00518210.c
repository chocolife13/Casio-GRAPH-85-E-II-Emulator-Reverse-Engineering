// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00518210
// entry: 00518210  size: 166


undefined4 FUN_00518210(int param_1,char *param_2)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  
  pcVar1 = param_2;
  if (*param_2 != '\0') {
    FUN_00515dd0();
    FUN_00518200();
    cVar2 = FUN_004ad2a0(2,*(undefined4 *)(&DAT_0058c248 + param_1 * 4),&param_2);
    if (cVar2 != '\0') {
      iVar3 = FUN_00517500(2,*(undefined4 *)(&DAT_0058c248 + param_1 * 4),pcVar1,1);
      if (((iVar3 == 0) &&
          (iVar3 = FUN_00517750(2,*(undefined4 *)(&DAT_0058c248 + param_1 * 4),0x904), iVar3 == 0))
         && (iVar3 = FUN_005182c0(param_1,1), iVar3 == 0)) {
        return 0;
      }
      return 4;
    }
    iVar3 = FUN_00517500(2,*(undefined4 *)(&DAT_0058c248 + param_1 * 4),pcVar1,1);
    if (iVar3 != 0) {
      return 4;
    }
  }
  return 0;
}

