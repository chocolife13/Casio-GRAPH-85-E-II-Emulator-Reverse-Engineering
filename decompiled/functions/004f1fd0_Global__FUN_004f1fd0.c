// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004f1fd0
// entry: 004f1fd0  size: 2155


undefined4
FUN_004f1fd0(undefined4 param_1,char *param_2,byte *param_3,undefined4 *param_4,uint *param_5)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  uint uVar6;
  byte bVar7;
  int iVar8;
  int *piVar9;
  byte *pbVar10;
  undefined4 *puVar11;
  byte *pbVar12;
  int local_13c;
  undefined4 local_138;
  int local_134;
  undefined1 local_130 [12];
  byte local_124 [24];
  char local_10c [2];
  ushort uStack_10a;
  ushort local_108;
  char local_f4 [2];
  uint local_f2;
  undefined1 local_dc [24];
  int local_c4 [5];
  char cStack_ad;
  undefined4 local_ac [7];
  undefined1 local_90 [144];
  
  *param_5 = 0;
  *param_4 = 1;
  bVar1 = false;
  if (*param_2 == '\x7f') {
    switch(param_2[1]) {
    case 'B':
      bVar1 = true;
    case 'C':
      iVar8 = FUN_004f5850(param_1,param_2,param_3,0);
      if (iVar8 == 0) {
        return 0;
      }
      pbVar10 = param_3;
      pbVar12 = local_124;
      for (iVar8 = 6; iVar8 != 0; iVar8 = iVar8 + -1) {
        *(undefined4 *)pbVar12 = *(undefined4 *)pbVar10;
        pbVar10 = pbVar10 + 4;
        pbVar12 = pbVar12 + 4;
      }
      iVar8 = FUN_004f5290(param_2,param_3,1);
      if (iVar8 == 0) {
        return 0;
      }
      FUN_004fe330(param_2,param_1);
      if ((*param_2 != '\x7f') || (param_2[1] != '@')) {
        FUN_004fe3e0(param_2,param_1);
      }
      iVar8 = FUN_004f5e60(param_1,param_2,param_3,&local_138);
      if (iVar8 == 0) {
        return 0;
      }
      if ((char)local_138 == -0x40) {
        uVar6 = FUN_0052f6b0(0x3b);
        if ((uVar6 & 8) != 0) {
          iVar8 = FUN_0049c7b0(local_dc);
          if (iVar8 == 0) {
            uVar4 = FUN_00501ef0(param_3);
            return uVar4;
          }
          iVar8 = FUN_00498fe0(local_dc);
          if (iVar8 == 0) {
            uVar4 = FUN_00501ef0(param_3);
            return uVar4;
          }
        }
      }
      else {
        *param_5 = (int)(char)local_138 - 0x40;
      }
      FUN_004fe330(param_2,param_1);
      iVar8 = FUN_004f5290(param_2,param_3,1);
      if (iVar8 == 0) {
        return 0;
      }
      iVar8 = FUN_004f57b0(param_1,param_2,param_3,&local_13c,0xff);
      if (iVar8 == 0) {
        return 0;
      }
      if (bVar1) {
        cVar2 = FUN_00436640(local_138,local_124,local_13c);
      }
      else {
        iVar8 = FUN_004f5290(param_2,param_3,1);
        if (iVar8 == 0) {
          return 0;
        }
        iVar8 = FUN_004f57b0(param_1,param_2,param_3,&local_134,0xff);
        if (iVar8 == 0) {
          return 0;
        }
        cVar2 = FUN_00436660(local_138,local_124,local_13c,local_134);
      }
      if (cVar2 != '\0') {
        uVar4 = FUN_004f58f0(cVar2,param_3);
        return uVar4;
      }
      return 1;
    case 'D':
      bVar1 = true;
    case 'E':
      FUN_004fe330(param_2,param_1);
      if ((*param_2 != '\x7f') || (param_2[1] != '@')) {
        FUN_004fe3e0(param_2,param_1);
      }
      iVar8 = FUN_004f5e60(param_1,param_2,param_3,&local_138);
      if (iVar8 == 0) {
        return 0;
      }
      if ((char)local_138 == -0x40) {
        uVar6 = FUN_0052f6b0(0x3b);
        if ((uVar6 & 8) != 0) {
          iVar8 = FUN_0049c7b0(local_dc);
          if (iVar8 == 0) {
            uVar4 = FUN_00501ef0(param_3);
            return uVar4;
          }
          iVar8 = FUN_00498fe0(local_dc);
          if (iVar8 == 0) {
            uVar4 = FUN_00501ef0(param_3);
            return uVar4;
          }
        }
      }
      else {
        *param_5 = (int)(char)local_138 - 0x40;
      }
      FUN_004fe330(param_2,param_1);
      iVar8 = FUN_004f5290(param_2,param_3,1);
      if (iVar8 == 0) {
        return 0;
      }
      iVar8 = FUN_004f57b0(param_1,param_2,param_3,&local_13c,0xff);
      if (iVar8 == 0) {
        return 0;
      }
      iVar8 = FUN_004f5290(param_2,param_3,1);
      if (iVar8 == 0) {
        return 0;
      }
      iVar8 = FUN_004f57b0(param_1,param_2,param_3,&local_134,0xff);
      if (iVar8 == 0) {
        return 0;
      }
      if (bVar1) {
        cVar2 = FUN_00436680(local_138,local_134,local_13c);
      }
      else {
        cVar2 = FUN_004366a0(local_138,local_13c,local_134);
      }
      if (cVar2 != '\0') {
        uVar4 = FUN_004f58f0(cVar2,param_3);
        return uVar4;
      }
      return 1;
    default:
      return 0;
    case 'G':
      goto switchD_004f2238_caseD_47;
    }
  }
  if (*param_2 != -9) {
    return 0;
  }
  if (param_2[1] == -0x50) {
    bVar1 = true;
  }
  else if (param_2[1] != -0x4f) {
    return 0;
  }
  *param_4 = 0;
  puVar11 = local_ac;
  for (iVar8 = 6; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar11 = 0;
    puVar11 = puVar11 + 1;
  }
  local_13c = 0;
  *(undefined2 *)puVar11 = 0;
  iVar8 = local_134;
  do {
    FUN_004fe330(param_2,param_1);
    iVar3 = FUN_004f5d60(param_1,param_2,param_3,param_5);
    if (iVar3 == 0) {
      return 0;
    }
    bVar7 = (byte)*param_5;
    if (local_13c == 0) {
      iVar8 = FUN_00527440(0,bVar7);
      if (iVar8 == 0) goto LAB_004f213d;
    }
    else {
      iVar3 = FUN_00527440(0,bVar7);
      if (iVar8 != iVar3) goto LAB_004f213d;
    }
    iVar3 = FUN_004d9270(*param_5,local_90 + local_13c * 0x18);
    if (iVar3 == 0) {
      return 0;
    }
    if (*(char *)((int)local_ac + (bVar7 - 1)) != '\0') goto LAB_004f213d;
    *(undefined1 *)((int)local_ac + (bVar7 - 1)) = 1;
    iVar3 = FUN_004f5290(param_2,param_3,1);
    if (iVar3 == 0) {
      FUN_004f52c0(param_1,param_2,param_3,2);
      iVar8 = FUN_004f9b40(param_2);
      if (iVar8 == 0) {
        uVar4 = FUN_004f58f0(2,param_3);
        return uVar4;
      }
      if (5 < local_13c) {
        uVar4 = FUN_004f58f0(2,param_3);
        return uVar4;
      }
      local_134 = 0;
      if (-1 < local_13c) {
        local_134 = local_13c + 1;
        piVar9 = local_c4;
        puVar5 = local_90;
        iVar8 = local_134;
        do {
          *piVar9 = (int)puVar5;
          puVar5 = puVar5 + 0x18;
          piVar9 = piVar9 + 1;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
      }
      if (bVar1) {
        cVar2 = FUN_004c9600(local_13c + 1,local_c4);
      }
      else {
        cVar2 = FUN_004c9710(local_13c + 1,local_c4);
      }
      if (cVar2 != '\0') {
        uVar4 = FUN_004f58f0(cVar2,param_3);
        return uVar4;
      }
      return 1;
    }
    local_13c = local_13c + 1;
    if (5 < local_13c) {
      uVar4 = FUN_004f58f0(2,param_3);
      return uVar4;
    }
  } while( true );
switchD_004f2238_caseD_47:
  iVar8 = FUN_004f5850(param_1,param_2,param_3,1);
  if (iVar8 == 0) {
    return 0;
  }
  pbVar10 = param_3;
  pbVar12 = local_124;
  for (iVar8 = 6; iVar8 != 0; iVar8 = iVar8 + -1) {
    *(undefined4 *)pbVar12 = *(undefined4 *)pbVar10;
    pbVar10 = pbVar10 + 4;
    pbVar12 = pbVar12 + 4;
  }
  iVar8 = FUN_004f5290(param_2,param_3,1);
  if (iVar8 == 0) {
    return 0;
  }
  FUN_004fe330(param_2,param_1);
  iVar8 = FUN_004f9f40(param_2);
  if (iVar8 == 0) {
    iVar8 = FUN_004f5de0(param_1,param_2,param_3,param_5);
    if (iVar8 == 0) {
      return 0;
    }
    *param_4 = 0;
    uVar6 = *param_5;
    iVar8 = FUN_004d9270(*param_5,local_f4);
    if (iVar8 != 0) {
      if (((local_124[0] & 0x80) == 0) || ((local_124[0] & 0xf0) == 0xf0)) {
        if (local_f4[0] == -0x60) {
          FUN_0052fbc0(0,(byte)uVar6,local_130);
          iVar8 = (local_f2 & 0xffff) * 0xc;
          FUN_004ac8b0(5,local_130,iVar8,iVar8 + 0x10);
          local_f4[0] = ' ';
        }
      }
      else {
        iVar8 = FUN_005278d0(0,(byte)uVar6,1,local_124);
        if (iVar8 != 0) {
          uVar4 = FUN_004f58f0(4,param_3);
          return uVar4;
        }
      }
      iVar8 = FUN_004c6300(local_124,local_f4);
      if (iVar8 == 0) {
        uVar4 = FUN_004f58f0(4,param_3);
        return uVar4;
      }
      FUN_004f3c40(1);
      goto LAB_004f281e;
    }
  }
  else {
    if (((*param_3 & 0x80) != 0) && ((*param_3 & 0xf0) != 0xf0)) {
      FUN_004fe3e0(param_2,param_1);
      uVar4 = FUN_004f58f0(3,param_3);
      return uVar4;
    }
    FUN_004fe330(param_2,param_1);
    iVar8 = FUN_004f5240(param_2,param_3,0);
    if (iVar8 == 0) {
      return 0;
    }
    bVar7 = *param_2 - 0x40;
    *param_5 = (uint)bVar7;
    iVar8 = FUN_004d9320((uint)bVar7,local_10c);
    if (iVar8 != 0) {
      if (((local_124[0] & 0x80) == 0) || ((local_124[0] & 0xf0) == 0xf0)) {
        if (local_10c[0] == -0x50) {
          FUN_0052f8a0(bVar7,local_130);
          iVar8 = (uint)local_108 * (uint)uStack_10a * 0xc;
          FUN_004ac8b0(6,local_130,iVar8,iVar8 + 0x10);
          local_10c[0] = '0';
        }
      }
      else {
        iVar8 = FUN_00528bf0(bVar7,1,1,local_124);
        if (iVar8 != 0) {
          uVar4 = FUN_004f58f0(4,param_3);
          return uVar4;
        }
      }
      iVar8 = FUN_004c6430(local_124,local_10c);
      if (iVar8 == 0) {
        uVar4 = FUN_004f58f0(4,param_3);
        return uVar4;
      }
      FUN_004fe330(param_2,param_1);
LAB_004f281e:
      FUN_004f52c0(param_1,param_2,param_3,2);
      return 1;
    }
  }
LAB_004f213d:
  uVar4 = FUN_004f58f0(9,param_3);
  return uVar4;
}

