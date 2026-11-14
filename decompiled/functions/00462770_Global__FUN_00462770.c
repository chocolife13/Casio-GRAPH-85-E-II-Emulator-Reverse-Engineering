// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00462770
// entry: 00462770  size: 1543


int FUN_00462770(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int local_b0;
  undefined1 local_a8 [12];
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  int local_90;
  undefined1 local_8c [12];
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined1 local_74 [12];
  undefined1 local_68 [12];
  int local_5c;
  undefined1 local_58 [12];
  undefined1 local_4c [12];
  undefined1 local_40 [4];
  undefined1 local_3c [12];
  undefined1 local_30 [12];
  undefined1 local_24 [12];
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  FUN_004e5780(&local_80);
  FUN_004e57a0(local_c);
  FUN_004e57c0(local_30);
  FUN_004e7730(local_30,local_3c);
  FUN_004e5ae0(local_18);
  iVar3 = FUN_0047cc30(param_1,&local_90,local_40);
  if (iVar3 == 0) {
    if ((0 < param_4) && (param_4 <= local_90)) {
      local_b0 = 1;
      iVar3 = local_90;
      if (1 < param_3) {
        do {
          iVar8 = iVar3 - local_b0;
          iVar9 = iVar8 + 1;
          iVar6 = param_3;
          if (param_3 <= param_4) {
            do {
              if (iVar9 < 0) goto LAB_00462d67;
              local_9c = local_80;
              local_98 = local_7c;
              local_94 = local_78;
              if ((iVar8 != -1) && (iVar7 = 0, iVar3 = local_b0, 0 < iVar9)) {
                do {
                  iVar4 = FUN_0047cc50(param_1,iVar3,local_b0,local_a8);
                  if (iVar4 != 0) {
                    return iVar4;
                  }
                  iVar4 = FUN_0047cc50(param_1,iVar3,iVar6,local_68);
                  if (iVar4 != 0) {
                    return iVar4;
                  }
                  FUN_004e6d00(local_a8,local_68,local_4c);
                  FUN_004e6ab0(&local_9c,local_4c,&local_9c);
                  iVar4 = FUN_0052f820();
                  if (iVar4 == 1) {
                    return 1;
                  }
                  iVar7 = iVar7 + 1;
                  iVar3 = iVar3 + 1;
                } while (iVar7 < iVar9);
              }
              FUN_004e6d00(local_3c,&local_9c,local_74);
              iVar7 = 0;
              iVar3 = local_b0;
              if (0 < iVar9) {
                do {
                  iVar4 = FUN_0047cc50(param_1,iVar3,local_b0,local_a8);
                  if (iVar4 != 0) {
                    return iVar4;
                  }
                  iVar4 = FUN_0047cc50(param_1,iVar3,iVar6,local_68);
                  if (iVar4 != 0) {
                    return iVar4;
                  }
                  FUN_004e6d00(local_74,local_a8,local_8c);
                  FUN_004e6ab0(local_8c,local_68,local_8c);
                  iVar4 = FUN_004e4020(local_8c);
                  if (iVar4 != 0) {
                    return iVar4;
                  }
                  iVar4 = FUN_0047ccc0(param_1,iVar3,iVar6,local_8c);
                  if (iVar4 != 0) {
                    return iVar4;
                  }
                  iVar4 = FUN_0052f820();
                  if (iVar4 == 1) {
                    return 1;
                  }
                  iVar7 = iVar7 + 1;
                  iVar3 = iVar3 + 1;
                } while (iVar7 < iVar9);
              }
              iVar6 = iVar6 + 1;
              iVar3 = local_90;
            } while (iVar6 <= param_4);
          }
          local_b0 = local_b0 + 1;
        } while (local_b0 < param_3);
      }
      uVar5 = local_9c;
      uVar1 = local_98;
      uVar2 = local_94;
      if (param_3 <= param_4) {
        do {
          local_94 = uVar2;
          local_98 = uVar1;
          local_9c = uVar5;
          iVar6 = (iVar3 - param_3) + 1;
          iVar3 = FUN_004623e0(param_1,param_3,param_3,iVar6,local_58);
          if (iVar3 != 0) {
            return iVar3;
          }
          iVar3 = FUN_0047cc50(param_1,param_3,param_3,local_a8);
          if (iVar3 != 0) {
            return iVar3;
          }
          iVar3 = FUN_004e7250(local_a8,&local_80);
          if (iVar3 == 0) {
            FUN_004e6ab0(local_a8,local_58,local_a8);
            uVar5 = FUN_004e7730(local_58,local_74);
            iVar3 = FUN_0047cb50(param_2,param_3,uVar5);
          }
          else {
            FUN_004e6c30(local_a8,local_58,local_a8);
            iVar3 = FUN_0047cb50(param_2,param_3,local_58);
          }
          if (iVar3 != 0) {
            return iVar3;
          }
          iVar3 = FUN_0047ccc0(param_1,param_3,param_3,local_a8);
          if (iVar3 != 0) {
            return iVar3;
          }
          uVar5 = FUN_004e7390(local_58,local_74,local_8c);
          FUN_004e6d00(local_18,uVar5);
          uVar5 = FUN_004e7620(local_a8,local_74,local_24);
          FUN_004e7390(uVar5);
          uVar5 = FUN_004e6d00(local_8c,local_24,local_74,&local_9c);
          FUN_004e6dd0(local_c,uVar5);
          iVar8 = 0;
          iVar3 = param_3;
          if (0 < iVar6) {
            do {
              iVar9 = FUN_0047cc50(param_1,iVar3,param_3,local_a8);
              if (iVar9 != 0) {
                return iVar9;
              }
              FUN_004e6d00(&local_9c,local_a8,local_a8);
              iVar9 = FUN_0047ccc0(param_1,iVar3,param_3,local_a8);
              if (iVar9 != 0) {
                return iVar9;
              }
              iVar8 = iVar8 + 1;
              iVar3 = iVar3 + 1;
            } while (iVar8 < iVar6);
          }
          iVar8 = param_3 + 1;
          local_5c = iVar8;
          uVar5 = local_9c;
          uVar1 = local_98;
          uVar2 = local_94;
          iVar3 = local_90;
          local_9c = local_80;
          local_98 = local_7c;
          local_94 = local_78;
          for (; local_90 = iVar3, local_80 = local_9c, local_7c = local_98, local_78 = local_94,
              iVar8 <= param_4; iVar8 = iVar8 + 1) {
            if (iVar6 < 0) goto LAB_00462d67;
            if ((iVar6 != 0) && (local_b0 = 0, iVar3 = param_3, 0 < iVar6)) {
              do {
                iVar9 = FUN_0047cc50(param_1,iVar3,param_3,local_a8);
                if (iVar9 != 0) {
                  return iVar9;
                }
                iVar9 = FUN_0047cc50(param_1,iVar3,iVar8,local_68);
                if (iVar9 != 0) {
                  return iVar9;
                }
                FUN_004e6d00(local_a8,local_68,local_4c);
                FUN_004e6ab0(&local_9c,local_4c,&local_9c);
                iVar9 = FUN_0052f820();
                if (iVar9 == 1) {
                  return 1;
                }
                local_b0 = local_b0 + 1;
                iVar3 = iVar3 + 1;
              } while (local_b0 < iVar6);
            }
            FUN_004e6d00(local_3c,&local_9c,local_74);
            local_b0 = 0;
            iVar3 = param_3;
            if (0 < iVar6) {
              do {
                iVar9 = FUN_0047cc50(param_1,iVar3,param_3,local_a8);
                if (iVar9 != 0) {
                  return iVar9;
                }
                iVar9 = FUN_0047cc50(param_1,iVar3,iVar8,local_68);
                if (iVar9 != 0) {
                  return iVar9;
                }
                FUN_004e6d00(local_74,local_a8,local_8c);
                FUN_004e6ab0(local_8c,local_68,local_8c);
                iVar9 = FUN_004e4020(local_8c);
                if (iVar9 != 0) {
                  return iVar9;
                }
                iVar9 = FUN_0047ccc0(param_1,iVar3,iVar8,local_8c);
                if (iVar9 != 0) {
                  return iVar9;
                }
                iVar9 = FUN_0052f820();
                if (iVar9 == 1) {
                  return 1;
                }
                local_b0 = local_b0 + 1;
                iVar3 = iVar3 + 1;
              } while (local_b0 < iVar6);
            }
            uVar5 = local_9c;
            uVar1 = local_98;
            uVar2 = local_94;
            iVar3 = local_90;
            local_9c = local_80;
            local_98 = local_7c;
            local_94 = local_78;
          }
          param_3 = local_5c;
        } while (local_5c <= param_4);
      }
      return 0;
    }
LAB_00462d67:
    iVar3 = 9;
  }
  return iVar3;
}

