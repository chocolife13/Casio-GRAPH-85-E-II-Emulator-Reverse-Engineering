// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0044a560
// entry: 0044a560  size: 55


byte FUN_0044a560(int param_1,char *param_2)

{
  char cVar1;
  
  if (*param_2 == -0x10) {
    return param_2[1];
  }
  cVar1 = FUN_004ac130(s__EQUA_005be254,s_EQSLVLMT_005be248,0xc,param_2,param_1 * 0xc);
  return -(cVar1 != '\0') & 4;
}

