// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00453a80
// entry: 00453a80  size: 483


void FUN_00453a80(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 local_78 [12];
  undefined1 local_6c [12];
  undefined1 local_60 [12];
  undefined1 local_54 [12];
  undefined1 local_48 [12];
  undefined1 local_3c [12];
  undefined1 local_30 [12];
  undefined1 local_24 [12];
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  FUN_004e57c0(local_30);
  FUN_004e5840(local_48);
  FUN_004e5ae0(local_3c);
  FUN_004e5b40(local_c);
  FUN_004e5070(0x10,local_54);
  iVar1 = param_2 + 0x38;
  iVar2 = FUN_00451810(iVar1);
  if (iVar2 == 0) {
    FUN_004e6d00(local_54,local_3c,local_6c);
    iVar2 = FUN_004e7250(iVar1,local_54);
    if (iVar2 == 0) {
      FUN_004e6dd0(param_2 + 8,iVar1,local_78);
      FUN_004e6dd0(param_2 + 0x44,iVar1,local_60);
    }
    else {
      uVar3 = FUN_004e6d00(iVar1,local_6c,local_78,local_6c);
      FUN_004e6d00(local_30,uVar3);
      FUN_004e6d00(local_48,param_2 + 8,local_78);
      FUN_004e6d00(local_48,param_2 + 0x44,local_60);
    }
    uVar3 = FUN_004e6c30(local_78,local_60,local_24,local_78);
    FUN_004e7620(uVar3);
    iVar2 = FUN_004e7290(local_78,local_6c);
    if (iVar2 == 0) {
      FUN_004e6c30(param_2 + 8,param_2 + 0x44,local_78);
      FUN_004e6d00(iVar1,local_3c,local_6c);
      FUN_004e6dd0(local_78,local_6c,local_18);
      FUN_004e6fb0(local_18,local_30,local_78);
      FUN_004e7730(local_78,local_6c);
      FUN_004e73d0(local_6c,local_78);
      FUN_004e6d00(iVar1,local_c,local_6c);
      FUN_004e6dd0(local_78,local_6c,param_2 + 0x50);
    }
    else {
      FUN_004e5780(param_2 + 0x50);
    }
    param_2 = param_2 + 0x50;
    FUN_004e7910(param_2,param_2);
    FUN_004517d0(param_2);
  }
  return;
}

