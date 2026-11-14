// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00429b00
// entry: 00429b00  size: 212


uint FUN_00429b00(undefined4 param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 local_108 [66];
  
  puVar3 = local_108;
  for (iVar2 = 0x41; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined1 *)puVar3 = 0;
  iVar2 = FUN_004299c0(param_1);
  if (iVar2 == 1) {
    uVar1 = FUN_0041bdb0(param_1);
    if (-1 < (int)uVar1) {
      uVar1 = uVar1 & 0xf1ffffff | 0x1000000;
    }
    return uVar1;
  }
  if (iVar2 != 3) {
    return 0xfffffffb;
  }
  FUN_0042aa50(local_108,param_1,0x105);
  if (param_2 != 1) {
    if (param_2 == 2) {
      uVar4 = 0x8001;
      goto LAB_00429b87;
    }
    if (param_2 != 0x80) {
      uVar4 = 0x8002;
      goto LAB_00429b87;
    }
  }
  uVar4 = 0x8000;
LAB_00429b87:
  uVar1 = FUN_005542d3(local_108,uVar4);
  if (-1 < (int)uVar1) {
    return uVar1 & 0xf3ffffff | 0x3000000;
  }
  uVar1 = FUN_00429930();
  return uVar1;
}

