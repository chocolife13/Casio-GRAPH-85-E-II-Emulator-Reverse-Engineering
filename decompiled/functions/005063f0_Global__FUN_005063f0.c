// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005063f0
// entry: 005063f0  size: 69


int FUN_005063f0(undefined4 param_1,char *param_2,int param_3)

{
  int iVar1;
  
  iVar1 = FUN_00506370(param_1,param_2,param_3);
  if (iVar1 == 0) {
    if (*param_2 != ',') {
      return 2;
    }
    FUN_004fe330(param_2,param_1);
    iVar1 = FUN_00506370(param_1,param_2,param_3 + 0xc);
  }
  return iVar1;
}

