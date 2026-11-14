// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0054c400
// entry: 0054c400  size: 988


undefined4
FUN_0054c400(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,short param_6,int param_7,int param_8,undefined4 param_9,
            undefined4 param_10)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  short sVar7;
  int iVar8;
  byte *pbVar9;
  byte local_148;
  undefined1 local_147;
  undefined1 local_142;
  undefined1 local_141;
  uint local_140;
  undefined1 local_13a;
  undefined1 local_139;
  uint local_138;
  char local_132;
  undefined1 local_131;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined1 local_124 [12];
  undefined1 local_118 [24];
  byte local_100 [256];
  
  local_12c = 0;
  local_128 = 0;
  local_13a = 0x3f;
  local_139 = 0;
  local_142 = 0x24;
  local_141 = 0;
  local_148 = 0x31;
  local_147 = 0;
  uVar1 = FUN_004b6ca0(param_1);
  uVar2 = FUN_00488960(param_9,param_10,local_118,0);
  iVar3 = FUN_00486570(uVar2);
  if ((iVar3 == 1) && (iVar3 = FUN_004e4020(local_118), iVar3 == 2)) {
    FUN_004b6ef0(param_2,param_1);
  }
  else {
    FUN_0054c380(&local_138,&local_148,&param_1);
    local_130 = FUN_0054c380(&local_138,&local_148,&param_1);
    iVar3 = param_8;
    uVar2 = param_2;
    local_140 = uVar1;
    if (local_148 != 0) {
      do {
        sVar7 = (short)local_130;
        if (((((byte)local_138 < 0x41) || (0x5a < (byte)local_138)) || (local_148 < 0x30)) ||
           (0x39 < local_148)) {
          FUN_004b6e70(uVar2,&local_138);
        }
        else {
          if ((sVar7 == 1) || (param_6 != 2)) {
            iVar8 = (local_138 & 0xff) - 0x40;
          }
          else {
            iVar8 = ((local_138 & 0xff) - 0x40) + param_7;
          }
          pbVar9 = local_100;
          do {
            if (0x39 < local_148) break;
            *pbVar9 = local_148;
            pbVar9 = pbVar9 + 1;
            *pbVar9 = 0;
            local_130 = FUN_0054c380(&local_138,&local_148,&param_1);
            if (local_148 == 0) {
              local_128 = 1;
              break;
            }
          } while (0x2f < local_148);
          iVar4 = FUN_0055401d(local_100);
          if (param_6 == 2) {
            if ((short)local_12c == 0) {
              if ((((iVar4 < 1) || (9 < iVar4)) || ((iVar4 + iVar3 < 10 || (99 < iVar4 + iVar3))))
                 && (((iVar4 < 10 || (99 < iVar4)) || (iVar4 + iVar3 < 100)))) {
joined_r0x0054c68e:
                if (((0 < iVar4) && (iVar4 < 10)) && (99 < iVar4 + iVar3)) {
                  local_140 = local_140 + 2;
                }
              }
              else {
                local_140 = local_140 + 1;
              }
LAB_0054c6a7:
              iVar4 = iVar4 + iVar3;
            }
          }
          else if (((param_6 == 1) && ((short)param_3 <= iVar8)) &&
                  ((iVar8 <= (short)param_4 &&
                   ((param_3._2_2_ <= iVar4 && (iVar4 <= param_4._2_2_)))))) {
            iVar8 = iVar8 + param_7;
            if (((iVar4 < 1) || (((9 < iVar4 || (iVar4 + iVar3 < 10)) || (99 < iVar4 + iVar3)))) &&
               (((iVar4 < 10 || (99 < iVar4)) || (iVar4 + iVar3 < 100)))) goto joined_r0x0054c68e;
            local_140 = local_140 + 1;
            goto LAB_0054c6a7;
          }
          if (0xff < local_140) {
            return 0;
          }
          if ((iVar8 < 1) || (0x1a < iVar8)) {
            FUN_004b7710(uVar2,&local_13a);
          }
          else {
            local_132 = (char)iVar8 + '@';
            local_131 = 0;
            FUN_004b6e70(uVar2,&local_132);
          }
          if ((iVar4 < 1) || (999 < iVar4)) {
            FUN_004b7710(uVar2,&local_13a);
          }
          else {
            if ((short)local_12c == 1) {
              FUN_004b7710(uVar2,&local_142);
            }
            uVar5 = FUN_0054c7e0(iVar4,local_124);
            FUN_004b6e70(uVar2,uVar5);
          }
          sVar7 = (short)local_130;
        }
        if (sVar7 == 1) {
          FUN_004b7710(uVar2,&local_142);
        }
        uVar6 = FUN_0054c380(&local_138,&local_148,&param_1);
        uVar5 = uVar6;
        if ((0x2f < local_148) && (local_148 < 0x3a)) {
          uVar5 = local_130;
          local_12c = uVar6;
        }
        local_130 = uVar5;
        if (local_148 == 0) {
          if ((short)local_128 != 0) {
            return 1;
          }
          FUN_004b6e70(uVar2,&local_138);
          if (local_148 == 0) {
            return 1;
          }
        }
      } while( true );
    }
  }
  return 1;
}

