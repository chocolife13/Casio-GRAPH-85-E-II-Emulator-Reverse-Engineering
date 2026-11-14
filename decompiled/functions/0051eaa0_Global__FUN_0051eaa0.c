// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0051eaa0
// entry: 0051eaa0  size: 232


void FUN_0051eaa0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_24 [36];
  
  FUN_004b6ef0(local_24,&DAT_005bf3d0);
  iVar1 = FUN_004e4020(param_1);
  if (iVar1 == 0) {
    iVar1 = FUN_004b6ca0(local_24);
    uVar2 = FUN_004b1d20(param_1,local_24 + iVar1);
    FUN_0051f5a0(uVar2);
  }
  else {
    FUN_004b6e70(local_24,s_ERROR_005a8cfc);
  }
  FUN_0051ea40(local_24,0x10);
  FUN_00523a20(1,8,local_24,0x20);
  FUN_004b6ef0(local_24,&DAT_005be9d8);
  iVar1 = FUN_004e4020(param_2);
  if (iVar1 == 0) {
    iVar1 = FUN_004b6ca0(local_24);
    uVar2 = FUN_004b1d20(param_2,local_24 + iVar1);
    FUN_0051f5a0(uVar2);
  }
  else {
    FUN_004b6e70(local_24,s_ERROR_005a8cfc);
  }
  FUN_0051ea40(local_24,0x10);
  FUN_00523a20(0x11,8,local_24,0x20);
  return;
}

