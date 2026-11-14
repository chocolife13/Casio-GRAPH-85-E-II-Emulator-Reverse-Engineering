// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00522700
// entry: 00522700  size: 444


void FUN_00522700(int param_1,int param_2,char param_3)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  int local_30;
  int local_2c;
  int local_28;
  undefined1 local_20;
  undefined1 local_1f;
  undefined1 local_1e;
  undefined1 local_1d;
  undefined1 local_1c;
  undefined1 local_1b;
  undefined1 local_1a;
  undefined1 local_18;
  undefined1 local_17;
  undefined1 local_16;
  undefined1 local_15;
  undefined1 local_14;
  undefined1 local_13;
  undefined1 local_12;
  undefined1 local_10;
  undefined1 local_f;
  undefined1 local_e;
  undefined1 local_d;
  undefined1 local_c;
  undefined1 local_b;
  undefined1 local_a;
  undefined1 local_8;
  undefined1 local_7;
  undefined1 local_6;
  undefined1 local_5;
  undefined1 local_4;
  undefined1 local_3;
  undefined1 local_2;
  
  local_20 = 8;
  local_1f = 8;
  local_1e = 8;
  local_1c = 8;
  local_1b = 8;
  local_1a = 8;
  local_f = 8;
  local_b = 8;
  local_18 = 0x14;
  local_17 = 0x14;
  local_13 = 0x14;
  local_12 = 0x14;
  local_1d = 0x7f;
  local_16 = 0x77;
  local_15 = 0;
  local_14 = 0x77;
  local_10 = 0;
  local_e = 0x1c;
  local_d = 0x3e;
  local_c = 0x1c;
  local_a = 0;
  local_8 = 0;
  local_7 = 0;
  local_6 = 0;
  local_5 = 0;
  local_4 = 0;
  local_3 = 0;
  local_2 = 0;
  if (param_3 == '\0') {
    puVar3 = &local_10;
    puVar2 = &local_8;
  }
  else {
    puVar3 = &local_20;
    puVar2 = &local_18;
  }
  local_2c = -3;
  if (param_1 + -3 < 0) {
    local_2c = -3 - (param_1 + -3);
  }
  local_30 = -3;
  if (param_2 + -3 < 0) {
    local_30 = -3 - (param_2 + -3);
  }
  _param_3 = 3;
  if (-param_1 + 0x7c < 0) {
    _param_3 = -param_1 + 0x7f;
  }
  local_28 = 3;
  if (-param_2 + 0x3c < 0) {
    local_28 = -param_2 + 0x3f;
  }
  if (local_30 <= local_28) {
    pbVar5 = puVar2 + local_30 + 3;
    iVar4 = (int)puVar3 - (int)puVar2;
    do {
      if (_param_3 < 3) {
        iVar1 = 3 - _param_3;
        do {
          pbVar5[iVar4] = pbVar5[iVar4] >> 1;
          iVar1 = iVar1 + -1;
          *pbVar5 = *pbVar5 >> 1;
        } while (iVar1 != 0);
      }
      if (local_2c <= _param_3) {
        iVar1 = _param_3 + param_1;
        iVar6 = (_param_3 - local_2c) + 1;
        do {
          if ((pbVar5[iVar4] & 1) != 0) {
            FUN_00414290(iVar1,local_30 + param_2,1);
          }
          if ((*pbVar5 & 1) != 0) {
            FUN_00414290(iVar1,local_30 + param_2,0);
          }
          pbVar5[iVar4] = pbVar5[iVar4] >> 1;
          iVar1 = iVar1 + -1;
          iVar6 = iVar6 + -1;
          *pbVar5 = *pbVar5 >> 1;
        } while (iVar6 != 0);
      }
      local_30 = local_30 + 1;
      pbVar5 = pbVar5 + 1;
    } while (local_30 <= local_28);
  }
  return;
}

