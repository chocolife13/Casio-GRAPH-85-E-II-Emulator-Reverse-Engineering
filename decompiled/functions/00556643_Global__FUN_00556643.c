// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00556643
// entry: 00556643  size: 429


undefined4 FUN_00556643(undefined4 param_1)

{
  BYTE *pBVar1;
  byte bVar2;
  byte bVar3;
  UINT CodePage;
  UINT *pUVar4;
  BOOL BVar5;
  uint uVar6;
  uint uVar7;
  BYTE *pBVar8;
  int iVar9;
  byte *pbVar10;
  int iVar11;
  byte *pbVar12;
  undefined4 uVar13;
  undefined4 *puVar14;
  _cpinfo local_1c;
  uint local_8;
  
  FUN_00558590(0x19);
  CodePage = FUN_005567f0(param_1);
  if (CodePage != DAT_005da6e4) {
    if (CodePage != 0) {
      iVar11 = 0;
      pUVar4 = &DAT_005cbf98;
LAB_00556680:
      if (*pUVar4 != CodePage) goto code_r0x00556684;
      local_8 = 0;
      puVar14 = (undefined4 *)&DAT_005da800;
      for (iVar9 = 0x40; iVar9 != 0; iVar9 = iVar9 + -1) {
        *puVar14 = 0;
        puVar14 = puVar14 + 1;
      }
      *(undefined1 *)puVar14 = 0;
      pbVar12 = &DAT_005cbfa8 + iVar11 * 0x30;
      do {
        bVar2 = *pbVar12;
        pbVar10 = pbVar12;
        while ((bVar2 != 0 && (bVar2 = pbVar10[1], bVar2 != 0))) {
          uVar7 = (uint)*pbVar10;
          if (uVar7 <= bVar2) {
            bVar3 = (&DAT_005cbf90)[local_8];
            do {
              (&DAT_005da801)[uVar7] = (&DAT_005da801)[uVar7] | bVar3;
              uVar7 = uVar7 + 1;
            } while (uVar7 <= bVar2);
          }
          pbVar10 = pbVar10 + 2;
          bVar2 = *pbVar10;
        }
        local_8 = local_8 + 1;
        pbVar12 = pbVar12 + 8;
      } while (local_8 < 4);
      DAT_005da6fc = 1;
      DAT_005da6e4 = CodePage;
      DAT_005da904 = FUN_0055683a(CodePage);
      DAT_005da6f0 = (&DAT_005cbf9c)[iVar11 * 0xc];
      DAT_005da6f4 = (&DAT_005cbfa0)[iVar11 * 0xc];
      DAT_005da6f8 = (&DAT_005cbfa4)[iVar11 * 0xc];
      goto LAB_005567d4;
    }
    goto LAB_005567cf;
  }
  goto LAB_0055666a;
code_r0x00556684:
  pUVar4 = pUVar4 + 0xc;
  iVar11 = iVar11 + 1;
  if (0x5cc087 < (int)pUVar4) goto code_r0x0055668f;
  goto LAB_00556680;
code_r0x0055668f:
  BVar5 = GetCPInfo(CodePage,&local_1c);
  uVar7 = 1;
  if (BVar5 == 1) {
    DAT_005da904 = 0;
    puVar14 = (undefined4 *)&DAT_005da800;
    for (iVar11 = 0x40; iVar11 != 0; iVar11 = iVar11 + -1) {
      *puVar14 = 0;
      puVar14 = puVar14 + 1;
    }
    *(undefined1 *)puVar14 = 0;
    if (local_1c.MaxCharSize < 2) {
      DAT_005da6fc = 0;
      DAT_005da6e4 = CodePage;
    }
    else {
      DAT_005da6e4 = CodePage;
      if (local_1c.LeadByte[0] != '\0') {
        pBVar8 = local_1c.LeadByte + 1;
        do {
          bVar2 = *pBVar8;
          if (bVar2 == 0) break;
          for (uVar6 = (uint)pBVar8[-1]; uVar6 <= bVar2; uVar6 = uVar6 + 1) {
            (&DAT_005da801)[uVar6] = (&DAT_005da801)[uVar6] | 4;
          }
          pBVar1 = pBVar8 + 1;
          pBVar8 = pBVar8 + 2;
        } while (*pBVar1 != 0);
      }
      do {
        (&DAT_005da801)[uVar7] = (&DAT_005da801)[uVar7] | 8;
        uVar7 = uVar7 + 1;
      } while (uVar7 < 0xff);
      DAT_005da904 = FUN_0055683a(CodePage);
      DAT_005da6fc = 1;
    }
    DAT_005da6f0 = 0;
    DAT_005da6f4 = 0;
    DAT_005da6f8 = 0;
  }
  else {
    if (DAT_005d53d4 == 0) {
      uVar13 = 0xffffffff;
      goto LAB_005567e1;
    }
LAB_005567cf:
    FUN_0055686d();
  }
LAB_005567d4:
  FUN_00556896();
LAB_0055666a:
  uVar13 = 0;
LAB_005567e1:
  FUN_005585f1(0x19);
  return uVar13;
}

