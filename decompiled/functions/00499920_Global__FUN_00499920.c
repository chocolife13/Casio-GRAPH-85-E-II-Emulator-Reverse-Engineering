// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00499920
// entry: 00499920  size: 1074


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00499920(undefined4 *param_1)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  undefined1 uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  char *local_43c;
  undefined4 local_438;
  undefined2 local_434;
  undefined2 local_432;
  int local_430;
  undefined4 local_42c;
  undefined4 local_428;
  undefined4 local_424;
  undefined4 local_420;
  undefined4 local_41c;
  byte local_418 [2];
  ushort local_416;
  ushort local_414;
  char local_400 [1024];
  
  *param_1 = 0x7593;
  iVar9 = DAT_005d6d90;
  iVar11 = DAT_005d6d88;
  DAT_005d6d80 = 1;
  local_430 = DAT_005d6d90;
  iVar6 = FUN_004956d0(DAT_005d6d88);
  iVar7 = iVar11;
  do {
    if (iVar6 == 0x3000000) {
      local_43c = (char *)FUN_00495770(DAT_005d6d88);
      if (*local_43c != '\0') {
        cVar4 = FUN_00535980(local_43c);
        if (cVar4 == '\0') {
          FUN_0052b240(2);
          return _DAT_005d5728 & 0xffff;
        }
        FUN_00535c50(local_43c,local_400,0,1);
        pcVar1 = local_43c;
        local_42c = 0;
        local_43c = local_400;
        local_428 = 0;
        local_424 = 0;
        local_420 = 0;
        local_41c = 0;
        iVar7 = FUN_00499220(&local_43c,local_418,(int)&local_428 + 2);
        if (iVar7 == 0) {
          iVar11 = FUN_004b73a0(local_43c + -1);
          if (iVar11 == 0) {
            iVar11 = -1;
          }
          else {
            iVar11 = -2;
          }
          local_43c = local_43c + iVar11;
          FUN_00535c50(pcVar1,local_43c,(uint)local_43c & 0xff,0);
          uVar8 = FUN_004e4020(local_418);
          FUN_0052b240(uVar8);
          uVar10 = FUN_004980c0(pcVar1,_DAT_005d5728 & 0xffff);
          return uVar10;
        }
        uVar8 = FUN_00526090(0x57,0);
        FUN_004955a0(&local_42c,uVar8);
        uVar8 = FUN_00526090(0x2a,1);
        FUN_004955a0(&local_42c,uVar8);
        uVar8 = FUN_00526090(0x13,2);
        FUN_004955a0(&local_42c,uVar8);
        uVar5 = FUN_00526090(0x2b);
        local_41c._0_3_ = CONCAT12(uVar5,(undefined2)local_41c);
        FUN_00499740(local_418,&local_42c);
        local_438 = 0x4000000;
        local_432 = local_42c._2_2_;
        local_434 = (undefined2)local_42c;
        iVar7 = FUN_004956d0(DAT_005d6d88 + 1);
        if (iVar7 == 0x4000000) {
          iVar9 = FUN_00496410(DAT_005d6d88 + 1);
          iVar7 = DAT_005d6d88;
          if (iVar9 == 0) goto LAB_00499c77;
          DAT_005d6d88 = DAT_005d6d88 + 1;
          iVar7 = FUN_00495970(iVar7);
          DAT_005d6d90 = DAT_005d6d90 + iVar7;
        }
        else {
          iVar7 = FUN_00495b10(DAT_005d6d88 + 1,&local_438,local_418);
          if (iVar7 == 0) goto LAB_00499c77;
        }
        iVar7 = FUN_00495720(DAT_005d6d88);
        puVar12 = &local_42c;
        puVar13 = (undefined4 *)(iVar7 + 0x18);
        for (iVar6 = 5; iVar9 = DAT_005d6d90, iVar7 = DAT_005d6d88, iVar6 != 0; iVar6 = iVar6 + -1)
        {
          *puVar13 = *puVar12;
          puVar12 = puVar12 + 1;
          puVar13 = puVar13 + 1;
        }
        FUN_00497260();
        FUN_004971d0(1);
        FUN_00538b30();
        FUN_0040ae30();
        goto LAB_00499b4c;
      }
      if (DAT_005d6d88 == DAT_005d6dbc + -1) {
        local_430 = DAT_005d6d90;
        iVar11 = DAT_005d6d88;
        goto LAB_00499b4c;
      }
      FUN_00496210(DAT_005d6d88);
    }
    else {
LAB_00499b4c:
      iVar6 = DAT_005d6d88;
      DAT_005d6d88 = DAT_005d6d88 + 1;
      iVar6 = FUN_00495970(iVar6);
      DAT_005d6d90 = DAT_005d6d90 + iVar6;
    }
    iVar6 = FUN_004956d0(DAT_005d6d88);
    iVar2 = iVar7;
    iVar3 = iVar9;
    if (iVar6 == 0) {
      DAT_005d6d88 = DAT_005d6d88 + -1;
      iVar6 = FUN_00495970(DAT_005d6d88);
      DAT_005d6d90 = DAT_005d6d90 - iVar6;
      iVar6 = FUN_004956d0(DAT_005d6d88);
      if (iVar6 == 0x4000000) {
        local_438 = 0x3000000;
        local_434 = 6;
        local_432 = 8;
        iVar11 = FUN_00495b10(DAT_005d6d88 + 1,&local_438,&DAT_005cd010);
        iVar2 = DAT_005d6d88;
        iVar3 = DAT_005d6d90;
        if (iVar11 == 0) {
LAB_00499c77:
          FUN_0052b240(4);
          return 0;
        }
      }
      else if (iVar7 < iVar11) {
        DAT_005d6d90 = local_430;
        iVar2 = iVar11;
        iVar3 = DAT_005d6d90;
      }
      goto LAB_00499caf;
    }
    if (iVar6 == 0x5000000) {
LAB_00499caf:
      DAT_005d6d90 = iVar3;
      DAT_005d6d88 = iVar2;
      if ((((local_418[0] & 0x70) == 0x20) && (0x14 < local_416)) ||
         (((local_418[0] & 0x70) == 0x30 && ((6 < local_416 || (6 < local_414)))))) {
        DAT_005d6d88 = iVar7;
        DAT_005d6d90 = iVar9;
        *param_1 = 0x7534;
      }
      iVar11 = FUN_0055b770(DAT_005d6d84,s_RUN2D1_005be2c4);
      if ((iVar11 == 0) && (0x3d < DAT_005d6dbc)) {
        FUN_00496210(0);
        DAT_005d6d88 = DAT_005d6dbc + -1;
      }
      iVar11 = FUN_004956d0(DAT_005d6d88);
      if (iVar11 == 0x3000000) {
        DAT_005d6d8c = 1;
      }
      return 0;
    }
  } while( true );
}

