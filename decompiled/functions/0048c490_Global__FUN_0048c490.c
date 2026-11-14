// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0048c490
// entry: 0048c490  size: 298


undefined4 FUN_0048c490(int param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c [12];
  
  FUN_004e57a0(local_c);
  cVar1 = FUN_00526090(0x27);
  if ((*(byte *)(param_1 + 0x90) & 0x40) == 0) {
    FUN_004e7730(param_1 + 0xc,&local_18);
    if (cVar1 == '\0') {
      FUN_004e6a00(&local_18,local_c,&local_18);
    }
    FUN_0048b4a0(param_1 + 0x18,&local_18,&local_18);
    FUN_004e7730(&local_18,&local_18);
    FUN_004e6dd0(&local_18,param_1 + 0x18,param_2);
  }
  else {
    local_18 = *(undefined4 *)(param_1 + 0xc);
    local_14 = *(undefined4 *)(param_1 + 0x10);
    local_10 = *(undefined4 *)(param_1 + 0x14);
    if (cVar1 == '\0') {
      FUN_004e6a00(&local_18,local_c,&local_18);
    }
    FUN_0048b4a0(param_1 + 0x18,&local_18,&local_18);
    FUN_004e6dd0(&local_18,param_1 + 0x18,param_2);
  }
  if ((*(int *)(param_1 + 0x7c) == 0x18) && (cVar1 == '\0')) {
    if ((*(byte *)(param_1 + 0x90) & 0x40) == 0) {
      FUN_004e6a00(param_2,local_c);
      return param_2;
    }
    FUN_004e6b80(param_2,local_c,param_2);
  }
  return param_2;
}

