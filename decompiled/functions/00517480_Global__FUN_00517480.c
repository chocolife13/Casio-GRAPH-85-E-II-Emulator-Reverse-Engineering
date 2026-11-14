// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00517480
// entry: 00517480  size: 63


bool FUN_00517480(undefined4 param_1,undefined4 param_2,byte param_3)

{
  char cVar1;
  
  cVar1 = FUN_004ad2a0(param_1,param_2,&param_1);
  if (cVar1 != '\0') {
    return false;
  }
  FUN_004ad3f0(3,1,&param_2);
  return ((byte)param_2 & param_3) == param_3;
}

