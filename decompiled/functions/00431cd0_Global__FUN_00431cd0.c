// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00431cd0
// entry: 00431cd0  size: 3357


void FUN_00431cd0(undefined4 param_1,short param_2)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  byte *pbVar8;
  undefined4 *puVar9;
  char *pcVar10;
  bool bVar11;
  int iStack_28c;
  int local_288;
  undefined4 uStack_284;
  int iStack_280;
  undefined4 uStack_27c;
  int iStack_278;
  uint uStack_274;
  int local_270;
  int iStack_26c;
  int iStack_268;
  undefined2 local_264;
  undefined2 local_262;
  undefined4 local_260;
  undefined2 local_25c;
  undefined2 local_25a;
  undefined4 local_258;
  undefined2 local_254;
  undefined2 local_252;
  undefined4 local_250;
  undefined2 local_24c;
  undefined2 local_24a;
  undefined4 local_248;
  undefined2 local_244;
  undefined2 local_242;
  undefined4 local_240;
  undefined2 local_23c;
  undefined2 local_23a;
  undefined4 local_238;
  undefined2 local_234;
  undefined2 local_232;
  undefined4 local_230;
  undefined2 local_22c;
  undefined2 local_22a;
  undefined4 local_228;
  undefined2 local_224;
  undefined2 local_222;
  undefined4 local_220;
  undefined2 local_21c;
  undefined2 local_21a;
  undefined4 local_218;
  undefined2 local_214;
  undefined2 local_212;
  undefined4 local_210;
  undefined2 local_20c;
  undefined2 local_20a;
  undefined4 local_208;
  undefined2 local_204;
  undefined2 local_202;
  undefined4 local_200;
  undefined2 local_1fc;
  undefined2 local_1fa;
  undefined4 local_1f8;
  undefined2 local_1f4;
  undefined2 local_1f2;
  undefined4 local_1f0;
  undefined2 local_1ec;
  undefined2 local_1ea;
  undefined4 local_1e8;
  undefined2 local_1e4;
  undefined2 local_1e2;
  undefined4 local_1e0;
  undefined2 local_1dc;
  undefined2 local_1da;
  undefined4 local_1d8;
  undefined2 local_1d4;
  undefined2 local_1d2;
  undefined4 local_1d0;
  undefined2 local_1cc;
  undefined2 local_1ca;
  undefined4 local_1c8;
  undefined2 local_1c4;
  undefined2 local_1c2;
  undefined4 local_1c0;
  undefined2 local_1bc;
  undefined2 local_1ba;
  undefined4 local_1b8;
  undefined2 local_1b4;
  undefined2 local_1b2;
  undefined4 local_1b0;
  undefined2 local_1ac;
  undefined2 local_1aa;
  undefined4 local_1a8;
  undefined2 local_1a4;
  undefined2 local_1a2;
  undefined4 local_1a0;
  undefined2 local_19c;
  undefined2 local_19a;
  undefined4 local_198;
  undefined2 local_194;
  undefined2 local_192;
  undefined4 local_190;
  undefined2 local_18c;
  undefined2 local_18a;
  undefined4 local_188;
  undefined2 local_184;
  undefined2 local_182;
  undefined4 local_180;
  undefined2 local_17c;
  undefined2 local_17a;
  undefined4 local_178;
  undefined2 local_174;
  undefined2 local_172;
  undefined4 local_170;
  undefined2 local_16c;
  undefined2 local_16a;
  undefined4 local_168;
  undefined2 local_164;
  undefined2 local_162;
  undefined4 local_160;
  undefined2 local_15c;
  undefined2 local_15a;
  undefined4 local_158;
  undefined2 local_154;
  undefined2 local_152;
  undefined4 local_150;
  undefined2 local_14c;
  undefined2 local_14a;
  undefined4 local_148;
  undefined1 auStack_144 [52];
  undefined1 local_110 [16];
  byte abStack_100 [256];
  
  local_264 = 0x37;
  local_262 = 2;
  local_260 = 1;
  local_25c = 0x38;
  local_25a = 2;
  local_258 = 7;
  local_254 = 0x39;
  local_252 = 0;
  local_250 = 1;
  local_24c = 0x3f4;
  local_24a = 0;
  local_248 = 4;
  local_244 = 0x10;
  local_242 = 2;
  local_240 = 0x28;
  local_23c = 0x87;
  local_23a = 2;
  local_238 = 0x29;
  local_234 = 0x3d;
  local_232 = 2;
  local_230 = 10;
  local_22c = 0x3e;
  local_22a = 2;
  local_228 = 0xb;
  local_224 = 0x3f;
  local_222 = 2;
  local_220 = 0xc;
  local_21c = 0x6a;
  local_21a = 0;
  local_218 = 5;
  local_214 = 0;
  local_212 = 0;
  local_210 = 0;
  local_20c = 0;
  local_20a = 0;
  local_208 = 0;
  local_204 = 0x41;
  local_202 = 2;
  local_200 = 0xe;
  local_1fc = 0x42;
  local_1fa = 2;
  local_1f8 = 0xf;
  local_1f4 = 0x43;
  local_1f2 = 2;
  local_1f0 = 0x10;
  local_1ec = 0x44;
  local_1ea = 2;
  local_1e8 = 0x11;
  local_1e4 = 0;
  local_1e2 = 0;
  local_1e0 = 0;
  local_1dc = 6;
  local_1da = 3;
  local_1d8 = 1;
  local_1d4 = 0x45;
  local_1d2 = 2;
  local_1d0 = 0x17;
  local_1cc = 0x46;
  local_1ca = 2;
  local_1c8 = 0x18;
  local_1c4 = 0;
  local_1c2 = 0;
  local_1c0 = 0;
  local_1bc = 0;
  local_1ba = 0;
  local_1b8 = 0;
  local_1b4 = 0;
  local_1b2 = 0;
  local_1b0 = 0;
  local_1ac = 0;
  local_1aa = 0;
  local_1a8 = 0;
  local_1a4 = 0x3d1;
  local_1a2 = 2;
  local_1a0 = 0x1e;
  local_19c = 0x3d2;
  local_19a = 2;
  local_198 = 0x1f;
  local_194 = 0x3d3;
  local_192 = 2;
  local_190 = 0x20;
  local_18c = 0x3d6;
  local_18a = 2;
  local_188 = 0x23;
  local_184 = 0;
  local_182 = 0;
  local_180 = 0;
  local_17c = 0;
  local_17a = 0;
  local_178 = 0;
  local_174 = 0x7f;
  local_172 = 2;
  local_170 = 0x12;
  local_16c = 0x80;
  local_16a = 2;
  local_168 = 0x13;
  local_164 = 0x81;
  local_162 = 2;
  local_160 = 0x14;
  local_15c = 0x82;
  local_15a = 2;
  local_158 = 0x15;
  local_154 = 0x83;
  local_152 = 2;
  local_150 = 0x16;
  local_14c = 0;
  local_14a = 0;
  local_148 = 0;
  FUN_00526420(0x44);
  uVar3 = FUN_004ab670(local_110,s__TABLE_005be208);
  iVar4 = FUN_0055b770(uVar3);
  if (iVar4 == 0) {
    local_270 = 1;
    cVar2 = FUN_00526090(0x18);
    if ((cVar2 < '\0') || ('\x02' < cVar2)) {
      FUN_00526070(0x18,0);
    }
    local_288 = 0;
    do {
      puVar7 = (undefined4 *)(&local_264 + local_288 * 0x18);
      puVar9 = &DAT_005cde20 + local_288 * 0xc;
      for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar9 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar9 = puVar9 + 1;
      }
      FUN_00538860(local_288,&DAT_005cde20 + local_288 * 0xc);
      local_288 = local_288 + 1;
    } while (local_288 < 6);
  }
  else {
    local_270 = 0;
    local_288 = 0;
    do {
      puVar7 = &DAT_0057e900 + local_288 * 0xc;
      puVar9 = &DAT_005cde20 + local_288 * 0xc;
      for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar9 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar9 = puVar9 + 1;
      }
      FUN_00538860(local_288,&DAT_005cde20 + local_288 * 0xc);
      local_288 = local_288 + 1;
    } while (local_288 < 6);
  }
  FUN_005383a0(0);
  FUN_0053c6f0(2);
  FUN_0053edf0(2);
  FUN_00518160();
  iStack_268 = 1;
  iStack_278 = 0;
  FUN_0043d850(&iStack_280,&iStack_28c,&uStack_27c,&uStack_284);
