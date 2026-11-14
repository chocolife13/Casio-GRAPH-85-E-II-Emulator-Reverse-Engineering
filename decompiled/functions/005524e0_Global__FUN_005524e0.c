// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005524e0
// entry: 005524e0  size: 1561


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_005524e0(undefined4 *param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  int *piVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined *puVar10;
  undefined1 *puVar11;
  uint uVar12;
  undefined2 uVar13;
  undefined4 uVar14;
  int local_248;
  undefined4 local_244;
  undefined4 local_240;
  undefined2 local_23c;
  uint local_238;
  undefined1 local_234 [4];
  undefined4 local_230;
  int local_22c;
  undefined4 local_228;
  undefined4 local_224;
  undefined1 local_21c [12];
  undefined1 local_210 [52];
  char local_1dc [52];
  undefined1 local_1a8 [12];
  undefined1 local_19c [52];
  undefined1 local_168 [52];
  undefined1 local_134 [256];
  undefined1 local_34 [52];
  
  FUN_00485e40(local_21c);
  local_230 = FUN_00526410();
  if (param_2 == 5) {
    uVar14 = 100;
  }
  else {
    uVar14 = 0xf7;
  }
  FUN_00526420(uVar14);
  FUN_00538a00(local_1a8);
  local_244 = *param_1;
  local_240 = param_1[1];
  local_23c = *(undefined2 *)(param_1 + 2);
  FUN_005234d0(&local_22c);
  FUN_00523740();
  FUN_00538980(0,0,local_234);
  _DAT_005d32fc = DAT_0059a1f4;
  DAT_005d32d0 = DAT_0059a1e8;
  _DAT_005d32d4 = DAT_0059a1ec;
  puVar6 = &DAT_005d32d0;
  puVar9 = &DAT_005d32d8;
  for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar9 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar9 = puVar9 + 1;
  }
  _DAT_005d32f8 = DAT_0059a1f0;
  FUN_00538860(0,&DAT_005d32d0);
  FUN_005387f0(0);
  iVar4 = 1;
  piVar7 = &DAT_0059a148;
  if (param_3 != 1) {
    piVar7 = &DAT_0059a198;
  }
  iVar2 = 0;
  iVar8 = *piVar7;
  piVar5 = piVar7;
  while ((iVar8 != -1 && (iVar8 != param_2))) {
    piVar1 = piVar5 + 4;
    piVar5 = piVar5 + 4;
    iVar2 = iVar2 + 1;
    iVar8 = *piVar1;
  }
  local_248 = 1;
  local_134[0] = 0;
