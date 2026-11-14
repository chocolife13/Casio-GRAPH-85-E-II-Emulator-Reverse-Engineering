// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00532860
// entry: 00532860  size: 92


void FUN_00532860(int param_1,int param_2,char param_3)

{
  char cVar1;
  
  if ((DAT_005d5744._3_1_ != '\0') && (DAT_005d5740 != '\0')) {
    param_3 = (char)((uint)param_1 >> 0x18) + param_3;
    cVar1 = (param_3 - (char)((uint)param_1 >> 0x10)) + '\x02';
    FUN_005324d0(param_2 + 3,cVar1,param_3);
    FUN_005324d0(param_1 + -6 + param_2 + 3,cVar1,param_3);
  }
  return;
}

