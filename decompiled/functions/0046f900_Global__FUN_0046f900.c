// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0046f900
// entry: 0046f900  size: 1262


undefined4 FUN_0046f900(int param_1)

{
  short sVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined1 *puVar7;
  undefined4 *puVar8;
  undefined *puVar9;
  undefined1 local_1d0 [4];
  undefined4 local_1cc;
  undefined4 local_1c8;
  undefined1 local_1c4 [24];
  undefined4 local_1ac;
  undefined4 local_1a8;
  undefined4 local_1a4;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined4 local_198;
  undefined4 local_194;
  undefined4 local_190;
  undefined4 local_18c;
  undefined4 local_188;
  undefined4 local_184;
  undefined4 local_180;
  undefined4 local_17c;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  int local_14c;
  int local_148;
  undefined1 local_144 [12];
  undefined4 local_138 [6];
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  int local_c0;
  int local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  undefined4 local_60 [24];
  
  local_1cc = 1;
  local_1c8 = 1;
  do {
    *(undefined2 *)(param_1 + 8) = 10;
    puVar8 = (undefined4 *)(param_1 + 0x48);
    if (*(short *)(param_1 + 4) == 0) {
      puVar9 = &DAT_005820ec;
      local_1ac = *puVar8;
      local_1a8 = *(undefined4 *)(param_1 + 0x4c);
      local_1a0 = *(undefined4 *)(param_1 + 0x54);
      local_1a4 = *(undefined4 *)(param_1 + 0x50);
      local_19c = *(undefined4 *)(param_1 + 0x58);
      local_198 = *(undefined4 *)(param_1 + 0x5c);
      local_194 = *(undefined4 *)(param_1 + 0x60);
      local_190 = *(undefined4 *)(param_1 + 100);
      local_188 = *(undefined4 *)(param_1 + 0x78);
      local_18c = *(undefined4 *)(param_1 + 0x68);
      local_184 = *(undefined4 *)(param_1 + 0x7c);
      local_180 = *(undefined4 *)(param_1 + 0x80);
      local_17c = *(undefined4 *)(param_1 + 0x6c);
      local_178 = *(undefined4 *)(param_1 + 0x70);
      local_170 = *(undefined4 *)(param_1 + 0x84);
      local_174 = *(undefined4 *)(param_1 + 0x74);
      local_16c = *(undefined4 *)(param_1 + 0x88);
      local_168 = *(undefined4 *)(param_1 + 0x8c);
    }
    else {
      puVar9 = &DAT_005820c4;
      local_1ac = *puVar8;
      local_1a8 = *(undefined4 *)(param_1 + 0x4c);
      local_1a0 = *(undefined4 *)(param_1 + 0x54);
      local_1a4 = *(undefined4 *)(param_1 + 0x50);
      local_19c = *(undefined4 *)(param_1 + 0x58);
      local_198 = *(undefined4 *)(param_1 + 0x5c);
    }
    iVar3 = FUN_004673d0(&local_1cc,&local_1c8,param_1,local_1c4,puVar9);
    switch(iVar3) {
    case 2:
switchD_0046fa27_caseD_2:
      return 0xffffffff;
    case 3:
      return 0xfffffffe;
    case 4:
    case 5:
      cVar2 = FUN_005260a0();
      local_b8 = *puVar8;
      local_bc = (int)*(short *)(param_1 + 6);
      local_c0 = (int)cVar2;
      local_b4 = *(undefined4 *)(param_1 + 0x4c);
      local_ac = *(undefined4 *)(param_1 + 0x54);
      local_b0 = *(undefined4 *)(param_1 + 0x50);
      local_a8 = *(undefined4 *)(param_1 + 0x58);
      local_a4 = *(undefined4 *)(param_1 + 0x5c);
      local_a0 = *(undefined4 *)(param_1 + 0x60);
      local_9c = *(undefined4 *)(param_1 + 100);
      local_98 = *(undefined4 *)(param_1 + 0x68);
      local_94 = *(undefined4 *)(param_1 + 0x6c);
      local_90 = *(undefined4 *)(param_1 + 0x70);
      local_8c = *(undefined4 *)(param_1 + 0x74);
      local_88 = *(undefined4 *)(param_1 + 0x78);
      local_84 = *(undefined4 *)(param_1 + 0x7c);
      local_80 = *(undefined4 *)(param_1 + 0x80);
      local_7c = *(undefined4 *)(param_1 + 0x84);
      local_78 = *(undefined4 *)(param_1 + 0x88);
      local_70 = (int)*(short *)(param_1 + 0xe);
      local_74 = *(undefined4 *)(param_1 + 0x8c);
      local_6c = (int)*(short *)(param_1 + 0x10);
      local_68 = (int)*(short *)(param_1 + 0x16);
      local_64 = (int)*(short *)(param_1 + 0x18);
      FUN_00414db0(local_1d0);
      thunk_FUN_0040add0();
      FUN_0052f840();
      iVar4 = FUN_00457be0((int)*(short *)(param_1 + 4),&local_c0);
      if (iVar4 == 0) {
        FUN_00414db0(local_1d0);
        local_148 = (int)*(short *)(param_1 + 6);
        sVar1 = *(short *)(param_1 + 4);
        puVar8 = local_60;
        puVar6 = local_138;
        for (iVar4 = 0x18; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar6 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar6 = puVar6 + 1;
        }
        if (sVar1 == 0) {
          local_11c = *(undefined4 *)(param_1 + 100);
          local_120 = *(undefined4 *)(param_1 + 0x60);
          local_118 = *(undefined4 *)(param_1 + 0x68);
          local_110 = *(undefined4 *)(param_1 + 0x70);
          local_114 = *(undefined4 *)(param_1 + 0x6c);
          local_10c = *(undefined4 *)(param_1 + 0x74);
          local_104 = *(undefined4 *)(param_1 + 0x7c);
          local_108 = *(undefined4 *)(param_1 + 0x78);
          local_100 = *(undefined4 *)(param_1 + 0x80);
          local_f8 = *(undefined4 *)(param_1 + 0x88);
          local_fc = *(undefined4 *)(param_1 + 0x84);
          local_f4 = *(undefined4 *)(param_1 + 0x8c);
          local_14c = 7;
        }
        else {
          local_14c = 9;
        }
        iVar4 = FUN_0046e960((int)*(short *)(param_1 + 0x22),local_14c + -1,local_138);
        if (iVar4 == 0) {
          if ((iVar3 != 5) && (iVar3 != 6)) {
            if (*(short *)(param_1 + 4) == 0) {
              puVar8 = &DAT_00582138;
            }
            else {
              puVar8 = &DAT_00582114;
            }
            iVar3 = FUN_00468630(&local_14c,puVar8,0,param_1);
            if (iVar3 == 2) {
              return 0xffffffff;
            }
            break;
          }
          if (*(short *)(param_1 + 4) == 0) {
            iVar4 = 0;
            if (0 < local_14c) {
              puVar7 = local_144;
              puVar8 = &DAT_00582138;
              do {
                FUN_0046e7f0(puVar7,param_1,*puVar8);
                iVar4 = iVar4 + 1;
                puVar8 = puVar8 + 1;
                puVar7 = puVar7 + 0xc;
              } while (iVar4 < local_14c);
            }
          }
          else {
            iVar4 = 0;
            if (0 < local_14c) {
              puVar7 = local_144;
              puVar8 = &DAT_00582114;
              do {
                FUN_0046e7f0(puVar7,param_1,*puVar8);
                iVar4 = iVar4 + 1;
                puVar8 = puVar8 + 1;
                puVar7 = puVar7 + 0xc;
              } while (iVar4 < local_14c);
            }
          }
          uVar5 = FUN_004636d0((int)*(short *)(param_1 + 4),&local_c0,(iVar3 != 5) + '\"');
          switch(uVar5) {
          case 0xfffffff2:
          case 0xfffffffa:
          case 0xfffffffe:
          case 0:
            goto switchD_0046fdc0_caseD_fffffff2;
          default:
            break;
          case 0xfffffff5:
            *(undefined2 *)(param_1 + 2) = 1;
            break;
          case 0xffffffff:
            goto switchD_0046fa27_caseD_2;
          }
        }
      }
      else {
        FUN_00414db0(local_1d0);
        FUN_0052b240(iVar4);
      }
      break;
    case 6:
      if (*(short *)(param_1 + 2) == 1) {
        uVar5 = FUN_004636d0((int)*(short *)(param_1 + 4),&local_c0,0x23);
        switch(uVar5) {
        case 0xfffffff2:
switchD_0046fdc0_caseD_fffffff2:
          *(undefined2 *)(param_1 + 2) = 0;
          break;
        case 0xfffffff5:
        case 0xfffffffa:
        case 0xfffffffe:
        case 0:
          *(undefined2 *)(param_1 + 2) = 1;
          break;
        case 0xffffffff:
          goto switchD_0046fa27_caseD_2;
        }
      }
    }
  } while( true );
}

