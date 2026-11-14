// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004fc460
// entry: 004fc460  size: 1686


int FUN_004fc460(undefined4 param_1,byte *param_2,byte *param_3,undefined4 *param_4,uint param_5)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  int iVar6;
  undefined1 uVar7;
  byte *pbVar8;
  undefined1 local_a;
  undefined1 local_9;
  undefined1 local_8;
  undefined1 local_7;
  char local_6 [2];
  undefined4 local_4;
  
  local_9 = *(undefined1 *)param_4[2];
  local_8 = *(undefined1 *)param_4[1];
  local_7 = *(undefined1 *)*param_4;
  iVar3 = FUN_0052f820();
  if (iVar3 != 0) {
    iVar3 = FUN_00501d80(param_3);
    return iVar3;
  }
  *param_3 = 0;
  if ((param_5 & 4) == 0) {
    if ((param_5 & 0xf) != 0) {
      pbVar8 = (byte *)param_4[1];
      local_a = 0x20;
      goto LAB_004fc4f3;
    }
    if ((param_5 & 0x2000) != 0) {
      pbVar8 = (byte *)param_4[1];
      iVar3 = 0;
      uVar4 = (uint)*pbVar8;
      pbVar2 = pbVar8;
      if (uVar4 != 0) {
        do {
          if (pbVar2[1] == 0x80) {
            iVar3 = iVar3 + 1;
          }
          uVar4 = uVar4 - 1;
          pbVar2 = pbVar2 + 1;
        } while (uVar4 != 0);
        if (4 < iVar3) {
          iVar3 = FUN_00501f10(param_3);
          return iVar3;
        }
      }
      local_a = 0x80;
      iVar3 = FUN_00501010(&local_a,pbVar8);
      if (iVar3 == 0) {
        iVar3 = FUN_00501f10(param_3);
        return iVar3;
      }
      param_5 = param_5 & 0xffffdfff;
    }
  }
  else {
    pbVar8 = (byte *)param_4[1];
    iVar3 = 0;
    pbVar2 = pbVar8;
    if (*pbVar8 != 0) {
      do {
        if (pbVar2[1] == 0x8d) goto switchD_004fc62b_caseD_1;
        iVar3 = iVar3 + 1;
        pbVar2 = pbVar2 + 1;
      } while (iVar3 < (int)(uint)*pbVar8);
    }
    local_a = 0x8d;
LAB_004fc4f3:
    iVar3 = FUN_00501010(&local_a,pbVar8);
    if (iVar3 == 0) {
      iVar3 = FUN_00501f10(param_3);
      return iVar3;
    }
  }
  do {
    while( true ) {
      FUN_005016f0(param_2,param_1);
      iVar3 = FUN_004fa0e0(param_2);
      if (iVar3 == 0) break;
      if (((param_5 & 0x70) != 0) &&
         ((*param_2 == 0x5b || ((*param_2 == 0x7f && (param_2[1] == 0x40)))))) goto LAB_004fc8f3;
      uVar4 = (uint)*param_2;
      if (uVar4 == 0x7f) {
        pcVar5 = (code *)(&PTR_LAB_005c1598)[(uint)param_2[1] * 2];
        uVar7 = (&DAT_005c159c)[(uint)param_2[1] * 8];
      }
      else if (uVar4 == 0xf7) {
        pcVar5 = (code *)(&PTR_FUN_005c2598)[(uint)param_2[1] * 2];
        uVar7 = (&DAT_005c259c)[(uint)param_2[1] * 8];
      }
      else if (uVar4 == 0xf9) {
        pcVar5 = (code *)(&PTR_FUN_005c1d98)[(uint)param_2[1] * 2];
        uVar7 = (&DAT_005c1d9c)[(uint)param_2[1] * 8];
      }
      else {
        pcVar5 = (code *)(&PTR_FUN_005c0d98)[uVar4 * 2];
        uVar7 = (&DAT_005c0d9c)[uVar4 * 8];
      }
      switch(uVar7) {
      case 0:
        iVar3 = FUN_00501f50(param_3);
        return iVar3;
      case 1:
switchD_004fc62b_caseD_1:
        iVar3 = FUN_00501f30(param_3);
        return iVar3;
      case 2:
        iVar3 = (*pcVar5)(param_3,param_2);
        FUN_004fe330(param_2,param_1);
        break;
      case 3:
        iVar3 = (*pcVar5)(param_3,param_1,param_2);
        break;
      case 4:
        iVar3 = (*pcVar5)(param_3,param_1,param_2,param_4);
        break;
      default:
        iVar3 = FUN_00501f50(param_3);
        break;
      case 6:
        iVar3 = (*pcVar5)(param_3);
        FUN_004fe330(param_2,param_1);
        break;
      case 7:
        iVar3 = (*pcVar5)(param_3,param_5);
        FUN_004fe330(param_2,param_1);
        break;
      case 9:
        iVar3 = (*pcVar5)(param_3,param_2,param_5);
        FUN_004fe330(param_2,param_1);
        break;
      case 10:
        iVar3 = (*pcVar5)(param_3,param_1,param_2,param_4,param_5);
      }
      if (iVar3 == 0) goto LAB_004fca4b;
      iVar6 = FUN_004fa2f0(param_2);
      if (iVar6 == 0) {
        if ((*param_3 & 0x60) == 0x20) {
          FUN_004fd9e0(param_3);
        }
        goto LAB_004fc8f3;
      }
      iVar6 = FUN_004f9e70(param_2);
      if (iVar6 != 0) goto LAB_004fc8fe;
      iVar6 = FUN_004fa240(param_2);
      if (iVar6 != 0) {
        iVar3 = FUN_005009a0(param_1,param_2,param_3,param_4,param_5);
        if (iVar3 == 2) goto LAB_004fc9fb;
        if (iVar3 == 0) goto LAB_004fca4b;
        iVar6 = FUN_004f9e70(param_2);
        if (iVar6 != 0) goto LAB_004fc8fe;
      }
      iVar6 = FUN_004fa050(param_2);
      if (iVar6 == 0) goto LAB_004fc8f3;
      iVar6 = FUN_00500dc0(param_2,param_4[1]);
      while (iVar6 == 0) {
        FUN_005008e0(param_4[1],local_6);
        iVar3 = FUN_004fa050(local_6);
        if (iVar3 == 0) {
          iVar3 = FUN_004fc010(param_3,local_6);
        }
        else {
          FUN_00500880(&local_4,*param_4);
          if (local_6[0] == -0x45) {
            iVar3 = FUN_004fd5b0(local_4,param_3,param_4,param_5);
          }
          else {
            iVar3 = FUN_004fbf50(local_4,local_6,param_3);
          }
        }
        if (iVar3 == 0) goto LAB_004fca4b;
        iVar6 = FUN_00500dc0(param_2,param_4[1]);
      }
      if (iVar3 == 0) goto LAB_004fca4b;
      iVar3 = FUN_00501010(param_2,param_4[1]);
      if ((iVar3 == 0) || (iVar3 = FUN_00500f60(param_3,*param_4), iVar3 == 0)) {
LAB_004fc9a7:
        iVar3 = FUN_00501f10(param_3);
        goto LAB_004fc8fe;
      }
      if ((*param_2 == 0xf8) || (*param_2 == 0xfa)) {
        FUN_004fe370(param_2,param_1);
      }
      else {
        FUN_004fe330(param_2,param_1);
      }
      FUN_005016f0(param_2,param_1);
      iVar3 = FUN_004fa0e0(param_2);
      if (((iVar3 == 0) && (iVar3 = FUN_004f9f80(param_2), iVar3 == 0)) &&
         (iVar3 = FUN_004f9ba0(param_2), iVar3 == 0)) {
        FUN_004fc300(*param_4);
        iVar3 = FUN_00501f30(param_3);
        goto LAB_004fc8fe;
      }
    }
    iVar3 = FUN_004f9f80(param_2);
    if (iVar3 == 0) break;
    iVar3 = FUN_00501010(param_2,param_4[1]);
    if (iVar3 == 0) goto LAB_004fc9a7;
    FUN_004fe330(param_2,param_1);
    iVar3 = FUN_004f9e70(param_2);
  } while (iVar3 == 0);
