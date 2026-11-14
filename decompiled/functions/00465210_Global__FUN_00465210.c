// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00465210
// entry: 00465210  size: 425


uint FUN_00465210(undefined4 param_1,uint *param_2,uint param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  undefined1 local_80 [128];
  
switchD_00465292_caseD_7533:
  while( true ) {
    FUN_0051f7b0(local_80);
    FUN_0051f870();
    FUN_00522500(param_4);
    iVar2 = FUN_00526620(param_2);
    FUN_00522930(param_4);
    FUN_0051f7f0(local_80);
    if (iVar2 == 0) break;
    if (param_3 == 0x7625) {
      return 0xfffffff4;
    }
  }
  uVar1 = *param_2;
  if (uVar1 < 0x754f) {
    if (uVar1 == 0x754e) {
      iVar2 = FUN_005022f0(0);
      return -(uint)(iVar2 != 0) & 0xfffffff2;
    }
    switch(uVar1) {
    case 0x7531:
      break;
    case 0x7532:
      goto switchD_00465292_caseD_7532;
    default:
      goto switchD_00465292_caseD_7533;
    case 0x753f:
      return 0xfffffff3;
    case 0x7542:
    case 0x7547:
      if (param_3 == 0x7602) {
        return 0;
      }
      break;
    case 0x7544:
    case 0x7545:
      if (param_3 < 0x7603) {
        if (param_3 == 0x7602) {
          return 0;
        }
        if (param_3 != 0) {
          if (param_3 < 3) {
            return 0;
          }
          if (param_3 == 4) {
            return 0;
          }
        }
        goto switchD_00465292_caseD_7533;
      }
      break;
    case 0x754d:
      return 0xffffffff;
    }
    if (param_3 != 0x7625) goto switchD_00465292_caseD_7533;
  }
  else {
    switch(uVar1) {
    case 0x7555:
      iVar2 = FUN_00502180();
      return -(uint)(iVar2 != 0) & 0xfffffff2;
    default:
      goto switchD_00465292_caseD_7533;
    case 0x7557:
      return 0xfffffff5;
    case 0x7602:
    case 0x7625:
      break;
    case 0x7634:
      FUN_0051af80(0x7634,param_1);
      goto switchD_00465292_caseD_7533;
    case 0x7635:
      FUN_0051af80(0x7635,param_1);
    }
  }
  return 0;
switchD_00465292_caseD_7532:
  return 0xfffffffe;
}

