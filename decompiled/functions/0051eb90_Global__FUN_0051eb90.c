// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0051eb90
// entry: 0051eb90  size: 1837


void FUN_0051eb90(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined2 *puVar6;
  undefined *puVar7;
  undefined1 local_24 [36];
  
  iVar2 = param_1;
  switch(*(undefined1 *)(param_1 + 0x26)) {
  case 1:
    if (*(char *)(param_1 + 0x27) != '\0') {
      FUN_004b6ef0(local_24,s_dY_dX__005c3308);
      iVar3 = FUN_004e4020(iVar2);
      if (iVar3 == 0) {
        iVar3 = FUN_004b6ca0(local_24);
        puVar5 = local_24 + iVar3;
LAB_0051ec40:
        uVar4 = FUN_004b1890(iVar2,puVar5);
        FUN_0051f5a0(uVar4);
      }
      else {
        FUN_004b6e70(local_24,s_ERROR_005a8cfc);
      }
LAB_0051ec4f:
      FUN_0051ea40(local_24,0x10);
      FUN_00523a20(0x11,7,local_24,0x20);
    }
    goto LAB_0051ec6e;
  case 2:
    if (*(char *)(param_1 + 0x27) != '\0') {
      FUN_004b6ef0(local_24,&DAT_005c3300);
      iVar3 = FUN_004e4020(iVar2 + 0xc);
      if (iVar3 == 0) {
        iVar3 = FUN_004b6ca0(local_24);
        uVar4 = FUN_004b1890(iVar2 + 0xc,local_24 + iVar3);
        FUN_0051f5a0(uVar4);
      }
      else {
        FUN_004b6e70(local_24,s_ERROR_005a8cfc);
      }
      FUN_0051ea40(local_24,0x10);
      FUN_00523a20(1,7,local_24,0x20);
      FUN_004b6ef0(local_24,s_dY_dX__005c3308);
      iVar3 = FUN_004e4020(iVar2);
      if (iVar3 == 0) {
        iVar3 = FUN_004b6ca0(local_24);
        uVar4 = FUN_004b1890(iVar2,local_24 + iVar3);
        FUN_0051f5a0(uVar4);
      }
      else {
        FUN_004b6e70(local_24,s_ERROR_005a8cfc);
      }
      FUN_0051ea40(local_24,0x10);
      FUN_00523a20(0x11,7,local_24,0x20);
    }
    FUN_004b6ef0(local_24,&DAT_005be9d4);
    iVar3 = FUN_004e4020(*(undefined4 *)(iVar2 + 0x34));
    if (iVar3 == 0) {
      iVar3 = FUN_004b6ca0(local_24);
      uVar4 = FUN_004b1d20(*(undefined4 *)(iVar2 + 0x34),local_24 + iVar3);
      FUN_0051f5a0(uVar4);
    }
    else {
      FUN_004b6e70(local_24,s_ERROR_005a8cfc);
    }
    FUN_0051ea40(local_24,0x10);
    FUN_00523a20(1,8,local_24,0x20);
    FUN_004b6ef0(local_24,&DAT_005c32fc);
    iVar3 = FUN_004e4020(*(undefined4 *)(iVar2 + 0x30));
    if (iVar3 == 0) {
      iVar3 = FUN_004b6ca0(local_24);
      uVar4 = FUN_004b1d20(*(undefined4 *)(iVar2 + 0x30),local_24 + iVar3);
      FUN_0051f5a0(uVar4);
    }
    else {
      FUN_004b6e70(local_24,s_ERROR_005a8cfc);
    }
    FUN_0051ea40(local_24,0x10);
    FUN_00523a20(0x11,8,local_24,0x20);
    return;
  case 3:
    FUN_004b6ef0(local_24,&DAT_005c32f8);
    iVar3 = FUN_004e4020(*(undefined4 *)(iVar2 + 0x30));
    if (iVar3 == 0) {
      iVar3 = FUN_004b6ca0(local_24);
      uVar4 = FUN_004b1d20(*(undefined4 *)(iVar2 + 0x30),local_24 + iVar3);
      FUN_0051f5a0(uVar4);
    }
    else {
      FUN_004b6e70(local_24,s_ERROR_005a8cfc);
    }
    FUN_0051ea40(local_24,0x10);
    if (*(char *)(iVar2 + 0x27) == '\0') {
      FUN_00523a20(1,7,local_24,0x20);
      FUN_0051eaa0(*(undefined4 *)(iVar2 + 0x28),*(undefined4 *)(iVar2 + 0x2c));
      return;
    }
    FUN_00523a20(1,8,local_24,0x20);
    FUN_004b6ef0(local_24,s_dY_dX__005c3308);
    iVar3 = FUN_004e4020(iVar2);
    if (iVar3 == 0) {
      iVar3 = FUN_004b6ca0(local_24);
      uVar4 = FUN_004b1890(iVar2,local_24 + iVar3);
      FUN_0051f5a0(uVar4);
    }
    else {
      FUN_004b6e70(local_24,s_ERROR_005a8cfc);
    }
    FUN_0051ea40(local_24,0x10);
    FUN_00523a20(0x11,8,local_24,0x20);
    FUN_004b6ef0(local_24,s_dX_dT__005c32f0);
    iVar3 = FUN_004e4020(iVar2 + 0xc);
    if (iVar3 == 0) {
      iVar3 = FUN_004b6ca0(local_24);
      uVar4 = FUN_004b1890(iVar2 + 0xc,local_24 + iVar3);
      FUN_0051f5a0(uVar4);
    }
    else {
      FUN_004b6e70(local_24,s_ERROR_005a8cfc);
    }
    FUN_0051ea40(local_24,0x10);
    FUN_00523a20(1,7,local_24,0x20);
    FUN_004b6ef0(local_24,s_dY_dT__005c32e8);
    iVar3 = FUN_004e4020(iVar2 + 0x18);
    if (iVar3 == 0) {
      iVar3 = FUN_004b6ca0(local_24);
      uVar4 = FUN_004b1890(iVar2 + 0x18,local_24 + iVar3);
      FUN_0051f5a0(uVar4);
    }
    else {
      FUN_004b6e70(local_24,s_ERROR_005a8cfc);
    }
    FUN_0051ea40(local_24,0x10);
    FUN_00523a20(0x11,7,local_24,0x20);
    return;
  case 4:
    if (*(char *)(param_1 + 0x27) != '\0') {
      FUN_004b6ef0(local_24,&DAT_005c3310);
      iVar3 = FUN_004e4020(iVar2);
      if (iVar3 == 0) {
        iVar3 = FUN_004b6ca0(local_24);
        puVar5 = local_24 + iVar3;
        goto LAB_0051ec40;
      }
      FUN_004b6e70(local_24,s_ERROR_005a8cfc);
      goto LAB_0051ec4f;
    }
LAB_0051ec6e:
    FUN_004b6ef0(local_24,&DAT_005bf3d0);
    iVar3 = FUN_004e4020(*(undefined4 *)(iVar2 + 0x28));
    if (iVar3 == 0) {
      iVar3 = FUN_004b6ca0(local_24);
      uVar4 = FUN_004b1d20(*(undefined4 *)(iVar2 + 0x28),local_24 + iVar3);
      FUN_0051f5a0(uVar4);
    }
    else {
      FUN_004b6e70(local_24,s_ERROR_005a8cfc);
    }
    FUN_0051ea40(local_24,0x10);
    FUN_00523a20(1,8,local_24,0x20);
    FUN_004b6ef0(local_24,&DAT_005beb28);
    if ((*(ushort *)(iVar2 + 0x24) & 0x80) == 0) {
      puVar6 = (undefined2 *)&DAT_005be9e0;
    }
    else {
      switch(*(ushort *)(iVar2 + 0x24) & 0x30) {
      case 0:
        puVar6 = (undefined2 *)&DAT_005be9f0;
        break;
      case 0x10:
        puVar6 = &DAT_005be9ec;
        break;
      case 0x20:
        puVar6 = (undefined2 *)&DAT_005be9e4;
        break;
      case 0x30:
        puVar6 = (undefined2 *)&DAT_005be9e8;
        break;
      default:
        goto switchD_0051ed08_default;
      }
    }
    FUN_004b6e70(local_24,puVar6);
switchD_0051ed08_default:
    iVar3 = FUN_004e4020(*(undefined4 *)(iVar2 + 0x2c));
    if (iVar3 == 0) {
      iVar3 = FUN_004b6ca0(local_24);
      uVar4 = FUN_004b1d20(*(undefined4 *)(iVar2 + 0x2c),local_24 + iVar3);
      FUN_0051f5a0(uVar4);
    }
    else {
      FUN_004b6e70(local_24,s_ERROR_005a8cfc);
    }
    FUN_0051ea40(local_24,0x10);
    FUN_00523a20(0x11,8,local_24,0x20);
    return;
  case 5:
  case 8:
    puVar7 = &DAT_005befe4;
    break;
  case 6:
  case 9:
    puVar7 = &DAT_005befe0;
    break;
  case 7:
  case 10:
    puVar7 = &DAT_005c32e4;
    break;
  default:
    goto switchD_0051eba7_default;
  }
  FUN_004b6ef0(&param_1,puVar7);
  cVar1 = *(char *)(iVar2 + 0x26);
  if (((cVar1 == '\b') || (cVar1 == '\t')) || (cVar1 == '\n')) {
    FUN_004b6ef0(local_24,&DAT_005c2ec4);
  }
  else {
    local_24[0] = 0;
  }
  FUN_004b6e70(local_24,&param_1);
  FUN_004b6e70(local_24,&DAT_005be9e0);
  iVar3 = FUN_004e4020(*(undefined4 *)(iVar2 + 0x2c));
  if (iVar3 == 0) {
    iVar3 = FUN_004b6ca0(local_24);
    uVar4 = FUN_004b1d20(*(undefined4 *)(iVar2 + 0x2c),local_24 + iVar3);
    FUN_0051f5a0(uVar4);
  }
  else {
    FUN_004b6e70(local_24,s_ERROR_005a8cfc);
  }
  FUN_0051ea40(local_24,0x10);
  FUN_00523a20(0x11,8,local_24,0x20);
  FUN_004b6ef0(local_24,&DAT_005c32e0);
  iVar3 = FUN_004e4020(*(undefined4 *)(iVar2 + 0x28));
  if (iVar3 == 0) {
    iVar3 = FUN_004b6ca0(local_24);
    uVar4 = FUN_004b1d20(*(undefined4 *)(iVar2 + 0x28),local_24 + iVar3);
    FUN_0051f5a0(uVar4);
  }
  else {
    FUN_004b6e70(local_24,s_ERROR_005a8cfc);
  }
  FUN_0051ea40(local_24,0x10);
  FUN_00523a20(1,8,local_24,0x20);
switchD_0051eba7_default:
  return;
}

