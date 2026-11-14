// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0046eac0
// entry: 0046eac0  size: 64


int FUN_0046eac0(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_0046e960(param_1 + param_2,param_3,param_4);
  if ((iVar1 != 0) && (-1 < param_2)) {
    do {
      FUN_0047cc00(param_2 + param_1);
      param_2 = param_2 + -1;
    } while (-1 < param_2);
  }
  return iVar1;
}

