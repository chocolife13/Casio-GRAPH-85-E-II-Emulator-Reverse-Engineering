// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00469ea0
// entry: 00469ea0  size: 488


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00469ea0(undefined4 param_1,undefined4 param_2,int *param_3,int *param_4,undefined4 *param_5
                ,undefined4 param_6,undefined4 param_7,int param_8,int param_9)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined1 local_34 [4];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 local_24 [12];
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  FUN_00538980(0,0,local_34);
  DAT_005ceb70 = DAT_00581c50;
  _DAT_005ceb74 = DAT_00581c54;
  puVar3 = &DAT_005ceb70;
  puVar4 = &DAT_005ceb78;
  for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  FUN_00538860(0,&DAT_005ceb70);
  FUN_005387f0(0);
  FUN_004e5780(local_c);
  FUN_004e57a0(local_24);
  FUN_004e5070(100,local_18);
  local_30 = *param_5;
  local_2c = param_5[1];
  local_28 = param_5[2];
LAB_00469f39:
  do {
    FUN_00538b30();
    iVar2 = FUN_00524460(param_1,param_2,(*param_4 - *param_3) + 2,param_5,param_6);
    if (iVar2 < -2) goto LAB_0046a068;
    if (iVar2 < 0) {
      if (param_9 == 1) {
        *param_5 = local_30;
        param_5[1] = local_2c;
        param_5[2] = local_28;
      }
      goto LAB_0046a068;
    }
    if (iVar2 != 0) goto LAB_0046a068;
    if (param_9 == 1) {
      iVar1 = FUN_00469e60(local_c,param_5);
      if ((0 < iVar1) || (iVar1 = FUN_00469e60(param_5,local_24), -1 < iVar1)) {
        iVar1 = FUN_00469e60(local_24,param_5);
        if ((0 < iVar1) || (iVar1 = FUN_00469e60(param_5,local_18), -1 < iVar1)) {
          FUN_0052b240(3);
          param_1 = 0;
          param_2 = 0x7545;
          goto LAB_00469f39;
        }
        FUN_004e6dd0(param_5,local_18,param_5);
      }
      param_9 = 0;
    }
    FUN_00468430(param_8,param_7,param_5);
    if (*param_4 < (int)*(short *)(param_8 + 8)) {
      iVar1 = *param_4 + 1;
      *param_4 = iVar1;
      if (*param_3 + 6 <= iVar1) {
        *param_3 = *param_3 + 1;
      }
    }
    else {
      *param_3 = 1;
      *param_4 = 1;
    }
    if (param_9 == 0) {
LAB_0046a068:
      FUN_00538810();
      FUN_005389c0(0,0,local_34);
      return iVar2;
    }
  } while( true );
}

