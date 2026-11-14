// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0052f130
// entry: 0052f130  size: 420


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_0052f130(int param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,int param_6,
            int param_7,undefined4 param_8,uint *param_9)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined1 local_20 [4];
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c [12];
  
  local_1c = FUN_00526410();
  FUN_00526420(0xe7);
  FUN_00538980(0,0,local_20);
  DAT_005d0398 = DAT_00598f90;
  _DAT_005d039c = DAT_00598f94;
  puVar3 = &DAT_005d0398;
  puVar4 = &DAT_005d03a0;
  for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  FUN_00538860(0,&DAT_005d0398);
  FUN_005387f0(0);
  iVar2 = param_6 + param_7 * 0xc;
  local_18 = *(undefined4 *)(param_6 + param_7 * 0xc);
  local_14 = *(undefined4 *)(iVar2 + 4);
  local_10 = *(undefined4 *)(iVar2 + 8);
  do {
    FUN_00538b30();
    iVar2 = FUN_00524460(param_2,param_3,(param_5 - param_4) + 2,&local_18,param_8);
    if (iVar2 == -2) {
      uVar1 = 0xfffffffe;
LAB_0052f2aa:
      FUN_00538810();
      FUN_005389c0(0,0,local_20);
      FUN_00526420(local_1c);
      return uVar1;
    }
    if (iVar2 == -1) {
      uVar1 = 0xffffffff;
      goto LAB_0052f2aa;
    }
    if (iVar2 != 0) {
      uVar1 = 0xfffffffa;
      goto LAB_0052f2aa;
    }
    if (param_1 == 2) {
      uVar1 = FUN_004e5640(&local_18,local_c,*(undefined4 *)(&DAT_00598f60 + param_7 * 4));
      iVar2 = FUN_00516d20(uVar1);
      if (iVar2 == 0) {
        *param_9 = *param_9 & 0xfffe;
        FUN_00515ec0(param_6);
        uVar1 = 0;
        goto LAB_0052f2aa;
      }
    }
    else {
      uVar1 = FUN_004e5640(&local_18,local_c,*(undefined4 *)(&DAT_00598f60 + param_7 * 4));
      iVar2 = FUN_00516d00(uVar1);
      if (iVar2 == 0) {
        *param_9 = *param_9 & 0xfffe;
        FUN_00515e10(param_6);
        uVar1 = 0;
        goto LAB_0052f2aa;
      }
    }
    FUN_0052b240(iVar2);
    param_2 = 0;
    param_3 = 0x7545;
  } while( true );
}

