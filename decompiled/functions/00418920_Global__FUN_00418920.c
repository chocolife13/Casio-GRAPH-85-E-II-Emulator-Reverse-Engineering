// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00418920
// entry: 00418920  size: 612


undefined4 FUN_00418920(int param_1)

{
  uint uVar1;
  ushort *puVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined2 extraout_var;
  uint uVar6;
  ushort uVar7;
  uint *puVar8;
  undefined1 local_3c [12];
  int local_30;
  undefined4 local_2c;
  undefined2 local_24;
  uint local_20 [8];
  
  if (0xf < *(ushort *)(param_1 + 0x20e0)) {
    FUN_0041c2f0(0);
    *(undefined2 *)(param_1 + 0x20e0) = 0xf;
  }
  uVar6 = 0;
  puVar2 = (ushort *)(param_1 + 0x2138);
  iVar3 = 2;
  do {
    uVar7 = *puVar2;
    puVar2 = puVar2 + 1;
    uVar6 = uVar6 + uVar7;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  if (0x7ff < uVar6) {
    uVar6 = 0x7ff;
  }
  uVar7 = 0;
  *(int *)(param_1 + 0x1010) = DAT_0057daac;
  if (uVar6 != 0) {
    uVar1 = 0;
    do {
      iVar3 = FUN_004197b0((&DAT_0057daac)[*(ushort *)(param_1 + 0x100c)] + uVar1 * 0x20,local_20,
                           0x20);
      if (iVar3 != 0x20) {
        return 0xffffffe1;
      }
      FUN_00414f80(local_20,local_3c);
      if (uVar7 < 0x19) {
        if (uVar7 == 0) {
          local_30 = 0xff0001;
          *(undefined4 *)(param_1 + 0x207c) = 0xff0001;
        }
        else if (local_30 == 0xff0002) {
          local_30 = -1;
        }
        local_2c = 0xffffffff;
        local_24 = 0xffff;
      }
      FUN_00415070(local_20,local_3c);
      iVar3 = FUN_004197f0(*(undefined4 *)(param_1 + 0x1010),local_20,0x20);
      if (iVar3 != 0x20) {
        return 0xffffffe1;
      }
      uVar7 = uVar7 + 1;
      *(int *)(param_1 + 0x1010) = *(int *)(param_1 + 0x1010) + 0x20;
      uVar1 = (uint)uVar7;
    } while (uVar1 < uVar6);
  }
  iVar5 = 2;
  puVar8 = local_20;
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar8 = 0xffffffff;
    puVar8 = puVar8 + 1;
  }
  local_20[0] = 0x1000001;
  uVar6 = 0;
  puVar2 = (ushort *)(param_1 + 0x2138);
  do {
    uVar7 = *puVar2;
    puVar2 = puVar2 + 1;
    uVar6 = uVar6 + uVar7;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  if (0x7ff < uVar6) {
    uVar6 = (&DAT_0057daac)[*(ushort *)(param_1 + 0x100c)];
    local_20[1] = (uVar6 & 0xff00 | uVar6 << 0x10) << 8 | (uVar6 & 0xff0000 | uVar6 >> 0x10) >> 8;
  }
  iVar3 = FUN_004197f0(DAT_0057daac + 0xffe0,local_20,0x20);
  if (iVar3 != 0x20) {
    return 0xffffffe1;
  }
  FUN_0041c2f0(CONCAT22(extraout_var,*(undefined2 *)(param_1 + 0x100c)));
  uVar6 = 0;
  puVar2 = (ushort *)(param_1 + 0x2138);
  iVar3 = 2;
  do {
    uVar7 = *puVar2;
    puVar2 = puVar2 + 1;
    uVar6 = uVar6 + uVar7;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  if (uVar6 < 0x800) {
    iVar3 = FUN_00417630(param_1);
    if (iVar3 != 0xb) {
      return 0xfffffffa;
    }
    if (*(short *)(param_1 + 0x213a) == 0) {
      iVar3 = 0;
      piVar4 = (int *)(param_1 + 0x2018);
      while (*piVar4 != 0xff0002) {
        iVar3 = iVar3 + 1;
        piVar4 = piVar4 + 1;
        if (0x18 < iVar3) {
          return 0;
        }
      }
      FUN_0041c2f0(iVar3);
    }
    return 0;
  }
  return 0xb;
}

