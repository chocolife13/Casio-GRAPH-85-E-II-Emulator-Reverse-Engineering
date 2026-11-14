// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005328c0
// entry: 005328c0  size: 159


void FUN_005328c0(undefined4 param_1,int param_2,char param_3)

{
  char cVar1;
  
  if ((DAT_005d5744._3_1_ != '\0') && (DAT_005d5740 != '\0')) {
    param_3 = (char)((uint)param_1 >> 0x18) + param_3;
    cVar1 = (param_3 + -1) - (char)((uint)param_1 >> 0x10);
    FUN_005324d0(param_2 + 2,cVar1 + '\x04',param_3 + -1);
    FUN_00532590(param_2 + 3,cVar1 + '\x03');
    FUN_00532590(param_2 + 0x10001,param_3);
    FUN_00532590(param_2 + 4,cVar1 + '\x04');
    FUN_00532590(param_2 + 0x10000,param_3 + -1);
  }
  return;
}