LAB_00552600:
  do {
    FUN_005232d0(1,1);
    uVar14 = FUN_0052f6f0(piVar7[iVar2 * 4 + 1],local_34,0x15);
    FUN_00523470(uVar14);
    if (param_3 == 1) {
      if (param_2 == 1) {
        FUN_004b6ef0(local_210,PTR_s_Cell___005cb4b8);
        FUN_00477d00(&local_244,local_168);
      }
      else {
        FUN_004b6ef0(local_210,PTR_s_Cell_Range__005cb4bc);
        FUN_00477d70(&local_244,&local_240,local_168);
      }
    }
    else if (param_2 == 5) {
      FUN_004b6ef0(local_210,PTR_s_Cell_Range__005cb4bc);
      FUN_00477d70(&local_244,&local_240,local_168);
    }
    else {
      FUN_004b6ef0(local_210,PTR_s_1st_Cell___005cb4c0);
      FUN_00477d00(&local_244,local_168);
    }
    FUN_004b6e70(local_210,local_168);
    FUN_004b6ef0(local_19c,piVar7[iVar2 * 4 + 2]);
    local_1dc[1] = 0;
    local_1dc[2] = 0;
    if ((param_2 == 1) || (param_2 == 4)) {
      if (local_248 == 0x1b) {
        local_1dc[0] = -0x33;
      }
      else if (local_248 == 0x1c) {
        local_1dc[0] = -0x1a;
        local_1dc[1] = 0x47;
      }
      else {
        local_1dc[0] = (char)local_248 + '@';
      }
    }
    else if (param_2 == 5) {
      FUN_004b7b40(local_134,local_1dc,0x15);
    }
    else {
      FUN_0055c2fe(local_248,local_1dc,10);
    }
    FUN_004b6e70(local_19c,local_1dc);
    if (param_3 == 1) {
      if (iVar4 == 1) {
        FUN_005232d0(1,2);
        FUN_00523490(local_210,0x15);
        FUN_005232d0(1,3);
        FUN_00523470(local_19c,0x15);
      }
      else {
        FUN_005232d0(1,2);
        FUN_00523470(local_210,0x15);
        FUN_005232d0(1,3);
        puVar11 = local_19c;
LAB_00552869:
        FUN_00523490(puVar11,0x15);
      }
    }
    else {
      if (iVar4 != 1) {
        FUN_005232d0(1,2);
        FUN_00523470(local_19c,0x15);
        FUN_005232d0(1,3);
        puVar11 = local_210;
        goto LAB_00552869;
      }
      FUN_005232d0(1,2);
      FUN_00523490(local_19c,0x15);
      FUN_005232d0(1,3);
      FUN_00523470(local_210,0x15);
    }
    iVar8 = 4;
    do {
      FUN_005232d0(1,iVar8);
      uVar13 = 0;
      FUN_00523470(&DAT_005cd010,0x15);
      iVar8 = iVar8 + 1;
    } while (iVar8 < 8);
    FUN_00538b30();
    iVar8 = 1;
    puVar10 = PTR_s_Cell_Range__005cb4bc;
    if (param_3 == 1) {
      if (iVar4 == 1) {
        if (param_2 == 1) {
          iVar8 = 2;
          puVar10 = PTR_s_Cell___005cb4b8;
        }
      }
      else {
LAB_005528c1:
        iVar8 = piVar7[iVar2 * 4 + 3];
        puVar10 = (undefined *)piVar7[iVar2 * 4 + 2];
      }
    }
    else {
      if (iVar4 == 1) goto LAB_005528c1;
      if (param_2 != 5) {
        iVar8 = 2;
        puVar10 = PTR_s_1st_Cell___005cb4c0;
      }
    }
    iVar3 = FUN_00526620(&local_238);
    if (iVar3 != 0) {
      uVar14 = 1;
      uVar12 = local_238;
LAB_00552956:
      iVar8 = FUN_00552310(puVar10,&local_244,&local_248,uVar14,uVar12,iVar4 + 1,local_134,iVar8);
      if (iVar8 == 0) {
LAB_00552967:
        iVar4 = 2;
      }
      goto LAB_00552600;
    }
    if (local_238 < 0x7543) {
      if (local_238 != 0x7542) {
        if (local_238 < 0x7533) {
          if (local_238 == 0x7532) {
            uVar14 = 0xfffffffe;
            goto LAB_00552a9f;
          }
          if (local_238 != 1) {
            if (local_238 == 0x7531) {
              uVar14 = 1;
              uVar12 = 0x58;
              goto LAB_00552956;
            }
            goto LAB_00552600;
          }
        }
        else if (local_238 != 0x7534) goto LAB_00552600;
        thunk_FUN_0040add0();
        FUN_0052f840();
        if (param_3 == 1) {
          iVar8 = FUN_00551e60(local_244,local_240,CONCAT22(uVar13,local_23c),local_248,param_2);
          if (iVar8 != 0) {
            FUN_0052b240(iVar8);
            goto LAB_00552600;
          }
        }
        else {
          if (param_2 == 5) {
            iVar8 = FUN_0054bc00(local_21c,&local_244,local_134);
          }
          else {
            iVar8 = FUN_005517f0(local_244,local_240,CONCAT22(uVar13,local_23c),local_248,param_2);
          }
          if (iVar8 != 0) {
            FUN_0052b240(iVar8);
            goto LAB_00552600;
          }
        }
        uVar14 = 0;
        goto LAB_00552a9f;
      }
      if (iVar4 == 1) goto LAB_00552967;
      iVar4 = iVar4 + -1;
      goto LAB_00552600;
    }
    if (local_238 == 0x7545) {
      uVar12 = 0x7545;
      uVar14 = 0;
      goto LAB_00552956;
    }
    if (local_238 == 0x7547) {
      if (iVar4 < 2) {
        iVar4 = iVar4 + 1;
      }
      else {
        iVar4 = 1;
      }
    }
    else if (local_238 == 0x754d) {
      uVar14 = 0xffffffff;
LAB_00552a9f:
      FUN_00538810();
      FUN_005389c0(0,0,local_234);
      FUN_005232d0(local_228,local_224);
      if (local_22c == -1) {
        FUN_00523740();
      }
      FUN_00538a50(local_1a8);
      FUN_00526420(local_230);
      return uVar14;
    }
  } while( true );
}

