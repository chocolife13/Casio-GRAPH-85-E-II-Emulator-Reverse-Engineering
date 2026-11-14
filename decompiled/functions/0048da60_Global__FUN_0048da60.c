// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0048da60
// entry: 0048da60  size: 1500


void FUN_0048da60(int *param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  undefined2 uVar6;
  undefined1 *puVar4;
  undefined4 uVar5;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  char *pcVar10;
  undefined1 uStack_1c4;
  undefined1 uStack_1c3;
  undefined1 uStack_1c2;
  undefined1 uStack_1c1;
  undefined1 uStack_1c0;
  undefined1 auStack_190 [12];
  undefined1 auStack_184 [24];
  int iStack_16c;
  int iStack_168;
  undefined1 auStack_164 [4];
  char acStack_160 [48];
  undefined1 auStack_130 [52];
  undefined1 local_fc [12];
  undefined1 auStack_f0 [12];
  undefined1 auStack_e4 [12];
  undefined1 auStack_d8 [12];
  undefined1 auStack_cc [12];
  undefined1 auStack_c0 [12];
  undefined1 auStack_b4 [172];
  short sStack_8;
  short sStack_6;
  
  FUN_00491a50(local_fc);
  if (*param_1 == 0x14) {
    FUN_0052f6f0(0x127,auStack_164);
    cVar3 = FUN_00526090(0x27);
    if (cVar3 == '\0') {
      uStack_1c4 = 0x3a;
      uStack_1c3 = 0x42;
      uStack_1c2 = 0x67;
      uStack_1c1 = 0x6e;
      uStack_1c0 = 0;
      FUN_004b6e70(auStack_164,&uStack_1c4);
      uVar6 = extraout_var;
    }
    else {
      cVar3 = FUN_00526090(0x27);
      uStack_1c4 = 0x3a;
      if (cVar3 == '\x01') {
        uStack_1c3 = 0x45;
        uStack_1c2 = 0x6e;
        uStack_1c1 = 100;
        uStack_1c0 = 0;
        FUN_004b6e70(auStack_164,&uStack_1c4);
        uVar6 = extraout_var_00;
      }
      else {
        uStack_1c3 = 0x3f;
        uStack_1c2 = 0x3f;
        uStack_1c1 = 0x3f;
        uStack_1c0 = 0;
        FUN_004b6e70(auStack_164,&uStack_1c4);
        uVar6 = extraout_var_01;
      }
    }
  }
  else {
    FUN_005232d0(1,1);
    uVar6 = extraout_var_02;
  }
  FUN_00495150(1,CONCAT22(uVar6,*(undefined2 *)((int)param_1 + 0xe)),auStack_164);
  FUN_004e5780(auStack_190);
  iStack_16c = 2;
  iStack_168 = 2;
  do {
    switch((*(ushort *)(param_1 + 4) - 3) + iStack_168) {
    case 0:
      uStack_1c4 = 0x6e;
      uStack_1c3 = 0x20;
      uStack_1c2 = 0x20;
      uStack_1c1 = 0x3d;
      uStack_1c0 = 0;
      FUN_004b6ef0(auStack_164,&uStack_1c4);
      if (*param_1 == 0x14) {
        FUN_004e4120(local_fc,auStack_190,auStack_184);
        uVar5 = FUN_004b5030(auStack_184,auStack_130);
        FUN_004b6e70(auStack_164,uVar5);
      }
      else {
        if (sStack_8 == 0xc9) {
          pcVar10 = s_X_Axes_005bf96c;
          goto LAB_0048deb2;
        }
        if (sStack_6 == 0xc9) goto LAB_0048dea9;
        puVar4 = local_fc;
LAB_0048dc2b:
        FUN_004e4120(puVar4,auStack_190,auStack_184);
        uVar5 = FUN_004b5030(auStack_184,auStack_130);
        FUN_004b6e70(auStack_164,uVar5);
      }
      break;
    case 1:
      uStack_1c4 = 0x49;
      uStack_1c3 = 0x25;
      uStack_1c2 = 0x20;
      uStack_1c1 = 0x3d;
      uStack_1c0 = 0;
      FUN_004b6ef0(auStack_164,&uStack_1c4);
      if (*param_1 != 0x14) {
        if (sStack_8 == 0xca) {
          pcVar10 = s_X_Axes_005bf96c;
        }
        else {
          if (sStack_6 != 0xca) {
            puVar4 = auStack_f0;
            goto LAB_0048dc2b;
          }
LAB_0048dea9:
          pcVar10 = s_Y_Axes_005bf974;
        }
        goto LAB_0048deb2;
      }
      puVar4 = auStack_f0;
LAB_0048de37:
      FUN_004e4120(puVar4,auStack_190,auStack_184);
      uVar5 = FUN_004b5030(auStack_184,auStack_130);
      FUN_004b6e70(auStack_164,uVar5);
      break;
    case 2:
      uStack_1c4 = 0x50;
      uStack_1c3 = 0x56;
      uStack_1c2 = 0x20;
      uStack_1c1 = 0x3d;
      uStack_1c0 = 0;
      FUN_004b6ef0(auStack_164,&uStack_1c4);
      if (*param_1 == 0x14) {
        puVar4 = auStack_e4;
        goto LAB_0048de37;
      }
      if (sStack_8 != 0xcb) {
        if (sStack_6 != 0xcb) {
          puVar4 = auStack_e4;
          goto LAB_0048dc2b;
        }
        goto LAB_0048dea9;
      }
      pcVar10 = s_X_Axes_005bf96c;
      goto LAB_0048deb2;
    case 3:
      uStack_1c4 = 0x50;
      uStack_1c3 = 0x4d;
      uStack_1c2 = 0x54;
      uStack_1c1 = 0x3d;
      uStack_1c0 = 0;
      FUN_004b6ef0(auStack_164,&uStack_1c4);
      if (*param_1 == 0x14) {
        puVar4 = auStack_d8;
        goto LAB_0048de37;
      }
      if (sStack_8 != 0xcc) {
        if (sStack_6 != 0xcc) {
          puVar4 = auStack_d8;
          goto LAB_0048dc2b;
        }
        goto LAB_0048dea9;
      }
      pcVar10 = s_X_Axes_005bf96c;
LAB_0048deb2:
      uVar7 = 0xffffffff;
      do {
        pcVar9 = pcVar10;
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        pcVar9 = pcVar10 + 1;
        cVar3 = *pcVar10;
        pcVar10 = pcVar9;
      } while (cVar3 != '\0');
      uVar7 = ~uVar7;
      pcVar10 = pcVar9 + -uVar7;
      pcVar9 = acStack_160;
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pcVar9 = *(undefined4 *)pcVar10;
        pcVar10 = pcVar10 + 4;
        pcVar9 = pcVar9 + 4;
      }
      for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pcVar9 = *pcVar10;
        pcVar10 = pcVar10 + 1;
        pcVar9 = pcVar9 + 1;
      }
      break;
    case 4:
      uStack_1c4 = 0x46;
      uStack_1c3 = 0x56;
      uStack_1c2 = 0x20;
      uStack_1c1 = 0x3d;
      uStack_1c0 = 0;
      FUN_004b6ef0(auStack_164,&uStack_1c4);
      if (*param_1 == 0x14) {
        puVar4 = auStack_cc;
        goto LAB_0048de37;
      }
      if (sStack_8 != 0xcd) {
        if (sStack_6 != 0xcd) {
          puVar4 = auStack_cc;
          goto LAB_0048dc2b;
        }
        goto LAB_0048dea9;
      }
      uVar7 = 0xffffffff;
      pcVar10 = s_X_Axes_005bf96c;
      do {
        pcVar9 = pcVar10;
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        pcVar9 = pcVar10 + 1;
        cVar3 = *pcVar10;
        pcVar10 = pcVar9;
      } while (cVar3 != '\0');
      uVar7 = ~uVar7;
      pcVar10 = pcVar9 + -uVar7;
      pcVar9 = acStack_160;
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pcVar9 = *(undefined4 *)pcVar10;
        pcVar10 = pcVar10 + 4;
        pcVar9 = pcVar9 + 4;
      }
      for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pcVar9 = *pcVar10;
        pcVar10 = pcVar10 + 1;
        pcVar9 = pcVar9 + 1;
      }
      break;
    case 5:
      uStack_1c4 = 0x50;
      uStack_1c3 = 0x2f;
      uStack_1c2 = 0x59;
      uStack_1c1 = 0x3d;
      uStack_1c0 = 0;
      FUN_004b6ef0(auStack_164,&uStack_1c4);
      FUN_004e4120(auStack_c0,auStack_190,auStack_184);
      uVar5 = FUN_004b5030(auStack_184,auStack_130);
      goto LAB_0048df9e;
    case 6:
      uStack_1c4 = 0x43;
      uStack_1c3 = 0x2f;
      uStack_1c2 = 0x59;
      uStack_1c1 = 0x3d;
      uStack_1c0 = 0;
      FUN_004b6ef0(auStack_164,&uStack_1c4);
      FUN_004e4120(auStack_b4,auStack_190,auStack_184);
      uVar5 = FUN_004b5030(auStack_184,auStack_130);
LAB_0048df9e:
      FUN_004b6e70(auStack_164,uVar5);
    }
    iVar1 = iStack_16c;
    FUN_00495150(iStack_16c,*(undefined2 *)((int)param_1 + 0xe),auStack_164);
    iVar2 = iStack_168;
    uStack_1c4 = 0x20;
    uStack_1c3 = 0;
    if (iStack_168 == 2) {
      if (1 < *(ushort *)(param_1 + 4)) {
        uStack_1c3 = 0x92;
        goto LAB_0048dffa;
      }
    }
    else if ((iStack_168 == 7) && (*(ushort *)(param_1 + 4) < 2)) {
      uStack_1c3 = 0x93;
LAB_0048dffa:
      uStack_1c4 = 0xe6;
      uStack_1c2 = 0;
    }
    if ((short)iVar1 == *(short *)((int)param_1 + 0xe)) {
      FUN_00523460(&uStack_1c4);
    }
    else {
      FUN_00523420(&uStack_1c4);
    }
    iStack_16c = iVar1 + 1;
    iStack_168 = iVar2 + 1;
    if (7 < (ushort)iStack_16c) {
      return;
    }
  } while( true );
}

