// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0042e6c0
// entry: 0042e6c0  size: 92


uint FUN_0042e6c0(undefined4 param_1)

{
  short sVar1;
  uint uVar2;
  undefined1 local_10 [16];
  
  sVar1 = FUN_00401170(param_1);
  if (sVar1 == 0xf0) {
    uVar2 = FUN_004010f0();
    return uVar2;
  }
  uVar2 = FUN_00401560(param_1);
  if ((uVar2 & 1) == 0) {
    FUN_00401000(param_1,local_10);
    FUN_00401640(local_10);
    uVar2 = FUN_00401040(local_10,param_1);
  }
  return uVar2 & 0xffff0000;
}

