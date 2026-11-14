// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00475850
// entry: 00475850  size: 166


undefined4 FUN_00475850(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  FUN_00538710();
  FUN_005387f0(5);
  uVar1 = FUN_0051b860(param_1,param_3);
  switch(uVar1) {
  case 0:
    iVar2 = FUN_00475930(param_2,param_3);
    if (iVar2 == 0) goto switchD_00475882_caseD_fffffffa;
    FUN_00480280();
    FUN_0052b240(iVar2);
switchD_00475882_caseD_fffffff2:
    uVar1 = 0xffffffe5;
    goto switchD_00475882_caseD_fffffff3;
  case 0xfffffff2:
    goto switchD_00475882_caseD_fffffff2;
  default:
switchD_00475882_caseD_fffffff3:
    FUN_00538810();
    return uVar1;
  case 0xfffffff5:
    FUN_00538810();
    return 0xffffffe9;
  case 0xfffffffa:
switchD_00475882_caseD_fffffffa:
    FUN_00538810();
    return 0xffffffe2;
  case 0xfffffffe:
    FUN_00538810();
    return 0xffffffeb;
  case 0xffffffff:
    FUN_00538810();
    return 0xffffffea;
  }
}

