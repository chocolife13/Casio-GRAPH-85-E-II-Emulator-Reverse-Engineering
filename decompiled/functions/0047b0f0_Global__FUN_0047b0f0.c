// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0047b0f0
// entry: 0047b0f0  size: 156


undefined4
FUN_0047b0f0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 *param_6)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*param_1 != 1) {
    *param_6 = 0xffffffe9;
    iVar2 = FUN_005167a0(param_5);
    if (iVar2 != 0) {
      FUN_00480280();
      *param_6 = 0;
      FUN_0052b240(4);
    }
switchD_0047b131_caseD_ffffffe6:
    return 0;
  }
  uVar1 = FUN_0047b380(1,param_2,param_3,param_4,param_5);
  *param_6 = uVar1;
  switch(uVar1) {
  case 0:
    *param_1 = 0;
    *param_6 = 0;
    return 0;
  case 0xffffffe4:
  case 0xffffffe9:
    return 1;
  case 0xffffffe5:
  case 0xffffffea:
  case 0xffffffeb:
    goto switchD_0047b131_caseD_ffffffe6;
  default:
    return 0;
  }
}

