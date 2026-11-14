// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0045d0f0
// entry: 0045d0f0  size: 3198


int FUN_0045d0f0(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  short sVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  short sVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  int iVar11;
  short asStackY_307d0 [32769];
  short asStackY_207ce [32768];
  short asStackY_107ce [32579];
  undefined1 *puVar12;
  undefined4 *puVar13;
  short local_906;
  int local_904;
  int local_900;
  int local_8fc;
  int local_8f8;
  undefined1 local_8f4 [12];
  undefined4 local_8e8;
  undefined4 local_8e4;
  undefined4 local_8e0;
  undefined4 local_8dc;
  undefined4 local_8d8;
  undefined4 local_8d4;
  undefined4 local_8d0;
  undefined4 local_8cc;
  undefined4 local_8c8;
  undefined4 local_8c4;
  undefined4 local_8c0;
  undefined4 local_8bc;
  undefined4 local_8b8;
  undefined4 local_8b4;
  undefined4 local_8b0;
  undefined1 local_8ac [12];
  undefined4 local_8a0;
  undefined4 local_89c;
  undefined4 local_898;
  undefined4 local_894;
  undefined4 local_890;
  undefined4 local_88c;
  int local_888;
  undefined4 local_884;
  undefined4 local_880;
  undefined4 local_87c;
  undefined1 local_878 [12];
  undefined4 local_86c;
  undefined4 local_868;
  undefined4 local_864;
  undefined4 local_860;
  undefined4 local_85c;
  undefined4 local_858;
  undefined4 local_854;
  undefined4 local_850;
  undefined4 local_84c;
  undefined4 local_848;
  undefined4 local_844;
  undefined4 local_840;
  undefined4 local_83c;
  undefined4 local_838;
  undefined4 local_834;
  undefined4 local_830;
  undefined4 local_82c;
  undefined4 local_828;
  undefined1 local_824 [12];
  undefined1 local_818 [12];
  undefined4 local_80c;
  undefined4 local_808;
  undefined4 local_804;
  undefined4 local_800;
  undefined4 local_7fc;
  undefined4 local_7f8;
  undefined4 local_7f4;
  undefined4 local_7f0;
  undefined4 local_7ec;
  undefined4 local_7e8;
  undefined4 local_7e4;
  undefined4 local_7e0;
  undefined1 local_7dc [12];
  short local_7d0 [1000];
  
  FUN_004e5780(local_824);
  FUN_004e57a0(local_8ac);
  FUN_004e7730(local_8ac,local_818);
  sVar3 = FUN_0045c8d0(param_1,param_2,&local_906,&local_904,&local_900);
  if (sVar3 != 0) {
    return (int)sVar3;
  }
  sVar3 = (short)local_904 * (short)local_900;
  if (local_906 == sVar3) {
    *(undefined4 *)(param_2 + 0x10) = 1;
  }
  else {
    *(undefined4 *)(param_2 + 0x10) = 0;
  }
  if (local_906 < sVar3) {
    sVar3 = 9;
    goto LAB_0045dd3b;
  }
  local_8f8 = (local_904 + -1) * (local_900 + -1);
  iVar11 = (int)sVar3;
  local_888 = iVar11;
  sVar3 = FUN_0047cbb0(0x6a,iVar11);
  if (sVar3 != 0) goto LAB_0045dd3b;
  sVar3 = FUN_0047cbb0(0x6b,iVar11);
  if (sVar3 == 0) {
    sVar3 = FUN_0047ccf0(0x29,(int)local_906,iVar11);
    if (sVar3 == 0) {
      local_8fc = 0;
      if (0 < local_906) {
        do {
          iVar11 = (short)local_8fc + 1;
          sVar3 = FUN_0047cac0(0x67,iVar11,local_8f4);
          if ((sVar3 != 0) || (sVar3 = FUN_0047cac0(0x68,iVar11,local_878), sVar3 != 0))
          goto LAB_0045dd1c;
          uVar4 = FUN_004e50a0(local_8f4);
          uVar5 = FUN_004e50a0(local_878);
          sVar3 = FUN_0047ccc0(0x29,iVar11,1,local_8ac);
          if ((sVar3 != 0) ||
             (sVar3 = FUN_0045c260(uVar4,uVar5,local_904,local_900,local_7d0), sVar3 != 0))
          goto LAB_0045dd1c;
          sVar7 = 0;
          if (0 < (short)((short)local_904 + -2 + (short)local_900)) {
            iVar8 = (int)(short)local_8f8;
            do {
              if (local_7d0[sVar7 + iVar8 + 1] == -1) {
                puVar12 = local_818;
              }
              else if (local_7d0[sVar7 + iVar8 + 1] == 1) {
                puVar12 = local_8ac;
              }
              else {
                puVar12 = local_824;
              }
              sVar3 = FUN_0047ccc0(0x29,iVar11,sVar7 + 2,puVar12);
              if (sVar3 != 0) goto LAB_0045dd1c;
              sVar7 = sVar7 + 1;
            } while (sVar7 < (short)((short)local_904 + -2 + (short)local_900));
          }
          sVar3 = FUN_0052f820();
          if (sVar3 == 1) goto LAB_0045dd1c;
          local_8fc = local_8fc + 1;
        } while ((short)local_8fc < local_906);
      }
      sVar3 = FUN_00462770(0x29,0x6a,1,1);
      if ((sVar3 == 0) &&
         (sVar3 = FUN_00462d80(0x29,0x6a,0x69,1,1,local_7dc,1,0x6b,0,1), sVar3 == 0)) {
        FUN_0047cac0(0x6b,1,local_8f4);
        sVar3 = FUN_00462770(0x29,0x6a,2,(short)local_904 + -1 + (int)(short)local_900);
        if (sVar3 == 0) {
          sVar3 = FUN_00462d80(0x29,0x6a,0x69,1,(short)local_904 + -1 + (int)(short)local_900,
                               &local_8b8,0,0x6b,0,1);
          if (sVar3 == 0) {
            local_8fc = 0;
            if (0 < local_906) {
              do {
                iVar11 = local_8fc;
                iVar8 = (short)local_8fc + 1;
                sVar3 = FUN_0047cac0(0x67,iVar8,local_8f4);
                if ((sVar3 != 0) || (sVar3 = FUN_0047cac0(0x68,iVar8,local_878), sVar3 != 0))
                goto LAB_0045dd1c;
                uVar4 = FUN_004e50a0(local_8f4);
                uVar5 = FUN_004e50a0(local_878);
                sVar3 = FUN_0045c260(uVar4,uVar5,local_904,local_900,local_7d0);
                if (sVar3 != 0) goto LAB_0045dd1c;
                sVar7 = 0;
                if (0 < (short)local_8f8) {
                  do {
                    if (local_7d0[sVar7 + 1] == -1) {
                      puVar12 = local_818;
                    }
                    else if (local_7d0[sVar7 + 1] == 1) {
                      puVar12 = local_8ac;
                    }
                    else {
                      puVar12 = local_824;
                    }
                    sVar3 = FUN_0047ccc0(0x29,iVar8,sVar7 + 2,puVar12);
                    if (sVar3 != 0) goto LAB_0045dd1c;
                    sVar7 = sVar7 + 1;
                  } while (sVar7 < (short)local_8f8);
                }
                sVar7 = 0;
                if (0 < (short)((short)local_900 + -1)) {
                  iVar9 = (int)(short)local_8f8;
                  do {
                    if (local_7d0[(int)(short)local_904 + sVar7 + iVar9] == -1) {
                      puVar12 = local_818;
                    }
                    else if (local_7d0[(int)(short)local_904 + sVar7 + iVar9] == 1) {
                      puVar12 = local_8ac;
                    }
                    else {
                      puVar12 = local_824;
                    }
                    sVar3 = FUN_0047ccc0(0x29,iVar8,sVar7 + iVar9 + 2,puVar12);
                    if (sVar3 != 0) goto LAB_0045dd1c;
                    sVar7 = sVar7 + 1;
                    iVar11 = local_8fc;
                  } while (sVar7 < (short)((short)local_900 + -1));
                }
                sVar3 = FUN_0052f820();
                if (sVar3 == 1) goto LAB_0045dd1c;
                local_8fc = iVar11 + 1;
              } while ((short)local_8fc < local_906);
            }
            iVar11 = (int)(short)local_8f8;
            sVar3 = FUN_00462770(0x29,0x6a,2,(short)local_900 + iVar11);
            if (sVar3 == 0) {
              sVar3 = FUN_00462d80(0x29,0x6a,0x69,1,(short)local_900 + iVar11,&local_8e8,0,0x6b,0,1)
              ;
              if (sVar3 == 0) {
                local_8fc = 0;
                if (0 < local_906) {
                  do {
                    iVar8 = (short)local_8fc + 1;
                    sVar3 = FUN_0047cac0(0x67,iVar8,local_8f4);
                    if ((sVar3 != 0) || (sVar3 = FUN_0047cac0(0x68,iVar8,local_878), sVar3 != 0))
                    goto LAB_0045dd1c;
                    uVar4 = FUN_004e50a0(local_8f4);
                    uVar5 = FUN_004e50a0(local_878);
                    sVar3 = FUN_0045c260(uVar4,uVar5,local_904,local_900,local_7d0);
                    if (sVar3 != 0) goto LAB_0045dd1c;
                    sVar7 = 0;
                    if (0 < (short)((short)local_904 + -2 + (short)local_900)) {
                      do {
                        if (local_7d0[sVar7 + iVar11 + 1] == -1) {
                          puVar12 = local_818;
                        }
                        else if (local_7d0[sVar7 + iVar11 + 1] == 1) {
                          puVar12 = local_8ac;
                        }
                        else {
                          puVar12 = local_824;
                        }
                        sVar3 = FUN_0047ccc0(0x29,iVar8,sVar7 + iVar11 + 2,puVar12);
                        if (sVar3 != 0) goto LAB_0045dd1c;
                        sVar7 = sVar7 + 1;
                      } while (sVar7 < (short)((short)local_904 + -2 + (short)local_900));
                    }
                    sVar3 = FUN_0052f820();
                    if (sVar3 == 1) goto LAB_0045dd1c;
                    local_8fc = local_8fc + 1;
                  } while ((short)local_8fc < local_906);
                }
                sVar3 = FUN_00462770(0x29,0x6a,iVar11 + 2,(short)local_904 + iVar11);
                if ((((sVar3 == 0) &&
                     (sVar3 = FUN_00462d80(0x29,0x6a,0x69,1,(short)local_904 + iVar11,&local_8c4,0,
                                           0x6b,1,1), iVar8 = local_888, sVar3 == 0)) &&
                    (sVar3 = FUN_00462770(0x29,0x6a,(short)local_904 + 1 + iVar11,local_888),
                    sVar3 == 0)) &&
                   (sVar3 = FUN_00462d80(0x29,0x6a,0x69,(short)local_904 + 1 + iVar11,iVar8,
                                         &local_8d0,1,0x6b,0,1), sVar3 == 0)) {
                  if (*(int *)(param_2 + 0x10) == 1) {
                    FUN_004e5070(((short)local_904 + -1) * ((short)local_900 + -1),&local_8dc);
                    FUN_004e7620(&local_8b8,&local_8d0);
                  }
                  else {
                    FUN_004e5070((int)local_906 - (int)(short)local_904 * (int)(short)local_900,
                                 &local_8dc);
                  }
                  FUN_004e6dd0(&local_8d0,&local_8dc,&local_8a0);
                  puVar13 = (undefined4 *)(param_2 + 200);
                  puVar6 = (undefined4 *)(param_2 + 0xd4);
                  puVar2 = (undefined4 *)(param_2 + 0xe0);
                  *puVar13 = local_8dc;
                  *(undefined4 *)(param_2 + 0xcc) = local_8d8;
                  *(undefined4 *)(param_2 + 0xd0) = local_8d4;
                  *puVar6 = local_8d0;
                  *(undefined4 *)(param_2 + 0xd8) = local_8cc;
                  *(undefined4 *)(param_2 + 0xdc) = local_8c8;
                  *puVar2 = local_8a0;
                  *(undefined4 *)(param_2 + 0xe4) = local_89c;
                  *(undefined4 *)(param_2 + 0xe8) = local_898;
                  FUN_004e7910(puVar13,puVar13);
                  FUN_004e7910(puVar6,puVar6);
                  FUN_004e7910(puVar2,puVar2);
                  FUN_004e5070((short)local_904 + -1,&local_894);
                  if (*(int *)(param_2 + 0x10) == 1) {
                    puVar13 = &local_8e8;
                    puVar6 = &local_8e8;
                  }
                  else {
                    puVar13 = &local_8e8;
                    puVar6 = (undefined4 *)FUN_004e6c30(&local_8e8,&local_8d0,local_8f4,puVar13);
                  }
                  FUN_004e7620(puVar6,puVar13);
                  FUN_004e6dd0(&local_8e8,&local_894,&local_83c);
                  FUN_0045b3a0(&local_83c,&local_894,&local_8a0,&local_8dc,&local_800,&local_80c);
                  sVar3 = FUN_004e4020(&local_80c);
                  if (sVar3 == 0) {
                    puVar13 = (undefined4 *)(param_2 + 0x14);
                    puVar6 = (undefined4 *)(param_2 + 0x20);
                    puVar2 = (undefined4 *)(param_2 + 0x2c);
                    puVar1 = (undefined4 *)(param_2 + 0x38);
                    puVar10 = (undefined4 *)(param_2 + 0x44);
                    *puVar13 = local_894;
                    *(undefined4 *)(param_2 + 0x18) = local_890;
                    *(undefined4 *)(param_2 + 0x1c) = local_88c;
                    *puVar6 = local_8e8;
                    *(undefined4 *)(param_2 + 0x24) = local_8e4;
                    *(undefined4 *)(param_2 + 0x28) = local_8e0;
                    *puVar2 = local_83c;
                    *(undefined4 *)(param_2 + 0x30) = local_838;
                    *(undefined4 *)(param_2 + 0x34) = local_834;
                    *puVar1 = local_800;
                    *(undefined4 *)(param_2 + 0x3c) = local_7fc;
                    *(undefined4 *)(param_2 + 0x40) = local_7f8;
                    *puVar10 = local_80c;
                    *(undefined4 *)(param_2 + 0x48) = local_808;
                    *(undefined4 *)(param_2 + 0x4c) = local_804;
                    FUN_004e7910(puVar13,puVar13);
                    FUN_004e7910(puVar6,puVar6);
                    FUN_004e7910(puVar2,puVar2);
                    FUN_004e7910(puVar1,puVar1);
                    FUN_004e7910(puVar10,puVar10);
                    FUN_004e5070((short)local_900 + -1,&local_884);
                    if (*(int *)(param_2 + 0x10) == 1) {
                      puVar13 = &local_8c4;
                      puVar6 = &local_8c4;
                    }
                    else {
                      puVar13 = &local_8c4;
                      puVar6 = (undefined4 *)FUN_004e6c30(&local_8c4,&local_8d0,local_8f4,puVar13);
                    }
                    FUN_004e7620(puVar6,puVar13);
                    FUN_004e6dd0(&local_8c4,&local_884,&local_860);
                    FUN_0045b3a0(&local_860,&local_884,&local_8a0,&local_8dc,&local_7e8,&local_830);
                    sVar3 = FUN_004e4020(&local_830);
                    if (sVar3 == 0) {
                      puVar13 = (undefined4 *)(param_2 + 0x50);
                      puVar6 = (undefined4 *)(param_2 + 0x5c);
                      puVar2 = (undefined4 *)(param_2 + 0x68);
                      puVar1 = (undefined4 *)(param_2 + 0x74);
                      puVar10 = (undefined4 *)(param_2 + 0x80);
                      *puVar13 = local_884;
                      *(undefined4 *)(param_2 + 0x54) = local_880;
                      *(undefined4 *)(param_2 + 0x58) = local_87c;
                      *puVar6 = local_8c4;
                      *(undefined4 *)(param_2 + 0x60) = local_8c0;
                      *(undefined4 *)(param_2 + 100) = local_8bc;
                      *puVar2 = local_860;
                      *(undefined4 *)(param_2 + 0x6c) = local_85c;
                      *(undefined4 *)(param_2 + 0x70) = local_858;
                      *puVar1 = local_7e8;
                      *(undefined4 *)(param_2 + 0x78) = local_7e4;
                      *(undefined4 *)(param_2 + 0x7c) = local_7e0;
                      *puVar10 = local_830;
                      *(undefined4 *)(param_2 + 0x84) = local_82c;
                      *(undefined4 *)(param_2 + 0x88) = local_828;
                      FUN_004e7910(puVar13,puVar13);
                      FUN_004e7910(puVar6,puVar6);
                      FUN_004e7910(puVar2,puVar2);
                      FUN_004e7910(puVar1,puVar1);
                      FUN_004e7910(puVar10,puVar10);
                      if (*(int *)(param_2 + 0x10) == 0) {
                        FUN_004e5070(((short)local_904 + -1) * ((short)local_900 + -1),&local_86c);
                        uVar4 = FUN_004e6c30(&local_8b8,&local_8d0,local_8f4,&local_8b8);
                        FUN_004e7620(uVar4);
                        FUN_004e6dd0(&local_8b8,&local_86c,&local_854);
                        FUN_0045b3a0(&local_854,&local_86c,&local_8a0,&local_8dc,&local_7f4,
                                     &local_848);
                        sVar3 = FUN_004e4020(&local_848);
                        if (sVar3 != 0) goto LAB_0045dd1c;
                        puVar13 = (undefined4 *)(param_2 + 0x8c);
                        *puVar13 = local_86c;
                        *(undefined4 *)(param_2 + 0x90) = local_868;
                        *(undefined4 *)(param_2 + 0x94) = local_864;
                        puVar6 = (undefined4 *)(param_2 + 0x98);
                        *puVar6 = local_8b8;
                        *(undefined4 *)(param_2 + 0x9c) = local_8b4;
                        *(undefined4 *)(param_2 + 0xa0) = local_8b0;
                        puVar2 = (undefined4 *)(param_2 + 0xa4);
                        *puVar2 = local_854;
                        *(undefined4 *)(param_2 + 0xa8) = local_850;
                        *(undefined4 *)(param_2 + 0xac) = local_84c;
                        puVar1 = (undefined4 *)(param_2 + 0xb0);
                        *puVar1 = local_7f4;
                        *(undefined4 *)(param_2 + 0xb4) = local_7f0;
                        *(undefined4 *)(param_2 + 0xb8) = local_7ec;
                        puVar10 = (undefined4 *)(param_2 + 0xbc);
                        *puVar10 = local_848;
                        *(undefined4 *)(param_2 + 0xc0) = local_844;
                        *(undefined4 *)(param_2 + 0xc4) = local_840;
                        FUN_004e7910(puVar13,puVar13);
                        FUN_004e7910(puVar6,puVar6);
                        FUN_004e7910(puVar2,puVar2);
                        FUN_004e7910(puVar1,puVar1);
                        FUN_004e7910(puVar10,puVar10);
                      }
                      sVar3 = 0;
                    }
                  }
                }
              }
            }
          }
        }
      }
LAB_0045dd1c:
      FUN_0047cd10(0x29);
    }
    FUN_0047cc00(0x6b);
  }
  FUN_0047cc00(0x6a);
LAB_0045dd3b:
  FUN_0047cc00(0x65);
  FUN_0047cc00(0x66);
  FUN_0047cc00(0x69);
  FUN_0047cc00(0x68);
  FUN_0047cc00(0x67);
  return (int)sVar3;
}

