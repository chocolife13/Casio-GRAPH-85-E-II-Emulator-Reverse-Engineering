// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00488f10
// entry: 00488f10  size: 847


undefined4 FUN_00488f10(undefined1 param_1,short *param_2,undefined4 *param_3)

{
  short *psVar1;
  short *psVar2;
  short *psVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  short sVar7;
  short sVar8;
  undefined4 uVar9;
  short local_50;
  short local_4e;
  int local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined1 local_30 [24];
  undefined1 local_18 [24];
  
  iVar6 = 0;
  psVar1 = param_2 + 2;
  local_4c = 1;
  if (*psVar1 < *param_2) {
    FUN_00488d30(param_2,psVar1);
  }
  psVar2 = param_2 + 1;
  psVar3 = param_2 + 3;
  if (param_2[3] < param_2[1]) {
    FUN_00488d30(psVar2,psVar3);
  }
  sVar8 = *param_2;
  sVar4 = *psVar3;
  if (999 < (((int)*psVar1 - (int)sVar8) + 1) * (((int)sVar4 - (int)*psVar2) + 1)) {
    FUN_004e5630(4,param_3);
    return 0;
  }
  if (*psVar1 < sVar8) {
LAB_00489037:
    FUN_004e5780(param_3);
    return 1;
  }
  do {
    sVar7 = *psVar2;
    if (sVar7 <= sVar4) {
      do {
        local_50 = sVar8;
        local_4e = sVar7;
        iVar5 = FUN_00488cb0(&local_50,local_30);
        if (iVar5 == 1) {
          iVar6 = iVar6 + 1;
          iVar5 = FUN_00485fc0(&DAT_005d6dd0,(int)sVar8,(int)sVar7,local_30);
          if (iVar5 != 0) {
            FUN_00488980(4,0);
          }
        }
        else {
          iVar5 = FUN_004e4020(local_30);
          if (iVar5 != 0) {
            FUN_004e5630(2,param_3);
            return 0;
          }
        }
        sVar7 = sVar7 + 1;
        sVar4 = *psVar3;
      } while (sVar7 <= sVar4);
    }
    sVar8 = sVar8 + 1;
  } while (sVar8 <= *psVar1);
  if (iVar6 == 0) goto LAB_00489037;
  FUN_00528480(0xfd,0);
  iVar6 = FUN_005281a0(0xfd,0,iVar6);
  if (iVar6 != 0) {
LAB_0048911d:
    FUN_004e5630(4,param_3);
    FUN_00488980(4,0);
    return 0;
  }
  sVar8 = *param_2;
  iVar6 = local_4c;
  if (sVar8 <= *psVar1) {
    do {
      sVar4 = *psVar2;
      if (sVar4 <= *psVar3) {
        do {
          iVar5 = FUN_00486570(&DAT_005d6dd0,(int)sVar8,(int)sVar4,local_18,0);
          if (iVar5 != 0) {
            iVar5 = FUN_005278d0(0xfd,0,iVar6,local_18);
            if (iVar5 != 0) goto LAB_0048911d;
            iVar6 = iVar6 + 1;
          }
          sVar4 = sVar4 + 1;
        } while (sVar4 <= *psVar3);
      }
      sVar8 = sVar8 + 1;
    } while (sVar8 <= *psVar1);
  }
  iVar6 = FUN_004d9190(0xfd,0,&local_48);
  if (iVar6 == 0) goto LAB_0048911d;
  switch(param_1) {
  case 0xe9:
    *param_3 = local_48;
    param_3[1] = local_44;
    param_3[2] = local_40;
    iVar6 = FUN_004c7060(&local_48,param_3);
    break;
  case 0xea:
    *param_3 = local_48;
    param_3[1] = local_44;
    param_3[2] = local_40;
    iVar6 = FUN_004c71c0(&local_48,param_3);
    break;
  case 0xeb:
    uVar9 = 1;
    goto LAB_004891cf;
  case 0xec:
    uVar9 = 0;
LAB_004891cf:
    iVar6 = FUN_004ff7d0(&local_48,param_3,uVar9);
    break;
  case 0xed:
    *param_3 = local_48;
    param_3[1] = local_44;
    param_3[2] = local_40;
    iVar6 = FUN_004c68e0(&local_48,param_3);
    goto joined_r0x00489235;
  case 0xee:
    *param_3 = local_48;
    param_3[1] = local_44;
    param_3[2] = local_40;
    iVar6 = FUN_004c6b80(&local_48,param_3);
joined_r0x00489235:
    if (iVar6 != 0) goto switchD_0048915a_default;
    goto LAB_00489237;
  default:
    goto switchD_0048915a_default;
  }
  if (iVar6 == 0) {
LAB_00489237:
    FUN_00488980(3,0);
  }
switchD_0048915a_default:
  FUN_00528480(0xfd,0);
  return 1;
}

