// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0048e060
// entry: 0048e060  size: 123


int FUN_0048e060(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                undefined4 param_5,int param_6)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = param_5;
  while ((iVar2 = FUN_00524460(param_1,param_2,param_3,param_4,uVar1), iVar2 == 0 && (param_6 == 1))
        ) {
    iVar2 = FUN_004910d0(*param_4,param_4[1],param_4[2],1,9999,&param_5);
    if (iVar2 == 0) {
      return 0;
    }
    FUN_0052b240(8);
    param_1 = 0;
    param_2 = 0x7545;
  }
  return iVar2;
}