switchD_004322e7_caseD_2:
  iVar4 = local_270;
  if (iStack_278 == 0) {
    FUN_0053c690(2);
    iVar4 = local_270;
  }
  else {
    if ((local_270 == 1) &&
       ((iVar5 = FUN_00517c00(), iVar5 == 0 || (cVar2 = FUN_00526090(0x31), cVar2 == '\x01')))) {
      uVar3 = 2;
    }
    else {
      uVar3 = 6;
    }
    FUN_0053c690(uVar3);
  }
  if ((param_2 == 1) && (iStack_268 == 1)) {
    iStack_268 = 0;
    iStack_278 = 1;
    local_288 = 0x22;
    local_288 = FUN_00502350(0x22,&iStack_26c);
    if (local_288 == -1) {
      FUN_0043d850(&iStack_280,&iStack_28c,&uStack_27c,&uStack_284);
    }
    iVar5 = FUN_00517c00();
    if (iVar5 == 0) {
      iStack_278 = 0;
    }
    if (iStack_26c != 0) {
      FUN_0052a160(auStack_144,iStack_280,uStack_27c,iStack_28c,uStack_284);
      FUN_00538b30();
      iStack_278 = 0;
      FUN_0052b240(iStack_26c);
    }
  }
  FUN_00433000(auStack_144);
  FUN_0052a160(auStack_144,iStack_280,uStack_27c,iStack_28c,uStack_284);
  FUN_00538b30();
  iVar5 = FUN_00526620(&uStack_274);
  if (iVar5 != 0) {
LAB_0043263a:
    iVar4 = FUN_00433130(uStack_274,1,auStack_144,&iStack_280,&uStack_27c,&iStack_28c,&uStack_284);
    if (iVar4 == -1) {
      FUN_0043d850(&iStack_280,&iStack_28c,&uStack_27c,&uStack_284);
    }
    else if (iVar4 == 0) {
      iStack_278 = 0;
      FUN_005382b0();
      goto switchD_004322e7_caseD_2;
    }
    FUN_005382b0();
    goto switchD_004322e7_caseD_2;
  }
  if (uStack_274 < 0x29) {
    if (uStack_274 != 0x28) {
      switch(uStack_274) {
      case 1:
        local_288 = FUN_00517320(iStack_28c);
        if ((local_288 != 0) && (local_288 != 1)) {
          if (iVar4 == 1) {
            cVar2 = FUN_00517450(iStack_28c,0x20);
            if (cVar2 == '\x01') {
              FUN_005177d0(iStack_28c,0);
            }
            else {
              uVar6 = FUN_00517450(iStack_28c,0x20,0x20);
              FUN_005177d0(iStack_28c,uVar6 ^ 1);
            }
          }
          else {
            iStack_278 = 0;
            cVar2 = FUN_00517450(iStack_28c,0xc0);
            if (cVar2 == '\x01') {
              FUN_005177d0(iStack_28c,0,0xc0);
            }
            else {
              uVar6 = FUN_00517450(iStack_28c,0x80,0x80);
              FUN_005177d0(iStack_28c,uVar6 ^ 1);
            }
          }
        }
      default:
        goto switchD_004322e7_caseD_2;
      case 5:
        goto switchD_004322e7_caseD_5;
      case 7:
        iVar4 = FUN_00529a70(iStack_28c);
        iVar5 = FUN_00433d10(iStack_28c);
        if (iVar5 == 0) {
          iStack_278 = 0;
          iVar5 = FUN_00529a70(iStack_28c);
          if (iVar4 != iVar5) {
            if (iStack_280 == iStack_28c) {
              uStack_27c = 0;
            }
            goto LAB_00432409;
          }
        }
        goto switchD_004322e7_caseD_2;
      case 10:
      case 0xb:
      case 0xc:
      case 0xd:
      case 0xe:
      case 0xf:
      case 0x10:
      case 0x11:
        switch(uStack_274) {
        case 10:
          uVar3 = 0;
          break;
        case 0xb:
          uVar3 = 1;
          break;
        case 0xc:
          uVar3 = 2;
          break;
        case 0xd:
          uVar3 = 3;
          break;
        case 0xe:
          uVar3 = 4;
          break;
        case 0xf:
          uVar3 = 5;
          break;
        case 0x10:
          uVar3 = 6;
          break;
        case 0x11:
          uVar3 = 7;
          break;
        default:
          goto switchD_00432498_default;
        }
        FUN_00432b60(uVar3);
switchD_00432498_default:
        uStack_27c = 0;
        uStack_284 = 0;
        iStack_278 = 0;
        iStack_280 = iStack_28c;
        FUN_005387a0();
        goto switchD_004322e7_caseD_2;
      case 0x12:
        uVar3 = 0x108;
        break;
      case 0x13:
        uVar3 = 0x198;
        break;
      case 0x14:
        uVar3 = 0x188;
        break;
      case 0x15:
        uVar3 = 0x1b8;
        break;
      case 0x16:
        uVar3 = 0x1a8;
        break;
      case 0x17:
        FUN_00432ea0(0);
        goto switchD_004322e7_caseD_2;
      case 0x18:
        iVar4 = FUN_00432ea0(1);
        if (iVar4 == 0) {
          iStack_278 = 0;
          FUN_0043d850(&iStack_280,&iStack_28c,&uStack_27c,&uStack_284);
        }
        goto switchD_004322e7_caseD_2;
      case 0x1e:
      case 0x1f:
      case 0x20:
      case 0x21:
      case 0x22:
      case 0x23:
        switch(uStack_274) {
        case 0x1e:
          local_288 = 2;
          break;
        case 0x1f:
          local_288 = 3;
          break;
        case 0x20:
          local_288 = 5;
          break;
        case 0x21:
          local_288 = 6;
          break;
        case 0x22:
          local_288 = 7;
          break;
        case 0x23:
          local_288 = 8;
        }
        iVar4 = FUN_00517320(iStack_28c);
        if ((iVar4 != 0) && (iVar4 != 1)) {
          FUN_00517660(iStack_28c,local_288);
          iStack_278 = 0;
        }
        goto switchD_004322e7_caseD_2;
      }
      iVar4 = FUN_00432a80(iStack_28c,uVar3);
      if (iVar4 == 1) {
        FUN_00538710();
      }
      goto switchD_004322e7_caseD_2;
    }
    FUN_00538710();
    iStack_278 = 0;
    iVar4 = FUN_00432bd0();
    if (iVar4 == -1) {
      FUN_0043d850(&iStack_280,&iStack_28c,&uStack_27c,&uStack_284);
    }
    goto switchD_004322e7_caseD_2;
  }
  if (0x7549 < uStack_274) {
    if (uStack_274 < 0x7556) {
      if (uStack_274 == 0x7555) {
        FUN_00526090(0x2f);
        FUN_0052d2d0(local_110,&local_288);
        if (local_288 == 1) {
          iStack_278 = 0;
          FUN_00518160();
        }
      }
      else if (uStack_274 == 0x754d) {
        FUN_0043d850(&iStack_280,&iStack_28c,&uStack_27c,&uStack_284);
      }
      else if (uStack_274 == 0x754e) {
        if (iVar4 == 1) {
          uVar3 = 0;
        }
        else {
          cVar2 = FUN_00526090(0x22);
          if (cVar2 == '\0') {
            uVar3 = 1;
          }
          else {
            uVar3 = 0x11;
          }
        }
        local_288 = FUN_0052eb10(uVar3);
        if (local_288 == 0) {
          iStack_278 = 0;
        }
      }
      goto switchD_004322e7_caseD_2;
    }
    if (uStack_274 != 0x7557) {
      if ((uStack_274 == 31000) && (iVar4 = FUN_0052aae0(), iVar4 == -5)) {
        uStack_274 = 0xf91b;
        iVar4 = FUN_00433130(0xf91b,1,auStack_144,&iStack_280,&uStack_27c,&iStack_28c,&uStack_284);
        if (iVar4 == -1) {
          FUN_0043d850(&iStack_280,&iStack_28c,&uStack_27c,&uStack_284);
        }
        else if (iVar4 == 0) {
          iStack_278 = 0;
          FUN_005382b0();
          goto switchD_004322e7_caseD_2;
        }
        FUN_005382b0();
      }
      goto switchD_004322e7_caseD_2;
    }
switchD_004322e7_caseD_5:
    FUN_00538710();
    FUN_00517360(7,abStack_100);
    pcVar10 = s_CASIO_005a8d60;
    pbVar8 = abStack_100;
    do {
      bVar1 = *pbVar8;
      bVar11 = bVar1 < (byte)*pcVar10;
      if (bVar1 != *pcVar10) {
LAB_004328f6:
        iVar4 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
        goto LAB_004328fb;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar8[1];
      bVar11 = bVar1 < ((byte *)pcVar10)[1];
      if (bVar1 != ((byte *)pcVar10)[1]) goto LAB_004328f6;
      pbVar8 = pbVar8 + 2;
      pcVar10 = (char *)((byte *)pcVar10 + 2);
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_004328fb:
    if ((iVar4 == 0) && (cVar2 = FUN_00517450(7,0x80), cVar2 == '\x01')) {
      FUN_00430490();
    }
    else {
      iStack_278 = 1;
      if (uStack_274 < 0x7535) {
        if (((uStack_274 == 0x7534) || (uStack_274 == 5)) || (uStack_274 == 0x29)) {
          local_288 = (-(uint)(local_270 != 1) & 3) + 0x1f;
        }
      }
      else if (uStack_274 == 0x7557) {
        local_288 = 0x23;
      }
      local_288 = FUN_00502350(local_288,&iStack_26c);
      if (local_288 == -1) {
        FUN_0043d850(&iStack_280,&iStack_28c,&uStack_27c,&uStack_284);
      }
      iVar4 = FUN_00517c00();
      if (iVar4 == 0) {
        iStack_278 = 0;
      }
      FUN_0052a160(auStack_144,iStack_280,uStack_27c,iStack_28c,uStack_284);
      FUN_00538b30();
      if (iStack_26c != 0) {
        iStack_278 = 0;
        FUN_0052b240(iStack_26c);
      }
    }
    goto switchD_004322e7_caseD_2;
  }
  if (uStack_274 == 0x7549) {
    iVar4 = FUN_00529a70(iStack_28c);
    iVar5 = FUN_00433d10(iStack_28c);
    if (iVar5 == 0) {
      iStack_278 = 0;
      iVar5 = FUN_00529a70(iStack_28c);
      if (iVar4 != iVar5) {
        if (iStack_280 == iStack_28c) {
          uStack_27c = 0;
          uStack_284 = 0;
        }
        else {
LAB_00432409:
          uStack_284 = 0;
        }
      }
    }
    goto switchD_004322e7_caseD_2;
  }
  if (uStack_274 < 0x7543) {
    if (uStack_274 != 0x7542) {
      if (uStack_274 != 0x29) {
        if (uStack_274 == 0x7531) {
          iVar4 = FUN_00529a70(iStack_28c);
          if (iVar4 == 0x409) {
            uStack_274 = 0x54;
          }
          else if (iVar4 == 0x40a) {
            uStack_274 = 0xce;
          }
          else {
            uStack_274 = 0x58;
          }
          goto LAB_0043263a;
        }
        if (uStack_274 == 0x7534) goto switchD_004322e7_caseD_5;
        goto switchD_004322e7_caseD_2;
      }
      goto switchD_004322e7_caseD_5;
    }
  }
  else {
    if (uStack_274 == 0x7545) {
      iVar4 = FUN_00433130(0x7545,0,auStack_144,&iStack_280,&uStack_27c,&iStack_28c,&uStack_284);
      if (iVar4 == -1) {
        FUN_0043d850(&iStack_280,&iStack_28c,&uStack_27c,&uStack_284);
      }
      else if (iVar4 == 0) {
        iStack_278 = 0;
        FUN_005382b0();
        goto switchD_004322e7_caseD_2;
      }
      FUN_005382b0();
      goto switchD_004322e7_caseD_2;
    }
    if (uStack_274 != 0x7547) goto switchD_004322e7_caseD_2;
  }
  FUN_00529ba0(&iStack_280,&uStack_27c,&iStack_28c,&uStack_284,uStack_274);
  goto switchD_004322e7_caseD_2;
}

