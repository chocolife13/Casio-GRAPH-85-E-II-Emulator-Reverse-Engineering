// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004209d0
// entry: 004209d0  size: 775


int FUN_004209d0(uint *param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  uint *puVar6;
  uint local_4;
  
  if (*param_1 == 0) {
    return 4;
  }
  if ((char)param_2 == '\0') {
    uVar2 = param_1[1];
    uVar3 = param_1[2];
    param_1[1] = (uVar2 & 0xff0000 | uVar2 >> 0x10) >> 8 | (uVar2 << 0x10 | uVar2 & 0xff00) << 8;
    param_1[2] = (uVar3 & 0xff0000 | uVar3 >> 0x10) >> 8 | (uVar3 << 0x10 | uVar3 & 0xff00) << 8;
    *(ushort *)(param_1 + 3) =
         CONCAT11((char)(short)param_1[3],(char)((ushort)(short)param_1[3] >> 8));
    *(ushort *)((int)param_1 + 0xe) =
         CONCAT11((char)*(undefined2 *)((int)param_1 + 0xe),
                  (char)((ushort)*(undefined2 *)((int)param_1 + 0xe) >> 8));
  }
  uVar2 = *param_1;
  *param_1 = (uVar2 >> 0x10 & 0xff) << 8 | uVar2 >> 0x18 | (uVar2 << 0x10 | uVar2 & 0xff00) << 8;
  if ((ushort)param_1[3] != 0) {
    local_4 = (uint)(ushort)param_1[3];
    iVar5 = (int)param_1 + param_1[2] + 0x14;
    do {
      if ((char)param_2 == '\0') {
        uVar2 = *(uint *)(iVar5 + 0xc);
        *(ushort *)(iVar5 + 10) =
             CONCAT11((char)*(undefined2 *)(iVar5 + 10),
                      (char)((ushort)*(undefined2 *)(iVar5 + 10) >> 8));
        *(uint *)(iVar5 + 0xc) =
             (uVar2 & 0xff0000 | uVar2 >> 0x10) >> 8 | (uVar2 << 0x10 | uVar2 & 0xff00) << 8;
      }
      if (*(ushort *)(iVar5 + 10) != 0) {
        uVar2 = (uint)*(ushort *)(iVar5 + 10);
        puVar6 = (uint *)(iVar5 + 0x18);
        do {
          uVar3 = CONCAT31((int3)(uVar2 >> 8),(char)param_2);
          if ((char)param_2 == '\0') {
            uVar3 = *puVar6;
            uVar1 = puVar6[1];
            *puVar6 = (uVar3 << 0x10 | uVar3 & 0xff00) << 8 |
                      (uVar3 & 0xff0000 | uVar3 >> 0x10) >> 8;
            uVar3 = uVar1 & 0xff00;
            puVar6[1] = (uVar1 & 0xff0000 | uVar1 >> 0x10) >> 8 | (uVar1 << 0x10 | uVar3) << 8;
          }
          uVar1 = *puVar6;
          uVar4 = FUN_004215f0(iVar5,puVar6 + -2,CONCAT31((int3)(uVar3 >> 8),(char)puVar6[2]));
          FUN_00421250(uVar1 + iVar5 + 0x10,uVar4,param_2);
          if ((char)param_2 == '\x01') {
            uVar3 = *puVar6;
            uVar1 = puVar6[1];
            *puVar6 = (uVar3 & 0xff0000 | uVar3 >> 0x10) >> 8 |
                      (uVar3 << 0x10 | uVar3 & 0xff00) << 8;
            puVar6[1] = (uVar1 & 0xff0000 | uVar1 >> 0x10) >> 8 |
                        (uVar1 << 0x10 | uVar1 & 0xff00) << 8;
          }
          puVar6 = puVar6 + 5;
          uVar2 = uVar2 - 1;
        } while (uVar2 != 0);
      }
      uVar2 = *(uint *)(iVar5 + 0xc);
      if ((char)param_2 == '\x01') {
        *(ushort *)(iVar5 + 10) =
             CONCAT11((char)*(undefined2 *)(iVar5 + 10),
                      (char)((ushort)*(undefined2 *)(iVar5 + 10) >> 8));
        *(uint *)(iVar5 + 0xc) =
             (uVar2 & 0xff0000 | uVar2 >> 0x10) >> 8 | (uVar2 << 0x10 | uVar2 & 0xff00) << 8;
      }
      local_4 = local_4 - 1;
      iVar5 = iVar5 + 0x10 + uVar2;
    } while (local_4 != 0);
  }
  if ((char)param_2 != '\x01') {
    return param_1[1] + 4;
  }
  uVar2 = param_1[1];
  param_1[1] = (uVar2 & 0xff0000 | uVar2 >> 0x10) >> 8 | (uVar2 << 0x10 | uVar2 & 0xff00) << 8;
  uVar3 = param_1[2];
  param_1[2] = (uVar3 & 0xff0000 | uVar3 >> 0x10) >> 8 | (uVar3 << 0x10 | uVar3 & 0xff00) << 8;
  *(ushort *)(param_1 + 3) =
       CONCAT11((char)(short)param_1[3],(char)((ushort)(short)param_1[3] >> 8));
  *(ushort *)((int)param_1 + 0xe) =
       CONCAT11((char)*(undefined2 *)((int)param_1 + 0xe),
                (char)((ushort)*(undefined2 *)((int)param_1 + 0xe) >> 8));
  return uVar2 + 4;
}

