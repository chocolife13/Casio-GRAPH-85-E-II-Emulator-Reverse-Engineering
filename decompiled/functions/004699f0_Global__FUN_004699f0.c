// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004699f0
// entry: 004699f0  size: 232


void FUN_004699f0(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 local_48 [8];
  undefined1 local_40 [12];
  undefined1 local_34 [52];
  
  iVar3 = 0;
  iVar1 = 1 - param_1;
  iVar4 = 2 - param_1;
  do {
    if (param_3 < iVar1 + param_1) break;
    iVar5 = iVar4 + param_1;
    FUN_00476ef0(1,iVar5,param_1);
    FUN_00483e70(0,0,param_1,local_40);
    FUN_004b1890(local_40,local_48);
    if (param_2 == param_1) {
      uVar2 = 0x22;
      FUN_004b5030(local_40,local_34);
    }
    else {
      uVar2 = 0x20;
    }
    FUN_00523a20(5,iVar5,local_48,uVar2);
    iVar3 = iVar3 + 1;
    param_1 = param_1 + 1;
  } while (iVar3 < 5);
  if (iVar3 + 1 < 5) {
    iVar3 = iVar3 + 2;
    do {
      FUN_005232d0(1,iVar3);
      FUN_00523470(&DAT_005cd010,0x15);
      iVar3 = iVar3 + 1;
    } while (iVar3 < 6);
  }
  FUN_005232d0(1,7);
  FUN_0054dc70(local_34);
  return;
}

