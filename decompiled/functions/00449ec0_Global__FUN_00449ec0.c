// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00449ec0
// entry: 00449ec0  size: 1374


void FUN_00449ec0(int *param_1,int *param_2,int param_3,short param_4,undefined4 param_5,int param_6
                 )

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  ushort uVar6;
  uint uVar7;
  undefined4 *puVar8;
  char *pcVar9;
  char *pcVar10;
  undefined1 local_1c8;
  undefined1 local_1c7;
  undefined1 local_1c6;
  undefined1 local_1c5;
  int local_1c4;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined1 local_1b8;
  undefined4 auStack_1b7 [11];
  int local_188;
  byte local_184 [12];
  undefined1 local_178 [12];
  char local_16c [16];
  undefined1 local_15c [12];
  undefined1 local_150 [12];
  undefined1 local_144 [12];
  undefined1 local_138 [12];
  undefined4 local_12c;
  undefined1 local_100 [256];
  
  local_1c8 = 0x45;
  local_1c7 = 0x71;
  local_1c6 = 0x3a;
  local_1c5 = 0;
  if (param_6 == 0x7542) {
    iVar3 = *param_2 + -1;
    *param_2 = iVar3;
    if (iVar3 < 1) {
      if (iVar3 < 0) {
        *param_2 = (int)param_4;
        if (param_4 < 6) {
          *param_1 = 0;
          local_1c4 = 0;
          goto LAB_0044a00d;
        }
        *param_1 = param_4 + -6;
      }
    }
    else if (iVar3 == *param_1) {
      *param_1 = *param_1 + -1;
      local_1c4 = 0;
      goto LAB_0044a00d;
    }
  }
  else if (param_6 == 0x7547) {
    if (param_4 + -1 < *param_2) {
      *param_2 = 0;
      *param_1 = 0;
      local_1c4 = 0;
      goto LAB_0044a00d;
    }
    iVar3 = *param_2 + 1;
    *param_2 = iVar3;
    if ((6 < iVar3) && (6 < iVar3 - *param_1)) {
      *param_1 = *param_1 + 1;
      local_1c4 = 0;
      goto LAB_0044a00d;
    }
  }
  local_1c4 = 0;
