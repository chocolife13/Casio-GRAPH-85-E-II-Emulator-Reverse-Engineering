// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00535170
// entry: 00535170  size: 116


bool __thiscall FUN_00535170(undefined4 param_1,char *param_2)

{
  char cVar1;
  
  if ((*param_2 != '\x1b') && (*param_2 != '\x1e')) {
    return false;
  }
  param_2 = (char *)FUN_004b7780(DAT_005d5720,param_2,param_1);
  if (*param_2 == '\x1b') {
    param_2 = (char *)FUN_004b7780(DAT_005d5720,param_2,param_1);
  }
  cVar1 = FUN_00535f50(&param_2,&stack0xffffffff,&stack0xfffffffe);
  if (cVar1 == '\0') {
    return false;
  }
  cVar1 = FUN_00535150(*param_2);
  return cVar1 != '\0';
}

