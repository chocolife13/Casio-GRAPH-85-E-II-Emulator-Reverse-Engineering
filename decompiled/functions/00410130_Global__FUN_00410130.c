// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00410130
// entry: 00410130  size: 53


undefined4 FUN_00410130(undefined1 param_1,undefined4 *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = (param_3 - (int)param_2) + 1;
  for (uVar2 = uVar1 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    *param_2 = CONCAT22(CONCAT11(param_1,param_1),CONCAT11(param_1,param_1));
    param_2 = param_2 + 1;
  }
  for (uVar1 = uVar1 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined1 *)param_2 = param_1;
    param_2 = (undefined4 *)((int)param_2 + 1);
  }
  return 0;
}

