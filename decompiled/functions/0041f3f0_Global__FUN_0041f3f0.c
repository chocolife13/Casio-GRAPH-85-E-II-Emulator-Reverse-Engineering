// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0041f3f0
// entry: 0041f3f0  size: 370


uint FUN_0041f3f0(undefined4 param_1,uint param_2)

{
  undefined2 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  
  if ((int)param_2 < 1) {
    return 0xfffffffe;
  }
  uVar1 = FUN_0041a0e0(param_1,1,0);
  uVar2 = FUN_0041f120(param_1,uVar1);
  if ((int)uVar2 < 0) {
    return uVar2;
  }
  if ((int)uVar2 < (int)param_2) {
    return 0xfffffffc;
  }
  uVar3 = uVar2 & 0x8000ffff;
  if ((int)uVar3 < 0) {
    uVar3 = (uVar3 - 1 | 0xffff0000) + 1;
  }
  if (uVar3 == 0) {
    uVar3 = param_2 & 0x8000ffff;
    bVar5 = uVar3 == 0;
    if ((int)uVar3 < 0) {
      bVar5 = (uVar3 - 1 | 0xffff0000) == 0xffffffff;
    }
    uVar3 = param_2;
    if (bVar5) {
      uVar3 = ((int)(param_2 + ((int)param_2 >> 0x1f & 0xffffU)) >> 0x10) + 1 + (uint)DAT_005d8730;
      goto LAB_0041f4ec;
    }
  }
  else {
    if ((int)param_2 <= (int)uVar3) {
      uVar3 = DAT_005d8730 + 2;
      goto LAB_0041f4ec;
    }
    uVar3 = param_2 - uVar3;
    uVar4 = uVar3 & 0x8000ffff;
    if ((int)uVar4 < 0) {
      uVar4 = (uVar4 - 1 | 0xffff0000) + 1;
    }
    if (uVar4 != 0) {
      uVar3 = ((int)(uVar3 + ((int)uVar3 >> 0x1f & 0xffffU)) >> 0x10) + 3 + (uint)DAT_005d8730;
      goto LAB_0041f4ec;
    }
  }
  uVar3 = ((int)(uVar3 + ((int)uVar3 >> 0x1f & 0xffffU)) >> 0x10) + 2 + (uint)DAT_005d8730;
LAB_0041f4ec:
  if ((uint)((int)(DAT_005d8730 - 1) / 0x7ff) < (uVar3 - 1) / 0x7ff) {
    if (0xffe < uVar3) {
      return 0xfffffff4;
    }
    if ((int)(uVar2 + ((int)uVar2 >> 0x1f & 0xffffU)) >> 0x10 == 0) {
      return 0xfffffff4;
    }
    if ((int)(uVar2 - 0x10000) < (int)param_2) {
      return 0xfffffffc;
    }
  }
  return 0;
}

