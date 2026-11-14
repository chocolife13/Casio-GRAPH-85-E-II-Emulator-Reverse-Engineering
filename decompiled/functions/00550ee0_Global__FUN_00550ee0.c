// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00550ee0
// entry: 00550ee0  size: 244


void FUN_00550ee0(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined1 local_234 [52];
  undefined1 local_200 [256];
  undefined1 local_100 [256];
  
  FUN_005232d0(1,1);
  FUN_0052f6f0(0x277,local_234);
  FUN_00523470(local_234,0x15);
  iVar3 = 1;
  do {
    uVar1 = FUN_00550db0(iVar3);
    FUN_004b6ef0(local_200,uVar1);
    if (iVar3 == 6) {
      iVar2 = FUN_004b6ca0(local_200);
      FUN_00477d00(param_2,local_200 + iVar2);
    }
    else {
      FUN_00550c00(iVar3,param_3,local_100);
      iVar2 = FUN_004b6ca0(local_200,0x15);
      FUN_004b7b40(local_100,local_200 + iVar2);
    }
    iVar2 = iVar3 + 1;
    FUN_005232d0(1,iVar2);
    if (param_1 == iVar3) {
      FUN_00523490(local_200);
    }
    else {
      FUN_00523470(local_200,0x15);
    }
    iVar3 = iVar2;
  } while (iVar2 < 7);
  return;
}

