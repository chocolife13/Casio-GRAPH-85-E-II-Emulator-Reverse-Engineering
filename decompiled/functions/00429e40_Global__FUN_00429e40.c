// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00429e40
// entry: 00429e40  size: 367


int FUN_00429e40(undefined4 param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 local_108 [66];
  
  uVar4 = 0;
  if (param_3 != (undefined4 *)0x0) {
    uVar4 = *param_3;
  }
  puVar1 = local_108;
  for (iVar3 = 0x41; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  *(undefined1 *)puVar1 = 0;
  iVar3 = FUN_004299c0(param_1);
  if (iVar3 != 1) {
    if (iVar3 != 3) {
      return -5;
    }
    FUN_0042aa50(local_108,param_1,0x105);
    iVar3 = FUN_005542d3(local_108,0x8502,0x180);
    if (iVar3 < 0) {
      if (param_2 != 5) {
        iVar3 = FUN_00429930();
        return iVar3;
      }
      puVar1 = (undefined4 *)FUN_005542c1();
      switch(*puVar1) {
      case 2:
        return -3;
      case 0xd:
        return -0xe;
      case 0x11:
        return -0xd;
      case 0x16:
        return -2;
      case 0x18:
        return -8;
      }
    }
    else {
      iVar3 = FUN_005545e3(iVar3);
      if (iVar3 < 0) {
        piVar2 = (int *)FUN_005542c1();
        iVar3 = (-(uint)(*piVar2 != 9) & 0xffffffe3) - 2;
      }
    }
    return iVar3;
  }
  iVar3 = FUN_0042ac10(param_1,0x20);
  if (iVar3 != 0) {
    return -3;
  }
  iVar3 = FUN_0041d620(param_1,param_2,uVar4);
  return iVar3;
}

