// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004b53e0
// entry: 004b53e0  size: 519


undefined4
FUN_004b53e0(undefined4 *param_1,undefined4 param_2,int *param_3,undefined4 *param_4,
            undefined4 *param_5,int *param_6,int *param_7)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 local_18 [6];
  
  iVar5 = *param_3;
  puVar4 = local_18;
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = *param_1;
    param_1 = param_1 + 1;
    puVar4 = puVar4 + 1;
  }
  if (iVar5 == 6) {
LAB_004b5423:
    iVar5 = 0;
  }
  else if (iVar5 == 7) {
    iVar5 = 1;
LAB_004b5412:
    iVar3 = FUN_004b4e20(local_18);
    if (iVar3 == 0) goto LAB_004b5423;
    *param_6 = 0;
  }
  else {
    iVar5 = *param_7;
    if (iVar5 != 0) goto LAB_004b5412;
  }
  switch(*param_4) {
  case 1:
    if ((iVar5 != 0) || (*param_6 != 1)) {
      FUN_004b4050(local_18,1);
      break;
    }
  case 0:
    FUN_004b4050(local_18,0);
    break;
  case 2:
    FUN_004b3fb0(local_18,*param_5);
    break;
  case 3:
    FUN_004b4000(local_18,*param_5);
  }
  if (iVar5 == 1) {
    uVar1 = FUN_0052f6b0(0x3d);
    param_3 = (int *)(CONCAT31(param_3._1_3_,uVar1) & 0xffffff8f);
    FUN_0052f6c0(0x3d,param_3);
  }
  else {
    FUN_004b57e0(local_18,param_2,param_3,param_6);
    if (iVar5 == 0) {
      if (*param_6 != 1) {
        switch(*param_4) {
        case 0:
          uVar2 = FUN_004b2690(local_18,param_2);
          return uVar2;
        case 1:
          uVar2 = FUN_004b26b0(local_18,param_2);
          return uVar2;
        case 2:
          uVar2 = FUN_004b2af0(local_18,*param_5,param_2);
          return uVar2;
        case 3:
          uVar2 = FUN_004b2e90(local_18,*param_5,param_2);
          return uVar2;
        default:
          return param_2;
        }
      }
      uVar2 = FUN_004b3930(local_18,param_2);
      return uVar2;
    }
  }
  switch(*param_4) {
  case 0:
    uVar2 = FUN_004b2810(local_18,param_2);
    return uVar2;
  case 1:
    uVar2 = FUN_004b2830(local_18,param_2);
    return uVar2;
  case 2:
    uVar2 = FUN_004b2c10(local_18,*param_5,param_2);
    return uVar2;
  case 3:
    uVar2 = FUN_004b2fb0(local_18,*param_5,param_2);
    return uVar2;
  default:
    return param_2;
  }
}

