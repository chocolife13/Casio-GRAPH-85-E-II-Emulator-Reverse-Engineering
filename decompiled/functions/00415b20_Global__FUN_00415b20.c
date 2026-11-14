// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00415b20
// entry: 00415b20  size: 231


void FUN_00415b20(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 local_30 [48];
  
  if (param_2 < param_1) {
    param_1 = param_2;
  }
  if (param_1 == 0) {
    FUN_0052f840();
    FUN_00525b40(5);
    FUN_005232d0(1,2);
    uVar1 = FUN_0052f6f0(0x1fb,local_30);
    FUN_005233e0(uVar1);
    FUN_005232d0(1,3);
    uVar1 = FUN_0052f6f0(0x1fc,local_30);
    FUN_005233e0(uVar1);
    FUN_005232d0(1,4);
    uVar1 = FUN_0052f6f0(0x1fd,local_30);
    FUN_005233e0(uVar1);
    FUN_00525b50(5);
    FUN_00525b50(6);
    FUN_0050fc10(0x12,0x1f,0x6b,0x29);
    FUN_0040ae30();
    thunk_FUN_0040add0();
    return;
  }
  iVar2 = 0x20;
  do {
    FUN_004125f0(0x12,iVar2,(param_1 * 0x58) / param_2 + 0x12,iVar2);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x29);
  FUN_0040ae30();
  thunk_FUN_0040add0();
  return;
}

