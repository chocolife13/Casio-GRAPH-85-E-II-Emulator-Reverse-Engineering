// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00420530
// entry: 00420530  size: 821


void FUN_00420530(int param_1,undefined4 param_2)

{
  short sVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  
  if ((char)param_2 == '\0') {
    *(ushort *)(param_1 + 2) =
         CONCAT11((char)*(undefined2 *)(param_1 + 2),
                  (char)((ushort)*(undefined2 *)(param_1 + 2) >> 8));
    *(ushort *)(param_1 + 4) =
         CONCAT11((char)*(undefined2 *)(param_1 + 4),
                  (char)((ushort)*(undefined2 *)(param_1 + 4) >> 8));
    uVar4 = *(uint *)(param_1 + 8);
    *(ushort *)(param_1 + 6) =
         CONCAT11((char)*(undefined2 *)(param_1 + 6),
                  (char)((ushort)*(undefined2 *)(param_1 + 6) >> 8));
    uVar2 = *(uint *)(param_1 + 0xc);
    *(uint *)(param_1 + 8) =
         (uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 0x18 | (uVar4 << 0x10 | uVar4 & 0xff00) << 8;
    *(uint *)(param_1 + 0xc) =
         (uVar2 >> 0x10 & 0xff) << 8 | uVar2 >> 0x18 | (uVar2 << 0x10 | uVar2 & 0xff00) << 8;
  }
  sVar1 = *(short *)(param_1 + 2);
  if (sVar1 != 0) {
    puVar3 = (uint *)(param_1 + 0x10);
    uVar4 = 1;
    iVar5 = param_1 + 0x10 +
            ((int)*(short *)(param_1 + 4) + (int)sVar1 + (int)*(short *)(param_1 + 6)) * 4;
    if (0 < sVar1) {
      do {
        if ((char)param_2 == '\0') {
          uVar2 = *puVar3;
          *puVar3 = (uVar2 >> 0x10 & 0xff) << 8 | uVar2 >> 0x18 |
                    (uVar2 << 0x10 | uVar2 & 0xff00) << 8;
        }
        if (*puVar3 != 0) {
          FUN_00420480(iVar5,(*puVar3 - 0x80) / 0xc);
          iVar5 = iVar5 + *puVar3;
        }
        puVar3 = puVar3 + 1;
        uVar4 = uVar4 + 1;
      } while ((int)(uVar4 & 0xffff) <= (int)*(short *)(param_1 + 2));
    }
  }
  sVar1 = *(short *)(param_1 + 4);
  if (sVar1 != 0) {
    puVar3 = (uint *)(param_1 + 0x10 + *(short *)(param_1 + 2) * 4);
    uVar4 = 1;
    iVar5 = *(int *)(param_1 + 8) + 0x10 +
            ((int)*(short *)(param_1 + 6) + (int)*(short *)(param_1 + 2) + (int)sVar1) * 4 + param_1
    ;
    if (0 < sVar1) {
      do {
        if ((char)param_2 == '\0') {
          uVar2 = *puVar3;
          *puVar3 = (uVar2 >> 0x10 & 0xff) << 8 | uVar2 >> 0x18 |
                    (uVar2 << 0x10 | uVar2 & 0xff00) << 8;
        }
        if (*puVar3 != 0) {
          FUN_00420480(iVar5,(ushort)((short)*puVar3 - 0x80) / 0xc);
          iVar5 = iVar5 + *puVar3;
        }
        puVar3 = puVar3 + 1;
        uVar4 = uVar4 + 1;
      } while ((int)(uVar4 & 0xffff) <= (int)*(short *)(param_1 + 4));
    }
  }
  sVar1 = *(short *)(param_1 + 6);
  if (sVar1 != 0) {
    puVar3 = (uint *)(param_1 + 0x10 +
                     ((int)*(short *)(param_1 + 2) + (int)*(short *)(param_1 + 4)) * 4);
    uVar4 = 1;
    iVar5 = *(int *)(param_1 + 0xc) + 0x10 +
            ((int)*(short *)(param_1 + 2) + (int)*(short *)(param_1 + 4) + (int)sVar1) * 4 +
            *(int *)(param_1 + 8) + param_1;
    if (0 < sVar1) {
      do {
        if ((char)param_2 == '\0') {
          uVar2 = *puVar3;
          *puVar3 = (uVar2 >> 0x10 & 0xff) << 8 | uVar2 >> 0x18 |
                    (uVar2 << 0x10 | uVar2 & 0xff00) << 8;
        }
        if (*puVar3 != 0) {
          FUN_004204a0(iVar5,param_2);
          iVar5 = iVar5 + *puVar3;
        }
        puVar3 = puVar3 + 1;
        uVar4 = uVar4 + 1;
      } while ((int)(uVar4 & 0xffff) <= (int)*(short *)(param_1 + 6));
    }
  }
  if ((char)param_2 == '\x01') {
    iVar5 = 1;
    puVar3 = (uint *)(param_1 + 0x10);
    if (0 < (int)*(short *)(param_1 + 4) + (int)*(short *)(param_1 + 6) +
            (int)*(short *)(param_1 + 2)) {
      do {
        uVar4 = *puVar3;
        iVar5 = iVar5 + 1;
        *puVar3 = (uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 0x18 |
                  (uVar4 << 0x10 | uVar4 & 0xff00) << 8;
        puVar3 = puVar3 + 1;
      } while (iVar5 <= (int)*(short *)(param_1 + 4) + (int)*(short *)(param_1 + 6) +
                        (int)*(short *)(param_1 + 2));
    }
    *(ushort *)(param_1 + 2) =
         CONCAT11((char)*(undefined2 *)(param_1 + 2),
                  (char)((ushort)*(undefined2 *)(param_1 + 2) >> 8));
    *(ushort *)(param_1 + 4) =
         CONCAT11((char)*(undefined2 *)(param_1 + 4),
                  (char)((ushort)*(undefined2 *)(param_1 + 4) >> 8));
    uVar4 = *(uint *)(param_1 + 8);
    *(ushort *)(param_1 + 6) =
         CONCAT11((char)*(undefined2 *)(param_1 + 6),
                  (char)((ushort)*(undefined2 *)(param_1 + 6) >> 8));
    uVar2 = *(uint *)(param_1 + 0xc);
    *(uint *)(param_1 + 8) =
         (uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 0x18 | (uVar4 << 0x10 | uVar4 & 0xff00) << 8;
    *(uint *)(param_1 + 0xc) =
         (uVar2 >> 0x10 & 0xff) << 8 | uVar2 >> 0x18 | (uVar2 << 0x10 | uVar2 & 0xff00) << 8;
  }
  return;
}

