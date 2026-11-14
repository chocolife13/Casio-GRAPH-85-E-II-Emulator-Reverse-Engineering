// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00522120
// entry: 00522120  size: 673


undefined4 FUN_00522120(int param_1,int param_2,undefined4 *param_3,int param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined1 local_44 [16];
  undefined1 local_34 [52];
  
  iVar4 = param_1;
  iVar6 = param_5 * 0x20;
  if (*(int *)(iVar6 + 0x18 + *(int *)(param_4 + 0x8dc)) == 0x209) {
    return 0xfffffffa;
  }
  if (param_2 == 0x169) {
    return 0xfffffffa;
  }
  iVar1 = FUN_004ab6a0(s__CONICS_005be270);
  if (iVar1 != 0) {
    return 0xfffffffa;
  }
  if (param_1 == 0) {
    iVar4 = 0x753f;
    param_1 = 0;
  }
  else {
    iVar1 = FUN_0047c170(param_1);
    if (iVar1 == 0) {
      return 0xfffffffa;
    }
    param_1 = 1;
  }
  if (param_2 == 0x12e) {
    uVar5 = 0x1c3;
    uVar7 = 0x1c4;
  }
  else if (param_2 == 0x15a) {
    uVar5 = 0x1c5;
    uVar7 = 0x1c6;
  }
  else {
    if (param_2 == 0x7626) {
      if ((*(uint *)(iVar6 + 0x18 + *(int *)(param_4 + 0x8dc)) & 0x100) == 0) {
        uVar5 = 0x1c7;
        uVar7 = 0x1c8;
        pcVar3 = s_r__005c3318;
      }
      else {
        uVar5 = 0x1c1;
        uVar7 = 0x1c2;
        pcVar3 = s_Y__005c3330;
      }
      goto LAB_00522281;
    }
    uVar2 = *(uint *)(iVar6 + 0x18 + *(int *)(param_4 + 0x8dc)) & 0x703;
    if (0x401 < uVar2) {
      if (uVar2 != 0x402) {
        return 0xfffffffa;
      }
      uVar5 = 0x1bd;
      uVar7 = 0x1be;
      pcVar3 = &DAT_005c3320;
      goto LAB_00522281;
    }
    if (uVar2 == 0x401) {
      uVar5 = 0x1bf;
      uVar7 = 0x1c0;
      pcVar3 = s_T__005c3328;
      goto LAB_00522281;
    }
    if (uVar2 != 0x100) {
      if (uVar2 != 0x200) {
        return 0xfffffffa;
      }
      uVar5 = 0x1c1;
      uVar7 = 0x1c2;
      pcVar3 = s_Y__005c3330;
      goto LAB_00522281;
    }
    uVar5 = 0x1bb;
    uVar7 = 0x1bc;
  }
  pcVar3 = s_X__005bed58;
LAB_00522281:
  FUN_00515ce0(local_44);
  FUN_005237c0(5);
  FUN_00525b40(3);
  FUN_005232d0(1,3);
  uVar5 = FUN_0052f6f0(uVar5,local_34);
  FUN_005233e0(uVar5);
  FUN_005232d0(1,4);
  uVar5 = FUN_0052f6f0(uVar7,local_34);
  FUN_005233e0(uVar5);
  do {
    uVar5 = FUN_005245e0(param_1,iVar4,5,&local_50,pcVar3);
    switch(uVar5) {
    case 0:
      if (param_2 == 0x7626) {
LAB_0052235d:
        *param_3 = local_50;
        param_3[1] = local_4c;
        param_3[2] = local_48;
        FUN_00523800(5);
        FUN_00515d00(local_44);
        return 0;
      }
      if ((*(uint *)(iVar6 + 0x18 + *(int *)(param_4 + 0x8dc)) & 0x300) == 0) {
        iVar4 = FUN_0050edc0(&local_50,param_4,param_5);
      }
      else {
        iVar4 = FUN_00520ab0(&local_50,param_4,param_5);
      }
      if (iVar4 == 0) goto LAB_0052235d;
      FUN_0052b240(8);
      iVar4 = 0x7545;
      param_1 = 0;
      break;
    case 0xfffffffa:
    case 0xfffffffe:
    case 0xffffffff:
      FUN_00523800(5);
      FUN_00515d00(local_44);
      return 0xfffffffe;
    }
  } while( true );
}

