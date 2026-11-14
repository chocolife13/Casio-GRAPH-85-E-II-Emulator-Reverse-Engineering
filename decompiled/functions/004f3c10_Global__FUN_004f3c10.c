// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004f3c10
// entry: 004f3c10  size: 41


void FUN_004f3c10(undefined4 param_1,char *param_2)

{
  int iVar1;
  
  do {
    FUN_004fe330(param_2,param_1);
    iVar1 = FUN_004f9b40(param_2);
  } while (iVar1 == 0);
  if (*param_2 == '\f') {
    *param_2 = ':';
  }
  return;
}

