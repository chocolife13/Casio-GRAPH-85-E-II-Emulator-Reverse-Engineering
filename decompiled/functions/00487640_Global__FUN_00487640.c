// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00487640
// entry: 00487640  size: 155


int FUN_00487640(undefined4 param_1,undefined4 param_2,int param_3,int param_4,int param_5,
                undefined4 param_6)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = param_4;
  if (param_5 == 0) {
    param_5 = 0;
    if (0 < param_4) {
      while (iVar1 = FUN_00487230(param_1,param_2,param_3,1,0,param_6), iVar1 != 0) {
        param_5 = param_5 + 1;
        if (param_4 <= param_5) {
          return iVar1;
        }
      }
    }
  }
  else if (0 < param_4) {
    while (iVar1 = FUN_00487230(param_1,param_2,iVar2 + param_3,1,param_5,param_6), iVar1 != 0) {
      iVar2 = iVar2 + 1;
      if (param_4 <= iVar2) {
        return iVar1;
      }
    }
  }
  return iVar1;
}

