// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0052c480
// entry: 0052c480  size: 3270


/* WARNING: Type propagation algorithm not settling */

void FUN_0052c480(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  undefined *puVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 local_78;
  undefined1 local_77;
  undefined1 local_76;
  undefined1 local_75;
  undefined1 local_74;
  undefined1 local_73;
  undefined1 local_72;
  uint local_70;
  undefined1 local_6c [4];
  char local_68;
  undefined1 local_67;
  undefined1 local_34 [52];
  
  local_74 = 0x2f;
  local_73 = 0x45;
  local_72 = 0;
  local_78 = 0x3a;
  local_77 = 0;
  local_76 = 0x20;
  local_75 = 0;
  iVar5 = 1;
  do {
    iVar1 = param_3 + -1 + iVar5;
    if (param_2 < iVar1) {
      for (; iVar5 < 8; iVar5 = iVar5 + 1) {
        FUN_005232d0(1,iVar5);
        FUN_00523470(&local_76,0x15);
      }
      return;
    }
    bVar3 = FUN_00526090(*(undefined1 *)(iVar5 + param_1 + -2 + param_3));
    local_70 = CONCAT31(local_70._1_3_,bVar3);
    switch(*(undefined1 *)(iVar5 + param_1 + -2 + param_3)) {
    case 0x13:
      FUN_004b71f0(local_34,PTR_s_Angle_005c3e34,0x30);
      uVar4 = local_70 & 0xff;
      puVar6 = PTR_DAT_005c3e38;
      if (uVar4 != 0) {
        puVar7 = PTR_DAT_005c3e3c;
        if (uVar4 == 1) goto LAB_0052cffb;
        puVar6 = PTR_DAT_005c3e40;
        if (uVar4 != 2) goto switchD_0052c508_caseD_14;
      }
      break;
    default:
      goto switchD_0052c508_caseD_14;
    case 0x17:
      FUN_004b71f0(local_34,PTR_DAT_005c3e44,0x30);
      switch(local_70 & 0xff) {
      case 0:
        puVar6 = PTR_DAT_005c3e48;
        break;
      case 1:
        puVar6 = PTR_DAT_005c3e54;
        break;
      default:
        goto switchD_0052c508_caseD_14;
      case 7:
        puVar7 = PTR_DAT_005c3e58;
        goto LAB_0052cffb;
      case 9:
        puVar7 = PTR_DAT_005c3e4c;
        goto LAB_0052cffb;
      case 0xf:
        puVar6 = PTR_DAT_005c3e50;
      }
      break;
    case 0x18:
      FUN_004b71f0(local_34,PTR_s_Func_Type_005c3e5c,0x30);
      switch(local_70 & 0xff) {
      case 0:
        puVar6 = PTR_DAT_005c3e60;
        break;
      case 1:
        puVar7 = PTR_DAT_005c3e64;
        goto LAB_0052cffb;
      case 2:
        puVar6 = PTR_s_Param_005c3e68;
        break;
      case 3:
        puVar6 = PTR_DAT_005c3e6c;
        break;
      case 4:
        puVar7 = PTR_DAT_005c3e70;
        goto LAB_0052cffb;
      case 5:
        puVar6 = PTR_DAT_005c3e74;
        break;
      case 6:
        puVar6 = PTR_DAT_005c3e78;
        break;
      case 7:
        puVar7 = PTR_DAT_005c3e7c;
        goto LAB_0052cffb;
      default:
        goto switchD_0052c508_caseD_14;
      }
      break;
    case 0x19:
      FUN_004b71f0(local_34,PTR_s_Draw_Type_005c3e80,0x30);
      puVar7 = PTR_s_Connect_005c3e84;
      puVar2 = PTR_DAT_005c3e88;
      goto joined_r0x0052ccf5;
    case 0x1a:
      puVar7 = PTR_s_Derivative_005c3e8c;
      goto LAB_0052c771;
    case 0x1b:
      puVar7 = PTR_s_Coord_005c3e98;
      goto LAB_0052c771;
    case 0x1c:
      puVar7 = PTR_DAT_005c3e9c;
      goto LAB_0052c771;
    case 0x1d:
      puVar7 = PTR_DAT_005c3ea0;
      goto LAB_0052c771;
    case 0x1e:
      puVar7 = PTR_s_Label_005c3ea4;
      goto LAB_0052c771;
    case 0x1f:
      FUN_004b71f0(local_34,PTR_s_Cursor_Form_005c3f68,0x30);
      local_68 = bVar3 + 0x31;
      local_67 = 0;
      goto switchD_0052c508_caseD_14;
    case 0x20:
      FUN_004b71f0(local_34,PTR_s_Stat_Wind_005c3eb4,0x30);
      puVar7 = PTR_DAT_005c3eb8;
      puVar2 = PTR_s_Manual_005c3ebc;
      goto joined_r0x0052ccf5;
    case 0x21:
      puVar7 = PTR_s_Graph_Func_005c3ec0;
LAB_0052c771:
      FUN_004b71f0(local_34,puVar7,0x30);
      puVar7 = PTR_DAT_005c3e90;
      if ((local_70 & 0xff) == 0) {
LAB_0052cffb:
        puVar6 = puVar7;
      }
      else {
        if ((local_70 & 0xff) != 1) goto switchD_0052c508_caseD_14;
switchD_0052c7db_caseD_3:
        puVar6 = PTR_DAT_005c3e94;
      }
      break;
    case 0x22:
      FUN_004b71f0(local_34,PTR_s_Dual_Screen_005c3ec4,0x30);
      switch(local_70 & 0xff) {
      case 0:
        puVar7 = PTR_DAT_005c3ec8;
        goto LAB_0052cffb;
      case 1:
        puVar6 = PTR_s_G_to_T_005c3ecc;
        break;
      case 2:
        puVar6 = PTR_DAT_005c3ed0;
        break;
      case 3:
        goto switchD_0052c7db_caseD_3;
      default:
        goto switchD_0052c508_caseD_14;
      }
      break;
    case 0x23:
      puVar7 = PTR_s_Simul_Graph_005c3ed4;
      goto LAB_0052c876;
    case 0x24:
      FUN_004b71f0(local_34,PTR_s_Dynamic_Type_005c3ed8,0x30);
      puVar6 = PTR_DAT_005c3edc;
      puVar2 = PTR_DAT_005c3ee0;
      goto joined_r0x0052c9d0;
    case 0x25:
      puVar7 = PTR_DAT_005c3ee4;
LAB_0052c876:
      FUN_004b71f0(local_34,puVar7,0x30);
      puVar6 = PTR_DAT_005c3e90;
      puVar7 = PTR_DAT_005c3e94;
      goto joined_r0x0052c930;
    case 0x26:
      FUN_004b71f0(local_34,PTR_s_Slope_005c3ee8,0x30);
      uVar4 = local_70 & 0xff;
      puVar6 = PTR_DAT_005c3eec;
      puVar7 = PTR_DAT_005c3ef0;
      if (uVar4 == 0) break;
      goto joined_r0x0052c983;
    case 0x27:
      FUN_004b71f0(local_34,PTR_s_Payment_005c3ef4,0x30);
      puVar6 = PTR_DAT_005c3ef8;
      puVar7 = PTR_DAT_005c3efc;
      goto joined_r0x0052c930;
    case 0x28:
      FUN_004b71f0(local_34,PTR_s_Date_Mode_005c3f00,0x30);
      puVar6 = PTR_DAT_005c3f04;
      puVar7 = PTR_DAT_005c3f08;
joined_r0x0052c930:
      uVar4 = local_70 & 0xff;
      if (uVar4 != 0) {
joined_r0x0052c983:
        puVar6 = puVar7;
        if (uVar4 != 1) goto switchD_0052c508_caseD_14;
      }
      break;
    case 0x29:
      FUN_004b71f0(local_34,PTR_s_Answer_Type_005c3f0c,0x30);
      puVar6 = PTR_DAT_005c3f10;
      puVar2 = PTR_s_Complex_005c3f14;
joined_r0x0052c9d0:
      uVar4 = local_70 & 0xff;
      if (uVar4 == 0) break;
      goto joined_r0x0052c9d3;
    case 0x2a:
      FUN_004b71f0(local_34,PTR_s_Complex_Mode_005c3f18,0x30);
      uVar4 = local_70 & 0xff;
      puVar7 = PTR_DAT_005c3f10;
      if (uVar4 == 0) goto LAB_0052cffb;
      puVar6 = PTR_DAT_005c3f1c;
      if ((uVar4 == 1) || (puVar6 = PTR_DAT_005c3f20, uVar4 == 2)) break;
      goto switchD_0052c508_caseD_14;
    case 0x2b:
      FUN_004b71f0(local_34,PTR_s_Display_005c3f24,0x30);
      uVar4 = local_70;
      switch(local_70 & 0x70) {
      case 0:
        FUN_004b71f0(&local_68,PTR_s_Norm1_005c3f28,0x30);
        break;
      case 0x10:
        FUN_004b71f0(&local_68,PTR_s_Norm2_005c3f2c,0x30);
        break;
      case 0x20:
        FUN_004b71f0(&local_68,PTR_DAT_005c3f30,0x30);
        FUN_0055c2fe(uVar4 & 0xf,local_6c,10);
        goto LAB_0052cb24;
      case 0x30:
        FUN_004b71f0(&local_68,PTR_DAT_005c3f34,0x30);
        FUN_0055c2fe(uVar4 & 0xf,local_6c,10);
LAB_0052cb24:
        FUN_004b6e70(&local_68,local_6c);
      }
      if ((bVar3 & 0x80) != 0) {
        FUN_004b6e70(&local_68,&local_74);
      }
      goto switchD_0052c508_caseD_14;
    case 0x2c:
      FUN_004b71f0(local_34,PTR_s_Background_005c3f38,0x30);
      puVar6 = PTR_DAT_005c3f3c;
      if (bVar3 == 0) break;
      FUN_004b71f0(&local_68,PTR_DAT_005c3f40,0x30);
      FUN_0055c2fe(local_70 & 0xff,local_6c,10);
      FUN_004b6e70(&local_68,local_6c);
      goto switchD_0052c508_caseD_14;
    case 0x2d:
      FUN_004b71f0(local_34,PTR_s_Resid_List_005c3f44,0x30);
      puVar7 = PTR_DAT_005c3f3c;
      if (bVar3 == 0) goto LAB_0052cffb;
      FUN_004b71f0(&local_68,PTR_DAT_005c3f48,0x30);
      FUN_0055c2fe(local_70 & 0xff,local_6c,10);
      FUN_004b6e70(&local_68,local_6c);
      goto switchD_0052c508_caseD_14;
    case 0x2e:
      FUN_004b71f0(local_34,PTR_s_List_File_005c3f4c,0x30);
      FUN_004b71f0(&local_68,PTR_DAT_005c3f50,0x30);
      FUN_0055c2fe(local_70 & 0xff,local_6c,10);
      FUN_004b6e70(&local_68,local_6c);
      goto switchD_0052c508_caseD_14;
    case 0x2f:
      FUN_004b71f0(local_34,PTR_s_Variable_005c3f54,0x30);
      puVar7 = PTR_s_Range_005c3f58;
      if (bVar3 == 0) goto LAB_0052cffb;
      FUN_004b71f0(&local_68,PTR_DAT_005c3f48,0x30);
      FUN_0055c2fe(local_70 & 0xff,local_6c,10);
      FUN_004b6e70(&local_68,local_6c);
      goto switchD_0052c508_caseD_14;
    case 0x31:
      FUN_004b71f0(local_34,PTR_s_Dual_Screen_005c3f5c,0x30);
      puVar7 = PTR_DAT_005c3ed0;
      puVar2 = PTR_DAT_005c3f64;
joined_r0x0052ccf5:
      uVar4 = local_70 & 0xff;
      if (uVar4 != 0) {
joined_r0x0052c9d3:
        puVar6 = puVar2;
        if (uVar4 == 1) break;
        goto switchD_0052c508_caseD_14;
      }
      goto LAB_0052cffb;
    case 0x42:
      FUN_004b71f0(local_34,PTR_s_H_Copy_005c3f6c,0x30);
      puVar6 = PTR_s_Direct_005c3f70;
      puVar7 = PTR_s_Memory_005c3f74;
      goto joined_r0x0052ce8e;
    case 0x4e:
      FUN_004b71f0(local_34,PTR_s_Auto_Calc_005c3f78,0x30);
      puVar6 = PTR_DAT_005c3f7c;
      puVar7 = PTR_DAT_005c3f80;
      goto joined_r0x0052ce8e;
    case 0x4f:
      FUN_004b71f0(local_34,PTR_s_Show_Cell_005c3f84,0x30);
      puVar6 = PTR_s_Formula_005c3f88;
      puVar7 = PTR_s_Value_005c3f8c;
      goto joined_r0x0052ce8e;
    case 0x50:
      FUN_004b71f0(local_34,PTR_DAT_005c3f90,0x30);
      puVar6 = PTR_s_Lower_005c3f94;
      puVar7 = PTR_s_Right_005c3f98;
      goto joined_r0x0052ce8e;
    case 0x51:
      FUN_004b71f0(local_34,PTR_s_Sub_Name_005c3f9c,0x30);
      puVar6 = PTR_DAT_005c3fa0;
      puVar7 = PTR_DAT_005c3fa4;
joined_r0x0052ce8e:
      if ((local_70 & 0xff) == 0) break;
      if ((local_70 & 0xff) != 1) goto switchD_0052c508_caseD_14;
      goto LAB_0052cffb;
    case 0x53:
      FUN_004b71f0(local_34,PTR_s_Input_Mode_005c3fb0,0x30);
      puVar7 = PTR_s_Linear_005c3fb8;
      puVar6 = PTR_DAT_005c3fb4;
      if (bVar3 != 0) goto LAB_0052cffb;
      break;
    case 0x54:
      FUN_004b71f0(local_34,PTR_s_Locus_005c3fbc,0x30);
      puVar7 = PTR_DAT_005c3fc0;
      puVar6 = PTR_DAT_005c3fc4;
      goto joined_r0x0052cf4e;
    case 0x55:
      FUN_004b71f0(local_34,PTR_s_Y_Draw_Speed_005c3fc8,0x30);
      puVar7 = PTR_DAT_005c3fcc;
      puVar6 = PTR_DAT_005c3fd0;
joined_r0x0052cf4e:
      if ((local_70 & 0xff) != 1) goto LAB_0052cffb;
      break;
    case 0x56:
      FUN_004b71f0(local_34,PTR_s_Sketch_Line_005c3fd4,0x30);
      uVar4 = local_70 & 0xff;
      puVar7 = PTR_s_Thick_005c3fdc;
      if ((uVar4 == 1) ||
         ((puVar6 = PTR_s_Broken_005c3fe0, uVar4 != 2 &&
          (puVar7 = PTR_DAT_005c3fd8, puVar6 = PTR_DAT_005c3fe4, uVar4 != 3)))) goto LAB_0052cffb;
      break;
    case 0x57:
      FUN_004b71f0(local_34,PTR_s_Frac_Result_005c3fe8,0x30);
      puVar7 = PTR_DAT_005c3fec;
      puVar6 = PTR_DAT_005c3ff0;
      if ((local_70 & 0xff) == 1) goto LAB_0052cffb;
    }
    FUN_004b71f0(&local_68,puVar6,0x30);
switchD_0052c508_caseD_14:
    FUN_005232d0(1,iVar5);
    if (param_4 == iVar1) {
      FUN_00523490(local_34);
    }
    else {
      FUN_00523470(local_34,0xc);
    }
    FUN_005232d0(0xd,iVar5);
    if (param_4 == iVar1) {
      FUN_00523400(&local_78);
    }
    else {
      FUN_005233e0(&local_78);
    }
    FUN_005232d0(0xe,iVar5);
    if (param_4 == iVar1) {
      FUN_00523490(&local_68);
    }
    else {
      FUN_00523470(&local_68,0x14);
    }
    FUN_005232d0(0x15,iVar5);
    FUN_004b6ef0(&local_68,&local_76);
    if (iVar5 == 1) {
      if (param_3 != 1) {
        puVar7 = &DAT_005beb20;
LAB_0052d0e3:
        FUN_004b6ef0(&local_68,puVar7);
      }
    }
    else if ((iVar5 == 7) && (param_3 + 7 <= param_2)) {
      puVar7 = &DAT_005beb1c;
      goto LAB_0052d0e3;
    }
    if (param_4 == iVar1) {
      FUN_00523490(&local_68);
    }
    else {
      FUN_00523470(&local_68,0x15);
    }
    iVar5 = iVar5 + 1;
    if (7 < iVar5) {
      return;
    }
  } while( true );
}

