// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0042a080
// entry: 0042a080  size: 127


int FUN_0042a080(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_108 [66];
  
  puVar2 = local_108;
  for (iVar1 = 0x41; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 *)puVar2 = 0;
  iVar1 = FUN_004299c0(param_1);
  if (iVar1 == 1) {
    iVar1 = FUN_0041e680(param_1,1);
  }
  else {
    if (iVar1 != 3) {
      return -5;
    }
    FUN_0042aa50(local_108,param_1,0x105);
    iVar1 = FUN_005545b9(local_108);
    if (iVar1 < 0) {
      iVar1 = FUN_00429930();
      return iVar1;
    }
  }
  return iVar1;
}

