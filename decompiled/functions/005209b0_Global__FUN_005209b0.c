// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005209b0
// entry: 005209b0  size: 247


undefined4 FUN_005209b0(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined1 local_4 [4];
  
  iVar1 = param_2;
  FUN_00528a20(*(undefined1 *)(param_2 + 0x8e4),&param_2,local_4);
  if (param_2 < 0xff) {
    iVar2 = FUN_00528e60(*(undefined1 *)(iVar1 + 0x8e4),0,1);
    if (iVar2 != 0) {
      FUN_0052b240(4);
      return 0;
    }
    FUN_00528a20(*(undefined1 *)(iVar1 + 0x8e4),&param_2,local_4);
    FUN_0051e2a0(*(undefined4 *)(iVar1 + 0x8dc));
    iVar2 = FUN_00509c60(param_1,iVar1,param_2);
    if (iVar2 != 0) {
      FUN_0052b240(iVar2);
      return 0xfffffff5;
    }
    if (param_2 < 5) {
      *(undefined4 *)(iVar1 + 0x8e8) = 1;
      *(int *)(iVar1 + 0x8f4) = param_2;
    }
    else {
      *(undefined4 *)(iVar1 + 0x8f4) = 4;
      *(int *)(iVar1 + 0x8e8) = param_2 + -3;
    }
    *(undefined4 *)(iVar1 + 0x8f0) = 1;
    *(undefined4 *)(iVar1 + 0x8ec) = 1;
    FUN_0050a800(iVar1,2);
    FUN_00526450(1);
  }
  return 0;
}

