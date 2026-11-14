// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0042d3c0
// entry: 0042d3c0  size: 122


undefined4 FUN_0042d3c0(undefined4 param_1)

{
  short sVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined1 local_10 [16];
  
  sVar1 = FUN_00401170(param_1);
  if (sVar1 == 0xf0) {
    uVar2 = FUN_004010f0();
    return uVar2;
  }
  uVar3 = FUN_004014a0(param_1);
  if ((uVar3 & 2) != 0) {
    FUN_0042f540(0x11,param_1);
    return 0x11;
  }
  FUN_00401000(param_1,local_10);
  FUN_00401370(local_10);
  FUN_004016b0(local_10);
  FUN_00401040(local_10,param_1);
  return 0;
}

