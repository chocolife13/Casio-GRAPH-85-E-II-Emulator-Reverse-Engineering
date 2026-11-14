// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00474b60
// entry: 00474b60  size: 312


int FUN_00474b60(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  iVar1 = param_2;
  iVar3 = 0;
  iVar4 = 1;
  switch(*(undefined2 *)(param_2 + 2)) {
  case 1:
  case 2:
    param_2 = FUN_00482050(0,(int)*(short *)(param_2 + 4),(int)*(short *)(param_2 + 6),
                           (int)*(short *)(param_2 + 8));
    break;
  case 3:
    param_2 = FUN_00480600(param_1);
    break;
  case 4:
  case 8:
    param_2 = FUN_00480600(param_1);
    break;
  case 5:
    param_2 = 5;
    break;
  case 6:
    iVar2 = FUN_00480cf0(param_1,0);
    if (iVar2 == 1) {
      param_2 = FUN_00480eb0(param_1);
      param_2 = param_2 + 6;
    }
    else {
      param_2 = 5;
    }
    iVar2 = FUN_00480cf0(param_1,1);
    if (iVar2 == 1) {
      iVar2 = FUN_00480ed0(param_1);
      param_2 = param_2 + 1 + iVar2;
    }
    break;
  default:
    return 0;
  }
  FUN_004e5780(local_18);
  if (0 < param_2) {
    while (iVar3 = FUN_00474a10(local_c,param_1,iVar1,param_3,iVar4,param_4,param_5), iVar3 == 0) {
      iVar3 = FUN_00469e60(local_c,local_18);
      if (iVar3 == 0) {
        return 0;
      }
      iVar4 = iVar4 + 1;
      if (param_2 < iVar4) {
        return 0;
      }
    }
    FUN_0052b240(iVar3);
  }
  return iVar3;
}

