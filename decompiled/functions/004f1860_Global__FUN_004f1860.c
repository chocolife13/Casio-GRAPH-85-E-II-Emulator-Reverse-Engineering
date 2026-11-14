// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004f1860
// entry: 004f1860  size: 59


void FUN_004f1860(undefined4 param_1,char *param_2)

{
  char cVar1;
  
  FUN_004fe330(param_2,param_1);
  cVar1 = *param_2;
  while ((cVar1 != '\"' && (cVar1 != '\0'))) {
    FUN_004fe330(param_2,param_1);
    cVar1 = *param_2;
  }
  FUN_004fe330(param_2,param_1);
  return;
}

