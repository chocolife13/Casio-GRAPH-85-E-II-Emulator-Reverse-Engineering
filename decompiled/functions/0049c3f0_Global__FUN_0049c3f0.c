// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0049c3f0
// entry: 0049c3f0  size: 803


void FUN_0049c3f0(void)

{
  char cVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 unaff_EBX;
  char *pcVar6;
  char *pcVar7;
  short **ppsVar8;
  short **ppsVar9;
  short *psVar10;
  undefined1 local_2ac0 [10240];
  short local_2c0 [262];
  short local_b4 [32];
  short local_74 [2];
  char local_70 [40];
  undefined2 local_48;
  undefined2 local_46;
  undefined4 local_44;
  undefined2 local_40;
  undefined2 local_3e;
  undefined4 local_3c;
  undefined2 local_38;
  undefined2 local_36;
  undefined4 local_34;
  undefined2 local_30;
  undefined2 local_2e;
  undefined4 local_2c;
  undefined4 local_28;
  char *local_24;
  undefined2 *local_20;
  short *local_1c;
  short *local_18 [2];
  uint uVar11;
  undefined3 uVar12;
  
  FUN_00553a90();
  local_48 = 0x3b1;
  local_44 = 0x3b1;
  local_40 = 0x186;
  local_3c = 0x186;
  local_38 = 0x38;
  local_34 = 0x38;
  local_30 = 0x187;
  local_2c = 0x187;
  DAT_005cfd54 = local_b4;
  local_1c = (short *)0x2a9;
  DAT_005d6db4 = local_2ac0;
  local_46 = 2;
  DAT_005d6db8 = local_2c0;
  local_3e = 2;
  local_36 = 2;
  local_2e = 2;
  local_28 = 0;
  local_24 = (char *)0x0;
  local_20 = (undefined2 *)0x202a9;
  uVar11 = CONCAT31((int3)((uint)unaff_EBX >> 8),0x11);
  local_18[0] = (short *)0x0;
  local_18[1] = (short *)0x49c49c;
  iVar3 = FUN_004ab180();
  if (iVar3 == 0) {
    local_20 = (undefined2 *)0x0;
  }
  local_18[0] = local_b4;
  local_18[1] = (short *)0x0;
  local_1c = (short *)0x49c4b8;
  iVar3 = __setjmp3();
  if (iVar3 != 0) {
    local_18[1] = (short *)0x49c4c4;
    FUN_00523740();
    DAT_005d8260 = 0;
  }
  psVar10 = local_2c0;
  for (iVar3 = 0x82; iVar3 != 0; iVar3 = iVar3 + -1) {
    psVar10[0] = 0;
    psVar10[1] = 0;
    psVar10 = psVar10 + 2;
  }
  *psVar10 = 0;
  local_18[1] = (short *)0x49c4e0;
  thunk_FUN_00407100();
  local_18[0] = local_74;
  local_1c = (short *)0x49c4ed;
  local_18[1] = (short *)uVar11;
  FUN_004a0240();
LAB_0049c4f0:
  do {
    while( true ) {
      local_18[1] = (short *)0x49c4f5;
      FUN_004a9d00();
      local_18[0] = local_2c0;
      local_1c = local_74;
      local_20 = &local_48;
      local_24 = s___g1e_005bfd58;
      local_28 = 0x216;
      DAT_005d6d80 = 0;
      local_2c = 0x49c51d;
      local_18[1] = (short *)uVar11;
      iVar3 = FUN_0049f420();
      uVar12 = (undefined3)(uVar11 >> 8);
      if (iVar3 < 0x3b2) break;
      if (iVar3 != 1000) goto code_r0x0049c588;
      uVar11 = CONCAT31(uVar12,0x11);
      local_20 = (undefined2 *)CONCAT22(local_20._2_2_,0x2a9);
LAB_0049c6ed:
      local_18[0] = local_74;
      local_1c = (short *)0x49c6fa;
      local_18[1] = (short *)uVar11;
      FUN_004a02b0();
      psVar10 = local_2c0;
      for (iVar3 = 0x82; iVar3 != 0; iVar3 = iVar3 + -1) {
        psVar10[0] = 0;
        psVar10[1] = 0;
        psVar10 = psVar10 + 2;
      }
      *psVar10 = 0;
    }
    if (iVar3 == 0x3b1) goto LAB_0049c593;
    if (iVar3 == 0x186) {
      sVar2 = *DAT_005d6db8;
      psVar10 = DAT_005d6db8;
      while (sVar2 != 0) {
        psVar10 = psVar10 + 1;
        sVar2 = *psVar10;
      }
      *psVar10 = 0x2e;
      psVar10[1] = 0x67;
      psVar10[2] = 0x31;
      psVar10[3] = 0x65;
      psVar10[4] = 0;
      goto LAB_0049c5e1;
    }
    if (iVar3 == 0x2a9) {
      uVar11 = CONCAT31(uVar12,0x12);
      local_20 = (undefined2 *)CONCAT22(local_20._2_2_,1000);
      goto LAB_0049c6ed;
    }
  } while( true );
code_r0x0049c588:
  if (iVar3 != 0x7534) goto LAB_0049c4f0;
LAB_0049c593:
  if ((uVar11 & 2) == 0) {
LAB_0049c5b7:
    local_18[1] = (short *)0x0;
    local_18[0] = (short *)0x1;
    local_1c = DAT_005d6db8;
    local_20 = (undefined2 *)0x49c5c5;
    local_18[1] = (short *)FUN_00429b00();
    if ((int)local_18[1] < 0) {
      if (local_18[1] != (short *)0xffffffff) goto LAB_0049c5e1;
      local_18[1] = (short *)0x2c;
    }
    else {
      local_18[0] = (short *)0x49c5de;
      FUN_00429be0();
LAB_0049c5e1:
      local_18[1] = DAT_005d6db8;
      local_18[0] = (short *)0x4000;
      local_1c = (short *)0x49c5f2;
      local_18[1] = (short *)FUN_004aef40();
      if (local_18[1] == (short *)0x0) {
        local_18[1] = (short *)0x0;
        local_18[0] = (short *)0x49c613;
        iVar3 = FUN_0049ab60();
        if (iVar3 == 0x7532) {
          local_18[1] = local_74;
          local_18[0] = (short *)0x49c626;
          FUN_004a0290();
        }
        else {
          iVar3 = -1;
          pcVar6 = local_70;
          do {
            if (iVar3 == 0) break;
            iVar3 = iVar3 + -1;
            cVar1 = *pcVar6;
            pcVar6 = pcVar6 + 1;
          } while (cVar1 != '\0');
          if (iVar3 != -2) {
            uVar4 = 0xffffffff;
            pcVar6 = local_70;
            do {
              pcVar7 = pcVar6;
              if (uVar4 == 0) break;
              uVar4 = uVar4 - 1;
              pcVar7 = pcVar6 + 1;
              cVar1 = *pcVar6;
              pcVar6 = pcVar7;
            } while (cVar1 != '\0');
            uVar4 = ~uVar4;
            pcVar6 = pcVar7 + -uVar4;
            ppsVar8 = local_18;
            for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
              *ppsVar8 = *(short **)pcVar6;
              pcVar6 = pcVar6 + 4;
              ppsVar8 = ppsVar8 + 1;
            }
            for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
              *(char *)ppsVar8 = *pcVar6;
              pcVar6 = pcVar6 + 1;
              ppsVar8 = (short **)((int)ppsVar8 + 1);
            }
          }
          local_18[1] = local_74;
          local_18[0] = (short *)0x49c669;
          FUN_004a0290();
          local_18[0] = (short *)0x49c66e;
          thunk_FUN_00407100();
          local_18[0] = (short *)0x49c673;
          iVar3 = FUN_0049c2e0();
          local_18[0] = (short *)0xffffffff;
          local_1c = (short *)0x49c67c;
          FUN_004ac470();
          if (iVar3 != 0x754d) goto LAB_0049c69b;
        }
        goto LAB_0049c687;
      }
    }
    local_18[0] = (short *)0x49c5ff;
    FUN_004ab1c0();
    local_18[0] = local_74;
    local_1c = (short *)0x49c608;
    FUN_004a0290();
  }
  else {
    local_18[1] = (short *)0x0;
    local_18[0] = (short *)0x49c59f;
    iVar3 = FUN_004aacd0();
    if (iVar3 == 0) goto LAB_0049c5b7;
    local_18[1] = local_74;
    local_18[0] = (short *)0x49c5af;
    FUN_004a0290();
  }
LAB_0049c687:
  local_18[0] = (short *)((uint)local_18[0] & 0xffffff00);
  psVar10 = local_2c0;
  for (iVar3 = 0x82; iVar3 != 0; iVar3 = iVar3 + -1) {
    psVar10[0] = 0;
    psVar10[1] = 0;
    psVar10 = psVar10 + 2;
  }
  *psVar10 = 0;
LAB_0049c69b:
  local_18[1] = (short *)0x49c6a0;
  thunk_FUN_00407100();
  local_18[0] = local_74;
  local_1c = (short *)0x49c6ad;
  local_18[1] = (short *)uVar11;
  FUN_004a02b0();
  uVar4 = 0xffffffff;
  ppsVar8 = local_18;
  do {
    ppsVar9 = ppsVar8;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    ppsVar9 = (short **)((int)ppsVar8 + 1);
    cVar1 = *(char *)ppsVar8;
    ppsVar8 = ppsVar9;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  pcVar6 = (char *)((int)ppsVar9 - uVar4);
  pcVar7 = local_70;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar7 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar7 = pcVar7 + 1;
  }
  goto LAB_0049c4f0;
}

