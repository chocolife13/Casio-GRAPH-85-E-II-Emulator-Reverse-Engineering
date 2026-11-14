// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00551660
// entry: 00551660  size: 390


undefined4
FUN_00551660(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,char param_6)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 local_24 [12];
  undefined1 local_18 [24];
  
  FUN_00485e40(local_24);
  if (param_6 == '\0') {
    iVar4 = (int)param_4._2_2_;
    iVar6 = (int)param_3._2_2_;
    iVar3 = (int)(short)param_3;
    iVar5 = (iVar4 - iVar6) + 1;
    FUN_004888a0(local_24,iVar3,iVar6,iVar5);
    FUN_004876e0(local_24,iVar3,iVar6,iVar5);
    FUN_00547460(local_24,iVar3,iVar6,iVar5);
    iVar5 = iVar6;
    if (iVar4 < iVar6) {
      return 0;
    }
    while (FUN_0052f840(), iVar5 < 1000) {
      iVar1 = FUN_00527570(param_1,param_2,(iVar5 - iVar6) + 1,local_18);
      if (iVar1 != 0) {
        FUN_004e5780(local_18);
      }
      uVar2 = FUN_005515d0(local_24,iVar3,iVar5,local_18);
      iVar5 = iVar5 + 1;
      if (iVar4 < iVar5) {
        return uVar2;
      }
    }
  }
  else {
    iVar3 = (int)(short)param_3;
    iVar5 = (int)(short)param_4;
    if (iVar3 <= iVar5) {
      iVar6 = (int)param_3._2_2_;
      iVar4 = iVar3;
      do {
        FUN_004888a0(local_24,iVar4,iVar6,1);
        FUN_004876e0(local_24,iVar4,iVar6,1);
        FUN_00547460(local_24,iVar4,iVar6,1);
        iVar4 = iVar4 + 1;
      } while (iVar4 <= iVar5);
    }
    iVar4 = iVar3;
    if (iVar5 < iVar3) {
      return 0;
    }
    while (FUN_0052f840(), iVar4 < 0x1b) {
      iVar6 = FUN_00527570(param_1,param_2,(iVar4 - iVar3) + 1,local_18);
      if (iVar6 != 0) {
        FUN_004e5780(local_18);
      }
      uVar2 = FUN_005515d0(local_24,iVar4,(int)param_3._2_2_,local_18);
      iVar4 = iVar4 + 1;
      if (iVar5 < iVar4) {
        return uVar2;
      }
    }
  }
  return 0x21;
}

