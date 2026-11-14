// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00483ee0
// entry: 00483ee0  size: 313


int FUN_00483ee0(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined1 local_30 [24];
  undefined1 local_18 [24];
  
  if (param_1 == 0) {
    iVar1 = FUN_00484520(0,param_2,param_4);
    if (iVar1 == 0) {
      iVar1 = FUN_004e4020(param_4);
      return iVar1;
    }
  }
  else {
    if (param_1 == 1) {
      iVar1 = FUN_00484500(0,param_2,param_4);
      if (iVar1 != 0) {
        return iVar1;
      }
      iVar1 = FUN_004e4020(param_4);
      return iVar1;
    }
    iVar1 = FUN_00483d60(param_2,local_30);
    if (iVar1 != 0) {
      return iVar1;
    }
    if (param_3 == 0) {
      if (param_1 == 2) {
        iVar1 = FUN_004c3470(local_30,param_4);
      }
      else if (param_1 == 3) {
        iVar1 = FUN_004c3cd0(local_30,param_4);
      }
      else {
        if (param_1 != 4) goto LAB_00483faa;
        iVar1 = FUN_004c3ec0(local_30,param_4);
      }
    }
    else {
      iVar1 = FUN_00483d60(param_3,local_18);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_1 == 2) {
        iVar1 = FUN_004c3680(local_30,local_18,param_4);
      }
      else if (param_1 == 3) {
        iVar1 = FUN_004c3ea0(local_30,local_18,param_4);
      }
      else {
        if (param_1 != 4) goto LAB_00483faa;
        iVar1 = FUN_004c4190(local_30,local_18,param_4);
      }
    }
    if (iVar1 == 0) {
LAB_00483faa:
      iVar1 = FUN_004e4020(param_4);
      return iVar1;
    }
    iVar1 = 0;
  }
  return iVar1;
}

