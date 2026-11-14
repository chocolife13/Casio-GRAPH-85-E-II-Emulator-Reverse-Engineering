// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005592c1
// entry: 005592c1  size: 1825


int FUN_005592c1(undefined4 param_1,byte *param_2,undefined4 *param_3)

{
  short sVar1;
  uint uVar2;
  short *psVar3;
  short *psVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  byte bVar8;
  int iVar9;
  undefined1 *puVar10;
  ulonglong uVar11;
  longlong lVar12;
  undefined1 local_24c [511];
  undefined1 local_4d;
  undefined4 local_4c;
  undefined4 local_48;
  int local_44;
  int local_40;
  undefined1 local_3c [4];
  undefined4 local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  undefined1 local_1a;
  char local_19;
  int local_18;
  int local_14;
  undefined1 *local_10;
  short *local_c;
  uint local_8;
  
  local_34 = 0;
  bVar8 = *param_2;
  param_2 = param_2 + 1;
  local_10 = (undefined1 *)0x0;
  local_18 = 0;
  do {
    if ((bVar8 == 0) || (local_18 < 0)) {
      return local_18;
    }
    if (((char)bVar8 < ' ') || ('x' < (char)bVar8)) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(byte *)((int)&PTR_LAB_0059d4a8 + (int)(char)bVar8) & 0xf;
    }
    local_34 = (int)(char)(&DAT_0059d4c8)[uVar2 * 8 + local_34] >> 4;
    switch(local_34) {
    case 0:
switchD_0055932f_caseD_0:
      local_28 = 0;
      if ((PTR_DAT_005cc4a8[(uint)bVar8 * 2 + 1] & 0x80) != 0) {
        FUN_00559a02((int)(char)bVar8,param_1,&local_18);
        bVar8 = *param_2;
        param_2 = param_2 + 1;
      }
      FUN_00559a02((int)(char)bVar8,param_1,&local_18);
      break;
    case 1:
      local_14 = -1;
      local_38 = 0;
      local_2c = 0;
      local_24 = 0;
      local_20 = 0;
      local_8 = 0;
      local_28 = 0;
      break;
    case 2:
      if (bVar8 == 0x20) {
        local_8 = local_8 | 2;
      }
      else if (bVar8 == 0x23) {
        local_8 = local_8 | 0x80;
      }
      else if (bVar8 == 0x2b) {
        local_8 = local_8 | 1;
      }
      else if (bVar8 == 0x2d) {
        local_8 = local_8 | 4;
      }
      else if (bVar8 == 0x30) {
        local_8 = local_8 | 8;
      }
      break;
    case 3:
      if (bVar8 == 0x2a) {
        local_24 = FUN_00559aa0(&param_3);
        if (local_24 < 0) {
          local_8 = local_8 | 4;
          local_24 = -local_24;
        }
      }
      else {
        local_24 = (char)bVar8 + -0x30 + local_24 * 10;
      }
      break;
    case 4:
      local_14 = 0;
      break;
    case 5:
      if (bVar8 == 0x2a) {
        local_14 = FUN_00559aa0(&param_3);
        if (local_14 < 0) {
          local_14 = -1;
        }
      }
      else {
        local_14 = (char)bVar8 + -0x30 + local_14 * 10;
      }
      break;
    case 6:
      if (bVar8 == 0x49) {
        if ((*param_2 != 0x36) || (param_2[1] != 0x34)) {
          local_34 = 0;
          goto switchD_0055932f_caseD_0;
        }
        param_2 = param_2 + 2;
        local_8 = local_8 | 0x8000;
      }
      else if (bVar8 == 0x68) {
        local_8 = local_8 | 0x20;
      }
      else if (bVar8 == 0x6c) {
        local_8 = local_8 | 0x10;
      }
      else if (bVar8 == 0x77) {
        local_8 = local_8 | 0x800;
      }
      break;
    case 7:
      psVar4 = local_c;
      if ((char)bVar8 < 'h') {
        if ((char)bVar8 < 'e') {
          if ((char)bVar8 < 'Y') {
            if (bVar8 == 0x58) {
LAB_00559740:
              local_30 = 7;
LAB_00559747:
              local_10 = (undefined1 *)0x10;
              if ((local_8 & 0x80) != 0) {
                local_1a = 0x30;
                local_19 = (char)local_30 + 'Q';
                local_20 = 2;
              }
              goto LAB_005597b1;
            }
            if (bVar8 != 0x43) {
              if ((bVar8 != 0x45) && (bVar8 != 0x47)) {
                if (bVar8 == 0x53) {
                  if ((local_8 & 0x830) == 0) {
                    local_8 = local_8 | 0x800;
                  }
                  goto LAB_005594ee;
                }
                goto LAB_005598cb;
              }
              local_38 = 1;
              bVar8 = bVar8 + 0x20;
              goto LAB_0055954f;
            }
            if ((local_8 & 0x830) == 0) {
              local_8 = local_8 | 0x800;
            }
LAB_0055957c:
            if ((local_8 & 0x810) == 0) {
              local_24c[0] = FUN_00559aa0(&param_3);
              local_10 = (undefined1 *)0x1;
            }
            else {
              uVar5 = FUN_00559abd();
              local_10 = (undefined1 *)FUN_0055bc61(local_24c,uVar5);
              if ((int)local_10 < 0) {
                local_2c = 1;
              }
            }
            psVar4 = (short *)local_24c;
          }
          else if (bVar8 == 0x5a) {
            psVar3 = (short *)FUN_00559aa0(&param_3);
            if ((psVar3 == (short *)0x0) ||
               (psVar4 = *(short **)(psVar3 + 2), psVar4 == (short *)0x0)) {
              local_c = (short *)PTR_s__null__005cc4a0;
              psVar4 = (short *)PTR_s__null__005cc4a0;
              goto LAB_005596c1;
            }
            if ((local_8 & 0x800) == 0) {
              local_28 = 0;
              local_10 = (undefined1 *)(int)*psVar3;
            }
            else {
              local_28 = 1;
              local_10 = (undefined1 *)((uint)(int)*psVar3 >> 1);
            }
          }
          else {
            if (bVar8 == 99) goto LAB_0055957c;
            if (bVar8 == 100) goto LAB_005597a6;
          }
        }
        else {
LAB_0055954f:
          local_8 = local_8 | 0x40;
          psVar4 = (short *)local_24c;
          if (local_14 < 0) {
            local_14 = 6;
          }
          else if ((local_14 == 0) && (bVar8 == 0x67)) {
            local_14 = 1;
          }
          local_4c = *param_3;
          local_48 = param_3[1];
          param_3 = param_3 + 2;
          local_c = psVar4;
          (*(code *)PTR_FUN_005cca40)(&local_4c,local_24c,(int)(char)bVar8,local_14,local_38);
          uVar2 = local_8 & 0x80;
          if ((uVar2 != 0) && (local_14 == 0)) {
            (*(code *)PTR_FUN_005cca4c)(local_24c);
          }
          if ((bVar8 == 0x67) && (uVar2 == 0)) {
            (*(code *)PTR_FUN_005cca44)(local_24c);
          }
          if (local_24c[0] == '-') {
            local_8 = local_8 | 0x100;
            psVar4 = (short *)(local_24c + 1);
            local_c = psVar4;
          }
LAB_005596c1:
          local_10 = (undefined1 *)_strlen((char *)psVar4);
          psVar4 = local_c;
        }
      }
      else {
        if (bVar8 == 0x69) {
LAB_005597a6:
          local_8 = local_8 | 0x40;
        }
        else {
          if (bVar8 == 0x6e) {
            piVar6 = (int *)FUN_00559aa0(&param_3);
            if ((local_8 & 0x20) == 0) {
              *piVar6 = local_18;
            }
            else {
              *(undefined2 *)piVar6 = (undefined2)local_18;
            }
            local_2c = 1;
            break;
          }
          if (bVar8 == 0x6f) {
            local_10 = (undefined1 *)0x8;
            if ((local_8 & 0x80) != 0) {
              local_8 = local_8 | 0x200;
            }
            goto LAB_005597b1;
          }
          if (bVar8 == 0x70) {
            local_14 = 8;
            goto LAB_00559740;
          }
          if (bVar8 == 0x73) {
LAB_005594ee:
            iVar9 = local_14;
            if (local_14 == -1) {
              iVar9 = 0x7fffffff;
            }
            psVar3 = (short *)FUN_00559aa0(&param_3);
            if ((local_8 & 0x810) == 0) {
              psVar4 = psVar3;
              if (psVar3 == (short *)0x0) {
                psVar3 = (short *)PTR_s__null__005cc4a0;
                psVar4 = (short *)PTR_s__null__005cc4a0;
              }
              for (; (iVar9 != 0 && ((char)*psVar3 != '\0')); psVar3 = (short *)((int)psVar3 + 1)) {
                iVar9 = iVar9 + -1;
              }
              local_10 = (undefined1 *)((int)psVar3 - (int)psVar4);
            }
            else {
              if (psVar3 == (short *)0x0) {
                psVar3 = (short *)PTR_DAT_005cc4a4;
              }
              local_28 = 1;
              for (psVar4 = psVar3; (iVar9 != 0 && (*psVar4 != 0)); psVar4 = psVar4 + 1) {
                iVar9 = iVar9 + -1;
              }
              local_10 = (undefined1 *)((int)psVar4 - (int)psVar3 >> 1);
              psVar4 = psVar3;
            }
            goto LAB_005598cb;
          }
          if (bVar8 != 0x75) {
            if (bVar8 != 0x78) goto LAB_005598cb;
            local_30 = 0x27;
            goto LAB_00559747;
          }
        }
        local_10 = (undefined1 *)0xa;
LAB_005597b1:
        if ((local_8 & 0x8000) == 0) {
          if ((local_8 & 0x20) == 0) {
            if ((local_8 & 0x40) == 0) {
              uVar2 = FUN_00559aa0(&param_3);
              uVar11 = (ulonglong)uVar2;
              goto LAB_00559804;
            }
            uVar2 = FUN_00559aa0(&param_3);
          }
          else if ((local_8 & 0x40) == 0) {
            uVar2 = FUN_00559aa0(&param_3);
            uVar2 = uVar2 & 0xffff;
          }
          else {
            sVar1 = FUN_00559aa0(&param_3);
            uVar2 = (uint)sVar1;
          }
          uVar11 = (ulonglong)(int)uVar2;
        }
        else {
          uVar11 = FUN_00559aad(&param_3);
        }
LAB_00559804:
        if ((((local_8 & 0x40) != 0) && ((longlong)uVar11 < 0x100000000)) && ((longlong)uVar11 < 0))
        {
          uVar11 = CONCAT44(-((int)(uVar11 >> 0x20) + (uint)((int)uVar11 != 0)),-(int)uVar11);
          local_8 = local_8 | 0x100;
        }
        iVar9 = (int)(uVar11 >> 0x20);
        if ((local_8 & 0x8000) == 0) {
          iVar9 = 0;
        }
        lVar12 = CONCAT44(iVar9,(int)uVar11);
        if (local_14 < 0) {
          local_14 = 1;
        }
        else {
          local_8 = local_8 & 0xfffffff7;
        }
        if ((int)uVar11 == 0 && iVar9 == 0) {
          local_20 = 0;
        }
        local_c = (short *)&local_4d;
        while ((iVar9 = local_14 + -1, 0 < local_14 || (lVar12 != 0))) {
          local_40 = (int)local_10 >> 0x1f;
          local_44 = (int)local_10;
          local_14 = iVar9;
          iVar9 = __aullrem(lVar12,local_10,local_40);
          iVar9 = iVar9 + 0x30;
          lVar12 = __aulldiv(lVar12,local_44,local_40);
          if (0x39 < iVar9) {
            iVar9 = iVar9 + local_30;
          }
          psVar4 = (short *)((int)local_c + -1);
          *(char *)local_c = (char)iVar9;
          local_c = psVar4;
        }
        iVar7 = -(int)local_c;
        local_10 = &local_4d + iVar7;
        psVar4 = (short *)((int)local_c + 1);
        local_14 = iVar9;
        if (((local_8 & 0x200) != 0) &&
           ((*(char *)psVar4 != '0' || (local_10 == (undefined1 *)0x0)))) {
          *(char *)local_c = '0';
          local_10 = (undefined1 *)((int)&local_4c + iVar7);
          psVar4 = local_c;
        }
      }
LAB_005598cb:
      local_c = psVar4;
      uVar2 = local_8;
      if (local_2c == 0) {
        if ((local_8 & 0x40) != 0) {
          if ((local_8 & 0x100) == 0) {
            if ((local_8 & 1) == 0) {
              if ((local_8 & 2) == 0) goto LAB_00559903;
              local_1a = 0x20;
            }
            else {
              local_1a = 0x2b;
            }
          }
          else {
            local_1a = 0x2d;
          }
          local_20 = 1;
        }
LAB_00559903:
        iVar9 = (local_24 - local_20) - (int)local_10;
        if ((local_8 & 0xc) == 0) {
          FUN_00559a37(0x20,iVar9,param_1,&local_18);
        }
        FUN_00559a68(&local_1a,local_20,param_1,&local_18);
        if (((uVar2 & 8) != 0) && ((uVar2 & 4) == 0)) {
          FUN_00559a37(0x30,iVar9,param_1,&local_18);
        }
        if ((local_28 == 0) || (puVar10 = local_10, psVar4 = local_c, (int)local_10 < 1)) {
          FUN_00559a68(local_c,local_10,param_1,&local_18);
        }
        else {
          do {
            puVar10 = puVar10 + -1;
            iVar7 = FUN_0055bc61(local_3c,*psVar4);
            if (iVar7 < 1) break;
            FUN_00559a68(local_3c,iVar7,param_1,&local_18);
            psVar4 = psVar4 + 1;
          } while (puVar10 != (undefined1 *)0x0);
        }
        if ((local_8 & 4) != 0) {
          FUN_00559a37(0x20,iVar9,param_1,&local_18);
        }
      }
    }
    bVar8 = *param_2;
    param_2 = param_2 + 1;
  } while( true );
}

