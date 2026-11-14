// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004b5620
// entry: 004b5620  size: 387


undefined4
FUN_004b5620(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
            undefined4 *param_5,int *param_6,int *param_7)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_18 [6];
  
  puVar3 = local_18;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *param_1;
    param_1 = param_1 + 1;
    puVar3 = puVar3 + 1;
  }
  switch(*param_4) {
  case 0:
  case 1:
    FUN_004b4050(local_18,*param_4);
    break;
  case 2:
    FUN_004b3fb0(local_18,*param_5);
    break;
  case 3:
    FUN_004b4000(local_18,*param_5);
  }
  FUN_004b57e0(local_18,param_2,param_3,param_6);
  if (*param_7 == 0) {
    if (*param_6 == 1) {
      uVar1 = FUN_004b3930(local_18,param_2);
      return uVar1;
    }
    switch(*param_4) {
    case 0:
      uVar1 = FUN_004b2690(local_18,param_2);
      return uVar1;
    case 1:
      uVar1 = FUN_004b26b0(local_18,param_2);
      return uVar1;
    case 2:
      uVar1 = FUN_004b2af0(local_18,*param_5,param_2);
      return uVar1;
    case 3:
      uVar1 = FUN_004b2e90(local_18,*param_5,param_2);
      return uVar1;
    }
  }
  else {
    switch(*param_4) {
    case 0:
      uVar1 = FUN_004b2810(local_18,param_2);
      return uVar1;
    case 1:
      uVar1 = FUN_004b2830(local_18,param_2);
      return uVar1;
    case 2:
      uVar1 = FUN_004b2c10(local_18,*param_5,param_2);
      return uVar1;
    case 3:
      uVar1 = FUN_004b2fb0(local_18,*param_5,param_2);
      return uVar1;
    }
  }
  return param_2;
}

