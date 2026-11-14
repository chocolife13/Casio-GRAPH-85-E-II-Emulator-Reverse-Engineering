// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0042e340
// entry: 0042e340  size: 244


short FUN_0042e340(undefined4 param_1)

{
  ushort uVar1;
  short sVar2;
  uint uVar3;
  undefined1 local_28 [12];
  undefined1 local_1c [10];
  undefined1 local_12 [2];
  undefined1 local_10 [16];
  
  uVar1 = FUN_00401170(param_1);
  if (uVar1 == 0xf0) {
    sVar2 = FUN_004010f0(param_1);
    return sVar2;
  }
  FUN_0042fa20(local_28);
  FUN_00401080(param_1,local_1c);
  FUN_004013a0(local_12);
  uVar3 = FUN_00401460(local_1c,local_28);
  if ((uVar3 & 5) == 0) {
    FUN_0042f9f0(local_28);
    uVar3 = FUN_00401460(local_1c,local_28);
    FUN_00401000(param_1,local_10);
    if ((uVar3 & 4) == 0) {
      FUN_00401b40(local_10);
    }
    else {
      FUN_00401a50(local_10);
    }
    FUN_004016b0(local_10);
    FUN_00401040(local_10,param_1);
    if (((uVar1 & 2) != 0) && (sVar2 = FUN_0042e640(param_1), sVar2 != 0)) {
      return sVar2;
    }
    return 0;
  }
  FUN_0042f540(0x10,param_1);
  return 0x10;
}

