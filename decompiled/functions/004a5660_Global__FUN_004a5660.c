// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004a5660
// entry: 004a5660  size: 138


void FUN_004a5660(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_34 [52];
  
  iVar1 = 1;
  do {
    FUN_005232d0(1,iVar1);
    FUN_00523470(&DAT_0058541c,0x15);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 8);
  FUN_005232d0(1,1);
  if (param_1 == 0) {
    uVar2 = 0x160;
  }
  else {
    uVar2 = 0x281;
  }
  uVar2 = FUN_0052f6f0(uVar2,local_34);
  FUN_005233e0(uVar2);
  FUN_004a56f0(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return;
}

