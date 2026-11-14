// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00567c33
// entry: 00567c33  size: 184


int FUN_00567c33(uint *param_1)

{
  int iVar1;
  int iVar2;
  ushort *puVar3;
  ushort uVar4;
  uint uVar5;
  bool bVar6;
  
  bVar6 = *(short *)((int)param_1 + 2) == -1;
  iVar1 = FUN_00567bdd(param_1);
  if (*(short *)((int)param_1 + 2) == -1) {
    uVar5 = param_1[3];
  }
  else {
    uVar5 = *param_1;
  }
  if ((uVar5 & 0x40) != 0) {
    iVar1 = iVar1 + ((-(uint)bVar6 & 2) + 1) * 2;
    iVar2 = FUN_00555fd0(iVar1);
    iVar1 = iVar1 + 2 + iVar2 * 2;
  }
  if (bVar6) {
    uVar4 = (ushort)param_1[4];
  }
  else {
    uVar4 = (ushort)param_1[2];
  }
  if (uVar4 != 0) {
    uVar5 = (uint)uVar4;
    do {
      puVar3 = (ushort *)((iVar1 + 3U & 0xfffffffc) + (-(uint)bVar6 & 6) + 0x12);
      uVar4 = *puVar3;
      if (uVar4 == 0xffff) {
        puVar3 = puVar3 + 2;
      }
      else {
        while (puVar3 = puVar3 + 1, uVar4 != 0) {
          uVar4 = *puVar3;
        }
      }
      uVar4 = *puVar3;
      if (uVar4 == 0xffff) {
        puVar3 = puVar3 + 2;
      }
      else {
        while (puVar3 = puVar3 + 1, uVar4 != 0) {
          uVar4 = *puVar3;
        }
      }
      uVar5 = uVar5 - 1;
      iVar1 = (int)puVar3 + *puVar3 + 2;
    } while (uVar5 != 0);
  }
  return iVar1 - (int)param_1;
}

