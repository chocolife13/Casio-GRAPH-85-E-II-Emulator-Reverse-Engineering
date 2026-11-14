// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004136b0
// entry: 004136b0  size: 430


void FUN_004136b0(byte *param_1,int param_2)

{
  byte *pbVar1;
  char cVar2;
  uint uVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  byte local_10;
  byte local_8 [8];
  
  local_8[0] = 0x80;
  local_8[1] = 0x40;
  local_8[2] = 0x20;
  local_8[3] = 0x10;
  local_8[4] = 8;
  local_8[5] = 4;
  local_8[6] = 2;
  local_8[7] = 1;
  FUN_00414db0();
  uVar3 = *(uint *)(param_1 + 4);
  if (((((int)uVar3 < 0) || (0x7f < (int)uVar3)) || (uVar6 = *(uint *)(param_1 + 8), (int)uVar6 < 0)
      ) || (0x3f < (int)uVar6)) goto LAB_00413853;
  cVar2 = *(char *)(param_2 + 0x11);
  uVar7 = uVar3 & 7;
  if ((cVar2 == '\x03') || (cVar2 == '\x04')) {
    uVar6 = *(uint *)(param_1 + 0xc) % (*(uint *)(param_2 + 0x14) + *(uint *)(param_2 + 0x18));
    if (cVar2 == '\x03') {
      if ((*(uint *)(param_2 + 0x14) < uVar6) || (uVar6 == 0)) {
LAB_0041379e:
        local_10 = 0;
        goto LAB_004137b2;
      }
    }
    else if ((uVar6 <= *(uint *)(param_2 + 0x18)) && (uVar6 != 0)) goto LAB_0041379e;
    local_10 = local_8[uVar7];
  }
  else {
    cVar2 = *(char *)(param_2 + 0x12);
    if (cVar2 == '\x01') {
      local_10 = local_8[uVar7];
    }
    else if (cVar2 == '\x02') {
      local_10 = 0;
    }
    else if (cVar2 == '\x03') {
      if ((uVar6 & 1) == 0) {
        local_10 = local_8[uVar7] & 0xaa;
      }
      else {
        local_10 = local_8[uVar7] & 0x55;
      }
    }
  }
LAB_004137b2:
  iVar5 = (int)uVar3 >> 3;
  pbVar1 = (byte *)((int)&DAT_005d8280 + iVar5 + *(int *)(param_1 + 8) * 0x10);
  if ((*param_1 & 1) == 0) {
    bVar4 = FUN_0040ad10(iVar5,*(int *)(param_1 + 8));
  }
  else {
    bVar4 = *pbVar1;
  }
  switch(*(undefined1 *)(param_2 + 0x13)) {
  case 1:
    if (local_10 != 0) goto switchD_004137ef_caseD_2;
    local_10 = ~local_8[uVar7] & bVar4;
    break;
  case 2:
switchD_004137ef_caseD_2:
    local_10 = local_10 | bVar4;
    break;
  case 3:
    local_10 = (~local_8[uVar7] | local_10) & bVar4;
    break;
  case 4:
    local_10 = (bVar4 ^ local_10) & local_8[uVar7] | ~local_8[uVar7] & bVar4;
  }
  if ((*param_1 & 1) != 0) {
    *pbVar1 = local_10;
  }
  if ((*param_1 & 2) != 0) {
    FUN_0040ad70(iVar5,*(undefined4 *)(param_1 + 8),local_10);
  }
LAB_00413853:
  FUN_00414db0();
  return;
}

