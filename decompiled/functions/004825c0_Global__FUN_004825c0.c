// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004825c0
// entry: 004825c0  size: 149


int FUN_004825c0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 local_c [12];
  
  iVar1 = FUN_00483e50((int)*(short *)(param_1 + 4),param_2);
  if (iVar1 == 0) {
    FUN_004e7680(param_2,param_2);
    iVar1 = FUN_00483e30((int)*(short *)(param_1 + 4),param_3);
    if (iVar1 == 0) {
      FUN_004e6b80(param_3,param_2,param_3);
      uVar2 = FUN_004e5070(9,local_c,param_3);
      FUN_004e6dd0(param_3,uVar2);
      FUN_004e7a80(param_3,param_3,4);
      uVar2 = FUN_004e5780(local_c);
      iVar3 = FUN_004e71d0(param_3,uVar2);
      if (iVar3 == 1) {
        FUN_004e57a0(param_3);
      }
    }
  }
  return iVar1;
}

