// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00430c40
// entry: 00430c40  size: 670


undefined4 FUN_00430c40(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  uint local_5c;
  undefined4 local_58;
  undefined1 local_54 [8];
  undefined1 local_4c [8];
  int local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined1 local_34 [52];
  
  local_58 = FUN_00526410();
  FUN_00526420(0xe7);
  FUN_00538980(0,1,local_4c);
  iVar2 = 0;
  iVar3 = 0;
  do {
    puVar4 = (undefined4 *)((int)&DAT_0057e838 + iVar3);
    puVar5 = (undefined4 *)((int)&DAT_005cdd90 + iVar3);
    for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    FUN_00538860(iVar2,(undefined4 *)((int)&DAT_005cdd90 + iVar3));
    iVar3 = iVar3 + 0x30;
    iVar2 = iVar2 + 1;
  } while (iVar3 < 0x60);
  FUN_005387f0(0);
  FUN_005234d0(&local_44);
  FUN_00523740();
  FUN_005237c0(1);
  iVar2 = 1;
switchD_00430e01_caseD_3:
  do {
    do {
      iVar3 = 0;
      do {
        if (iVar3 == 1) {
          FUN_004b6ef0(local_34,s_Figure___005be8a8);
          if (*(int *)(param_1 + 8) == 0) {
            FUN_004b6e70(local_34,&DAT_005be8a0);
          }
          else {
            FUN_004b6e70(local_34,&DAT_005be89c);
            puVar6 = (undefined *)FUN_0055c2fe(*(undefined4 *)(param_1 + 8),local_54,10);
LAB_00430d6e:
            FUN_004b6e70(local_34,puVar6);
          }
        }
        else if (iVar3 == 2) {
          FUN_004b6ef0(local_34,s_Space___005be8c4);
          if (*(int *)(param_1 + 0xc) != 0) {
            uVar7 = FUN_0055c2fe(*(int *)(param_1 + 0xc),local_54,10);
            FUN_004b6e70(local_34,uVar7);
            puVar6 = &DAT_005be8b8;
            goto LAB_00430d6e;
          }
          FUN_004b6e70(local_34,&DAT_005be8c0);
        }
        else {
          local_34[0] = 0;
        }
        FUN_005232d0(1,iVar3);
        if (iVar2 == iVar3) {
          FUN_00523490(local_34);
        }
        else {
          FUN_00523470(local_34,0x15);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < 8);
      if (iVar2 == 1) {
        uVar7 = 0;
LAB_00430dbc:
        FUN_005383e0(uVar7);
      }
      else if (iVar2 == 2) {
        uVar7 = 1;
        goto LAB_00430dbc;
      }
      FUN_00538b30();
      iVar3 = FUN_00526620(&local_5c);
    } while (iVar3 != 0);
    if (0x7532 < local_5c) {
      switch(local_5c) {
      case 0x7534:
switchD_00430e53_caseD_7534:
        uVar7 = 0xfffffffe;
LAB_00430e82:
        FUN_00523800(1);
        FUN_005232d0(local_40,local_3c);
        if (local_44 == -1) {
          FUN_00523740();
        }
        else {
          FUN_00527030();
        }
        FUN_00538810();
        FUN_005389c0(0,1,local_4c);
        FUN_00526440();
        FUN_00526420(local_58);
        return uVar7;
      case 0x7542:
        if (1 < iVar2) {
          iVar2 = iVar2 + -1;
        }
        break;
      case 0x7547:
        if (iVar2 < 2) {
          iVar2 = iVar2 + 1;
        }
        break;
      case 0x754d:
        uVar7 = 0xffffffff;
        goto LAB_00430e82;
      }
      goto switchD_00430e01_caseD_3;
    }
    if (local_5c == 0x7532) goto switchD_00430e53_caseD_7534;
    switch(local_5c) {
    case 1:
      *(undefined4 *)(param_1 + 8) = 0;
      break;
    case 2:
      FUN_00430b30(0,param_1 + 8);
      break;
    case 10:
      *(undefined4 *)(param_1 + 0xc) = 0;
      break;
    case 0xb:
      FUN_00430b30(1,param_1 + 0xc);
    }
  } while( true );
}

