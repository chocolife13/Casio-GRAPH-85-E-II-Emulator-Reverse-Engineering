// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00517390
// entry: 00517390  size: 75


undefined1 * FUN_00517390(undefined4 param_1,uint param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  char cVar2;
  
  cVar2 = FUN_004ad2a0(param_1,param_2,&param_2);
  puVar1 = param_3;
  if (((cVar2 == '\0') && (param_2 < 0x105)) && (param_2 != 4)) {
    FUN_004ad3f0(5,param_2 - 4,param_3);
    return puVar1;
  }
  *param_3 = 0;
  return param_3;
}

