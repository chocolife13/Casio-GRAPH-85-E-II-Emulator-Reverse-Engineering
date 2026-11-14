// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0047faf0
// entry: 0047faf0  size: 457


int FUN_0047faf0(int param_1,int param_2)

{
  short sVar1;
  int iVar2;
  short *psVar3;
  int iVar4;
  short *psVar5;
  short *psVar6;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_30;
  short local_2c [22];
  
  local_30 = 0x20;
  local_2c[0] = 0x21;
  local_2c[1] = 0;
  local_2c[2] = 0x22;
  local_2c[3] = 0;
  local_2c[4] = 0x23;
  local_2c[5] = 0;
  local_2c[6] = 0x24;
  local_2c[7] = 0;
  local_2c[8] = 0x25;
  local_2c[9] = 0;
  local_2c[10] = 0x26;
  local_2c[0xb] = 0;
  local_2c[0xc] = 0x27;
  local_2c[0xd] = 0;
  local_2c[0xe] = 0x28;
  local_2c[0xf] = 0;
  local_2c[0x10] = 0x29;
  local_2c[0x11] = 0;
  local_2c[0x12] = 0x2a;
  local_2c[0x13] = 0;
  local_2c[0x14] = 0x2b;
  local_2c[0x15] = 0;
  iVar4 = 0;
  psVar3 = local_2c;
  psVar5 = (short *)(param_1 + 2);
  psVar6 = (short *)(param_2 + 0x1c);
  do {
    psVar5[-1] = psVar6[-0xe];
    *psVar5 = psVar6[-0xd];
    psVar5[4] = *psVar6;
    psVar5[5] = psVar6[1];
    local_3c = *(undefined4 *)(psVar6 + -0xc);
    local_38 = *(undefined4 *)(psVar6 + -10);
    if ((psVar6[-0xe] != 0) &&
       (iVar2 = FUN_00489760(&local_3c,0,*(undefined4 *)(psVar3 + -2),0x1101), iVar2 != 0)) {
      return iVar2;
    }
    local_3c = *(undefined4 *)(psVar6 + -8);
    local_38 = *(undefined4 *)(psVar6 + -6);
    if (psVar6[-0xe] != 0) {
      iVar2 = FUN_00489760(&local_3c,0,*(undefined4 *)psVar3,0x1101);
      sVar1 = *psVar5;
      if (((((sVar1 != 3) && (sVar1 != 4)) && (sVar1 != 5)) && ((sVar1 != 6 && (sVar1 != 7)))) &&
         ((sVar1 != 8 && (iVar2 != 0)))) {
        return iVar2;
      }
    }
    local_3c = *(undefined4 *)(psVar6 + -4);
    local_38 = *(undefined4 *)(psVar6 + -2);
    if (psVar6[-0xe] == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_00489760(&local_3c,0,*(undefined4 *)(psVar3 + 2),0x1101);
    }
    sVar1 = *psVar3;
    psVar5[1] = psVar3[-2];
    psVar5[2] = sVar1;
    if (((psVar6[-4] == 0) || (sVar1 = *psVar5, sVar1 == 3)) || ((sVar1 == 0x12 || (sVar1 == 0x11)))
       ) {
      psVar5[3] = 0;
    }
    else {
      if (iVar2 != 0) {
        return iVar2;
      }
      psVar5[3] = psVar3[2];
    }
    iVar4 = iVar4 + 1;
    psVar6 = psVar6 + 0x10;
    psVar3 = psVar3 + 6;
    psVar5 = psVar5 + 7;
  } while (iVar4 < 4);
  *(undefined2 *)(param_1 + 0x38) = *(undefined2 *)(param_2 + 0x80);
  return 0;
}

