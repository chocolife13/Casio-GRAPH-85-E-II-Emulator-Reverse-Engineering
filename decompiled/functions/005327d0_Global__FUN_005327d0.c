// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005327d0
// entry: 005327d0  size: 136


void FUN_005327d0(int param_1,int param_2,char param_3)

{
  char cVar1;
  
  if ((DAT_005d5744._3_1_ != '\0') && (DAT_005d5740 != '\0')) {
    param_3 = (char)((uint)param_1 >> 0x18) + param_3;
    cVar1 = (param_3 - (char)((uint)param_1 >> 0x10)) + '\x02';
    FUN_00532420(param_2 + 4,param_1 + -1 + param_2,cVar1);
    FUN_005322b0(param_2 + 4,param_2 + 3,cVar1,param_3);
    FUN_00532590(param_2 + 0x10002,param_3 + -1);
    FUN_00532590(param_2 + 0x10001,param_3 + -2);
  }
  return;
}

