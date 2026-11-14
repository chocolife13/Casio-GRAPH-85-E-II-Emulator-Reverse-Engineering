// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004f3c70
// entry: 004f3c70  size: 65


undefined4 FUN_004f3c70(undefined4 param_1,char *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*param_2 == '\0') {
    FUN_00518390(param_1);
    return 0;
  }
  iVar1 = FUN_00518210(param_1,param_2);
  if (iVar1 == 0) {
    uVar2 = FUN_005182c0(param_1,1);
    return uVar2;
  }
  return 4;
}

