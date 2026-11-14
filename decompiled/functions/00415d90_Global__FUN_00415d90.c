// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00415d90
// entry: 00415d90  size: 1014


int FUN_00415d90(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  ushort uVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint local_40;
  undefined1 local_3c [12];
  undefined4 local_30;
  int local_2c;
  undefined4 local_24;
  undefined1 local_20 [32];
  
  puVar1 = param_1;
  *param_1 = 0;
  *(undefined2 *)(param_1 + 1) = 0;
  *(undefined2 *)((int)param_1 + 6) = 0xffff;
  *(undefined2 *)(param_1 + 2) = 0;
  puVar6 = param_1 + 3;
  iVar4 = 0x400;
  do {
    FUN_00419f20(puVar6,1,0,0);
    puVar6 = puVar6 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  *(undefined2 *)(puVar1 + 0x403) = 0xffff;
  puVar1[0x404] = 0;
  puVar6 = puVar1 + 0x405;
  iVar4 = 0x400;
  do {
    FUN_00419f20(puVar6,1,0,0);
    puVar6 = puVar6 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  *(undefined2 *)(puVar1 + 0x805) = 1;
  puVar6 = puVar1 + 0x806;
  for (iVar4 = 0x19; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = 0xffffffff;
    puVar6 = puVar6 + 1;
  }
  puVar6 = puVar1 + 0x81f;
  for (iVar4 = 0x19; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = 0xffffffff;
    puVar6 = puVar6 + 1;
  }
  puVar6 = puVar1 + 0x838;
  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = 0xffffffff;
    puVar6 = puVar6 + 1;
  }
  *(undefined2 *)puVar6 = 0xffff;
  puVar1[0x84e] = 0;
  puVar1[0x84f] = 0xffffffff;
  *(undefined2 *)(puVar1 + 0x845) = 0xffff;
  iVar4 = FUN_00415230(puVar1);
  if (iVar4 < 1) {
    uVar7 = 0;
    do {
      iVar4 = FUN_0041a750(uVar7,local_3c);
      if (iVar4 < 0) {
        return iVar4;
      }
      uVar3 = uVar7 & 0xffff;
      puVar1[uVar3 + 0x806] = local_30;
      puVar1[uVar3 + 0x81f] = local_2c;
      *(short *)((int)puVar1 + uVar3 * 2 + 0x20e0) = (short)local_24;
      if (local_2c == 0xfffffff) {
        *(short *)(puVar1 + 0x403) = (short)uVar7;
      }
      if ((short)local_24 == 0xfff) {
        *(short *)((int)puVar1 + 6) = (short)uVar7;
      }
      uVar7 = uVar7 + 1;
    } while ((ushort)uVar7 < 0x19);
    iVar4 = FUN_00418cd0(1);
    if (-1 < iVar4) {
      FUN_00419650(0xc);
      FUN_00419220(&param_1,2);
      FUN_00418f90();
      if ((short)param_1 == 0xfff) {
        iVar4 = FUN_00415160();
        if (iVar4 == 0x753e) {
          return -6;
        }
        *(undefined2 *)(puVar1 + 0x805) = 0x19;
        do {
          uVar5 = 0;
          do {
            if (puVar1[uVar5 + 0x81f] == (uint)*(ushort *)(puVar1 + 0x805)) {
              *(ushort *)(puVar1 + 0x805) = *(ushort *)(puVar1 + 0x805) + 1;
              break;
            }
            uVar5 = uVar5 + 1;
          } while (uVar5 < 0x19);
        } while ((uVar5 == 0x19) &&
                (*(short *)(puVar1 + 0x805) = *(short *)(puVar1 + 0x805) + -1,
                *(short *)(puVar1 + 0x805) != 0));
        if (*(short *)(puVar1 + 0x805) == 0) {
          *(undefined2 *)(puVar1 + 0x805) = 1;
        }
        if (0x18 < *(ushort *)((int)puVar1 + 6)) {
          return -6;
        }
        if ((puVar1[*(ushort *)((int)puVar1 + 6) + 0x806] & 0xffff0000) == 0) {
          iVar4 = FUN_00415640(puVar1);
          return iVar4;
        }
        if ((puVar1[*(ushort *)((int)puVar1 + 6) + 0x806] & 0xffff0000) == 0xff0000) {
          FUN_0041c2f0(CONCAT22(0xff,*(undefined2 *)(puVar1 + 0x403)));
          return 9;
        }
      }
      iVar4 = 0;
    }
  }
  else {
    iVar2 = FUN_00415160();
    if (iVar2 == 0x753e) {
      return -6;
    }
    if (iVar4 == 1) {
      uVar5 = 0;
      while( true ) {
        iVar4 = FUN_004197b0((&DAT_0057daac)[uVar5] + 0xffe0,&local_40,4);
        if (iVar4 != 4) {
          return -0x1f;
        }
        local_40 = (local_40 & 0xff0000 | local_40 >> 0x10) >> 8 |
                   (local_40 & 0xff00 | local_40 << 0x10) << 8;
        if (local_40 == 0x1000001) break;
        uVar5 = uVar5 + 1;
        if (0x18 < uVar5) {
          return -6;
        }
      }
      *(ushort *)(puVar1 + 0x403) = uVar5;
      uVar5 = 0;
      local_40 = 0x1000001;
      do {
        uVar7 = (uint)uVar5;
        iVar4 = FUN_004197b0((&DAT_0057daac)[*(ushort *)(puVar1 + 0x403)] + uVar7 * 0x20,local_20,
                             0x20);
        if (iVar4 != 0x20) {
          return -0x1f;
        }
        FUN_00414f80(local_20,local_3c);
        puVar1[uVar7 + 0x806] = local_30;
        puVar1[uVar7 + 0x81f] = local_2c;
        *(short *)((int)puVar1 + uVar7 * 2 + 0x20e0) = (short)local_24;
        if ((short)local_24 == 0xfff) {
          *(ushort *)((int)puVar1 + 6) = uVar5;
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < 0x19);
      *(undefined2 *)(puVar1 + 0x838) = 0xff;
      return 0xe;
    }
    uVar7 = 0;
    while (iVar4 = FUN_0041a750(uVar7,local_3c), -1 < iVar4) {
      uVar3 = uVar7 & 0xffff;
      puVar1[uVar3 + 0x806] = local_30;
      puVar1[uVar3 + 0x81f] = local_2c;
      *(short *)((int)puVar1 + uVar3 * 2 + 0x20e0) = (short)local_24;
      if (local_2c == 0xfffffff) {
        *(short *)(puVar1 + 0x403) = (short)uVar7;
      }
      if ((short)local_24 == 0xfff) {
        *(short *)((int)puVar1 + 6) = (short)uVar7;
      }
      uVar7 = uVar7 + 1;
      if (0x18 < (ushort)uVar7) {
        iVar4 = FUN_00415880(puVar1);
        return iVar4;
      }
    }
  }
  return iVar4;
}