LAB_0044a00d:
  do {
    iVar3 = local_1c4;
    local_188 = local_1c4 + 1;
    FUN_005232d0(1,local_188);
    if (iVar3 == 0) {
      puVar8 = &local_12c;
      for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar8 = 0;
        puVar8 = puVar8 + 1;
      }
      *(undefined2 *)puVar8 = 0;
      *(undefined1 *)((int)puVar8 + 2) = 0;
      FUN_004b7b40(param_5,&local_12c,0x2a);
      FUN_004b6ef0(&local_1bc,&local_1c8);
      FUN_004b6e70(&local_1bc,&local_12c);
      if (*param_2 == 0) {
        FUN_00523490(&local_1bc);
      }
      else {
        FUN_00523470(&local_1bc,0x15);
      }
    }
    else {
      uVar6 = ((short)*param_1 + (short)iVar3) - 1;
      uVar7 = (uint)uVar6;
      cVar1 = *(char *)(param_3 + uVar7);
      if (cVar1 == '\0') {
        uVar4 = 0xffffffff;
        pcVar10 = "";
        do {
          pcVar9 = pcVar10;
          if (uVar4 == 0) break;
          uVar4 = uVar4 - 1;
          pcVar9 = pcVar10 + 1;
          cVar1 = *pcVar10;
          pcVar10 = pcVar9;
        } while (cVar1 != '\0');
        uVar4 = ~uVar4;
        pcVar10 = pcVar9 + -uVar4;
        pcVar9 = (char *)&local_1bc;
        for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined4 *)pcVar9 = *(undefined4 *)pcVar10;
          pcVar10 = pcVar10 + 4;
          pcVar9 = pcVar9 + 4;
        }
        for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *pcVar9 = *pcVar10;
          pcVar10 = pcVar10 + 1;
          pcVar9 = pcVar9 + 1;
        }
      }
      else {
        if (cVar1 == 'l') {
          pcVar10 = " Lower=";
        }
        else {
          if (cVar1 != 'u') {
            FUN_004b79f0(cVar1,&local_1c0);
            local_1bc = 0x20202020;
            local_1b8 = 0x20;
            auStack_1b7[0] = local_1c0;
            iVar3 = FUN_004b6ca0(&local_1c0);
            *(undefined2 *)((int)auStack_1b7 + iVar3) = 0x3d;
            FUN_0052f760(*(undefined1 *)(param_3 + uVar7),local_184);
            if ((local_184[0] & 0x80) != 0) {
              uVar2 = FUN_004e5780(local_178);
              uVar4 = CONCAT31((int3)((uint)uVar2 >> 8),local_184[0]) & 0xffffff7f;
              local_184[0] = (byte)uVar4;
              FUN_0052f780(CONCAT31((int3)(uVar4 >> 8),*(undefined1 *)(param_3 + uVar7)),local_184);
            }
            FUN_004b22b0(local_184,&local_12c);
            uVar4 = 0xffffffff;
            pcVar10 = "ERROR";
            do {
              pcVar9 = pcVar10;
              if (uVar4 == 0) break;
              uVar4 = uVar4 - 1;
              pcVar9 = pcVar10 + 1;
              cVar1 = *pcVar10;
              pcVar10 = pcVar9;
            } while (cVar1 != '\0');
            uVar4 = ~uVar4;
            pcVar10 = pcVar9 + -uVar4;
            pcVar9 = local_16c;
            for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
              *(undefined4 *)pcVar9 = *(undefined4 *)pcVar10;
              pcVar10 = pcVar10 + 4;
              pcVar9 = pcVar9 + 4;
            }
            for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
              *pcVar9 = *pcVar10;
              pcVar10 = pcVar10 + 1;
              pcVar9 = pcVar9 + 1;
            }
            uVar2 = FUN_004b6ca0(&local_12c);
            iVar3 = FUN_004b79b0(&local_12c,local_16c,uVar2);
            if (iVar3 == 0) {
              FUN_004e5780(local_184);
              FUN_004e5780(local_178);
              FUN_0052f780(*(undefined1 *)(param_3 + uVar7),local_184);
              FUN_004b5030(local_184,&local_12c);
            }
            FUN_004b6e70(&local_1bc,&local_12c);
            goto LAB_0044a334;
          }
          pcVar10 = " Upper=";
        }
        uVar4 = 0xffffffff;
        do {
          pcVar9 = pcVar10;
          if (uVar4 == 0) break;
          uVar4 = uVar4 - 1;
          pcVar9 = pcVar10 + 1;
          cVar1 = *pcVar10;
          pcVar10 = pcVar9;
        } while (cVar1 != '\0');
        uVar4 = ~uVar4;
        pcVar10 = pcVar9 + -uVar4;
        pcVar9 = local_16c;
        for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined4 *)pcVar9 = *(undefined4 *)pcVar10;
          pcVar10 = pcVar10 + 4;
          pcVar9 = pcVar9 + 4;
        }
        for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *pcVar9 = *pcVar10;
          pcVar10 = pcVar10 + 1;
          pcVar9 = pcVar9 + 1;
        }
        FUN_004b6ef0(&local_1bc,local_16c);
        iVar3 = FUN_0044a490(local_15c,local_150);
        if (iVar3 != 0) goto LAB_0044a402;
        FUN_004e5780(local_138);
        FUN_004b5030(local_144,local_100);
        FUN_004b6e70(&local_1bc,local_100);
      }
LAB_0044a334:
      iVar3 = uVar7 + 1;
      if (*param_2 == iVar3) {
        FUN_00523490(&local_1bc);
      }
      else {
        FUN_00523470(&local_1bc,0x15);
      }
      if (local_1c4 == 1) {
        if (uVar6 != 0) {
          FUN_005232d0(0x15,2);
          local_1bc = CONCAT13(local_1bc._3_1_,0x92e6);
          if (*param_2 == iVar3) {
            FUN_00523400(&local_1bc);
          }
          else {
LAB_0044a3fa:
            FUN_005233e0(&local_1bc);
          }
        }
      }
      else if (((local_1c4 == 6) && (*(char *)(param_3 + uVar7) != 'u')) &&
              (*(char *)(param_3 + uVar7) != '\0')) {
        FUN_005232d0(0x15,7);
        local_1bc = CONCAT13(local_1bc._3_1_,0x93e6);
        if (*param_2 != iVar3) goto LAB_0044a3fa;
        FUN_00523400(&local_1bc);
      }
    }
LAB_0044a402:
    local_1c4 = local_188;
    if (6 < local_188) {
      return;
    }
  } while( true );
}

