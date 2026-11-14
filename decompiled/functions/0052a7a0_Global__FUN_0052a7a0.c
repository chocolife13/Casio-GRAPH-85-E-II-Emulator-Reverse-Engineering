// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0052a7a0
// entry: 0052a7a0  size: 394


int FUN_0052a7a0(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint local_4;
  
  uVar1 = FUN_00523790(6);
  FUN_00538350(uVar1);
  uVar3 = 1;
  iVar4 = -2;
LAB_0052a7c7:
  if (param_1 < 0x7919) {
    if (param_1 != 31000) {
      if (param_1 == 1) goto LAB_0052a852;
      if (param_1 == 2) goto LAB_0052a832;
      if (param_1 != 3) goto LAB_0052a7e1;
    }
    uVar3 = 1;
  }
  else {
    if (param_1 == 0x7919) {
LAB_0052a852:
      iVar4 = FUN_0052ad00(&local_4);
      if (iVar4 < -2) goto LAB_0052a7e1;
      if (iVar4 < 0) goto switchD_0052a816_caseD_fffffffe;
      if (iVar4 != 0) goto LAB_0052a7e1;
      iVar2 = FUN_004b7d00(local_4,param_2);
      if (((iVar2 != 0) && (iVar2 != 1)) && (iVar2 != 2)) {
        FUN_0052b240(4);
        goto switchD_0052a816_caseD_fffffffe;
      }
      param_1 = 3;
      if ((byte)local_4 < 0xf) {
        uVar3 = local_4 & 0xff;
      }
      else {
        uVar3 = 0xf;
      }
LAB_0052a7f2:
      iVar4 = FUN_0052ab40(uVar3);
      uVar1 = FUN_00523790(6);
      FUN_00538350(uVar1);
      switch(iVar4) {
      case -5:
        uVar1 = FUN_00525300(param_2,param_4,*param_3,0xf91b);
        *param_3 = uVar1;
        goto switchD_0052a816_caseD_fffffffe;
      case -4:
        param_1 = 2;
        goto LAB_0052a7c7;
      case -3:
        param_1 = 1;
        goto LAB_0052a7c7;
      case -2:
      case -1:
      case 0:
        goto switchD_0052a816_caseD_fffffffe;
      }
      goto switchD_0052a816_default;
    }
    if (param_1 != 0x791f) goto LAB_0052a7e1;
LAB_0052a832:
    iVar4 = FUN_0052ad90(&local_4);
    if (-3 < iVar4) {
      if (iVar4 < 0) goto switchD_0052a816_caseD_fffffffe;
      if (iVar4 == 0) {
        uVar1 = FUN_00525550(param_2,local_4,param_3,param_4);
        FUN_0052b240(uVar1);
        goto switchD_0052a816_caseD_fffffffe;
      }
    }
  }
LAB_0052a7e1:
  if ((param_1 == 3) || (param_1 == 31000)) goto LAB_0052a7f2;
switchD_0052a816_default:
  if (param_1 == 0) {
switchD_0052a816_caseD_fffffffe:
    uVar1 = FUN_00523790(6);
    FUN_00538370(uVar1);
    return iVar4;
  }
  goto LAB_0052a7c7;
}

