// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004c53d0
// entry: 004c53d0  size: 521


undefined4 FUN_004c53d0(int *param_1,int *param_2,ushort param_3,int *param_4)

{
  int iVar1;
  char *pcVar2;
  undefined4 *puVar3;
  byte bVar4;
  byte bVar5;
  ushort uVar6;
  uint local_c;
  
  uVar6 = 0;
  local_c = 0;
  if (param_3 == 0) {
    return 3;
  }
  *param_4 = 0;
  if (param_3 != 0) {
    do {
      iVar1 = FUN_0052f820();
      if (iVar1 != 0) {
        return 1;
      }
      pcVar2 = (char *)(*param_1 + (uint)uVar6 * 0xc);
      puVar3 = (undefined4 *)((uint)uVar6 * 0xc + *param_2);
      if (*pcVar2 == '\0') {
        *puVar3 = *(undefined4 *)pcVar2;
        puVar3[1] = *(undefined4 *)(pcVar2 + 4);
        puVar3[2] = *(undefined4 *)(pcVar2 + 8);
      }
      else {
        if (*pcVar2 != '\x10') {
          return 3;
        }
        bVar4 = (byte)pcVar2[1] >> 4;
        if (4 < bVar4) {
          return 3;
        }
        bVar5 = (byte)pcVar2[1] >> 5;
        if ((byte)(pcVar2[(byte)(bVar5 + 2)] & (-((bVar4 & 1) != 0) & 0x10U) - 1) != 0) {
          return 3;
        }
        for (bVar5 = bVar5 + 3; bVar5 < 9; bVar5 = bVar5 + 1) {
          if (pcVar2[bVar5] != '\0') {
            return 3;
          }
        }
        *puVar3 = *(undefined4 *)pcVar2;
        puVar3[1] = *(undefined4 *)(pcVar2 + 4);
        puVar3[2] = *(undefined4 *)(pcVar2 + 8);
        bVar4 = pcVar2[1];
        switch(bVar4 >> 4) {
        case 0:
          local_c = bVar4 & 0xf;
          break;
        case 1:
          local_c = (uint)((byte)pcVar2[2] >> 4) + (bVar4 & 0xf) * 10;
          break;
        case 2:
          local_c = ((byte)pcVar2[2] & 0xf) +
                    ((uint)((byte)pcVar2[2] >> 4) + (bVar4 & 0xf) * 10) * 10;
          break;
        case 3:
          local_c = (uint)((byte)pcVar2[3] >> 4) +
                    (((byte)pcVar2[2] & 0xf) +
                    ((uint)((byte)pcVar2[2] >> 4) + (bVar4 & 0xf) * 10) * 10) * 10;
          break;
        case 4:
          local_c = ((byte)pcVar2[3] & 0xf) +
                    ((uint)((byte)pcVar2[3] >> 4) +
                    (((byte)pcVar2[2] & 0xf) +
                    ((uint)((byte)pcVar2[2] >> 4) + (bVar4 & 0xf) * 10) * 10) * 10) * 10;
        }
        if ((local_c & 0xffff0000) != 0) {
          return 3;
        }
        *param_4 = *param_4 + local_c;
        *(char *)((int)puVar3 + 7) = (char)(local_c >> 8);
        *(char *)(puVar3 + 2) = (char)local_c;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < param_3);
  }
  return 0;
}

