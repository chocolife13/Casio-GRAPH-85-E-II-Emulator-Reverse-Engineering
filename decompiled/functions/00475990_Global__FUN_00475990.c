// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00475990
// entry: 00475990  size: 188


undefined4 FUN_00475990(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_00538710();
  FUN_005387f0(5);
  if (param_1 != 0x760c) {
    uVar2 = FUN_0051b790(param_1,param_3);
    switch(uVar2) {
    case 0:
      break;
    case 0xfffffff2:
      goto switchD_004759f3_caseD_fffffff2;
    default:
switchD_004759f3_caseD_fffffff3:
      FUN_00538810();
      return uVar2;
    case 0xfffffff5:
      FUN_00538810();
      return 0xffffffe9;
    case 0xfffffffa:
      goto switchD_004759f3_caseD_fffffffa;
    case 0xfffffffe:
      FUN_00538810();
      return 0xffffffeb;
    case 0xffffffff:
      FUN_00538810();
      return 0xffffffea;
    }
  }
  iVar1 = FUN_00475930(param_2,param_3);
  if (iVar1 == 0) {
switchD_004759f3_caseD_fffffffa:
    FUN_00538810();
    return 0xffffffe2;
  }
  FUN_00480280();
  FUN_0052b240(iVar1);
switchD_004759f3_caseD_fffffff2:
  uVar2 = 0xffffffe5;
  goto switchD_004759f3_caseD_fffffff3;
}

