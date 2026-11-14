// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00429c40
// entry: 00429c40  size: 59


undefined4 FUN_00429c40(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_004299c0(param_1);
  if (iVar1 == 1) {
    uVar2 = FUN_0041f0a0(L"fls0",param_2);
    return uVar2;
  }
  if (iVar1 != 3) {
    return 0xfffffffb;
  }
  *param_2 = 0x10000000;
  return 0;
}

