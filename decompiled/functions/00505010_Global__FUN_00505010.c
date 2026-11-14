// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00505010
// entry: 00505010  size: 128


undefined4 FUN_00505010(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 local_18 [24];
  
  uVar2 = param_2;
  iVar1 = param_1;
  iVar3 = FUN_00528e60(param_2,param_1,1);
  if (iVar3 == 0) {
    FUN_00528a20(uVar2,&param_2,&param_1);
    if (param_1 != 0) {
      do {
        FUN_00528ac0(uVar2,iVar1 + 1,param_1,local_18);
        FUN_00501f70(uVar2,iVar1,param_1,local_18);
        param_1 = param_1 + -1;
      } while (param_1 != 0);
    }
    return 0;
  }
  return 4;
}

