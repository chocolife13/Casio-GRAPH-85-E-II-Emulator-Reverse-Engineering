// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00420d60
// entry: 00420d60  size: 444


void FUN_00420d60(uint param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  char cVar4;
  uint *puVar5;
  uint local_4;
  
  if (*(ushort *)(param_1 + 8) != 0) {
    local_4 = (uint)*(ushort *)(param_1 + 8);
    do {
      cVar4 = (char)param_3;
      if (cVar4 == '\0') {
        uVar1 = *(uint *)(param_2 + 0xc);
        *(ushort *)(param_2 + 10) =
             CONCAT11((char)*(undefined2 *)(param_2 + 10),
                      (char)((ushort)*(undefined2 *)(param_2 + 10) >> 8));
        *(uint *)(param_2 + 0xc) =
             (uVar1 & 0xff0000 | uVar1 >> 0x10) >> 8 | (uVar1 << 0x10 | uVar1 & 0xff00) << 8;
      }
      if (*(ushort *)(param_2 + 10) != 0) {
        puVar5 = (uint *)(param_2 + 0x18);
        param_1 = (uint)*(ushort *)(param_2 + 10);
        do {
          if (cVar4 == '\0') {
            uVar1 = *puVar5;
            uVar2 = puVar5[1];
            *puVar5 = (uVar1 & 0xff0000 | uVar1 >> 0x10) >> 8 |
                      (uVar1 << 0x10 | uVar1 & 0xff00) << 8;
            puVar5[1] = (uVar2 & 0xff0000 | uVar2 >> 0x10) >> 8 |
                        (uVar2 << 0x10 | uVar2 & 0xff00) << 8;
          }
          uVar1 = *puVar5;
          uVar3 = FUN_004215f0(param_2,puVar5 + -2,(char)puVar5[2]);
          FUN_00421250(uVar1 + param_2 + 0x10,uVar3,param_3);
          if (cVar4 == '\x01') {
            uVar1 = *puVar5;
            uVar2 = puVar5[1];
            *puVar5 = (uVar1 & 0xff0000 | uVar1 >> 0x10) >> 8 |
                      (uVar1 << 0x10 | uVar1 & 0xff00) << 8;
            puVar5[1] = (uVar2 & 0xff0000 | uVar2 >> 0x10) >> 8 |
                        (uVar2 << 0x10 | uVar2 & 0xff00) << 8;
          }
          puVar5 = puVar5 + 5;
          param_1 = param_1 - 1;
        } while (param_1 != 0);
      }
      uVar1 = *(uint *)(param_2 + 0xc);
      if (cVar4 == '\x01') {
        *(ushort *)(param_2 + 10) =
             CONCAT11((char)*(undefined2 *)(param_2 + 10),
                      (char)((ushort)*(undefined2 *)(param_2 + 10) >> 8));
        *(uint *)(param_2 + 0xc) =
             (uVar1 & 0xff0000 | uVar1 >> 0x10) >> 8 | (uVar1 << 0x10 | uVar1 & 0xff00) << 8;
      }
      local_4 = local_4 - 1;
      param_2 = param_2 + 0x10 + uVar1;
    } while (local_4 != 0);
  }
  return;
}

