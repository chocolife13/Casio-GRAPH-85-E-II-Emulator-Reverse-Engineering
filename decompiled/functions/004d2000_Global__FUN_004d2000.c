// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004d2000
// entry: 004d2000  size: 765


bool FUN_004d2000(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4,
                 undefined1 *param_5,undefined4 param_6,uint param_7)

{
  undefined1 uVar1;
  undefined1 uVar2;
  char cVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int local_88;
  int local_80;
  undefined4 local_7c [6];
  uint local_64;
  undefined4 local_60 [6];
  undefined4 local_48 [6];
  undefined1 local_30 [24];
  undefined1 local_18 [24];
  
  FUN_004e57c0(local_18);
  FUN_004e5800(local_30);
  uVar4 = *param_4;
  uVar1 = *param_5;
  uVar2 = param_5[1];
  local_80 = 0;
  local_88 = -100;
  FUN_004e0880(param_1,param_2,local_7c,0);
  iVar6 = FUN_004e4020(local_7c);
  if (iVar6 == 0) {
    local_64 = param_7 & 0x80 | 0x8104;
    do {
      uVar5 = local_64;
      FUN_0052f780(0x58,local_7c);
      iVar6 = FUN_004fc460(param_4,param_5,local_60,param_6,uVar5);
      if (iVar6 == 0) {
        puVar7 = local_60;
        puVar8 = param_3;
        for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar8 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar8 = puVar8 + 1;
        }
        cVar3 = *(char *)((int)param_3 + 1);
      }
      else {
        iVar6 = FUN_004d1c90(local_60);
        if (local_88 < iVar6) {
          local_88 = iVar6;
        }
        *param_4 = uVar4;
        *param_5 = uVar1;
        param_5[1] = uVar2;
        FUN_004e0b00(param_1,param_2,local_7c,0);
        iVar6 = FUN_004e4020(local_7c);
        if (iVar6 != 0) break;
        FUN_0052f780(0x58,local_7c);
        iVar6 = FUN_004fc460(param_4,param_5,local_48,param_6,uVar5);
        if (iVar6 != 0) {
          iVar6 = FUN_004d1c90(local_48);
          if (local_88 < iVar6) {
            local_88 = iVar6;
          }
          *param_4 = uVar4;
          *param_5 = uVar1;
          param_5[1] = uVar2;
          FUN_004e0b00(local_60,local_48,local_7c,0);
          iVar6 = FUN_004d1c90(local_7c);
          iVar6 = (local_88 - iVar6) + 1;
          if (iVar6 < 0) {
            iVar6 = 0;
          }
          else if (0xe < iVar6) {
            iVar6 = 0xe;
          }
          if (0xf - iVar6 < 3) {
            FUN_004e5780(local_7c);
          }
          FUN_004e0dd0(local_7c,param_2,local_60,0);
          FUN_004e0dd0(local_60,local_18,param_3,0);
          iVar6 = FUN_004e4020(param_3);
          return iVar6 == 0;
        }
        puVar7 = local_48;
        puVar8 = param_3;
        for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar8 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar8 = puVar8 + 1;
        }
        cVar3 = *(char *)((int)param_3 + 1);
      }
      if (cVar3 != '\x03') {
        return false;
      }
      FUN_004e0dd0(param_2,local_30,param_2,0);
      local_80 = local_80 + 1;
      if (local_80 == 7) {
        FUN_004e5630(3,param_3);
        return false;
      }
      *param_4 = uVar4;
      *param_5 = uVar1;
      param_5[1] = uVar2;
      FUN_004e0880(param_1,param_2,local_7c,0);
      iVar6 = FUN_004e4020(local_7c);
    } while (iVar6 == 0);
  }
  puVar7 = local_7c;
  for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
    *param_3 = *puVar7;
    puVar7 = puVar7 + 1;
    param_3 = param_3 + 1;
  }
  return false;
}

