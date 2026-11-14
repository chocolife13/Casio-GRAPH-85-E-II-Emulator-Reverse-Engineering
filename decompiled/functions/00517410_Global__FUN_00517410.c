// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00517410
// entry: 00517410  size: 52


uint FUN_00517410(undefined4 param_1,uint param_2)

{
  char cVar1;
  
  cVar1 = FUN_004ad2a0(param_1,param_2,&param_1);
  if (cVar1 != '\0') {
    return 0;
  }
  FUN_004ad3f0(4,1,&param_2);
  return param_2 & 0xff;
}

