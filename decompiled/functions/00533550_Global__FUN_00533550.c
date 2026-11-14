// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00533550
// entry: 00533550  size: 196


uint FUN_00533550(int param_1,byte param_2,byte param_3)

{
  char cVar1;
  short sVar2;
  char *pcVar3;
  char *pcVar4;
  byte bVar5;
  ushort uVar6;
  
  pcVar3 = (char *)FUN_00533160(param_1);
  if ((((char)pcVar3 == '\b') && (param_2 < 7)) && (param_3 < 7)) {
    bVar5 = 0;
    uVar6 = 3;
    pcVar3 = (char *)(param_1 + 3);
    if (param_2 != 0) {
      do {
        if (*pcVar3 != -0x5c) goto LAB_0053360d;
        sVar2 = FUN_005336e0(pcVar3,0);
        uVar6 = uVar6 + 1 + sVar2;
        pcVar3 = (char *)((uint)uVar6 + param_1);
        bVar5 = bVar5 + 1;
      } while (bVar5 < param_2);
    }
    if (*pcVar3 == -0x5c) {
      uVar6 = uVar6 + 1;
      bVar5 = 0;
      pcVar4 = (char *)((uint)uVar6 + param_1);
      if (param_3 != 0) {
        do {
          if ((bVar5 != 0) && (pcVar3 = pcVar4, pcVar4[-1] != '\x1c')) goto LAB_0053360d;
          sVar2 = FUN_005332e0(pcVar4);
          uVar6 = uVar6 + 1 + sVar2;
          pcVar4 = (char *)((uint)uVar6 + param_1);
          bVar5 = bVar5 + 1;
        } while (bVar5 < param_3);
      }
      cVar1 = pcVar4[-1];
      pcVar3 = (char *)CONCAT31((int3)((uint)pcVar4 >> 8),cVar1);
      if ((cVar1 == -0x5c) || (cVar1 == '\x1c')) {
        return CONCAT22((short)((uint)pcVar4 >> 0x10),uVar6);
      }
    }
  }
LAB_0053360d:
  return (uint)pcVar3 & 0xffff0000;
}

