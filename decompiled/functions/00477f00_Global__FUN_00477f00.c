// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00477f00
// entry: 00477f00  size: 722


undefined4 FUN_00477f00(short *param_1,short *param_2)

{
  short *psVar1;
  undefined4 uVar2;
  int iVar3;
  short *psVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  short *psVar7;
  undefined *puVar8;
  undefined1 local_4e [2];
  int local_4c;
  short *local_48;
  uint local_44;
  undefined4 local_40;
  undefined1 local_3c [8];
  undefined1 local_34 [52];
  
  psVar1 = param_1;
  local_40 = FUN_00526410();
  FUN_00526420(0xe7);
  FUN_00538980(0,0,local_3c);
  FUN_005387c0();
  puVar5 = &DAT_00582c18;
  puVar6 = &DAT_005cf3b0;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  FUN_00538860(0,&DAT_005cf3b0);
  FUN_005383a0(0);
  local_4c = 1;
  local_48 = param_2 + 0x10;
  param_1 = param_1 + 7;
LAB_00477f78:
  while( true ) {
    do {
      iVar3 = 1;
      psVar4 = param_2;
      psVar7 = psVar1;
      do {
        psVar7 = psVar7 + 7;
        psVar4 = psVar4 + 0x10;
        FUN_004b6ef0(local_34,s_StatGraph_005bf54c);
        FUN_0055c2fe(iVar3,local_4e,10);
        FUN_004b6e70(local_34,local_4e);
        FUN_004b6e70(local_34,s__Draw_005bf544);
        if (psVar1 == (short *)0x0) {
          if (*psVar4 == 1) {
            puVar8 = &DAT_005bf310;
          }
          else {
            puVar8 = &DAT_005bf30c;
          }
        }
        else if (*psVar7 == 1) {
          puVar8 = &DAT_005bf310;
        }
        else {
          puVar8 = &DAT_005bf30c;
        }
        FUN_004b6e70(local_34,puVar8);
        FUN_005232d0(1,iVar3);
        if (iVar3 == local_4c) {
          FUN_00523490(local_34);
        }
        else {
          FUN_00523470(local_34,0x15);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < 4);
      for (; iVar3 < 8; iVar3 = iVar3 + 1) {
        FUN_005232d0(1,iVar3);
        FUN_00523470(&DAT_005cd010,0x15);
      }
      FUN_00538b30();
      iVar3 = FUN_00526620(&local_44);
    } while (iVar3 != 0);
    if (local_44 < 0x7535) break;
    if (local_44 == 0x7542) {
      if (1 < local_4c) {
        local_4c = local_4c + -1;
        param_1 = param_1 + -7;
        local_48 = local_48 + -0x10;
      }
    }
    else if (local_44 == 0x7547) {
      if (local_4c < 3) {
        local_4c = local_4c + 1;
        param_1 = param_1 + 7;
        local_48 = local_48 + 0x10;
      }
    }
    else if (local_44 == 0x754d) {
      uVar2 = 0xffffffff;
LAB_004781a8:
      FUN_00538810();
      FUN_00526420(local_40);
      FUN_005389c0(0,0,local_3c);
      return uVar2;
    }
  }
  if (local_44 != 0x7534) {
    if (3 < local_44) {
      if (local_44 == 0x7532) {
        uVar2 = 0xfffffffe;
        goto LAB_004781a8;
      }
      goto LAB_00477f78;
    }
    if (local_44 != 3) {
      if (local_44 == 1) {
        if (psVar1 != (short *)0x0) {
          *param_1 = 1;
          uVar2 = FUN_00530eb0(psVar1);
          FUN_0052b240(uVar2);
          goto LAB_00477f78;
        }
        *local_48 = 1;
      }
      else {
        if (local_44 != 2) goto LAB_00477f78;
        if (psVar1 != (short *)0x0) {
          *param_1 = 0;
          uVar2 = FUN_00530eb0(psVar1);
          FUN_0052b240(uVar2);
          goto LAB_00477f78;
        }
        *local_48 = 0;
      }
      uVar2 = FUN_00489480(param_2);
      FUN_0052b240(uVar2);
      goto LAB_00477f78;
    }
  }
  uVar2 = 0xfffffff6;
  goto LAB_004781a8;
}

