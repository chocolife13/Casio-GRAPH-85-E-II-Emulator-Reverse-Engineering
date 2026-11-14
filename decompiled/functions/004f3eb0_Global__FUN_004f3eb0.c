// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004f3eb0
// entry: 004f3eb0  size: 799


undefined4
FUN_004f3eb0(undefined4 param_1,char *param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  short sVar6;
  undefined4 local_8;
  uint local_4;
  
  iVar3 = FUN_00517c00();
  sVar6 = 0;
  local_4 = local_4 & 0xffffff00;
  *(undefined4 *)(param_4 + 0x138) = 1;
  FUN_004fe330(param_2,param_1);
  iVar4 = FUN_004fe470(param_2);
  if (iVar4 == 0) {
    iVar4 = FUN_004f9a20(param_2);
    if (iVar4 != 0) {
      cVar2 = *param_2;
      FUN_004fe330(param_2,param_1);
      iVar3 = FUN_004b7d00(cVar2 + -0x13,param_5);
      goto joined_r0x004f3f7e;
    }
    cVar2 = *param_2;
    if ((cVar2 == -7) && (param_2[1] == '\x1b')) {
      iVar3 = FUN_004f5630(param_1,param_2,param_3,&local_8);
      if (iVar3 == 0) {
        return 0;
      }
      iVar3 = FUN_004b7d00(local_8,param_5);
      goto joined_r0x004f3f7e;
    }
    if (cVar2 != '\x7f') {
      if (cVar2 != -7) goto LAB_004f3f65;
      if ((byte)param_2[1] < 0x12) {
        return 1;
      }
      if (0x14 < (byte)param_2[1]) {
        return 1;
      }
      iVar4 = FUN_004f3c70(3,param_5);
joined_r0x004f41a4:
      if (iVar3 != 0) {
        FUN_00517ac0(0xb);
      }
      FUN_004fe330(param_2,param_1);
LAB_004f41ba:
      if (iVar4 == 0) {
        return 1;
      }
      goto LAB_004f3fc2;
    }
    bVar1 = param_2[1];
    if ((bVar1 < 0xf0) || (0xf4 < bVar1)) {
      switch(bVar1) {
      default:
        goto switchD_004f4155_caseD_a3;
      case 0xa7:
      case 0xa8:
      case 0xa9:
        sVar6 = 1;
      case 0xa0:
      case 0xa1:
      case 0xa2:
        iVar4 = FUN_004f3c70(sVar6 + 1,param_5);
      }
      goto joined_r0x004f41a4;
    }
    switch(bVar1) {
    case 0xf0:
      sVar6 = 0x108;
      break;
    case 0xf1:
      sVar6 = 0x40a;
      break;
    case 0xf2:
      local_4 = CONCAT31(local_4._1_3_,1);
    case 0xf3:
      sVar6 = 0x409;
      break;
    case 0xf4:
      sVar6 = 0x209;
    }
    iVar4 = FUN_004f5630(param_1,param_2,param_3,&local_8);
    if (iVar4 == 0) {
      return 0;
    }
    if (sVar6 == 0x409) {
      iVar4 = FUN_004f5a50(local_8,local_4 & 0xff,param_5);
LAB_004f412a:
      if (iVar3 != 0) {
        FUN_00517ac0(0xb);
      }
      goto LAB_004f41ba;
    }
    if (sVar6 == 0x108) {
      cVar2 = FUN_00526090(0x18);
      if (cVar2 == '\x04') {
        sVar6 = 0x198;
      }
      else if (cVar2 == '\x05') {
        sVar6 = 0x188;
      }
      else if (cVar2 == '\x06') {
        sVar6 = 0x1b8;
      }
      else if (cVar2 == '\a') {
        sVar6 = 0x1a8;
      }
    }
    iVar4 = FUN_00517710(local_8,sVar6);
    if ((iVar4 == 0) && (iVar4 = FUN_004f3cc0(local_8,param_5,sVar6), iVar4 == 0))
    goto LAB_004f412a;
  }
  else {
    if (param_2[1] == 0x51) {
      iVar3 = FUN_004fbec0(param_1,param_2,1);
      if (iVar3 < 1) {
        iVar4 = 8;
        goto LAB_004f3fc2;
      }
    }
    else {
      iVar3 = (byte)param_2[1] - 0x69;
      FUN_004fe330(param_2,param_1);
    }
    if (*param_2 == '[') {
      FUN_004fe330(param_2,param_1);
      if (*param_2 == '0') {
        FUN_004fe330(param_2,param_1);
      }
      if (*param_2 == ']') {
        FUN_004fe330(param_2,param_1);
      }
    }
    iVar4 = FUN_004f9b40(param_2);
    if (iVar4 == 0) {
LAB_004f3f65:
      iVar4 = 2;
      goto LAB_004f3fc2;
    }
    iVar3 = FUN_00528740(0,iVar3,param_5);
joined_r0x004f3f7e:
    if (iVar3 == 0) {
switchD_004f4155_caseD_a3:
      return 1;
    }
  }
  iVar4 = 4;
LAB_004f3fc2:
  uVar5 = FUN_004f58f0(iVar4,param_3);
  return uVar5;
}

