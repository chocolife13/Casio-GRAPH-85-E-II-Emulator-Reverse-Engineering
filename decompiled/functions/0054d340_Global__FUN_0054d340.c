// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0054d340
// entry: 0054d340  size: 111


undefined4 FUN_0054d340(char *param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined1 local_24 [36];
  
  iVar3 = 0;
  if (*param_1 == '\0') {
    return param_2;
  }
  do {
    uVar1 = FUN_004b78f0(param_1);
    FUN_004b79f0(uVar1,local_24);
    iVar2 = FUN_004b6ca0(local_24);
    iVar3 = iVar3 + iVar2;
    if (param_3 <= iVar3) {
      return param_2;
    }
    FUN_004b6e70(param_2,local_24);
    param_1 = (char *)FUN_004b7840(param_1);
  } while (*param_1 != '\0');
  return param_2;
}

