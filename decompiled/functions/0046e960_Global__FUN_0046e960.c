// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0046e960
// entry: 0046e960  size: 203


int FUN_0046e960(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 1;
  iVar2 = param_3;
  if (0 < param_2) {
    do {
      iVar1 = FUN_004e4020(iVar2);
      if (iVar1 != 0) {
        FUN_0052b240(3);
        return 3;
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0xc;
    } while (iVar3 <= param_2);
  }
  iVar2 = 0;
  if (param_1 != 0) {
    iVar3 = FUN_005284b0(0,param_1,param_2);
    if (iVar3 == 0) {
      iVar3 = 1;
      if (0 < param_2) {
        do {
          iVar2 = FUN_0047cb50(param_1,iVar3,param_3);
          if (iVar2 != 0) {
            FUN_0047cc00(param_1);
            FUN_0052b240(iVar2);
            return iVar2;
          }
          iVar3 = iVar3 + 1;
          param_3 = param_3 + 0xc;
        } while (iVar3 <= param_2);
        FUN_0052b240(0);
        return 0;
      }
    }
    else {
      iVar2 = 4;
    }
  }
  FUN_0052b240(iVar2);
  return iVar2;
}

