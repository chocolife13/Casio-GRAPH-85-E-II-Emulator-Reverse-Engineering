// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0054ef10
// entry: 0054ef10  size: 253


void FUN_0054ef10(undefined4 param_1,short *param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 uVar4;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  undefined2 uVar5;
  undefined4 local_34;
  undefined1 local_30 [24];
  undefined1 local_18 [24];
  
  uVar1 = FUN_004aa010();
  if (uVar1 < 0x1080) {
    FUN_00488900(2);
    FUN_004e5630(4,param_1);
    uVar2 = FUN_00488960((int)*param_2,(int)param_2[1],param_1);
    iVar3 = FUN_00485fc0(uVar2);
    if (iVar3 != 0) {
      FUN_00488980(4,0);
    }
    uVar2 = FUN_00488960((int)*param_2,(int)param_2[1],0x10);
    iVar3 = FUN_00487b80(uVar2);
    uVar4 = extraout_var;
    uVar5 = extraout_var_01;
    if (iVar3 == 0) {
      FUN_00488980(4,0);
      uVar4 = extraout_var_00;
      uVar5 = extraout_var_02;
    }
    FUN_004888e0(CONCAT22(uVar5,*param_2),CONCAT22(uVar4,param_2[1]));
    return;
  }
  local_34 = *(undefined4 *)param_2;
  FUN_00488910(2);
  FUN_0054eeb0(param_1,param_2,param_3);
  uVar1 = FUN_00488950();
  if ((uVar1 & 1) != 0) {
    uVar2 = FUN_00488940(param_3);
    FUN_0054ef10(local_30,uVar2);
    uVar2 = FUN_00488960(0x10);
    FUN_004865d0(uVar2);
    FUN_0054eeb0(local_18,&local_34,param_3);
  }
  return;
}

