// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00449cb0
// entry: 00449cb0  size: 280


undefined4 FUN_00449cb0(int param_1,undefined4 *param_2,short *param_3)

{
  byte bVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  short sVar5;
  byte *pbVar6;
  byte abStackY_8028 [32744];
  byte local_28 [40];
  
  sVar5 = 0;
  sVar3 = 0;
  pbVar6 = local_28;
  for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
    pbVar6[0] = 0;
    pbVar6[1] = 0;
    pbVar6[2] = 0;
    pbVar6[3] = 0;
    pbVar6 = pbVar6 + 4;
  }
  *param_3 = 0;
  iVar4 = 0;
LAB_00449cd5:
  iVar4 = FUN_004b7370(CONCAT31((int3)((uint)iVar4 >> 8),*(undefined1 *)(sVar5 + param_1)));
  if (iVar4 != 0) {
    return 2;
  }
  bVar1 = *(byte *)(sVar5 + param_1);
  if (bVar1 != 0) {
    iVar4 = bVar1 - 0xf;
    switch(bVar1) {
    case 0xf:
    case 0x28:
    case 0x29:
    case 0x2e:
    case 0x30:
    case 0x31:
    case 0x32:
    case 0x33:
    case 0x34:
    case 0x35:
    case 0x36:
    case 0x37:
    case 0x38:
    case 0x39:
    case 0x3d:
    case 0x41:
    case 0x42:
    case 0x43:
    case 0x44:
    case 0x45:
    case 0x46:
    case 0x47:
    case 0x48:
    case 0x49:
    case 0x4a:
    case 0x4b:
    case 0x4c:
    case 0x4d:
    case 0x4e:
    case 0x4f:
    case 0x50:
    case 0x51:
    case 0x52:
    case 0x53:
    case 0x54:
    case 0x55:
    case 0x56:
    case 0x57:
    case 0x58:
    case 0x59:
    case 0x5a:
    case 0x81:
    case 0x82:
    case 0x83:
    case 0x85:
    case 0x86:
    case 0x87:
    case 0x89:
    case 0x8b:
    case 0x91:
    case 0x92:
    case 0x93:
    case 0x95:
    case 0x96:
    case 0x97:
    case 0x99:
    case 0x9b:
    case 0xa1:
    case 0xa2:
    case 0xa3:
    case 0xa5:
    case 0xa6:
    case 0xa8:
    case 0xa9:
    case 0xb1:
    case 0xb2:
    case 0xb3:
    case 0xb5:
    case 0xb6:
    case 0xb8:
    case 0xb9:
    case 0xbb:
    case 0xcd:
    case 0xce:
    case 0xd0:
    case 0xde:
    case 0xf8:
    case 0xfa:
      goto switchD_00449d14_caseD_f;
    default:
      goto switchD_00449d14_caseD_10;
    }
  }
  goto LAB_00449d70;
switchD_00449d14_caseD_f:
  if ((((bVar1 < 0x41) || (0x5a < bVar1)) && (bVar1 != 0xcd)) && (bVar1 != 0xce)) {
    if (bVar1 == 0x3d) {
      sVar3 = sVar3 + 1;
    }
  }
  else {
    iVar4 = 0;
    if (bVar1 != local_28[0]) {
      do {
        if (*param_3 <= (short)iVar4) break;
        iVar4 = iVar4 + 1;
      } while (bVar1 != local_28[(short)iVar4]);
    }
    sVar2 = *param_3;
    if (sVar2 <= (short)iVar4) {
      iVar4 = (int)sVar2;
      local_28[iVar4] = bVar1;
      *param_3 = sVar2 + 1;
    }
  }
  sVar5 = sVar5 + 1;
  if (0xff < sVar5) {
LAB_00449d70:
    sVar5 = *param_3;
    if (sVar5 == 0) {
      return 0x14;
    }
    if (sVar3 < 2) {
      local_28[sVar5] = 0x6c;
      local_28[(short)(sVar5 + 1)] = 0x75;
      *param_3 = sVar5 + 2;
      pbVar6 = local_28;
      for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
        *param_2 = *(undefined4 *)pbVar6;
        pbVar6 = pbVar6 + 4;
        param_2 = param_2 + 1;
      }
      return 0;
    }
switchD_00449d14_caseD_10:
    return 2;
  }
  goto LAB_00449cd5;
}

