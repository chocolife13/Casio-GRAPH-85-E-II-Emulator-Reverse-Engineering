// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004744e0
// entry: 004744e0  size: 1240


/* WARNING: Type propagation algorithm not settling */

int FUN_004744e0(short *param_1,int param_2)

{
  short sVar1;
  short *psVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_2c [3];
  undefined4 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_c;
  undefined4 local_8;
  
  iVar5 = 0;
  FUN_00538710();
  iVar6 = 0;
  psVar2 = param_1;
  do {
    if (*psVar2 == 1) break;
    iVar6 = iVar6 + 1;
    psVar2 = psVar2 + 7;
  } while (iVar6 < 4);
  local_2c[0] = 1;
  switch(param_1[iVar6 * 7 + 1]) {
  case 1:
  case 2:
    iVar3 = FUN_00483e70(0,(int)param_1[iVar6 * 7 + 2],1,local_2c + 2);
    if (iVar3 == 0) goto switchD_0047452a_default;
    goto LAB_00474649;
  case 3:
    iVar3 = FUN_00480620(1,iVar6,local_2c + 2);
    break;
  case 4:
  case 8:
    iVar3 = FUN_00481670(iVar6,1,local_2c + 2);
    break;
  case 5:
    iVar3 = FUN_00480620(1,iVar6,local_2c + 2);
    break;
  case 6:
    iVar3 = FUN_00480620(1,iVar6,local_2c + 2);
    break;
  case 7:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
    FUN_004d4da0(local_2c + 2,0x40,param_2 + 0x800,
                 CONCAT31((int3)((uint)(param_1[iVar6 * 7 + 1] + -1) >> 8),
                          *(undefined1 *)(param_2 + 0x8e2)));
  default:
    goto switchD_0047452a_default;
  }
  if (iVar3 != 0) {
LAB_00474649:
    FUN_0052b240(4);
    return -0x16;
  }
switchD_0047452a_default:
  FUN_005383e0(5);
  FUN_00414db0();
  local_2c[1] = 0x3000;
  do {
    do {
      psVar2 = param_1 + iVar6 * 7;
    } while (param_1[iVar6 * 7] != 1);
    switch(psVar2[1]) {
    case 1:
    case 2:
      iVar5 = FUN_00474b60(iVar6,psVar2,local_2c + 2,local_2c,param_2);
      if (iVar5 != 0) {
LAB_004749a4:
        iVar5 = -0x16;
LAB_004749a9:
        FUN_00414db0();
        return iVar5;
      }
      iVar5 = FUN_00482050(0,(int)psVar2[2],(int)psVar2[3],(int)psVar2[4]);
      if (iVar5 < local_2c[0]) {
        local_2c[0] = iVar5;
      }
      break;
    case 3:
      iVar5 = FUN_00474b60(iVar6,psVar2,local_2c + 2,local_2c,param_2);
      if (iVar5 != 0) goto LAB_004749a4;
      iVar5 = FUN_00480600(iVar6);
      if (iVar5 < local_2c[0]) {
        local_2c[0] = iVar5;
      }
      break;
    case 4:
    case 8:
      iVar5 = FUN_00474b60(iVar6,psVar2,local_2c + 2,local_2c,param_2);
      if (iVar5 != 0) goto LAB_004749a4;
      iVar5 = FUN_00480600(iVar6);
      if (iVar5 < local_2c[0]) {
        local_2c[0] = iVar5;
      }
      break;
    case 5:
      iVar5 = FUN_00474b60(iVar6,psVar2,local_2c + 2,local_2c,param_2);
      if (iVar5 != 0) goto LAB_004749a4;
      iVar5 = 5;
      if (5 < local_2c[0]) {
        local_2c[0] = 5;
      }
      break;
    case 6:
      iVar5 = FUN_00474b60(iVar6,psVar2,local_2c + 2,local_2c,param_2);
      if (iVar5 != 0) goto LAB_004749a4;
      iVar5 = FUN_00480cf0(iVar6,0);
      iVar4 = -(uint)(iVar5 != 1) + 6;
      iVar3 = FUN_00480cf0(iVar6,1);
      if (iVar3 == 1) {
        iVar4 = -(uint)(iVar5 != 1) + 7;
      }
      iVar5 = FUN_00480eb0(iVar6);
      iVar3 = FUN_00480ed0(iVar6);
      iVar4 = iVar4 + iVar3 + iVar5;
      if (iVar4 < local_2c[0]) {
        local_2c[0] = iVar4;
      }
      iVar5 = FUN_00475210(iVar6,psVar2,param_2,local_2c,local_2c + 1,local_2c + 2,iVar4);
      goto switchD_004745cc_default;
    case 7:
    case 9:
    case 10:
    case 0xb:
    case 0xc:
    case 0xd:
    case 0xe:
    case 0xf:
    case 0x10:
    case 0x11:
    case 0x12:
      FUN_00516c10(&local_c,0);
      FUN_00516c10(&local_18,1);
      iVar5 = FUN_00469e60(&local_c,local_2c + 2);
      if (iVar5 < 1) {
        iVar5 = FUN_00469e60(local_2c + 2,&local_18);
        if (0 < iVar5) {
          local_2c[2] = local_18;
          local_20 = local_14;
        }
      }
      else {
        local_2c[2] = local_c;
        local_20 = local_8;
      }
      iVar5 = 0;
      break;
    default:
      goto switchD_004745cc_default;
    }
    iVar5 = FUN_00475210(iVar6,psVar2,param_2,local_2c,local_2c + 1,local_2c + 2,iVar5);
switchD_004745cc_default:
    if ((iVar5 < -0x19) || (-0x18 < iVar5)) goto LAB_004749a9;
    if (iVar5 == -0x18) {
      do {
        iVar6 = iVar6 + -1;
        if (iVar6 < 0) {
          if (param_1[0x1c] == 1) break;
          iVar6 = 3;
        }
      } while (param_1[iVar6 * 7] != 1);
    }
    else {
      do {
        iVar6 = iVar6 + 1;
        if (3 < iVar6) {
          if (param_1[0x1c] == 1) break;
          iVar6 = 0;
        }
      } while (param_1[iVar6 * 7] != 1);
    }
    if ((iVar6 < 0) || (3 < iVar6)) {
      FUN_00516c10(&local_c,0);
      FUN_00516c10(&local_18,1);
      iVar6 = FUN_00469e60(&local_c,local_2c + 2);
      if (iVar6 < 1) {
        iVar6 = FUN_00469e60(local_2c + 2,&local_18);
        if (0 < iVar6) {
          local_2c[2] = local_18;
          local_20 = local_14;
        }
      }
      else {
        local_2c[2] = local_c;
        local_20 = local_8;
      }
      iVar5 = FUN_00515ae0(param_2,iVar5,local_2c + 2);
      if (iVar5 == -0x19) {
        iVar6 = 0;
        sVar1 = *param_1;
        psVar2 = param_1;
        while (sVar1 != 1) {
          psVar2 = psVar2 + 7;
          iVar6 = iVar6 + 1;
          sVar1 = *psVar2;
        }
      }
      else {
        if (iVar5 != -0x18) goto LAB_004749a9;
        iVar6 = 3;
        psVar2 = param_1 + 0x15;
        sVar1 = param_1[0x15];
        while (sVar1 != 1) {
          psVar2 = psVar2 + -7;
          iVar6 = iVar6 + -1;
          sVar1 = *psVar2;
        }
      }
    }
  } while( true );
}

