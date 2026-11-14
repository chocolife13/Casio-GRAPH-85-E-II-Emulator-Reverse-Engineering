// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00446350
// entry: 00446350  size: 1421


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00446350(short param_1)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined1 *puVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  int local_140;
  uint local_13c;
  uint local_138;
  uint local_134;
  uint local_130;
  undefined4 local_12c;
  uint local_128;
  uint local_124;
  undefined1 local_120 [4];
  undefined4 local_11c;
  uint local_118;
  undefined4 local_114;
  undefined4 local_110;
  uint local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined1 local_100 [4];
  int local_fc [4];
  undefined1 local_ec [4];
  undefined1 local_e8 [4];
  undefined1 local_e4 [12];
  undefined1 local_d8 [24];
  undefined1 local_c0 [192];
  
  iVar7 = 0;
  local_134 = 0;
  local_140 = 0;
  local_13c = 0;
  local_130 = 0;
  local_11c = FUN_00526410();
  FUN_00526420(0xe7);
  FUN_00538a00(local_e4);
  FUN_00538980(0,0,local_120);
  _DAT_005ce5d0 = DAT_0057fb88;
  _DAT_005ce5d4 = DAT_0057fb8c;
  FUN_00538860(0,&DAT_005ce5d0);
  FUN_005387f0(0);
  local_124 = local_124 & 0xffffff00;
  local_128 = local_128 & 0xffffff00;
  iVar3 = FUN_00528a20(0x1f,&local_138,&local_12c);
  if (0xf < iVar3) {
    FUN_0052f840();
    FUN_00414db0(local_100);
    thunk_FUN_0040add0();
    iVar3 = FUN_004edb80((int)param_1);
    FUN_00414db0(local_100);
    FUN_0052f880();
    if (0 < iVar3) {
      FUN_0052b240(iVar3);
      goto LAB_00446460;
    }
  }
  piVar6 = local_fc;
  puVar4 = local_c0;
  iVar3 = 4;
  do {
    *piVar6 = (int)puVar4;
    puVar4 = puVar4 + 0x30;
    piVar6 = piVar6 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  cVar2 = FUN_00444830(0x1f,&local_138,&local_12c);
  iVar3 = (int)cVar2;
  if (iVar3 != -1) {
    if (local_138 < 4) {
      local_13c = local_138 - 1;
    }
    else {
      local_13c = 3;
    }
    FUN_00443b00(2,6);
    FUN_00443b60(0x1f,local_fc,local_140,0,local_138,local_12c);
    FUN_00444310(local_fc,0x1f,local_138,&local_140,0,&local_134,0,&local_13c,0,0,0,0,local_12c,0,
                 local_d8,local_128);
    FUN_00446a50(local_13c,local_140,iVar3);
    FUN_00444b00(local_12c,iVar3);
    if (iVar3 == 1) {
      uVar8 = 0x2e;
    }
    else {
      uVar8 = 0x1b;
    }
    FUN_00523960(uVar8,8,0x58,0x10);
    FUN_00443f90(0x1f,(int)param_1,local_140,0,local_13c,0);
    FUN_00444b70(local_138,local_13c,local_140,0,iVar3);
LAB_00446580:
    do {
      while( true ) {
        do {
          FUN_00538b30();
          iVar5 = FUN_00526620(&local_130);
          uVar1 = local_124;
        } while (iVar5 != 0);
        if (0x754a < local_130) break;
        if (local_130 == 0x754a) goto LAB_0044660f;
        if (local_130 < 0x7543) {
          if (local_130 == 0x7542) goto LAB_00446693;
          if ((local_130 == 1) || (local_130 == 0x7532)) {
LAB_004468a9:
            FUN_00538810();
            FUN_005389c0(0,0,local_120);
            FUN_00526440();
            FUN_00526420(local_11c);
            return local_130;
          }
        }
        else if ((0x7543 < local_130) && ((local_130 < 0x7546 || (local_130 == 0x7547))))
        goto LAB_0044660f;
      }
      if (local_130 < 0x755f) {
        if (local_130 != 0x755e) {
          if (local_130 == 0x754d) goto LAB_004468a9;
          if (local_130 != 0x7555) goto LAB_00446580;
        }
LAB_0044660f:
        if ((local_130 == 0x7542) || (local_130 == 0x7544)) {
LAB_00446693:
          iVar7 = iVar7 + -1;
          local_128 = (uint)local_128._1_3_ << 8;
          if (iVar7 < 0) {
            iVar7 = local_138 - 1;
          }
          local_134 = local_134 - 1;
          if ((int)local_134 < 0) {
            local_134 = (iVar7 != (short)local_138 + -1) - 1 & local_13c;
            local_140 = local_140 + -1;
            if (local_140 < 0) {
              local_140 = (local_138 - local_13c) + -1;
            }
          }
LAB_004466d9:
          if ((local_130 != 0x755e) && ((local_130 != 0x754a && (local_130 == 0x7555))))
          goto LAB_00446580;
        }
        else {
          if ((local_130 != 0x7547) && (local_130 != 0x7545)) goto LAB_004466d9;
          iVar7 = iVar7 + 1;
          local_128 = (uint)local_128._1_3_ << 8;
          local_130 = 0x7547;
          if ((short)local_138 + -1 < iVar7) {
            iVar7 = 0;
          }
          local_134 = local_134 + 1;
          if ((int)local_13c < (int)local_134) {
            if (iVar7 == 0) {
              local_134 = 0;
            }
            else {
              local_134 = local_13c;
              local_124 = local_124 & 0xffffff00;
              if (local_13c == 2) {
                local_124 = CONCAT31(SUB43(uVar1,1),1);
              }
            }
            local_140 = iVar7 - local_13c;
            if (local_140 < 0) {
              local_140 = 0;
            }
          }
        }
        FUN_00443b60(0x1f,local_fc,local_140,0,local_138,local_12c);
        FUN_00444310(local_fc,0x1f,local_138,&local_140,0,&local_134,0,&local_13c,0,iVar7,0,
                     local_130,local_12c,local_124,local_d8,local_128);
        local_124 = local_124 & 0xffffff00;
        FUN_00446a50(local_13c,local_140,iVar3);
        FUN_00443f90(0x1f,(int)param_1,local_140,0,local_13c,0);
        FUN_00444b70(local_138,local_13c,local_140,0,iVar3);
        if ((local_130 == 0x755e) || (local_130 == 0x754a)) {
          local_128 = CONCAT31(local_128._1_3_,1);
        }
        goto LAB_00446580;
      }
      if (local_130 == 32000) {
        FUN_005237c0(5);
        FUN_00525b40(3);
        FUN_00528a20(0x1f,local_e8,local_ec);
        FUN_00524590(1,0x30,3,&local_118,&DAT_005be9ec);
        iVar5 = FUN_004e4000(&local_118);
        if (iVar5 == 1) {
          local_118 = local_118 & 0xffffff7f;
          FUN_00528bf0(0x1f,1,1,&local_118);
          local_114 = local_108;
          local_110 = local_104;
          local_118 = local_10c & 0xffffff7f;
          FUN_00528bf0(0x1f,1,2,&local_118);
          FUN_00523800(5);
        }
        else {
          FUN_00528bf0(0x1f,1,1,&local_118);
          FUN_004e5780(&local_118);
          FUN_00528bf0(0x1f,1,2,&local_118);
          FUN_00523800(5);
        }
      }
    } while( true );
  }
LAB_00446460:
  FUN_00538810();
  FUN_005389c0(0,0,local_120);
  FUN_00526440();
  FUN_00526420(local_11c);
  return 0xffff;
}

