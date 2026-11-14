// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004a8920
// entry: 004a8920  size: 121


void FUN_004a8920(undefined4 param_1,short param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 local_48 [20];
  undefined1 local_34 [52];
  
  FUN_005232d0(1,param_1);
  FUN_00523490(&DAT_005cd010,0x15);
  FUN_005232d0(1,param_1);
  uVar1 = FUN_004149f0();
  iVar2 = FUN_00414a20(param_3,local_48);
  if (iVar2 == 1) {
    iVar2 = FUN_004149c0(param_3);
    if (iVar2 == 1) {
      uVar3 = FUN_0052f6f0((int)param_2,local_34);
      FUN_005233e0(uVar3);
    }
  }
  FUN_004149c0(uVar1);
  return;
}

