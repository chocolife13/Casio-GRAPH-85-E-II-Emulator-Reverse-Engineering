// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00519af0
// entry: 00519af0  size: 407


void FUN_00519af0(int param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  char *pcVar5;
  char *pcVar6;
  char local_44 [68];
  
  uVar4 = 0x1b;
  if (param_1 < 0x7629) {
    if (param_1 == 0x7628) {
      uVar4 = 0x1c;
      pcVar5 = s_FOCUS_005c3250;
    }
    else if (param_1 < 0x7624) {
      if (param_1 == 0x7623) goto switchD_00519bd3_caseD_762f;
      if (param_1 < 0x7621) {
        if (param_1 == 0x7620) {
          pcVar5 = s_ROOT_005c3288;
        }
        else if (param_1 == 0x12e) {
          pcVar5 = s_LOWER_005c3290;
        }
        else {
          if (param_1 != 0x15a) {
            return;
          }
          pcVar5 = s_UPPER_005c3298;
        }
      }
      else if (param_1 == 0x7621) {
        pcVar5 = s_MAX_005c3278;
      }
      else {
        if (param_1 != 0x7622) {
          return;
        }
        pcVar5 = &DAT_005c3280;
      }
    }
    else {
      switch(param_1) {
      case 0x7624:
        pcVar5 = s_ISECT_005c3270;
        break;
      case 0x7625:
        pcVar5 = s_Y_CAL_005c3268;
        break;
      case 0x7626:
        pcVar5 = s_X_CAL_005c3260;
        break;
      case 0x7627:
        uVar4 = 0x1e;
        pcVar5 = &DAT_005c3258;
        break;
      default:
        goto switchD_00519b82_default;
      }
    }
  }
  else {
    switch(param_1) {
    case 0x7629:
      uVar4 = 0x17;
      pcVar5 = s_SYMMETRY_005c3228;
      break;
    case 0x762a:
      uVar4 = 0x18;
      pcVar5 = s_DIRECTRIX_005c3234;
      break;
    case 0x762b:
      uVar4 = 0x1b;
      pcVar5 = s_VERTEX_005c3240;
      break;
    case 0x762c:
      uVar4 = 0x1a;
      pcVar5 = s_LENGTH_005c3220;
      break;
    case 0x762d:
      uVar4 = 0x14;
      pcVar5 = s_ECCENTRICITY_005c31f4;
      break;
    case 0x762e:
      uVar4 = 0x1b;
      pcVar5 = s_X_ICPT_005c31ec;
      break;
    case 0x762f:
switchD_00519bd3_caseD_762f:
      pcVar5 = s_Y_ICPT_005c3248;
      break;
    case 0x7630:
      uVar4 = 0x1a;
      pcVar5 = s_CENTER_005c3218;
      break;
    case 0x7631:
      uVar4 = 0x1b;
      pcVar5 = s_RADIUS_005c3210;
      break;
    case 0x7632:
      uVar4 = 0x16;
      pcVar5 = s_ASYMPTOTES_005c3204;
      break;
    default:
      goto switchD_00519b82_default;
    }
  }
  uVar2 = 0xffffffff;
  do {
    pcVar6 = pcVar5;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar6 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar6;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar5 = pcVar6 + -uVar2;
  pcVar6 = local_44;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar6 = pcVar6 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar6 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar6 = pcVar6 + 1;
  }
  FUN_00523a20(uVar4,7,local_44,0x10);
switchD_00519b82_default:
  return;
}

