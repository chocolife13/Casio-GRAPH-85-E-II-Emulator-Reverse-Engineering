// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0045e600
// entry: 0045e600  size: 599


int FUN_0045e600(undefined4 param_1,short *param_2)

{
  int iVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  short sVar10;
  int iVar11;
  short sVar12;
  int iVar13;
  short *psVar14;
  short sVar15;
  short *psVar16;
  int local_808;
  int local_7f8;
  short local_7ec;
  undefined1 local_7e8 [12];
  undefined1 local_7dc [12];
  short local_7d0 [1000];
  
  sVar2 = FUN_0047ca80(param_1);
  if (sVar2 < 0) {
    return 9;
  }
  iVar6 = 1;
  if (sVar2 < 2) {
    return 0;
  }
  do {
    iVar6 = iVar6 * 2;
    if (0 < sVar2) {
      psVar14 = param_2;
      psVar16 = local_7d0;
      for (uVar8 = (uint)(int)sVar2 >> 1; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)psVar16 = *(undefined4 *)psVar14;
        psVar14 = psVar14 + 2;
        psVar16 = psVar16 + 2;
      }
      for (uVar8 = (uint)(((int)sVar2 & 1U) != 0); uVar8 != 0; uVar8 = uVar8 - 1) {
        *psVar16 = *psVar14;
        psVar14 = psVar14 + 1;
        psVar16 = psVar16 + 1;
      }
    }
    local_7f8 = 0;
    sVar3 = (short)iVar6;
    if (0 < sVar2) {
      do {
        sVar5 = (short)local_7f8;
        iVar7 = (int)sVar5;
        if (iVar7 < (int)sVar2 - (int)sVar3 / 2) {
          iVar11 = (int)sVar3 / 2 + local_7f8;
          iVar13 = iVar11;
          iVar1 = local_7f8;
          iVar9 = local_7f8;
          local_808 = local_7f8;
          sVar10 = sVar2;
          if (iVar7 + sVar3 < (int)sVar2) {
            sVar10 = sVar5 + sVar3;
          }
          while (sVar5 < sVar10) {
            local_7ec = (short)iVar11;
            sVar5 = (short)iVar9;
            sVar15 = (short)iVar1;
            sVar12 = (short)iVar13;
            if (sVar5 < local_7ec) {
              if (sVar12 < sVar10) {
                sVar5 = local_7d0[sVar5];
                sVar4 = FUN_0047cac0(param_1,sVar5 + 1,local_7dc);
                if (sVar4 != 0) {
LAB_0045e82c:
                  return (int)sVar4;
                }
                sVar12 = local_7d0[sVar12];
                sVar4 = FUN_0047cac0(param_1,sVar12 + 1,local_7e8);
                if (sVar4 != 0) goto LAB_0045e82c;
                iVar7 = FUN_004e72d0(local_7dc,local_7e8);
                if (iVar7 == 0) {
                  iVar13 = iVar13 + 1;
                  param_2[sVar15] = sVar12;
                  iVar9 = local_808;
                }
                else {
                  local_808 = local_808 + 1;
                  param_2[sVar15] = sVar5;
                  iVar9 = local_808;
                }
              }
              else {
                local_808 = iVar9 + 1;
                param_2[sVar15] = local_7d0[sVar5];
                iVar9 = local_808;
              }
            }
            else {
              iVar13 = iVar13 + 1;
              param_2[sVar15] = local_7d0[sVar12];
            }
            sVar5 = (short)(iVar1 + 1);
            iVar1 = iVar1 + 1;
          }
        }
        else if (sVar5 < sVar2) {
          psVar14 = local_7d0 + iVar7;
          psVar16 = param_2 + iVar7;
          for (uVar8 = (uint)(sVar2 - iVar7) >> 1; uVar8 != 0; uVar8 = uVar8 - 1) {
            *(undefined4 *)psVar16 = *(undefined4 *)psVar14;
            psVar14 = psVar14 + 2;
            psVar16 = psVar16 + 2;
          }
          for (uVar8 = (uint)((sVar2 - iVar7 & 1U) != 0); uVar8 != 0; uVar8 = uVar8 - 1) {
            *psVar16 = *psVar14;
            psVar14 = psVar14 + 1;
            psVar16 = psVar16 + 1;
          }
        }
        sVar5 = FUN_0052f820();
        if (sVar5 == 1) {
          return 1;
        }
        local_7f8 = local_7f8 + iVar6;
      } while ((short)local_7f8 < sVar2);
    }
    if (sVar2 <= sVar3) {
      return 0;
    }
  } while( true );
}

