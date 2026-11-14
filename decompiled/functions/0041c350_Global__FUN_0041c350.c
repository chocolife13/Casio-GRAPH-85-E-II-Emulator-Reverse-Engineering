// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0041c350
// entry: 0041c350  size: 402


int FUN_0041c350(uint param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  ushort uVar7;
  uint local_4;
  
  uVar7 = 0;
  local_4 = 0xffffffff;
  uVar5 = 0xffffffff;
  uVar6 = 0xffffffff;
  iVar1 = FUN_00418e50(0);
  if (iVar1 < 0) {
    return iVar1;
  }
  while( true ) {
    FUN_00419650(0);
    FUN_00419220(&local_4,4);
    if ((local_4 & 0xfff0000) != 0x2000000) break;
    FUN_00419650(8);
    FUN_00419220(&local_4,4);
    if ((local_4 & 0xffff0000) == 0xffff0000) {
      FUN_00419650(0xc);
      FUN_00419220(&local_4,4);
      if ((local_4 & 0xffff0000) == 0xffff0000) {
        FUN_00419650(0x10);
        FUN_00419220(&local_4,4);
        if (local_4 < uVar5) {
          uVar6 = (uint)uVar7;
          uVar5 = local_4;
        }
      }
    }
    FUN_00418f90();
    uVar7 = uVar7 + 1;
    if (0x18 < uVar7) {
      iVar1 = -4;
      if (uVar6 == 0xffffffff) goto LAB_0041c4d6;
      iVar2 = FUN_00418e50(uVar6);
      if (iVar2 < 0) {
        return iVar2;
      }
      FUN_00419650(4);
      FUN_00419220(&local_4,4);
      iVar4 = 0;
      puVar3 = &DAT_0057ddf4;
      goto LAB_0041c47f;
    }
    iVar1 = FUN_00418e50(uVar7);
    if (iVar1 < 0) {
      return iVar1;
    }
  }
  goto LAB_0041c497;
  while( true ) {
    puVar3 = puVar3 + 1;
    iVar4 = iVar4 + 1;
    iVar1 = iVar2;
    if (0x57de57 < (int)puVar3) break;
LAB_0041c47f:
    iVar1 = iVar4;
    if (local_4 == *puVar3) break;
  }
  if (iVar4 != 0x19) {
    param_1 = param_1 | param_2;
    FUN_00419700(8);
    FUN_004193e0(&param_1,4);
    FUN_00419120();
    FUN_00418f90();
LAB_0041c4d6:
    FUN_00418f90();
    return iVar1;
  }
LAB_0041c497:
  FUN_00418f90();
  return -6;
}

