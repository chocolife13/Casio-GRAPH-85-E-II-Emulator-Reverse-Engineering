// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0042a270
// entry: 0042a270  size: 305


uint FUN_0042a270(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined1 local_108 [3];
  undefined4 local_105 [65];
  
  uVar2 = 0;
  puVar3 = (undefined4 *)local_108;
  for (iVar1 = 0x41; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined1 *)puVar3 = 0;
  iVar1 = FUN_004299c0(param_1);
  if (iVar1 == 1) {
    iVar1 = FUN_0041bdb0(param_1);
    if (iVar1 < 0) {
      if (iVar1 == -1) {
        return 0x8000;
      }
    }
    else {
      uVar2 = 0xe000;
      FUN_0041bd80(iVar1);
    }
  }
  else {
    if (iVar1 != 3) {
      return 0xfffffffb;
    }
    uVar2 = 0x4000;
    FUN_0042aa50(local_108,param_1,0x105);
    iVar1 = FUN_005542d3(local_108,0x8000);
    if (-1 < iVar1) {
      FUN_005545e3(iVar1);
      uVar2 = 0x6000;
      iVar1 = FUN_005542d3(local_108,0x8001);
      if (iVar1 < 0) {
        uVar2 = 0x7000;
      }
      else {
        FUN_005545e3(iVar1);
      }
    }
    puVar3 = local_105;
    for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    *(undefined2 *)puVar3 = 0;
    iVar1 = FUN_00407240(local_108,&DAT_005be7f4,local_108);
    if (iVar1 < 0) {
      uVar2 = uVar2 | 0x1000;
    }
    else {
      FUN_005545b9(local_108);
    }
    if ((uVar2 & 0x1000) == 0) {
      return uVar2 | 0x8000;
    }
  }
  return uVar2;
}

