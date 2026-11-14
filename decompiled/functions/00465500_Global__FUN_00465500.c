// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00465500
// entry: 00465500  size: 2080


undefined4 FUN_00465500(int param_1,undefined4 *param_2)

{
  undefined *puVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined **ppuVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined1 local_b0 [12];
  int local_a4;
  int local_a0;
  undefined4 local_9c [3];
  undefined1 local_90 [24];
  undefined1 local_78 [12];
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined1 local_24 [12];
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  puVar8 = param_2;
  puVar9 = local_9c;
  for (iVar5 = 0x21; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar9 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar9 = puVar9 + 1;
  }
  uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x8dc) + 8);
  cVar2 = FUN_00526090(0x20);
  ppuVar6 = &PTR_DAT_005812ec;
  switch(uVar3) {
  case 9:
    if (cVar2 == '\x01') {
      return 0;
    }
    break;
  case 10:
  case 0xb:
    if (cVar2 == '\x01') {
      return 0;
    }
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
    ppuVar6 = &PTR_DAT_0058132c;
    break;
  case 0xc:
    if (cVar2 == '\x01') {
      return 0;
    }
  case 7:
    ppuVar6 = &PTR_DAT_00581348;
    break;
  case 0xd:
    if (cVar2 == '\x01') {
      return 0;
    }
  case 8:
    ppuVar6 = &PTR_DAT_00581364;
    break;
  default:
    goto switchD_0046554b_default;
  }
  iVar5 = 7;
  puVar8 = local_9c;
  do {
    puVar1 = *ppuVar6;
    ppuVar6 = ppuVar6 + 1;
    FUN_004e4c30(puVar1,puVar8);
    iVar5 = iVar5 + -1;
    puVar8 = puVar8 + 3;
  } while (iVar5 != 0);
  switch(uVar3) {
  case 8:
  case 0xd:
    iVar5 = *(int *)(*(int *)(param_1 + 0x8dc) + 0x14);
    FUN_004e57c0(local_18);
    iVar4 = FUN_004e7290(iVar5,local_18);
    if (iVar4 != 0) {
      FUN_004e6d00(iVar5,iVar5 + 0xc,&local_bc);
      uVar3 = FUN_004e57c0(local_18,local_b0);
      FUN_004e6d00(iVar5,uVar3);
      uVar3 = FUN_004e57c0(local_18,local_c);
      FUN_004e6d00(iVar5 + 0xc,uVar3);
      FUN_004e6b80(&local_bc,local_c,&local_c8);
      FUN_004e6a00(&local_bc,local_b0,&local_bc);
      FUN_004e6dd0(&local_c8,&local_bc,&local_c8);
      iVar5 = FUN_004e4020(&local_c8);
      if (iVar5 == 0) {
        FUN_00465f90(&local_c8,&local_bc,param_1,0);
        FUN_004e5780(local_b0);
        iVar5 = FUN_004e71d0(&local_bc,local_b0);
        if (iVar5 == 0) {
          local_60 = local_bc;
          local_5c = local_b8;
          local_58 = local_b4;
          goto LAB_00465724;
        }
      }
    }
    break;
  case 9:
    FUN_004666a0(&local_a0,&local_a4);
    if (local_a0 == 0) {
      return 0x1c;
    }
    if (local_a4 == 0) {
      return 0x1c;
    }
    FUN_004666d0(local_9c,1);
    FUN_004666d0(local_90,local_a4);
    iVar5 = FUN_004e71d0(local_9c,local_90);
    if (iVar5 != 0) {
      return 0x1c;
    }
    FUN_004e6b80(local_90,local_9c,&local_c8);
    FUN_004e5070(0x14,&local_bc);
    FUN_004e6dd0(&local_c8,&local_bc,&local_c8);
    FUN_004e6a00(local_90,&local_c8,local_90);
    FUN_004e6b80(local_9c,&local_c8,local_9c);
    FUN_004e7910(local_9c,local_9c);
    FUN_004e7910(local_90,local_90);
    FUN_004e6b80(local_90,local_9c,&local_c8);
    FUN_004e5070(0x7e,&local_bc);
    FUN_004e6dd0(&local_c8,&local_bc,local_78);
    FUN_00466750(&local_60,1,1);
    FUN_00466750(&local_6c,1,1);
    iVar4 = 1;
    iVar5 = local_a4;
    if (0 < local_a0) {
      do {
        iVar7 = 1;
        if (0 < iVar5) {
          do {
            FUN_00466750(&local_c8,iVar7,iVar4);
            iVar5 = FUN_004e7290(&local_c8,&local_60);
            if (iVar5 != 0) {
              local_60 = local_c8;
              local_5c = local_c4;
              local_58 = local_c0;
            }
            iVar5 = FUN_004e7250(&local_c8,&local_6c);
            if (iVar5 != 0) {
              local_6c = local_c8;
              local_68 = local_c4;
              local_64 = local_c0;
            }
            iVar7 = iVar7 + 1;
            iVar5 = local_a4;
          } while (iVar7 <= local_a4);
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 <= local_a0);
    }
    iVar5 = FUN_004e71d0(&local_6c,&local_60);
    if (iVar5 != 0) {
      return 0x1c;
    }
    FUN_004e6b80(&local_60,&local_6c,local_b0);
    FUN_004e5070(4,&local_c8);
    FUN_004e6dd0(local_b0,&local_c8,&local_c8);
    FUN_004e6b80(&local_6c,&local_c8,&local_6c);
    FUN_004e6a00(&local_60,&local_c8,&local_60);
    FUN_004e7910(&local_6c,&local_6c);
    FUN_004e7910(&local_60,&local_60);
    break;
  case 10:
    iVar4 = *(int *)(*(int *)(param_1 + 0x8dc) + 0x14);
    iVar5 = iVar4 + 0xc;
    FUN_004e5070(4,&local_c8);
    FUN_004e6d00(&local_c8,iVar4,&local_c8);
    FUN_004e6dd0(iVar5,&local_c8,&local_bc);
    FUN_004e7620(&local_bc,&local_bc);
    FUN_004e4c30(&DAT_005bed50,local_b0);
    iVar4 = FUN_004e7310(&local_bc,local_b0);
    if (iVar4 != 0) {
      FUN_004e5780(&local_c8);
    }
    FUN_004e6a00(iVar5,&local_c8,local_90);
    FUN_004e6b80(iVar5,&local_c8,local_9c);
    FUN_004e6b80(local_90,local_9c,&local_c8);
    FUN_004e5070(0x14,&local_bc);
    FUN_004e6dd0(&local_c8,&local_bc,&local_c8);
    FUN_004e6a00(local_90,&local_c8,local_90);
    FUN_004e6b80(local_9c,&local_c8,local_9c);
    FUN_004e7910(local_9c,local_9c);
    FUN_004e7910(local_90,local_90);
    FUN_004e6b80(local_90,local_9c,&local_c8);
    FUN_004e5070(0x7e,&local_bc);
    FUN_004e6dd0(&local_c8,&local_bc,local_78);
    FUN_004661b0(iVar5,&local_60,param_1,0);
LAB_00465724:
    FUN_004e5780(&local_6c);
    FUN_004e6b80(&local_60,&local_6c,local_b0);
    FUN_004e5070(4,&local_c8);
    FUN_004e5070(10,&local_bc);
    FUN_004e6dd0(local_b0,&local_c8,&local_c8);
    FUN_004e6dd0(local_b0,&local_bc,&local_bc);
    FUN_004e6b80(&local_6c,&local_c8,&local_6c);
    FUN_004e6a00(&local_60,&local_bc,&local_60);
    FUN_004e7910(&local_6c,&local_6c);
    FUN_004e7910(&local_60,&local_60);
  }
  FUN_004e5640(local_9c,local_9c);
  FUN_004e5640(local_90,local_90);
  FUN_004e5640(local_78,local_78);
  FUN_004e5640(&local_6c,&local_6c);
  FUN_004e5640(&local_60,&local_60);
  FUN_004e6b40(local_90,local_9c,&local_bc);
  FUN_004e7910(&local_bc,&local_bc);
  uVar3 = FUN_004e5070(0x7e,local_b0,local_78);
  FUN_004e6d90(&local_bc,uVar3);
  FUN_004e7910(local_78,local_78);
  uVar3 = FUN_004e5070(0x3e,local_b0,local_24);
  FUN_004e6d90(&local_bc,uVar3);
  FUN_004e7910(local_24,local_24);
  FUN_004e6b40(&local_60,&local_6c,&local_bc);
  uVar3 = FUN_004e5070(0x3e,local_b0,&local_bc);
  FUN_004e6d90(&local_bc,uVar3);
  if ((((char)(undefined2)local_bc == '\0') && ((char)((ushort)(undefined2)local_bc >> 8) == '\0'))
     || (iVar5 = FUN_0051c300(local_9c), iVar5 != 0)) {
    return 0x1c;
  }
  puVar8 = local_9c;
  for (iVar5 = 0x21; iVar5 != 0; iVar5 = iVar5 + -1) {
    *param_2 = *puVar8;
    puVar8 = puVar8 + 1;
    param_2 = param_2 + 1;
  }
switchD_0046554b_default:
  return 0;
}

