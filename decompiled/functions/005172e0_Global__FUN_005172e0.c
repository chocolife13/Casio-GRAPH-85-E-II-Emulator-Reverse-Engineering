// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005172e0
// entry: 005172e0  size: 54


uint FUN_005172e0(undefined4 param_1,uint param_2)

{
  char cVar1;
  
  cVar1 = FUN_004ad2a0(param_1,param_2,&param_1);
  if (cVar1 != '\0') {
    return 0;
  }
  FUN_004ad3f0(1,2,&param_2);
  return param_2 & 0xffff;
}

