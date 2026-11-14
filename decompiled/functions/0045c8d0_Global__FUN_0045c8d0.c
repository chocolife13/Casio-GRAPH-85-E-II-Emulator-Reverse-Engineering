// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0045c8d0
// entry: 0045c8d0  size: 2075


int FUN_0045c8d0(undefined4 param_1,int param_2,short *param_3,short *param_4,short *param_5)

{
  short sVar1;
  short sVar2;
  int iVar3;
  short *psVar4;
  short sVar5;
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
  undefined4 local_824;
  undefined4 local_820;
  undefined4 local_81c;
  undefined4 local_818;
  undefined4 local_814;
  undefined4 local_810;
  undefined4 local_80c;
  undefined4 local_808;
  undefined4 local_804;
  undefined4 local_800;
  undefined4 local_7fc;
  undefined4 local_7f8;
  undefined4 local_7f4;
  undefined4 local_7f0;
  short *local_7ec;
  undefined4 local_7e8;
  undefined4 local_7e4;
  undefined4 local_7e0;
  undefined4 local_7dc;
  undefined4 local_7d8;
  undefined4 local_7d4;
  short local_7d0 [1000];
  
  FUN_004e5780(&local_7dc);
  FUN_004e57a0(&local_834);
  sVar1 = FUN_0047ca80(*(undefined4 *)(param_2 + 4));
  *param_4 = sVar1;
  sVar1 = FUN_0047ca80(*(undefined4 *)(param_2 + 8));
  *param_5 = sVar1;
  sVar1 = FUN_0047ca80(*(undefined4 *)(param_2 + 0xc));
  *param_3 = sVar1;
  if (((sVar1 < 1) || (sVar1 != *param_4)) || (sVar1 != *param_5)) {
    return 9;
  }
  sVar1 = FUN_0047cbb0(0x67,(int)sVar1);
  if (sVar1 == 0) {
    sVar1 = FUN_0047cbb0(0x68,(int)*param_3);
    if (sVar1 == 0) {
      sVar1 = FUN_0047cbb0(0x69,(int)*param_3);
      if (sVar1 == 0) {
        sVar1 = *param_3;
        sVar2 = 0;
        psVar4 = local_7d0;
        if (0 < sVar1) {
          do {
            *psVar4 = sVar2;
            psVar4 = psVar4 + 1;
            sVar2 = sVar2 + 1;
          } while (sVar2 < sVar1);
        }
        sVar1 = FUN_0045e600(*(undefined4 *)(param_2 + 8),local_7d0);
        if (sVar1 == 0) {
          psVar4 = local_7d0;
          *param_5 = 1;
          local_7e8 = local_834;
          local_7e4 = local_830;
          local_7e0 = local_82c;
          sVar1 = FUN_0047cac0(*(undefined4 *)(param_2 + 8),(int)(short)((short)local_7d0._0_4_ + 1)
                               ,&local_840);
          if (sVar1 == 0) {
            sVar2 = 0;
            if (0 < *param_3) {
              do {
                sVar5 = *psVar4;
                psVar4 = psVar4 + 1;
                sVar1 = FUN_0047cac0(*(undefined4 *)(param_2 + 8),(int)(short)(sVar5 + 1),&local_84c
                                    );
                if (sVar1 != 0) goto LAB_0045d0af;
                iVar3 = FUN_004e7250(&local_840,&local_84c);
                if (iVar3 != 0) {
                  local_840 = local_84c;
                  local_83c = local_848;
                  local_838 = local_844;
                  *param_5 = *param_5 + 1;
                  FUN_004e6ab0(&local_834,&local_7e8,&local_7e8);
                }
                sVar1 = FUN_0047cb50(0x67,(int)(short)(sVar5 + 1),&local_7e8);
                if ((sVar1 != 0) || (sVar1 = FUN_0052f820(), sVar1 == 1)) goto LAB_0045d0af;
                sVar2 = sVar2 + 1;
              } while (sVar2 < *param_3);
            }
            sVar1 = FUN_0047cbb0(0x66,(int)*param_5);
            if (sVar1 == 0) {
              psVar4 = local_7d0;
              sVar1 = FUN_0047cac0(*(undefined4 *)(param_2 + 8),
                                   (int)(short)((short)local_7d0._0_4_ + 1),&local_840);
              if ((sVar1 == 0) && (sVar1 = FUN_0047cb50(0x66,1,&local_840), sVar1 == 0)) {
                sVar5 = 2;
                sVar2 = 0;
                if (0 < *param_3) {
                  do {
                    sVar1 = *psVar4;
                    psVar4 = psVar4 + 1;
                    sVar1 = FUN_0047cac0(*(undefined4 *)(param_2 + 8),(int)(short)(sVar1 + 1),
                                         &local_84c);
                    if (sVar1 != 0) goto LAB_0045d0a5;
                    iVar3 = FUN_004e7250(&local_840,&local_84c);
                    if (iVar3 != 0) {
                      local_840 = local_84c;
                      local_83c = local_848;
                      iVar3 = (int)sVar5;
                      local_838 = local_844;
                      sVar5 = sVar5 + 1;
                      sVar1 = FUN_0047cb50(0x66,iVar3,&local_840);
                      if (sVar1 != 0) goto LAB_0045d0a5;
                    }
                    sVar1 = FUN_0052f820();
                    if (sVar1 == 1) goto LAB_0045d0a5;
                    sVar2 = sVar2 + 1;
                  } while (sVar2 < *param_3);
                }
                sVar1 = FUN_0045e600(*(undefined4 *)(param_2 + 4),local_7d0);
                if (sVar1 == 0) {
                  sVar2 = 0;
                  psVar4 = local_7d0;
                  if (0 < *param_3) {
                    do {
                      sVar5 = *psVar4;
                      local_7ec = psVar4 + 1;
                      sVar1 = FUN_0047cac0(0x67,(int)(short)(sVar5 + 1),&local_84c);
                      if (sVar1 != 0) goto LAB_0045d0a5;
                      sVar1 = FUN_0047cb50(0x68,sVar2 + 1,&local_84c);
                      if ((((sVar1 != 0) ||
                           (sVar1 = FUN_0047cac0(*(undefined4 *)(param_2 + 0xc),
                                                 (int)(short)(sVar5 + 1),&local_84c), sVar1 != 0))
                          || (sVar1 = FUN_0047cb50(0x69,sVar2 + 1,&local_84c), sVar1 != 0)) ||
                         (sVar1 = FUN_0052f820(), sVar1 == 1)) goto LAB_0045d0a5;
                      sVar2 = sVar2 + 1;
                      psVar4 = local_7ec;
                    } while (sVar2 < *param_3);
                  }
                  local_810 = local_834;
                  *param_4 = 1;
                  local_808 = local_82c;
                  local_80c = local_830;
                  psVar4 = local_7d0;
                  sVar1 = FUN_0047cac0(*(undefined4 *)(param_2 + 4),
                                       (int)(short)((short)local_7d0._0_4_ + 1),&local_840);
                  if (sVar1 == 0) {
                    sVar2 = 0;
                    if (0 < *param_3) {
                      do {
                        sVar1 = *psVar4;
                        psVar4 = psVar4 + 1;
                        sVar1 = FUN_0047cac0(*(undefined4 *)(param_2 + 4),(int)(short)(sVar1 + 1),
                                             &local_84c);
                        if (sVar1 != 0) goto LAB_0045d0a5;
                        iVar3 = FUN_004e7250(&local_840,&local_84c);
                        if (iVar3 != 0) {
                          local_838 = local_844;
                          local_840 = local_84c;
                          local_83c = local_848;
                          *param_4 = *param_4 + 1;
                          FUN_004e6ab0(&local_834,&local_810,&local_810);
                        }
                        sVar1 = FUN_0047cb50(0x67,sVar2 + 1,&local_810);
                        if (sVar1 != 0) goto LAB_0045d0a5;
                        sVar1 = FUN_0052f820();
                        if (sVar1 == 1) goto LAB_0045d0a5;
                        sVar2 = sVar2 + 1;
                      } while (sVar2 < *param_3);
                    }
                    sVar1 = FUN_0047cbb0(0x65,(int)*param_4);
                    if (sVar1 == 0) {
                      psVar4 = local_7d0;
                      sVar1 = FUN_0047cac0(*(undefined4 *)(param_2 + 4),
                                           (int)(short)(local_7d0[0] + 1),&local_840);
                      if ((sVar1 == 0) && (sVar1 = FUN_0047cb50(0x65,1,&local_840), sVar1 == 0)) {
                        sVar5 = 2;
                        sVar2 = 0;
                        if (0 < *param_3) {
                          do {
                            sVar1 = *psVar4;
                            psVar4 = psVar4 + 1;
                            sVar1 = FUN_0047cac0(*(undefined4 *)(param_2 + 4),
                                                 (int)(short)(sVar1 + 1),&local_84c);
                            if (sVar1 != 0) goto LAB_0045d09b;
                            iVar3 = FUN_004e7250(&local_840,&local_84c);
                            if (iVar3 != 0) {
                              local_840 = local_84c;
                              local_83c = local_848;
                              iVar3 = (int)sVar5;
                              local_838 = local_844;
                              sVar5 = sVar5 + 1;
                              sVar1 = FUN_0047cb50(0x65,iVar3,&local_840);
                              if (sVar1 != 0) goto LAB_0045d09b;
                            }
                            sVar1 = FUN_0052f820();
                            if (sVar1 == 1) goto LAB_0045d09b;
                            sVar2 = sVar2 + 1;
                          } while (sVar2 < *param_3);
                        }
                        local_81c = local_7dc;
                        local_828 = local_7dc;
                        sVar2 = 0;
                        sVar1 = 0;
                        local_818 = local_7d8;
                        local_814 = local_7d4;
                        local_824 = local_7d8;
                        local_820 = local_7d4;
                        if (0 < *param_3) {
                          do {
                            FUN_0047cac0(0x67,sVar2 + 1,&local_804);
                            FUN_0047cac0(0x68,sVar2 + 1,&local_7f8);
                            iVar3 = FUN_004e7210(&local_81c,&local_804);
                            if ((iVar3 != 0) ||
                               (iVar3 = FUN_004e7210(&local_828,&local_7f8), iVar3 != 0)) {
                              sVar1 = sVar1 + 1;
                              iVar3 = FUN_004e7210(&local_81c,&local_804);
                              if (iVar3 != 0) {
                                local_81c = local_804;
                                local_818 = local_800;
                                local_814 = local_7fc;
                              }
                              iVar3 = FUN_004e7210(&local_828,&local_7f8);
                              if (iVar3 != 0) {
                                local_828 = local_7f8;
                                local_824 = local_7f4;
                                local_820 = local_7f0;
                              }
                            }
                            sVar2 = sVar2 + 1;
                          } while (sVar2 < *param_3);
                        }
                        sVar2 = *param_5 * *param_4;
                        if ((((sVar1 == sVar2) && (1 < *param_4)) && (1 < *param_5)) &&
                           (sVar2 <= *param_3)) {
                          return 0;
                        }
                        sVar1 = 9;
                      }
LAB_0045d09b:
                      FUN_0047cc00(0x65);
                    }
                  }
                }
              }
LAB_0045d0a5:
              FUN_0047cc00(0x66);
            }
          }
        }
LAB_0045d0af:
        FUN_0047cc00(0x69);
      }
      FUN_0047cc00(0x68);
    }
    FUN_0047cc00(0x67);
  }
  return (int)sVar1;
}

