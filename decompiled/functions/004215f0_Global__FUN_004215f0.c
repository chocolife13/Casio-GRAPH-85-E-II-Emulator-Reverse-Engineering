// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004215f0
// entry: 004215f0  size: 2157


short FUN_004215f0(char *param_1,byte *param_2,undefined4 param_3)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  byte *pbVar4;
  char *pcVar5;
  byte *pbVar6;
  undefined2 *puVar7;
  bool bVar8;
  
  puVar7 = &DAT_005bdaea;
  do {
    iVar3 = _strncmp((char *)(puVar7 + -9),param_1,8);
    if (iVar3 == 0) {
      switch(*puVar7) {
      case 1:
        pcVar5 = s_ALPHAMEM_005bdd44;
        pbVar4 = param_2;
        do {
          bVar1 = *pbVar4;
          bVar8 = bVar1 < (byte)*pcVar5;
          if (bVar1 != *pcVar5) {
LAB_0042164f:
            iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
            goto LAB_00421654;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar4[1];
          bVar8 = bVar1 < ((byte *)pcVar5)[1];
          if (bVar1 != ((byte *)pcVar5)[1]) goto LAB_0042164f;
          pbVar4 = pbVar4 + 2;
          pcVar5 = (char *)((byte *)pcVar5 + 2);
        } while (bVar1 != 0);
        iVar3 = 0;
LAB_00421654:
        if (iVar3 == 0) {
          return 0x3a;
        }
        break;
      case 2:
        return -0x7ffe;
      case 3:
        cVar2 = FUN_004ab990(param_3);
        if (cVar2 == '\x02') {
          return 3;
        }
        if (cVar2 == '\x05') {
          pbVar6 = &DAT_005bdcd0;
          pbVar4 = param_2;
          goto LAB_00421890;
        }
        if (cVar2 != '\x06') {
          iVar3 = _strncmp((char *)param_2,(char *)&DAT_005bdd3c,4);
          if (iVar3 == 0) {
            return -0x7ff8;
          }
          iVar3 = _strncmp((char *)param_2,&DAT_005bdd34,4);
          return (-(ushort)(iVar3 != 0) & 0xffef) + 0x801a;
        }
        pbVar6 = &DAT_005bdd2c;
        pbVar4 = param_2;
        goto LAB_004216e7;
      case 4:
        pbVar6 = &DAT_005bdca0;
        pbVar4 = param_2;
        goto LAB_004219c8;
      case 5:
        return -0x7ff9;
      case 6:
        pcVar5 = s_SCREEN_005bdc8c;
        pbVar4 = param_2;
        goto LAB_00421a31;
      case 7:
        pcVar5 = s_REPLAY_005bdc50;
        goto LAB_00421bd5;
      case 8:
        pbVar6 = &DAT_005bdc48;
        pbVar4 = param_2;
        goto LAB_00421c2d;
      case 9:
        return 0x2a;
      case 10:
        pbVar6 = &DAT_005bdc38;
        pbVar4 = param_2;
        goto LAB_00421cc9;
      case 0xb:
        return 0x2e;
      case 0xc:
        return 0x2f;
      case 0xd:
        return 0x30;
      case 0xe:
        return 0x31;
      case 0xf:
        pcVar5 = s__SNAME_005bdc28;
        pbVar4 = param_2;
        goto LAB_00421d82;
      case 0x10:
        return 0x36;
      case 0x11:
        return 0x37;
      }
    }
    puVar7 = puVar7 + 10;
    if (0x5bdc29 < (int)puVar7) {
      return -0x8000;
    }
  } while( true );
LAB_00421bd5:
  bVar1 = *param_2;
  bVar8 = bVar1 < (byte)*pcVar5;
  if (bVar1 != *pcVar5) {
LAB_00421c0e:
    return (-(ushort)(1 - bVar8 != (uint)(bVar8 != 0)) & 0x8001) + 0x8024;
  }
  if (bVar1 == 0) {
    return -0x7fdc;
  }
  bVar1 = param_2[1];
  bVar8 = bVar1 < ((byte *)pcVar5)[1];
  if (bVar1 != ((byte *)pcVar5)[1]) goto LAB_00421c0e;
  param_2 = param_2 + 2;
  pcVar5 = (char *)((byte *)pcVar5 + 2);
  if (bVar1 == 0) {
    return -0x7fdc;
  }
  goto LAB_00421bd5;
  while( true ) {
    bVar1 = pbVar4[1];
    bVar8 = bVar1 < ((byte *)pcVar5)[1];
    if (bVar1 != ((byte *)pcVar5)[1]) goto LAB_00421da6;
    pbVar4 = pbVar4 + 2;
    pcVar5 = (char *)((byte *)pcVar5 + 2);
    if (bVar1 == 0) break;
LAB_00421d82:
    bVar1 = *pbVar4;
    bVar8 = bVar1 < (byte)*pcVar5;
    if (bVar1 != *pcVar5) {
LAB_00421da6:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_00421dab;
    }
    if (bVar1 == 0) break;
  }
  iVar3 = 0;
LAB_00421dab:
  if (iVar3 == 0) {
    return -0x7fce;
  }
  pbVar6 = &DAT_005bdc20;
  pbVar4 = param_2;
  do {
    bVar1 = *pbVar4;
    bVar8 = bVar1 < *pbVar6;
    if (bVar1 != *pbVar6) {
LAB_00421de3:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_00421de8;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar4[1];
    bVar8 = bVar1 < pbVar6[1];
    if (bVar1 != pbVar6[1]) goto LAB_00421de3;
    pbVar4 = pbVar4 + 2;
    pbVar6 = pbVar6 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_00421de8:
  if (iVar3 == 0) {
    return 0x33;
  }
  pbVar4 = &DAT_005bdc18;
  while( true ) {
    bVar1 = *param_2;
    bVar8 = bVar1 < *pbVar4;
    if (bVar1 != *pbVar4) break;
    if (bVar1 == 0) {
      return 0x34;
    }
    bVar1 = param_2[1];
    bVar8 = bVar1 < pbVar4[1];
    if (bVar1 != pbVar4[1]) break;
    param_2 = param_2 + 2;
    pbVar4 = pbVar4 + 2;
    if (bVar1 == 0) {
      return 0x34;
    }
  }
  return (1 - bVar8 != (uint)(bVar8 != 0)) + 0x34;
  while( true ) {
    bVar1 = pbVar4[1];
    bVar8 = bVar1 < pbVar6[1];
    if (bVar1 != pbVar6[1]) goto LAB_00421ced;
    pbVar4 = pbVar4 + 2;
    pbVar6 = pbVar6 + 2;
    if (bVar1 == 0) break;
LAB_00421cc9:
    bVar1 = *pbVar4;
    bVar8 = bVar1 < *pbVar6;
    if (bVar1 != *pbVar6) {
LAB_00421ced:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_00421cf2;
    }
    if (bVar1 == 0) break;
  }
  iVar3 = 0;
LAB_00421cf2:
  if (iVar3 == 0) {
    return 0x2b;
  }
  pbVar4 = &DAT_005bdc30;
  while( true ) {
    bVar1 = *param_2;
    bVar8 = bVar1 < *pbVar4;
    if (bVar1 != *pbVar4) break;
    if (bVar1 == 0) {
      return -0x7fd4;
    }
    bVar1 = param_2[1];
    bVar8 = bVar1 < pbVar4[1];
    if (bVar1 != pbVar4[1]) break;
    param_2 = param_2 + 2;
    pbVar4 = pbVar4 + 2;
    if (bVar1 == 0) {
      return -0x7fd4;
    }
  }
  return (-(ushort)(1 - bVar8 != (uint)(bVar8 != 0)) & 0x8001) + 0x802c;
  while( true ) {
    bVar1 = pbVar4[1];
    bVar8 = bVar1 < pbVar6[1];
    if (bVar1 != pbVar6[1]) goto LAB_00421c51;
    pbVar4 = pbVar4 + 2;
    pbVar6 = pbVar6 + 2;
    if (bVar1 == 0) break;
LAB_00421c2d:
    bVar1 = *pbVar4;
    bVar8 = bVar1 < *pbVar6;
    if (bVar1 != *pbVar6) {
LAB_00421c51:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_00421c56;
    }
    if (bVar1 == 0) break;
  }
  iVar3 = 0;
LAB_00421c56:
  if (iVar3 == 0) {
    return 0x27;
  }
  pbVar4 = &DAT_005bdc40;
  while( true ) {
    bVar1 = *param_2;
    bVar8 = bVar1 < *pbVar4;
    if (bVar1 != *pbVar4) break;
    if (bVar1 == 0) {
      return 0x28;
    }
    bVar1 = param_2[1];
    bVar8 = bVar1 < pbVar4[1];
    if (bVar1 != pbVar4[1]) break;
    param_2 = param_2 + 2;
    pbVar4 = pbVar4 + 2;
    if (bVar1 == 0) {
      return 0x28;
    }
  }
  return (1 - bVar8 != (uint)(bVar8 != 0)) + 0x28;
  while( true ) {
    bVar1 = pbVar4[1];
    bVar8 = bVar1 < ((byte *)pcVar5)[1];
    if (bVar1 != ((byte *)pcVar5)[1]) goto LAB_00421a55;
    pbVar4 = pbVar4 + 2;
    pcVar5 = (char *)((byte *)pcVar5 + 2);
    if (bVar1 == 0) break;
LAB_00421a31:
    bVar1 = *pbVar4;
    bVar8 = bVar1 < (byte)*pcVar5;
    if (bVar1 != *pcVar5) {
LAB_00421a55:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_00421a5a;
    }
    if (bVar1 == 0) break;
  }
  iVar3 = 0;
LAB_00421a5a:
  if (iVar3 == 0) {
    return -0x7fe4;
  }
  pbVar6 = &DAT_005bdc84;
  pbVar4 = param_2;
  do {
    bVar1 = *pbVar4;
    bVar8 = bVar1 < *pbVar6;
    if (bVar1 != *pbVar6) {
LAB_00421a92:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_00421a97;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar4[1];
    bVar8 = bVar1 < pbVar6[1];
    if (bVar1 != pbVar6[1]) goto LAB_00421a92;
    pbVar4 = pbVar4 + 2;
    pbVar6 = pbVar6 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_00421a97:
  if (iVar3 == 0) {
    return 0x1d;
  }
  pbVar6 = &DAT_005bdc78;
  pbVar4 = param_2;
  do {
    bVar1 = *pbVar4;
    bVar8 = bVar1 < *pbVar6;
    if (bVar1 != *pbVar6) {
LAB_00421acf:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_00421ad4;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar4[1];
    bVar8 = bVar1 < pbVar6[1];
    if (bVar1 != pbVar6[1]) goto LAB_00421acf;
    pbVar4 = pbVar4 + 2;
    pbVar6 = pbVar6 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_00421ad4:
  if (iVar3 == 0) {
    return 0x1e;
  }
  pcVar5 = s_COMGRAPH_005bdc6c;
  pbVar4 = param_2;
  do {
    bVar1 = *pbVar4;
    bVar8 = bVar1 < (byte)*pcVar5;
    if (bVar1 != *pcVar5) {
LAB_00421b0c:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_00421b11;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar4[1];
    bVar8 = bVar1 < ((byte *)pcVar5)[1];
    if (bVar1 != ((byte *)pcVar5)[1]) goto LAB_00421b0c;
    pbVar4 = pbVar4 + 2;
    pcVar5 = (char *)((byte *)pcVar5 + 2);
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_00421b11:
  if (iVar3 == 0) {
    return -0x7fe1;
  }
  iVar3 = _strncmp((char *)param_2,(char *)&DAT_005bdc68,3);
  if (iVar3 == 0) {
    return 0x20;
  }
  pcVar5 = s_GRPMODE_005bdc60;
  pbVar4 = param_2;
  do {
    bVar1 = *pbVar4;
    bVar8 = bVar1 < (byte)*pcVar5;
    if (bVar1 != *pcVar5) {
LAB_00421b66:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_00421b6b;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar4[1];
    bVar8 = bVar1 < ((byte *)pcVar5)[1];
    if (bVar1 != ((byte *)pcVar5)[1]) goto LAB_00421b66;
    pbVar4 = pbVar4 + 2;
    pcVar5 = (char *)((byte *)pcVar5 + 2);
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_00421b6b:
  if (iVar3 == 0) {
    return -0x7fdf;
  }
  pbVar4 = &DAT_005bdc58;
  while( true ) {
    bVar1 = *param_2;
    bVar8 = bVar1 < *pbVar4;
    if (bVar1 != *pbVar4) break;
    if (bVar1 == 0) {
      return 0x22;
    }
    bVar1 = param_2[1];
    bVar8 = bVar1 < pbVar4[1];
    if (bVar1 != pbVar4[1]) break;
    param_2 = param_2 + 2;
    pbVar4 = pbVar4 + 2;
    if (bVar1 == 0) {
      return 0x22;
    }
  }
  return (1 - bVar8 != (uint)(bVar8 != 0)) + 0x22;
  while( true ) {
    bVar1 = pbVar4[1];
    bVar8 = bVar1 < pbVar6[1];
    if (bVar1 != pbVar6[1]) goto LAB_004219ec;
    pbVar4 = pbVar4 + 2;
    pbVar6 = pbVar6 + 2;
    if (bVar1 == 0) break;
LAB_004219c8:
    bVar1 = *pbVar4;
    bVar8 = bVar1 < *pbVar6;
    if (bVar1 != *pbVar6) {
LAB_004219ec:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_004219f1;
    }
    if (bVar1 == 0) break;
  }
  iVar3 = 0;
LAB_004219f1:
  if (iVar3 == 0) {
    return -0x7ffb;
  }
  iVar3 = _strncmp((char *)param_2,s_NAT_CLIP_005bdc94,8);
  return (-(ushort)(iVar3 != 0) & 0x8015) + 0x8006;
  while( true ) {
    bVar1 = pbVar4[1];
    bVar8 = bVar1 < pbVar6[1];
    if (bVar1 != pbVar6[1]) goto LAB_004218b4;
    pbVar4 = pbVar4 + 2;
    pbVar6 = pbVar6 + 2;
    if (bVar1 == 0) break;
LAB_00421890:
    bVar1 = *pbVar4;
    bVar8 = bVar1 < *pbVar6;
    if (bVar1 != *pbVar6) {
LAB_004218b4:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_004218b9;
    }
    if (bVar1 == 0) break;
  }
  iVar3 = 0;
LAB_004218b9:
  if (iVar3 == 0) {
    return 0x10;
  }
  pbVar6 = &DAT_005bdcc8;
  pbVar4 = param_2;
  do {
    bVar1 = *pbVar4;
    bVar8 = bVar1 < *pbVar6;
    if (bVar1 != *pbVar6) {
LAB_004218f1:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_004218f6;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar4[1];
    bVar8 = bVar1 < pbVar6[1];
    if (bVar1 != pbVar6[1]) goto LAB_004218f1;
    pbVar4 = pbVar4 + 2;
    pbVar6 = pbVar6 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_004218f6:
  if (iVar3 == 0) {
    return 0xf;
  }
  iVar3 = _strncmp((char *)param_2,&DAT_005bdcc0,4);
  if (iVar3 == 0) {
    return 0x11;
  }
  pcVar5 = s_FACTOR_005bdcb8;
  pbVar4 = param_2;
  do {
    bVar1 = *pbVar4;
    bVar8 = bVar1 < (byte)*pcVar5;
    if (bVar1 != *pcVar5) {
LAB_0042194b:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_00421950;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar4[1];
    bVar8 = bVar1 < ((byte *)pcVar5)[1];
    if (bVar1 != ((byte *)pcVar5)[1]) goto LAB_0042194b;
    pbVar4 = pbVar4 + 2;
    pcVar5 = (char *)((byte *)pcVar5 + 2);
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_00421950:
  if (iVar3 == 0) {
    return 0x12;
  }
  pbVar6 = &DAT_005bdcb0;
  pbVar4 = param_2;
  do {
    bVar1 = *pbVar4;
    bVar8 = bVar1 < *pbVar6;
    if (bVar1 != *pbVar6) {
LAB_00421988:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_0042198d;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar4[1];
    bVar8 = bVar1 < pbVar6[1];
    if (bVar1 != pbVar6[1]) goto LAB_00421988;
    pbVar4 = pbVar4 + 2;
    pbVar6 = pbVar6 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_0042198d:
  if (iVar3 == 0) {
    return 0xb;
  }
  iVar3 = _strncmp((char *)param_2,s_STATV_005bdca8,5);
  return (-(ushort)(iVar3 != 0) & 0xfffe) + 0xc;
  while( true ) {
    bVar1 = pbVar4[1];
    bVar8 = bVar1 < pbVar6[1];
    if (bVar1 != pbVar6[1]) goto LAB_0042170b;
    pbVar4 = pbVar4 + 2;
    pbVar6 = pbVar6 + 2;
    if (bVar1 == 0) break;
LAB_004216e7:
    bVar1 = *pbVar4;
    bVar8 = bVar1 < *pbVar6;
    if (bVar1 != *pbVar6) {
LAB_0042170b:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_00421710;
    }
    if (bVar1 == 0) break;
  }
  iVar3 = 0;
LAB_00421710:
  if (iVar3 == 0) {
    return 0x3b;
  }
  pcVar5 = s_POLYCOFE_005bdd20;
  pbVar4 = param_2;
  do {
    bVar1 = *pbVar4;
    bVar8 = bVar1 < (byte)*pcVar5;
    if (bVar1 != *pcVar5) {
LAB_00421748:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_0042174d;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar4[1];
    bVar8 = bVar1 < ((byte *)pcVar5)[1];
    if (bVar1 != ((byte *)pcVar5)[1]) goto LAB_00421748;
    pbVar4 = pbVar4 + 2;
    pcVar5 = (char *)((byte *)pcVar5 + 2);
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_0042174d:
  if (iVar3 == 0) {
    return 0x14;
  }
  pcVar5 = s_POLYRSLT_005bdd14;
  pbVar4 = param_2;
  do {
    bVar1 = *pbVar4;
    bVar8 = bVar1 < (byte)*pcVar5;
    if (bVar1 != *pcVar5) {
LAB_00421785:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_0042178a;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar4[1];
    bVar8 = bVar1 < ((byte *)pcVar5)[1];
    if (bVar1 != ((byte *)pcVar5)[1]) goto LAB_00421785;
    pbVar4 = pbVar4 + 2;
    pcVar5 = (char *)((byte *)pcVar5 + 2);
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_0042178a:
  if (iVar3 == 0) {
    return 0x15;
  }
  pcVar5 = s_POLYMULT_005bdd08;
  pbVar4 = param_2;
  do {
    bVar1 = *pbVar4;
    bVar8 = bVar1 < (byte)*pcVar5;
    if (bVar1 != *pcVar5) {
LAB_004217c2:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_004217c7;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar4[1];
    bVar8 = bVar1 < ((byte *)pcVar5)[1];
    if (bVar1 != ((byte *)pcVar5)[1]) goto LAB_004217c2;
    pbVar4 = pbVar4 + 2;
    pcVar5 = (char *)((byte *)pcVar5 + 2);
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_004217c7:
  if (iVar3 == 0) {
    return 0x3c;
  }
  pbVar6 = &DAT_005bdcfc;
  pbVar4 = param_2;
  do {
    bVar1 = *pbVar4;
    bVar8 = bVar1 < *pbVar6;
    if (bVar1 != *pbVar6) {
LAB_004217ff:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_00421804;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar4[1];
    bVar8 = bVar1 < pbVar6[1];
    if (bVar1 != pbVar6[1]) goto LAB_004217ff;
    pbVar4 = pbVar4 + 2;
    pbVar6 = pbVar6 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_00421804:
  if (iVar3 == 0) {
    return 0x16;
  }
  pbVar6 = &DAT_005bdcf0;
  pbVar4 = param_2;
  do {
    bVar1 = *pbVar4;
    bVar8 = bVar1 < *pbVar6;
    if (bVar1 != *pbVar6) {
LAB_0042183c:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_00421841;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar4[1];
    bVar8 = bVar1 < pbVar6[1];
    if (bVar1 != pbVar6[1]) goto LAB_0042183c;
    pbVar4 = pbVar4 + 2;
    pbVar6 = pbVar6 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_00421841:
  if (iVar3 == 0) {
    return 0x17;
  }
  iVar3 = _strncmp((char *)param_2,s_GRAPHTBL_005bdce4,8);
  if (iVar3 == 0) {
    return 0x18;
  }
  iVar3 = _strncmp((char *)param_2,s_RECURTBL_005bdcd8,8);
  return (-(ushort)(iVar3 != 0) & 0xfffa) + 0x19;
}

