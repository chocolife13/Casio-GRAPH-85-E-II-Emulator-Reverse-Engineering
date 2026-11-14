// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00500f00
// entry: 00500f00  size: 90


undefined4 FUN_00500f00(undefined4 param_1,char *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_004fe330(param_2,param_1);
  iVar1 = FUN_004f9e20(param_2);
  if (iVar1 == 0) {
    return 2;
  }
  iVar1 = FUN_00500090(param_1,param_2,param_3);
  if (iVar1 == 0) {
    return 0;
  }
  if (*param_2 == -0x74) {
    return 1;
  }
  uVar2 = FUN_00501f30(param_3);
  return uVar2;
}

