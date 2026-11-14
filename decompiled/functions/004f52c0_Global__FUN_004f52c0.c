// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004f52c0
// entry: 004f52c0  size: 102


undefined4 FUN_004f52c0(undefined4 param_1,char *param_2,undefined4 param_3,char param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_4 == '\0') {
    if ((*param_2 == ']') || (iVar1 = FUN_004f9b40(param_2), iVar1 != 0)) {
      return 1;
    }
  }
  else if (param_4 == '\x01') {
    if (*param_2 == '[') {
      return 1;
    }
  }
  else if (param_4 == '\x02') {
    if (*param_2 != ')') {
      return 1;
    }
    FUN_004fe330(param_2,param_1);
    return 1;
  }
  uVar2 = FUN_004f58f0(2,param_3);
  return uVar2;
}

