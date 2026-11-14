// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005334d0
// entry: 005334d0  size: 124


uint FUN_005334d0(int param_1,byte param_2)

{
  char cVar1;
  short sVar2;
  undefined4 uVar3;
  ushort uVar6;
  uint uVar4;
  uint uVar5;
  byte bVar7;
  ushort uVar8;
  
  uVar3 = FUN_00533160(param_1);
  uVar6 = (ushort)((uint)uVar3 >> 0x10);
  if ((char)uVar3 != '\a') {
    return (uint)uVar6 << 0x10;
  }
  if (0x14 < param_2) {
    return (uint)uVar6 << 0x10;
  }
  bVar7 = 0;
  uVar6 = 3;
  uVar4 = param_1 + 3;
  uVar8 = 3;
  if (param_2 != 0) {
    do {
      if ((bVar7 != 0) && (uVar5 = uVar4, *(char *)(uVar4 - 1) != '\x1c')) goto LAB_0053353e;
      sVar2 = FUN_005332e0(uVar4);
      uVar6 = uVar8 + 1 + sVar2;
      uVar4 = (uint)uVar6 + param_1;
      bVar7 = bVar7 + 1;
      uVar8 = uVar6;
    } while (bVar7 < param_2);
  }
  cVar1 = *(char *)(uVar4 - 1);
  uVar5 = CONCAT31((int3)(uVar4 >> 8),cVar1);
  if ((cVar1 == -0x7c) || (cVar1 == '\x1c')) {
    return CONCAT22((short)(uVar4 >> 0x10),uVar6);
  }
LAB_0053353e:
  return uVar5 & 0xffff0000;
}

