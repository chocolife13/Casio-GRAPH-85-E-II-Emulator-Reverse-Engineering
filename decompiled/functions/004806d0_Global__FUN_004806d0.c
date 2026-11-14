// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004806d0
// entry: 004806d0  size: 259


int FUN_004806d0(undefined4 param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar1 = FUN_00480600(param_1);
  if (param_3 < 10) {
    iVar2 = FUN_00480620(iVar1,param_1,param_2);
  }
  else {
    iVar2 = FUN_00480e50();
  }
  if (iVar2 == 0) {
    FUN_0052f840();
    while (iVar1 = iVar1 + -1, 0 < iVar1) {
      iVar2 = FUN_0052f820();
      if (iVar2 == 1) {
        return 1;
      }
      if (param_3 < 10) {
        iVar2 = FUN_00480620(iVar1,param_1,&local_c);
      }
      else {
        iVar2 = FUN_00480e50(iVar1,param_1,&local_c);
      }
      if (iVar2 != 0) {
        return iVar2;
      }
      iVar2 = FUN_00469e60(param_2,&local_c);
      switch(param_3) {
      case 0:
      case 10:
        if (0 < iVar2) {
          *param_2 = local_c;
          param_2[1] = local_8;
          param_2[2] = local_4;
        }
        break;
      case 1:
      case 0xb:
        if (iVar2 < 0) {
          *param_2 = local_c;
          param_2[1] = local_8;
          param_2[2] = local_4;
        }
      }
      iVar2 = 0;
    }
  }
  return iVar2;
}

