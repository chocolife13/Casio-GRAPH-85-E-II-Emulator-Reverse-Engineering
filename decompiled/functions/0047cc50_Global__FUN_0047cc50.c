// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0047cc50
// entry: 0047cc50  size: 110


undefined4 FUN_0047cc50(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined1 local_24 [12];
  undefined1 local_18 [24];
  
  FUN_004e5780(local_24);
  iVar1 = FUN_00528ac0(param_1,param_2,param_3,local_18);
  if (iVar1 != 0) {
    return 4;
  }
  iVar1 = FUN_004e4000(local_18);
  if (iVar1 == 1) {
    return 0x1a;
  }
  FUN_004e6a00(local_24,local_18,param_4);
  return 0;
}

