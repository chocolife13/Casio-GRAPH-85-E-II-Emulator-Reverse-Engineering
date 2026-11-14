// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0041b590
// entry: 0041b590  size: 383


/* WARNING: Removing unreachable block (ram,0x0041b641) */

uint FUN_0041b590(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined8 uVar6;
  uint local_204;
  undefined1 local_200 [512];
  
  uVar3 = 0x19;
  local_204 = 0;
  if (0xffd < DAT_005d8730) {
    return 0xfffffff4;
  }
  puVar4 = local_200;
  iVar5 = 0x80;
  do {
    FUN_00419f20(puVar4,1,0,0);
    puVar4 = puVar4 + 4;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  if (0x19 < DAT_005d8730) {
    do {
      uVar1 = FUN_00418e50(uVar3);
      if ((int)uVar1 < 0) {
        return uVar1;
      }
      FUN_00419650(0);
      FUN_00419220(&local_204,4);
      if ((local_204 & 0xfff0000) == 0x1300000) {
        iVar5 = (local_204 & 0xffff) - (local_204 & 0x1f);
        FUN_00419f20(local_200 + ((int)(iVar5 + (iVar5 >> 0x1f & 0x1fU)) >> 5) * 4,0,
                     local_204 & 0x1f,1);
      }
      FUN_00418f90();
      uVar3 = uVar3 + 1;
      if (0xffd < uVar3) {
        return 0xfffffffa;
      }
    } while (uVar3 < DAT_005d8730);
  }
  uVar1 = (uint)DAT_005d8730 % 0x7ff;
  if (uVar1 == 0) {
    uVar6 = FUN_0041cb40();
    uVar1 = (uint)((ulonglong)uVar6 >> 0x20);
    if ((int)(uint)uVar6 < 0) {
      return (uint)uVar6;
    }
  }
  uVar2 = 1;
  do {
    uVar6 = FUN_00419f20(local_200 + (uVar2 - (uVar2 & 0x1f) >> 5) * 4,3,
                         CONCAT31((int3)(uVar1 >> 8),(char)uVar2) & 0xffffff1f,0);
    uVar1 = (uint)((ulonglong)uVar6 >> 0x20);
    if ((int)uVar6 == 0) {
      *param_1 = uVar2 | 0xd1300000;
      return (uint)uVar3;
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0xffe);
  return 0xfffffff4;
}

