// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004845f0
// entry: 004845f0  size: 159


int FUN_004845f0(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined1 local_48 [24];
  undefined1 local_30 [24];
  undefined1 local_18 [24];
  
  iVar1 = FUN_00483d60(param_1,local_30);
  if ((iVar1 == 0) && (iVar1 = FUN_00483d60(param_2,local_48), iVar1 == 0)) {
    if (param_3 == 0) {
      iVar2 = FUN_004c5970(local_30,local_48,param_4);
    }
    else {
      iVar1 = FUN_00483d60(param_3,local_18);
      if (iVar1 != 0) {
        return iVar1;
      }
      iVar2 = FUN_004c5ac0(local_30,local_48,local_18,param_4);
      iVar1 = 0;
    }
    if (iVar2 == 0) {
      iVar1 = FUN_004e4020(param_4);
      return iVar1;
    }
  }
  return iVar1;
}

