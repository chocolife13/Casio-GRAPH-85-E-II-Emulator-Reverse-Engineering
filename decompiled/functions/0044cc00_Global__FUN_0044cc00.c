// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0044cc00
// entry: 0044cc00  size: 311


void FUN_0044cc00(uint param_1,undefined4 *param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  int local_4;
  
  FUN_0052f840();
  thunk_FUN_0040add0();
  puVar3 = param_2;
  for (iVar2 = 0x3f; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0x20202020;
    puVar3 = puVar3 + 1;
  }
  uVar1 = FUN_0044e480(*(undefined4 *)(param_3 + 4),&local_4);
  param_2[0x7f] = uVar1;
  param_2[0x81] = local_4 + -10;
  param_2[0x7e] = 1;
  param_2[0x80] = 1;
  param_2[0x82] = 1;
  param_2[0x83] = 1;
  FUN_0044dfc0(param_2,1,1,1);
  if (param_1 != 0) {
    uVar4 = param_2[0x80];
    while( true ) {
      if ((uVar4 == param_1) || ((uint)param_2[0x81] <= uVar4)) goto LAB_0044ccf4;
      FUN_0044a770(0x7545,param_2);
      if (param_2[0x8f] == 1) {
        FUN_0044dfc0(param_2,param_2[0x80],param_2[0x82],param_2[0x83]);
      }
      iVar2 = FUN_0052f820();
      if (iVar2 == 1) break;
      uVar4 = param_2[0x80];
    }
    FUN_0052b240(1);
    param_2[0x7e] = 1;
    param_2[0x80] = 1;
    param_2[0x82] = 1;
    param_2[0x83] = 1;
  }
LAB_0044ccf4:
  FUN_0044dfc0(param_2,param_2[0x80],param_2[0x82],param_2[0x83]);
  uVar4 = 0;
  do {
    FUN_005232d0(1,uVar4 + 2);
    FUN_00523470(param_2,0x15);
    uVar4 = uVar4 + 1;
    param_2 = (undefined4 *)((int)param_2 + 0x2a);
  } while (uVar4 < 6);
  return;
}

