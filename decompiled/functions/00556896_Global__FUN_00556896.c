// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00556896
// entry: 00556896  size: 389


void FUN_00556896(void)

{
  BOOL BVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ushort *puVar6;
  undefined1 uVar7;
  BYTE *pBVar8;
  undefined4 *puVar9;
  ushort local_518 [256];
  undefined1 local_318 [256];
  undefined1 local_218 [256];
  undefined4 local_118 [64];
  _cpinfo local_18;
  
  BVar1 = GetCPInfo(DAT_005da6e4,&local_18);
  if (BVar1 == 1) {
    uVar2 = 0;
    do {
      *(char *)((int)local_118 + uVar2) = (char)uVar2;
      uVar2 = uVar2 + 1;
    } while (uVar2 < 0x100);
    local_118[0]._0_1_ = 0x20;
    if (local_18.LeadByte[0] != 0) {
      pBVar8 = local_18.LeadByte + 1;
      do {
        uVar2 = (uint)local_18.LeadByte[0];
        if (uVar2 <= *pBVar8) {
          uVar4 = (*pBVar8 - uVar2) + 1;
          puVar9 = (undefined4 *)((int)local_118 + uVar2);
          for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
            *puVar9 = 0x20202020;
            puVar9 = puVar9 + 1;
          }
          for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
            *(undefined1 *)puVar9 = 0x20;
            puVar9 = (undefined4 *)((int)puVar9 + 1);
          }
        }
        local_18.LeadByte[0] = pBVar8[1];
        pBVar8 = pBVar8 + 2;
      } while (local_18.LeadByte[0] != 0);
    }
    FUN_0055b622(1,local_118,0x100,local_518,DAT_005da6e4,DAT_005da904,0);
    FUN_0055adda(DAT_005da904,0x100,local_118,0x100,local_218,0x100,DAT_005da6e4,0);
    FUN_0055adda(DAT_005da904,0x200,local_118,0x100,local_318,0x100,DAT_005da6e4,0);
    uVar2 = 0;
    puVar6 = local_518;
    do {
      if ((*puVar6 & 1) == 0) {
        if ((*puVar6 & 2) != 0) {
          (&DAT_005da801)[uVar2] = (&DAT_005da801)[uVar2] | 0x20;
          uVar7 = local_318[uVar2];
          goto LAB_005569a2;
        }
        (&DAT_005da700)[uVar2] = 0;
      }
      else {
        (&DAT_005da801)[uVar2] = (&DAT_005da801)[uVar2] | 0x10;
        uVar7 = local_218[uVar2];
LAB_005569a2:
        (&DAT_005da700)[uVar2] = uVar7;
      }
      uVar2 = uVar2 + 1;
      puVar6 = puVar6 + 1;
    } while (uVar2 < 0x100);
  }
  else {
    uVar2 = 0;
    do {
      if ((uVar2 < 0x41) || (0x5a < uVar2)) {
        if ((0x60 < uVar2) && (uVar2 < 0x7b)) {
          (&DAT_005da801)[uVar2] = (&DAT_005da801)[uVar2] | 0x20;
          cVar3 = (char)uVar2 + -0x20;
          goto LAB_005569ec;
        }
        (&DAT_005da700)[uVar2] = 0;
      }
      else {
        (&DAT_005da801)[uVar2] = (&DAT_005da801)[uVar2] | 0x10;
        cVar3 = (char)uVar2 + ' ';
LAB_005569ec:
        (&DAT_005da700)[uVar2] = cVar3;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < 0x100);
  }
  return;
}