LAB_004fc8f3:
  iVar3 = FUN_00501f30(param_3);
LAB_004fc8fe:
  if (iVar3 == 1) {
    iVar6 = FUN_005008e0(param_4[1],local_6);
    if (iVar6 == 0) goto LAB_004fca04;
    do {
      iVar6 = FUN_004f9ba0(local_6);
      if ((iVar6 != 0) || (iVar6 = FUN_004f9960(local_6), iVar6 != 0)) break;
      iVar3 = FUN_004fa050(local_6);
      if (iVar3 == 0) {
        iVar3 = FUN_004fc010(param_3,local_6);
      }
      else {
        FUN_00500880(&local_4,*param_4);
        if (local_6[0] == -0x45) {
          iVar3 = FUN_004fd5b0(local_4,param_3,param_4,param_5);
        }
        else {
          iVar3 = FUN_004fbf50(local_4,local_6,param_3);
        }
      }
      if (iVar3 == 0) goto LAB_004fca4b;
      iVar6 = FUN_005008e0(param_4[1],local_6);
    } while (iVar6 != 0);
  }
  else if (iVar3 == 2) {
LAB_004fc9fb:
    iVar3 = 1;
    goto LAB_004fca04;
  }
  if (iVar3 == 0) {
LAB_004fca4b:
    FUN_004fc300(*param_4);
    *(undefined1 *)param_4[2] = local_9;
    *(undefined1 *)param_4[1] = local_8;
    *(undefined1 *)*param_4 = local_7;
    return 0;
  }
LAB_004fca04:
  if ((param_5 & 0xff00) != 0xf00) {
    bVar1 = *param_3;
    if (((bVar1 & 0x80) != 0) && ((param_5 & 0x800) == 0)) {
      FUN_004fd9e0(param_3);
      iVar3 = FUN_00501ed0(param_3);
      return iVar3;
    }
    if (((bVar1 & 0x70) == 0x20) && ((param_5 & 0x200) == 0)) {
      FUN_004fd9e0(param_3);
      iVar3 = FUN_00501ed0(param_3);
      return iVar3;
    }
    if (((bVar1 & 0x70) == 0x30) && ((param_5 & 0x400) == 0)) {
      FUN_004fd9e0(param_3);
      iVar3 = FUN_00501ed0(param_3);
      return iVar3;
    }
    if (((bVar1 & 0x60) != 0x20) && ((param_5 & 0x100) == 0)) {
      iVar3 = FUN_00501ed0(param_3);
      return iVar3;
    }
    if ((param_5 & 0x8000) != 0) {
      FUN_004e56c0(param_3,param_3);
    }
  }
  return iVar3;
}

