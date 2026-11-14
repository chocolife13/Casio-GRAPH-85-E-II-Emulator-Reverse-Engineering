// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00443650
// entry: 00443650  size: 271


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00443650(int param_1,int param_2,ushort *param_3,undefined4 *param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7,ushort *param_8)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 local_4 [4];
  
  FUN_00526440();
  FUN_00526420(8);
  uVar1 = FUN_00526410();
  FUN_00526420(0xe7);
  FUN_00538980(0,0,local_4);
  _DAT_005ce540 = DAT_0057f8f0;
  _DAT_005ce544 = DAT_0057f8f4;
  FUN_00538860(0,&DAT_005ce540);
  FUN_005387f0(0);
  FUN_00538b30();
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)((*param_3 - 3) + param_2);
  iVar2 = FUN_00524460(1,*param_4,*param_3,param_5,param_1);
  if (iVar2 == 0) {
    uVar3 = FUN_004e4120(param_5,param_6,param_7);
    FUN_0052f780(*(undefined1 *)((*param_3 - 3) + param_2),uVar3);
    FUN_00515dd0();
    *param_3 = *param_3 + 1;
    if (*param_8 + 2 < (uint)*param_3) {
      *param_3 = *param_8 + 2;
    }
  }
  FUN_00538810();
  FUN_005389c0(0,0,local_4);
  FUN_00526440();
  FUN_00526420(uVar1);
  return;
}

