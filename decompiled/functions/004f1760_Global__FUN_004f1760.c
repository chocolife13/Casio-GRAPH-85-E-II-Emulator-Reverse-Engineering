// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004f1760
// entry: 004f1760  size: 244


void FUN_004f1760(undefined4 param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  
  iVar2 = 0;
  cVar1 = *param_2;
  if (((cVar1 == -9) && (param_2[1] == '\x01')) || ((cVar1 == -9 && (param_2[1] == '\x02')))) {
    FUN_004fe330(param_2,param_1);
    cVar1 = *param_2;
    iVar2 = 2;
    if (cVar1 == '\"') {
      iVar2 = 1;
    }
  }
  if ((cVar1 == '\x7f') && ((param_2[1] == '6' || (param_2[1] == '4')))) {
    FUN_004fe330(param_2,param_1);
    iVar2 = 1;
  }
  if ((*param_2 == -9) && ((param_2[1] == -0x5b || (param_2[1] == '\x10')))) {
    FUN_004fe330(param_2,param_1);
  }
  else if (iVar2 != 1) {
    if (iVar2 != 0) {
      return;
    }
    iVar2 = FUN_004f9b40(param_2);
    while (iVar2 == 0) {
      FUN_004fe330(param_2,param_1);
      iVar2 = FUN_004f9b40(param_2);
    }
    FUN_004fe330(param_2,param_1);
    return;
  }
  iVar2 = FUN_004f9b40(param_2);
  while (iVar2 == 0) {
    if (*param_2 == '\"') {
      return;
    }
    FUN_004fe330(param_2,param_1);
    iVar2 = FUN_004f9b40(param_2);
  }
  if (*param_2 == '\"') {
    return;
  }
  FUN_004fe330(param_2,param_1);
  return;
}

