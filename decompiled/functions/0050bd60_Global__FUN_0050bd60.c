// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0050bd60
// entry: 0050bd60  size: 7194


uint FUN_0050bd60(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  byte local_145;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  byte local_129;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_100;
  undefined4 local_fc;
  uint local_f8;
  undefined1 local_f4 [24];
  undefined4 local_dc;
  undefined4 local_d8;
  uint local_d4;
  uint local_c8;
  undefined1 local_c4;
  undefined1 local_c3;
  undefined1 local_c2 [66];
  undefined1 local_80 [128];
  
  local_f8 = local_f8 & 0xffffff00;
  FUN_00538710();
  local_129 = 0;
  local_145 = 1;
  iVar2 = *(int *)(*(int *)(param_2 + 0x8dc) + 8);
  FUN_0050acb0(param_2);
LAB_0050bd97:
  do {
    switch(param_1) {
    case 0x7628:
      switch(iVar2) {
      case 1:
        uVar7 = FUN_0050bb00(&local_144,&local_138);
        uVar7 = FUN_0052f760(0x48,&local_118,uVar7);
        FUN_00481c70(uVar7);
        puVar6 = (undefined4 *)FUN_0052f760(0x4b,&local_118);
        local_128 = *puVar6;
        local_124 = puVar6[1];
        local_120 = puVar6[2];
        break;
      case 2:
      case 4:
        uVar7 = FUN_0050bce0(&local_118,&local_144);
        uVar7 = FUN_0050bb00(&local_144,uVar7);
        FUN_00481c70(uVar7);
        uVar7 = FUN_0052f760(0x43,local_f4,&local_144,&local_138);
        FUN_00481c70(uVar7);
        FUN_0050bb60(&local_128);
        uVar4 = local_130;
        uVar3 = local_134;
        uVar7 = local_138;
        if (iVar2 == 4) {
          local_138 = local_128;
          local_134 = local_124;
          local_144 = uVar7;
          local_140 = uVar3;
          local_13c = local_130;
          local_130 = local_120;
          local_128 = uVar7;
          local_124 = uVar3;
          local_120 = uVar4;
        }
        break;
      case 3:
        puVar6 = (undefined4 *)FUN_0052f760(0x48,&local_118);
        local_138 = *puVar6;
        local_134 = puVar6[1];
        local_130 = puVar6[2];
        puVar6 = &local_128;
        puVar5 = (undefined4 *)FUN_0050bb00(&local_144,puVar6);
        puVar8 = (undefined4 *)FUN_0052f760(0x4b,&local_118,puVar5);
        goto LAB_0050bfd6;
      case 7:
      case 8:
      case 9:
        local_129 = 2;
        puVar6 = (undefined4 *)FUN_0052f760(0x48,&local_118);
        local_138 = *puVar6;
        local_134 = puVar6[1];
        local_130 = puVar6[2];
        puVar6 = (undefined4 *)FUN_0052f760(0x4b,&local_118);
        local_128 = *puVar6;
        local_124 = puVar6[1];
        local_120 = puVar6[2];
        if (iVar2 == 7) {
          FUN_0050bbd0(&local_144);
        }
        else {
          FUN_0050bc60(&local_144);
        }
        if (local_145 == 2) {
          FUN_004e7730(&local_144,&local_144);
        }
        if (iVar2 == 8) {
LAB_0050bfc7:
          puVar6 = &local_138;
          puVar8 = &local_138;
        }
        else {
          if (iVar2 == 7) {
            uVar7 = FUN_0052f760(0x42,local_f4);
            uVar7 = FUN_0052f760(0x41,&local_118,uVar7);
            iVar10 = FUN_004e7290(uVar7);
            if (iVar10 != 0) goto LAB_0050bfc7;
          }
          puVar6 = &local_128;
          puVar8 = &local_128;
        }
        puVar5 = &local_144;
LAB_0050bfd6:
        FUN_00481c70(puVar8,puVar5,puVar6);
      }
      if ((((byte)local_138 & 0xf0) == 0xf0) || (((byte)local_128 & 0xf0) == 0xf0)) {
LAB_0050d912:
        FUN_0052b240(3);
switchD_0050d7d6_caseD_7532:
        return 0xfffffffe;
      }
      bVar1 = *(byte *)(param_2 + 0x8e1);
joined_r0x0050d3d7:
      if ((bVar1 & 4) != 0) {
        FUN_0051eaa0(&local_138,&local_128);
      }
      FUN_0052f780(0x58,&local_138);
      FUN_0052f780(0x59,&local_128);
      uVar9 = FUN_004d5130(&local_138,&local_100,param_2 + 0x800,*(undefined1 *)(param_2 + 0x8e2));
      local_d4 = FUN_004d5210(&local_128,&local_fc,param_2 + 0x800);
      local_d4 = uVar9 | local_d4;
      local_dc = local_100;
      local_d8 = local_fc;
      goto switchD_0050bdad_default;
    case 0x7629:
      switch(iVar2 + -1) {
      case 0:
        local_11c = CONCAT31(local_11c._1_3_,0x4b);
        break;
      case 1:
      case 3:
        FUN_0050bb60(&local_138);
        goto LAB_0050d5ef;
      case 2:
        local_11c = CONCAT31(local_11c._1_3_,0x48);
        break;
      default:
        goto switchD_0050d5a7_default;
      }
      puVar6 = (undefined4 *)FUN_0052f760(local_11c,&local_118);
      local_138 = *puVar6;
      local_134 = puVar6[1];
      local_130 = puVar6[2];
LAB_0050d5ef:
      switch(iVar2 + -1) {
      case 0:
      case 1:
        iVar10 = FUN_004d5210(&local_138,&local_fc,param_2 + 0x800);
        if (iVar10 == 0) {
          FUN_0050f940(1,local_fc,0x7f,local_fc,param_2,*(undefined1 *)(param_2 + 0x8e3),
                       *(undefined1 *)(param_2 + 0x8e2));
        }
        local_c4 = 0x59;
        uVar7 = 0x59;
        break;
      case 2:
      case 3:
        iVar10 = FUN_004d5130(&local_138,&local_100,param_2 + 0x800,*(undefined1 *)(param_2 + 0x8e2)
                             );
        if (iVar10 == 0) {
          FUN_0050f940(local_100,1,local_100,0x3f,param_2,*(undefined1 *)(param_2 + 0x8e3),
                       *(undefined1 *)(param_2 + 0x8e2));
        }
        local_c4 = 0x58;
        uVar7 = 0x58;
        break;
      default:
        goto switchD_0050d5a7_default;
      }
      FUN_0052f780(uVar7,&local_138);
switchD_0050d5a7_default:
      if (((byte)local_138 & 0xf0) == 0xf0) goto LAB_0050d912;
      if ((*(byte *)(param_2 + 0x8e1) & 4) != 0) {
        local_c3 = 0x3d;
        uVar7 = FUN_004b1d20(&local_138,local_c2);
        FUN_0051f5a0(uVar7);
        FUN_0051ea40(&local_c4,0x20);
        FUN_00523a20(1,8,&local_c4,0x20);
      }
      break;
    case 0x762a:
      switch(iVar2 + -1) {
      case 0:
        local_11c = CONCAT31(local_11c._1_3_,0x48);
        break;
      case 1:
      case 3:
        uVar7 = FUN_0050bb00(&local_144,&local_144);
        uVar7 = FUN_0050bce0(&local_118,uVar7);
        FUN_00481d90(uVar7);
        uVar7 = FUN_0052f760(0x43,&local_118,&local_138);
        FUN_00481c70(&local_144,uVar7);
        goto LAB_0050d476;
      case 2:
        local_11c = CONCAT31(local_11c._1_3_,0x4b);
        break;
      default:
        goto switchD_0050d3ee_default;
      }
      uVar7 = FUN_0050bb00(&local_144,&local_138);
      uVar7 = FUN_0052f760(local_11c,&local_118,uVar7);
      FUN_00481d90(uVar7);
LAB_0050d476:
      switch(iVar2 + -1) {
      case 0:
      case 1:
        iVar10 = FUN_004d5130(&local_138,&local_100,param_2 + 0x800,*(undefined1 *)(param_2 + 0x8e2)
                             );
        if (iVar10 == 0) {
          FUN_0050f940(local_100,1,local_100,0x3f,param_2,*(undefined1 *)(param_2 + 0x8e3),
                       *(undefined1 *)(param_2 + 0x8e2));
        }
        local_c4 = 0x58;
        uVar7 = 0x58;
        break;
      case 2:
      case 3:
        iVar10 = FUN_004d5210(&local_138,&local_fc,param_2 + 0x800);
        if (iVar10 == 0) {
          FUN_0050f940(1,local_fc,0x7f,local_fc,param_2,*(undefined1 *)(param_2 + 0x8e3),
                       *(undefined1 *)(param_2 + 0x8e2));
        }
        local_c4 = 0x59;
        uVar7 = 0x59;
        break;
      default:
        goto switchD_0050d3ee_default;
      }
      FUN_0052f780(uVar7,&local_138);
switchD_0050d3ee_default:
      if (((byte)local_138 & 0xf0) == 0xf0) goto LAB_0050d912;
      if ((*(byte *)(param_2 + 0x8e1) & 4) != 0) {
        local_c3 = 0x3d;
        uVar7 = FUN_004b1d20(&local_138,local_c2);
        FUN_0051f5a0(uVar7);
        FUN_0051ea40(&local_c4,0x20);
        FUN_00523a20(1,8,&local_c4,0x20);
      }
      break;
    case 0x762b:
      switch(iVar2) {
      case 1:
      case 3:
        puVar6 = (undefined4 *)FUN_0052f760(0x48,&local_118);
        local_138 = *puVar6;
        local_134 = puVar6[1];
        local_130 = puVar6[2];
        puVar6 = (undefined4 *)FUN_0052f760(0x4b,&local_118);
        local_128 = *puVar6;
        local_124 = puVar6[1];
        local_120 = puVar6[2];
        break;
      case 2:
      case 4:
        uVar7 = FUN_0052f760(0x43,local_f4,&local_138);
        uVar7 = FUN_0050bce0(&local_118,uVar7);
        FUN_00481c70(uVar7);
        FUN_0050bb60(&local_128);
        uVar4 = local_130;
        uVar3 = local_134;
        uVar7 = local_138;
        if (iVar2 == 4) {
          local_138 = local_128;
          local_134 = local_124;
          local_118 = uVar7;
          local_114 = uVar3;
          local_110 = local_130;
          local_130 = local_120;
          local_128 = uVar7;
          local_124 = uVar3;
          local_120 = uVar4;
        }
        break;
      case 7:
      case 8:
      case 9:
        local_129 = ((iVar2 != 7) - 1U & 2) + 2;
        puVar6 = (undefined4 *)FUN_0052f760(0x48,&local_118);
        local_138 = *puVar6;
        local_134 = puVar6[1];
        local_130 = puVar6[2];
        puVar6 = (undefined4 *)FUN_0052f760(0x4b,&local_118);
        local_128 = *puVar6;
        local_124 = puVar6[1];
        local_120 = puVar6[2];
        if ((iVar2 == 7) && ((local_145 == 2 || (local_145 == 4)))) {
          FUN_0052f760(0x42,&local_118);
LAB_0050c1d1:
          if ('\x02' < (char)local_145) {
LAB_0050c1d8:
            FUN_004e7730(&local_118,&local_118);
            goto LAB_0050c1ea;
          }
LAB_0050c1f4:
          if ((local_145 & 1) != 0) goto LAB_0050c228;
LAB_0050c1fb:
          puVar6 = &local_128;
          puVar8 = &local_128;
        }
        else {
          FUN_0052f760(0x41,&local_118);
          if (iVar2 == 7) goto LAB_0050c1d1;
          if (local_145 == 2) goto LAB_0050c1d8;
LAB_0050c1ea:
          if (iVar2 != 8) {
            if (iVar2 == 7) goto LAB_0050c1f4;
            goto LAB_0050c1fb;
          }
LAB_0050c228:
          puVar6 = &local_138;
          puVar8 = &local_138;
        }
        FUN_00481c70(puVar8,&local_118,puVar6);
      }
      if ((((byte)local_138 & 0xf0) == 0xf0) || (((byte)local_128 & 0xf0) == 0xf0))
      goto LAB_0050d912;
      if ((*(byte *)(param_2 + 0x8e1) & 4) != 0) {
        FUN_0051eaa0(&local_138,&local_128);
      }
      FUN_0052f780(0x58,&local_138);
      FUN_0052f780(0x59,&local_128);
      uVar9 = FUN_004d5130(&local_138,&local_100,param_2 + 0x800,*(undefined1 *)(param_2 + 0x8e2));
      local_d4 = FUN_004d5210(&local_128,&local_fc,param_2 + 0x800);
      local_d4 = uVar9 | local_d4;
      local_dc = local_100;
      local_d8 = local_fc;
      goto switchD_0050bdad_default;
    case 0x762c:
      FUN_0052f760(0x41,&local_118);
      uVar7 = FUN_004e57a0(&local_144,&local_118,&local_118,&local_118);
      uVar7 = FUN_00481d40(uVar7);
      FUN_004e7620(uVar7);
      if (((byte)local_118 & 0xf0) == 0xf0) goto LAB_0050d912;
      local_c4 = 0x4c;
      local_c3 = 0x3d;
      uVar7 = FUN_004b1d20(&local_118,local_c2);
      FUN_0051f5a0(uVar7);
      FUN_0051ea40(&local_c4,0x20);
      FUN_00523a20(1,8,&local_c4,0x20);
      FUN_0052f780(0x4c,&local_118);
      break;
    case 0x762d:
      switch(iVar2) {
      case 1:
      case 2:
      case 3:
      case 4:
        FUN_004e57a0(&local_118);
        break;
      case 7:
      case 8:
      case 9:
        puVar6 = (undefined4 *)FUN_0052f760(0x41,&local_118);
        local_138 = *puVar6;
        local_134 = puVar6[1];
        local_130 = puVar6[2];
        puVar6 = (undefined4 *)FUN_0052f760(0x42,&local_118);
        local_128 = *puVar6;
        local_124 = puVar6[1];
        local_120 = puVar6[2];
        if (iVar2 == 7) {
          iVar10 = FUN_004e71d0(&local_138,&local_128);
          if (iVar10 != 0) {
            FUN_004e5780(&local_118);
            break;
          }
          iVar10 = FUN_004e7250(&local_138,&local_128);
          uVar4 = local_130;
          uVar3 = local_134;
          uVar7 = local_138;
          if (iVar10 != 0) {
            local_138 = local_128;
            local_134 = local_124;
            local_144 = uVar7;
            local_140 = uVar3;
            local_13c = local_130;
            local_130 = local_120;
            local_128 = uVar7;
            local_124 = uVar3;
            local_120 = uVar4;
          }
        }
        uVar7 = FUN_00481d40(&local_128,&local_138,&local_138,&local_138,&local_138);
        FUN_00481c40(uVar7);
        if (iVar2 == 7) {
          FUN_004e7730(&local_138,&local_138);
        }
        uVar7 = FUN_004e57a0(&local_144,&local_138,&local_138,&local_118);
        uVar7 = FUN_00481c70(uVar7);
        FUN_004e7390(uVar7);
        if (iVar2 == 7) {
          iVar10 = FUN_004e71d0(&local_118,&local_144);
        }
        else {
          iVar10 = FUN_004e72d0(&local_118,&local_144);
        }
        if (iVar10 != 0) goto LAB_0050d912;
      }
      if (((byte)local_118 & 0xf0) == 0xf0) goto LAB_0050d912;
      local_c4 = 0x65;
      local_c3 = 0x3d;
      uVar7 = FUN_004b1d20(&local_118,local_c2);
      FUN_0051f5a0(uVar7);
      FUN_0051ea40(&local_c4,0x20);
      FUN_00523a20(1,8,&local_c4,0x20);
      FUN_0052f780(0x45,&local_118);
      break;
    case 0x762e:
      FUN_004e5780(&local_128);
      switch(iVar2) {
      case 1:
        uVar7 = FUN_0052f760(0x4b,&local_118,&local_118,&local_144);
        FUN_00481c40(uVar7);
        uVar7 = FUN_0052f760(0x41,&local_118,&local_144,&local_144);
        FUN_00481c40(uVar7);
        puVar8 = (undefined4 *)FUN_0052f760(0x48,&local_118,&local_138);
        puVar6 = &local_144;
        goto LAB_0050cdca;
      case 2:
        uVar7 = 0x43;
        goto LAB_0050cc98;
      case 3:
      case 5:
        if (iVar2 == 3) {
          uVar7 = FUN_0052f760(0x4b,local_f4,&local_144);
          uVar7 = FUN_0052f760(0x41,&local_118,uVar7);
          FUN_00481c40(uVar7);
          FUN_004e7730(&local_144,&local_144);
        }
        else {
          uVar7 = FUN_0052f760(0x52,&local_118,&local_118,&local_118);
          FUN_00481c40(uVar7);
          uVar7 = FUN_0052f760(0x4b,local_f4,local_f4,local_f4);
          FUN_00481c40(uVar7);
          FUN_00481d90(&local_118,local_f4,&local_144);
        }
        iVar10 = FUN_004e7250(&local_144,&local_128);
        if (iVar10 != 0) goto LAB_0050d8f3;
        iVar10 = FUN_004e71d0(&local_144,&local_128);
        if (iVar10 != 0) {
          puVar6 = (undefined4 *)FUN_0052f760(0x48,&local_118);
          local_138 = *puVar6;
          local_134 = puVar6[1];
          local_130 = puVar6[2];
          break;
        }
        local_129 = 2;
        if (iVar2 == 3) {
          uVar7 = FUN_00481d40(local_f4,&local_118,&local_144,&local_144);
          FUN_004e7730(uVar7);
        }
        FUN_004e7390(&local_144,&local_144);
        if (local_145 == 1) {
          FUN_004e7730(&local_144,&local_144);
        }
        goto LAB_0050cdbf;
      case 4:
      case 6:
        local_11c = CONCAT31(local_11c._1_3_,(iVar2 != 4) + 'C');
        uVar7 = FUN_0052f760(local_11c,local_f4,&local_118);
        uVar7 = FUN_0052f760(0x41,&local_118,uVar7);
        FUN_00481c40(uVar7);
        uVar7 = FUN_004e5070(4,&local_144,&local_118,&local_144);
        FUN_00481c40(uVar7);
        uVar7 = FUN_0052f760(0x42,&local_118,&local_118,&local_118);
        FUN_00481c40(uVar7);
        FUN_00481d90(&local_118,&local_144,&local_144);
        iVar10 = FUN_004e7250(&local_144,&local_128);
        if (iVar10 != 0) goto LAB_0050d8f3;
        iVar10 = FUN_004e71d0(&local_144,&local_128);
        if (iVar10 == 0) {
          local_129 = 2;
          FUN_004e7390(&local_144,&local_144);
          if (local_145 == 1) {
            FUN_004e7730(&local_144,&local_144);
          }
          uVar7 = FUN_0052f760(0x42,&local_118,&local_118);
          FUN_004e7730(uVar7);
          FUN_00481c70(&local_118,&local_144,&local_144);
          uVar7 = FUN_0052f760(0x41,&local_118,local_f4);
          uVar7 = FUN_004e57c0(local_f4,uVar7);
          FUN_00481c40(uVar7);
          FUN_00481d40(&local_144,local_f4,&local_138);
        }
        else {
          FUN_0050bb60(&local_138);
        }
        break;
      case 7:
        local_11c = CONCAT31(local_11c._1_3_,0x42);
        local_f8 = CONCAT31(local_f8._1_3_,0x4b);
        goto LAB_0050cc06;
      case 8:
        goto switchD_0050c89e_caseD_8;
      case 9:
        local_11c = CONCAT31(local_11c._1_3_,0x4b);
        local_f8 = CONCAT31(local_f8._1_3_,0x41);
LAB_0050cc06:
        uVar7 = FUN_0052f760(local_11c,&local_118,&local_118,&local_118);
        FUN_00481c40(uVar7);
        uVar7 = FUN_0052f760(local_f8,local_f4,local_f4,local_f4);
        FUN_00481c40(uVar7);
        FUN_00481d90(&local_118,local_f4,&local_144);
        iVar10 = FUN_004e7250(&local_144,&local_128);
        if (iVar10 != 0) {
LAB_0050d8f3:
          if (iVar10 == 1) {
            FUN_0052b240(0x15);
            return 0xfffffffe;
          }
          goto LAB_0050d912;
        }
        iVar10 = FUN_004e71d0(&local_144,&local_128);
        if (iVar10 != 0) {
          uVar7 = 0x48;
LAB_0050cc98:
          puVar6 = (undefined4 *)FUN_0052f760(uVar7,&local_118);
          local_138 = *puVar6;
          local_134 = puVar6[1];
          local_130 = puVar6[2];
          break;
        }
switchD_0050c89e_caseD_8:
        local_129 = 2;
        if (iVar2 != 9) {
          local_f8 = CONCAT31(local_f8._1_3_,0x42);
        }
        uVar7 = FUN_0052f760(local_f8,local_f4,&local_144);
        uVar7 = FUN_0052f760(0x4b,&local_118,uVar7);
        FUN_00481d40(uVar7);
        FUN_00481c40(&local_144,&local_144,&local_144);
        FUN_004e57a0(&local_118);
        if (iVar2 == 7) {
          puVar6 = &local_144;
          puVar8 = &local_144;
LAB_0050cd36:
          FUN_004e7730(puVar8,puVar6);
        }
        else if (iVar2 == 9) {
          puVar6 = &local_118;
          puVar8 = &local_118;
          goto LAB_0050cd36;
        }
        FUN_00481c70(&local_118,&local_144,&local_144);
        FUN_004e7390(&local_144,&local_144);
        local_11c = CONCAT31(local_11c._1_3_,(iVar2 == 9) + 'A');
        uVar7 = FUN_0052f760(local_11c,&local_118,&local_144,&local_144);
        FUN_00481c40(uVar7);
        if (local_145 == 1) {
          FUN_004e7730(&local_144,&local_144);
        }
LAB_0050cdbf:
        puVar8 = &local_144;
        puVar6 = (undefined4 *)FUN_0052f760(0x48,&local_118,puVar8,&local_138);
LAB_0050cdca:
        FUN_00481c70(puVar6,puVar8);
      }
      if ((((byte)local_138 & 0xf0) == 0xf0) || (((byte)local_128 & 0xf0) == 0xf0))
      goto LAB_0050d912;
      bVar1 = *(byte *)(param_2 + 0x8e1);
joined_r0x0050c46c:
      if ((bVar1 & 4) != 0) {
        FUN_0051eaa0(&local_138,&local_128);
      }
      FUN_0052f780(0x58,&local_138);
      FUN_0052f780(0x59,&local_128);
      uVar9 = FUN_004d5130(&local_138,&local_100,param_2 + 0x800,*(undefined1 *)(param_2 + 0x8e2));
      local_d4 = FUN_004d5210(&local_128,&local_fc,param_2 + 0x800);
      local_d4 = uVar9 | local_d4;
      local_dc = local_100;
      local_d8 = local_fc;
      goto switchD_0050bdad_default;
    case 0x762f:
      FUN_004e5780(&local_138);
      switch(iVar2) {
      case 1:
      case 5:
        if (iVar2 == 1) {
          uVar7 = FUN_0052f760(0x48,local_f4,&local_144);
          uVar7 = FUN_0052f760(0x41,&local_118,uVar7);
          FUN_00481c40(uVar7);
          iVar10 = FUN_004e7290(&local_144,&local_138);
          if (iVar10 != 0) goto LAB_0050d8f3;
LAB_0050cee1:
          iVar10 = FUN_004e71d0(&local_144,&local_138);
          if (iVar10 != 0) {
            puVar6 = (undefined4 *)FUN_0052f760(0x4b,&local_118);
            local_128 = *puVar6;
            local_124 = puVar6[1];
            local_120 = puVar6[2];
            break;
          }
          local_129 = 2;
          if (iVar2 == 1) {
            uVar7 = FUN_00481d40(local_f4,&local_118,&local_144,&local_144);
            FUN_004e7730(uVar7);
          }
          FUN_004e7390(&local_144,&local_144);
          goto joined_r0x0050d37c;
        }
        uVar7 = FUN_0052f760(0x52,&local_118,&local_118,&local_118);
        FUN_00481c40(uVar7);
        uVar7 = FUN_0052f760(0x48,local_f4,local_f4,local_f4);
        FUN_00481c40(uVar7);
        FUN_00481d90(&local_118,local_f4,&local_144);
        if ((iVar2 != 5) || (iVar10 = FUN_004e7250(&local_144,&local_138), iVar10 == 0))
        goto LAB_0050cee1;
        goto LAB_0050d8f3;
      case 2:
      case 6:
        if (iVar2 == 2) {
          local_11c = CONCAT31(local_11c._1_3_,0x43);
          local_f8 = CONCAT31(local_f8._1_3_,0x42);
        }
        else {
          local_11c = CONCAT31(local_11c._1_3_,0x44);
          local_f8 = CONCAT31(local_f8._1_3_,0x43);
        }
        uVar7 = FUN_0052f760(local_11c,local_f4,&local_118);
        uVar7 = FUN_0052f760(0x41,&local_118,uVar7);
        FUN_00481c40(uVar7);
        uVar7 = FUN_004e5070(4,&local_144,&local_118,&local_144);
        FUN_00481c40(uVar7);
        uVar9 = local_f8;
        uVar7 = FUN_0052f760(local_f8,&local_118,&local_118,&local_118);
        FUN_00481c40(uVar7);
        FUN_00481d90(&local_118,&local_144,&local_144);
        iVar10 = FUN_004e7250(&local_144,&local_138);
        if (iVar10 != 0) goto LAB_0050d8f3;
        iVar10 = FUN_004e71d0(&local_144,&local_138);
        if (iVar10 == 0) {
          local_129 = 2;
          FUN_004e7390(&local_144,&local_144);
          if (local_145 == 1) {
            FUN_004e7730(&local_144,&local_144);
          }
          uVar7 = FUN_0052f760(uVar9,&local_118,&local_118);
          FUN_004e7730(uVar7);
          FUN_00481c70(&local_118,&local_144,&local_144);
          uVar7 = FUN_0052f760(0x41,&local_118,local_f4);
          uVar7 = FUN_004e57c0(local_f4,uVar7);
          FUN_00481c40(uVar7);
          FUN_00481d40(&local_144,local_f4,&local_128);
        }
        else {
          uVar7 = FUN_0052f760(0x41,&local_118,&local_144);
          uVar7 = FUN_004e57c0(&local_144,uVar7);
          FUN_00481c40(uVar7);
          uVar7 = FUN_0052f760(uVar9,&local_118,&local_144,&local_144);
          FUN_00481d40(uVar7);
          FUN_004e7730(&local_144,&local_128);
        }
        break;
      case 3:
        uVar7 = FUN_0052f760(0x48,&local_118,&local_118,&local_144);
        FUN_00481c40(uVar7);
        uVar7 = FUN_0052f760(0x41,&local_118,&local_144,&local_144);
        FUN_00481c40(uVar7);
        puVar8 = (undefined4 *)FUN_0052f760(0x4b,&local_118,&local_128);
        puVar6 = &local_144;
        goto LAB_0050d3aa;
      case 4:
        uVar7 = 0x43;
        goto LAB_0050d275;
      case 7:
        local_11c = CONCAT31(local_11c._1_3_,0x41);
        local_f8 = CONCAT31(local_f8._1_3_,0x48);
        goto LAB_0050d1e3;
      case 8:
        local_11c = CONCAT31(local_11c._1_3_,0x48);
        local_f8 = CONCAT31(local_f8._1_3_,0x41);
LAB_0050d1e3:
        uVar7 = FUN_0052f760(local_11c,&local_118,&local_118,&local_118);
        FUN_00481c40(uVar7);
        uVar7 = FUN_0052f760(local_f8,local_f4,local_f4,local_f4);
        FUN_00481c40(uVar7);
        FUN_00481d90(&local_118,local_f4,&local_144);
        iVar10 = FUN_004e7250(&local_144,&local_138);
        if (iVar10 == 0) {
          iVar10 = FUN_004e71d0(&local_144,&local_138);
          if (iVar10 != 0) {
            uVar7 = 0x4b;
LAB_0050d275:
            puVar6 = (undefined4 *)FUN_0052f760(uVar7,&local_118);
            local_128 = *puVar6;
            local_124 = puVar6[1];
            local_120 = puVar6[2];
            break;
          }
switchD_0050ce1b_caseD_9:
          local_11c = CONCAT31(local_11c._1_3_,(iVar2 == 9) + 'A');
          local_129 = 2;
          uVar7 = FUN_0052f760(local_11c,local_f4,&local_144);
          uVar7 = FUN_0052f760(0x48,&local_118,uVar7);
          FUN_00481d40(uVar7);
          FUN_00481c40(&local_144,&local_144,&local_144);
          FUN_004e57a0(&local_118);
          if (iVar2 == 7) {
            puVar6 = &local_144;
            puVar8 = &local_144;
LAB_0050d316:
            FUN_004e7730(puVar8,puVar6);
          }
          else if (iVar2 == 8) {
            puVar6 = &local_118;
            puVar8 = &local_118;
            goto LAB_0050d316;
          }
          FUN_00481c70(&local_118,&local_144,&local_144);
          FUN_004e7390(&local_144,&local_144);
          local_11c = CONCAT31(local_11c._1_3_,(iVar2 != 9) + 'A');
          uVar7 = FUN_0052f760(local_11c,&local_118,&local_144,&local_144);
          FUN_00481c40(uVar7);
joined_r0x0050d37c:
          if (local_145 == 1) {
            FUN_004e7730(&local_144,&local_144);
          }
          puVar8 = &local_144;
          puVar6 = (undefined4 *)FUN_0052f760(0x4b,&local_118,puVar8,&local_128);
LAB_0050d3aa:
          FUN_00481c70(puVar6,puVar8);
          break;
        }
        goto LAB_0050d8f3;
      case 9:
        goto switchD_0050ce1b_caseD_9;
      }
      if ((((byte)local_138 & 0xf0) == 0xf0) || (((byte)local_128 & 0xf0) == 0xf0))
      goto LAB_0050d912;
      bVar1 = *(byte *)(param_2 + 0x8e1);
      goto joined_r0x0050d3d7;
    case 0x7630:
      if (iVar2 == 6) {
        FUN_0050bb60(&local_138);
        uVar7 = FUN_0052f760(0x41,&local_118,&local_144);
        uVar7 = FUN_004e57c0(&local_144,uVar7);
        FUN_00481c40(uVar7);
        uVar7 = FUN_0052f760(0x43,&local_118,&local_144,&local_144);
        FUN_00481d40(uVar7);
        FUN_004e7730(&local_144,&local_128);
      }
      else {
        puVar6 = (undefined4 *)FUN_0052f760(0x48,&local_118);
        local_138 = *puVar6;
        local_134 = puVar6[1];
        local_130 = puVar6[2];
        puVar6 = (undefined4 *)FUN_0052f760(0x4b,&local_118);
        local_128 = *puVar6;
        local_124 = puVar6[1];
        local_120 = puVar6[2];
      }
      if ((((byte)local_138 & 0xf0) == 0xf0) || (((byte)local_128 & 0xf0) == 0xf0))
      goto LAB_0050d912;
      bVar1 = *(byte *)(param_2 + 0x8e1);
      goto joined_r0x0050c46c;
    case 0x7631:
      if (iVar2 == 5) {
        FUN_0052f760(0x52,&local_118);
      }
      else {
        uVar7 = FUN_0052f760(0x42,&local_118,&local_118,&local_118);
        FUN_00481c40(uVar7);
        uVar7 = FUN_0052f760(0x41,local_f4,local_f4,&local_138);
        FUN_00481c40(uVar7);
        uVar7 = FUN_004e5070(4,&local_144,&local_138,&local_138);
        FUN_00481c40(uVar7);
        FUN_00481d40(&local_118,&local_138,&local_128);
        uVar7 = FUN_0052f760(0x43,&local_118,&local_118,&local_118);
        FUN_00481c40(uVar7);
        FUN_00481d40(&local_118,&local_138,&local_138);
        uVar7 = FUN_0052f760(0x44,&local_118,local_f4,&local_144);
        FUN_00481d40(uVar7);
        uVar7 = FUN_00481c70(&local_138,&local_128,&local_138,&local_144,&local_118);
        FUN_00481d90(uVar7);
        FUN_004e7390(&local_118,&local_118);
      }
      if (((byte)local_118 & 0xf0) == 0xf0) goto LAB_0050d912;
      local_c4 = 0x72;
      local_c3 = 0x3d;
      uVar7 = FUN_004b1d20(&local_118,local_c2);
      FUN_0051f5a0(uVar7);
      FUN_0051ea40(&local_c4,0x20);
      FUN_00523a20(1,8,&local_c4,0x20);
      FUN_0052f780(0x52,&local_118);
      break;
    case 0x7632:
      uVar9 = FUN_0050dac0(param_2);
      if (uVar9 != 0) {
        return uVar9;
      }
      break;
    default:
      goto switchD_0050bdad_default;
    }
    local_d4 = 1;
switchD_0050bdad_default:
    do {
      if ((*(byte *)(param_2 + 0x8e0) & 0xc0) != 0) {
        FUN_0050baa0(*(undefined4 *)(*(int *)(param_2 + 0x8dc) + 8),1,0);
      }
      FUN_00519af0(param_1);
LAB_0050d753:
      while( true ) {
        do {
          FUN_0051f7b0(local_80);
          FUN_0051f870();
          FUN_00522500(&local_dc);
          iVar10 = FUN_00526620(&local_c8);
          FUN_00522930(&local_dc);
          FUN_0051f7f0(local_80);
          iVar11 = FUN_0051c730();
          if (iVar11 != 0) {
            return 0xfffffffa;
          }
        } while (iVar10 != 0);
        if (0x754e < local_c8) break;
        if (local_c8 == 0x754e) {
          iVar10 = FUN_005022f0(CONCAT31(0x75,*(byte *)(param_2 + 0x8e0) >> 4) & 0xffffff03);
joined_r0x0050d804:
          if (iVar10 != 0) {
            return 0xfffffff2;
          }
        }
        else {
          switch(local_c8) {
          case 0x7532:
            goto switchD_0050d7d6_caseD_7532;
          default:
switchD_0050d7d6_caseD_7533:
            if (local_c8 != 0) {
              if (local_c8 < 30000) {
                return local_c8;
              }
              if (0x75f7 < local_c8) {
                return local_c8;
              }
            }
            break;
          case 0x753f:
            return 0xfffffff3;
          case 0x7542:
          case 0x7544:
          case 0x7545:
          case 0x7547:
            if (local_129 != 0) {
              if ((local_c8 == 0x7544) || (local_c8 == 0x7542)) {
                if (local_145 == 1) {
                  local_145 = local_129;
                }
                else {
                  local_145 = local_145 - 1;
                }
              }
              else if (local_145 == local_129) {
                local_145 = 1;
              }
              else {
                local_145 = local_145 + 1;
              }
              goto LAB_0050bd97;
            }
            break;
          case 0x754d:
            return 0xffffffff;
          }
        }
      }
      if (local_c8 < 0x7635) {
        if (local_c8 != 0x7634) {
          if (local_c8 == 0x7555) {
            iVar10 = FUN_00502180();
            goto joined_r0x0050d804;
          }
          if (local_c8 == 0x7557) {
            return 0xfffffff5;
          }
          goto switchD_0050d7d6_caseD_7533;
        }
        FUN_0051af80(0x7634,param_2);
        goto LAB_0050d753;
      }
      if (local_c8 != 0x7635) {
        if (local_c8 != 0x7957) goto switchD_0050d7d6_caseD_7533;
        goto LAB_0050d753;
      }
      FUN_0051af80(0x7635,param_2);
      FUN_0050acb0(param_2);
    } while (param_1 == 0x7632);
  } while( true );
}

