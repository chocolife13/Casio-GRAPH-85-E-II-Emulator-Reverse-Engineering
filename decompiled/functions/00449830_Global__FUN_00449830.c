// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00449830
// entry: 00449830  size: 1140


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_00449830(undefined4 param_1,uint param_2)

{
  char cVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined1 uVar6;
  char *pcVar7;
  char *pcVar8;
  undefined1 local_154 [4];
  undefined2 local_150;
  undefined4 local_14c;
  undefined1 local_148 [4];
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_13c;
  uint local_138 [3];
  char local_12c [4];
  char local_128 [12];
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined2 local_104;
  undefined4 local_102 [12];
  undefined1 local_d0 [4];
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined1 local_9c [44];
  undefined1 local_70 [12];
  undefined1 local_64 [12];
  undefined1 local_58 [12];
  undefined1 local_4c [12];
  undefined1 local_40 [24];
  undefined1 local_28 [40];
  
  local_140 = 0;
  local_138[1] = 0;
  local_150 = 0x2020;
  local_144 = FUN_00526410();
  FUN_00526420(0xe7);
  FUN_00538980(0,0,local_148);
  _DAT_005ce720 = DAT_0057fd80;
  _DAT_005ce724 = DAT_0057fd84;
  FUN_00538860(0,&DAT_005ce720);
  FUN_005387f0(0);
  do {
    local_13c = param_1;
    FUN_0044a490(local_58,local_70);
    FUN_004e5780(local_4c);
    FUN_004e5780(local_64);
    FUN_0052f840();
    FUN_00414db0(local_154);
    thunk_FUN_0040add0();
    cVar2 = FUN_004edf80(&local_13c,param_2,local_70,local_58,&local_cc,&local_b4);
    FUN_00414db0(local_154);
    FUN_0052f880();
    if ((cVar2 != '\x1d') && ('\0' < cVar2)) {
      FUN_0052b240((int)cVar2);
      FUN_00538810();
      FUN_005389c0(0,0,local_148);
      FUN_00538810();
      FUN_00526440();
      FUN_00526420(local_144);
      return 1;
    }
    FUN_0052f760(param_2,local_40);
LAB_0044995b:
    do {
      do {
        FUN_00443b00(2,7);
        FUN_004b79f0(param_2 & 0xff,&local_14c);
        local_104 = local_150;
        local_102[0] = local_14c;
        iVar3 = FUN_004b6ca0(&local_14c);
        *(undefined2 *)((int)local_102 + iVar3) = 0x3d;
        FUN_004b5030(local_40,local_9c);
        FUN_004b6e70(&local_104,local_9c);
        FUN_005232d0(1,2);
        FUN_00523470(&local_104,0x15);
        uVar4 = 0xffffffff;
        pcVar7 = "Lft=";
        do {
          pcVar8 = pcVar7;
          if (uVar4 == 0) break;
          uVar4 = uVar4 - 1;
          pcVar8 = pcVar7 + 1;
          cVar1 = *pcVar7;
          pcVar7 = pcVar8;
        } while (cVar1 != '\0');
        uVar4 = ~uVar4;
        pcVar7 = pcVar8 + -uVar4;
        pcVar8 = local_12c;
        for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
          pcVar7 = pcVar7 + 4;
          pcVar8 = pcVar8 + 4;
        }
        for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *pcVar8 = *pcVar7;
          pcVar7 = pcVar7 + 1;
          pcVar8 = pcVar8 + 1;
        }
        FUN_004b6ef0(&local_104,local_12c);
        local_11c = local_cc;
        local_118 = local_c8;
        local_114 = local_c4;
        FUN_004b5030(&local_11c,local_9c);
        FUN_004b6e70(&local_104,local_9c);
        FUN_005232d0(1,3);
        FUN_00523470(&local_104,0x15);
        uVar4 = 0xffffffff;
        pcVar7 = "Rgt=";
        do {
          pcVar8 = pcVar7;
          if (uVar4 == 0) break;
          uVar4 = uVar4 - 1;
          pcVar8 = pcVar7 + 1;
          cVar1 = *pcVar7;
          pcVar7 = pcVar8;
        } while (cVar1 != '\0');
        uVar4 = ~uVar4;
        pcVar7 = pcVar8 + -uVar4;
        pcVar8 = local_12c;
        for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
          pcVar7 = pcVar7 + 4;
          pcVar8 = pcVar8 + 4;
        }
        for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *pcVar8 = *pcVar7;
          pcVar7 = pcVar7 + 1;
          pcVar8 = pcVar8 + 1;
        }
        FUN_004b6ef0(&local_104,local_12c);
        local_11c = local_b4;
        local_118 = local_b0;
        local_114 = local_ac;
        FUN_004b5030(&local_11c,local_9c);
        FUN_004b6e70(&local_104,local_9c);
        FUN_005232d0(1,4);
        FUN_00523470(&local_104,0x15);
        if (cVar2 == '\x1d') {
          FUN_0052f6f0(0x19b,&local_104);
          FUN_005232d0(2,7);
          FUN_005233e0(&local_104);
        }
        FUN_00538b30();
        iVar3 = FUN_00526620(local_138);
      } while (iVar3 != 0);
      if (0x7534 < local_138[0]) {
        if (local_138[0] == 0x754d) {
          if (cVar2 == '\x1d') {
            FUN_00414db0(local_154);
          }
          uVar6 = 0;
LAB_00449c72:
          FUN_00538810();
          FUN_005389c0(0,0,local_148);
          FUN_00526440();
          FUN_00526420(local_144);
          return uVar6;
        }
        if (local_138[0] == 0x7555) {
          local_12c[0] = s__EQUA_005be254[0];
          local_12c[1] = s__EQUA_005be254[1];
          local_12c[2] = s__EQUA_005be254[2];
          local_12c[3] = s__EQUA_005be254[3];
          local_128[0] = s__EQUA_005be254[4];
          local_128[1] = s__EQUA_005be254[5];
          FUN_0052d2d0(local_12c,local_d0);
          FUN_00449cb0(param_1,local_28,local_138 + 2);
          FUN_00449ec0(&local_140,local_138 + 1,local_28,local_138[2],param_1,0);
        }
        goto LAB_0044995b;
      }
      if (local_138[0] != 0x7534) {
        if (local_138[0] == 1) {
          if (cVar2 == '\x1d') {
            FUN_00414db0(local_154);
          }
        }
        else if (local_138[0] != 0x7532) goto LAB_0044995b;
        uVar6 = 1;
        goto LAB_00449c72;
      }
    } while (cVar2 != '\x1d');
  } while( true );
}

