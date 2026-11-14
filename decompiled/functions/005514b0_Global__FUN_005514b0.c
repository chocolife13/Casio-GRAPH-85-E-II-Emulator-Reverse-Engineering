// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005514b0
// entry: 005514b0  size: 279


undefined4 FUN_005514b0(undefined4 param_1,undefined4 param_2,int param_3,short *param_4)

{
  short sVar1;
  short sVar2;
  int iVar3;
  short *psVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined1 local_24 [12];
  undefined1 local_18 [24];
  
  psVar4 = param_4;
  if (param_3 == 1) {
    sVar1 = param_4[2];
    sVar2 = *param_4;
  }
  else {
    sVar1 = param_4[3];
    sVar2 = param_4[1];
  }
  param_4 = (short *)(int)sVar1;
  iVar6 = (int)sVar2;
  FUN_00485e40(local_24);
  FUN_00528480(param_1,param_2);
  iVar5 = FUN_005281a0(param_1,param_2,((int)param_4 - iVar6) + 1);
  iVar3 = iVar6;
  if (iVar5 == 0) {
    while( true ) {
      if ((int)param_4 < iVar3) {
        return 0;
      }
      FUN_0052f840();
      if (param_3 == 1) {
        if (0x1a < iVar3) {
          return 0;
        }
        iVar5 = iVar3;
        iVar7 = (int)psVar4[1];
      }
      else {
        if (999 < iVar3) {
          return 0;
        }
        iVar5 = (int)*psVar4;
        iVar7 = iVar3;
      }
      iVar5 = FUN_00486570(local_24,iVar5,iVar7,local_18,0);
      if ((iVar5 != 1) || (iVar5 = FUN_004e4020(local_18), iVar5 != 0)) {
        FUN_004e5780(local_18);
      }
      iVar5 = FUN_005278d0(param_1,param_2,(iVar3 - iVar6) + 1,local_18);
      if (iVar5 != 0) break;
      iVar3 = iVar3 + 1;
    }
    return 4;
  }
  return 4;
}

