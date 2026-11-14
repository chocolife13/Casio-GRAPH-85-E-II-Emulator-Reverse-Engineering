// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0043c520
// entry: 0043c520  size: 773


void FUN_0043c520(int *param_1,int param_2,undefined4 *param_3,undefined4 *param_4)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  byte *pbVar4;
  undefined3 extraout_var;
  int iVar5;
  undefined3 uVar6;
  undefined4 unaff_EBX;
  undefined4 uVar7;
  byte local_10c;
  byte bStack_10b;
  undefined4 local_104;
  byte abStack_100 [256];
  
  bVar2 = false;
  uVar7 = CONCAT31((int3)((uint)unaff_EBX >> 8),1);
  while( true ) {
    iVar3 = *param_1;
    if (iVar3 == 31000) {
      FUN_00523740();
      FUN_005237c0(5);
      iVar3 = 0xf;
      if ((char)uVar7 < '\x10') {
        iVar3 = (int)(char)uVar7;
      }
      iVar3 = FUN_0052ab40(iVar3);
      if (iVar3 == -5) {
        bVar2 = true;
      }
      else if (iVar3 == -4) {
        *param_4 = 1;
        *param_3 = 0;
        *param_1 = 0x791f;
      }
      else if (iVar3 == -3) {
        *param_4 = 1;
        *param_3 = 0;
        *param_1 = 0x7919;
      }
      else {
        *param_4 = 0;
      }
      FUN_00523800(5);
      if (*(int *)(param_2 + 0x34) != 1) {
        FUN_005232d0(*(undefined4 *)(param_2 + 0x18),*(undefined4 *)(param_2 + 0x1c));
        FUN_00527030();
      }
      if (bVar2) {
        FUN_00527030();
        FUN_00438c70(0xf91b,param_2);
      }
      return;
    }
    if (iVar3 != 0x7919) break;
    if (*(int *)(param_2 + 0x34) == 1) goto LAB_0043c712;
    FUN_00523740();
    iVar3 = FUN_0052ad00(&local_104);
    if (iVar3 != 0) {
      *param_4 = 0;
      FUN_00527030();
      return;
    }
    iVar3 = FUN_004b7d00(local_104,*(undefined4 *)(param_2 + 0x2dc));
    if (((iVar3 != 0) && (iVar3 != 1)) && (iVar3 != 2)) {
      FUN_0052b240(4);
      FUN_005232d0(*(undefined4 *)(param_2 + 0x18),*(undefined4 *)(param_2 + 0x1c));
      FUN_00527030();
      return;
    }
    uVar7 = CONCAT31((int3)((uint)param_2 >> 8),(undefined1)local_104);
    *param_4 = 1;
    *param_3 = 0;
    *param_1 = 31000;
  }
  if (iVar3 != 0x791f) {
    return;
  }
  iVar3 = FUN_0052ad90(&local_104);
  if (iVar3 != 0) {
    *param_4 = 0;
    return;
  }
  pbVar4 = (byte *)FUN_004b7ca0(local_104);
  if (pbVar4 == (byte *)0x0) {
    *param_4 = 0;
    return;
  }
  thunk_FUN_0040add0();
  iVar3 = 0;
  uVar6 = extraout_var;
  do {
    if (*pbVar4 == 0) {
      *param_4 = 0;
      break;
    }
    iVar5 = FUN_004b7370(CONCAT31(uVar6,*pbVar4));
    if (iVar5 != 0) {
      bVar1 = *pbVar4;
      pbVar4 = pbVar4 + 1;
      abStack_100[iVar3] = bVar1;
      iVar3 = iVar3 + 1;
    }
    bVar1 = *pbVar4;
    uVar6 = (undefined3)((uint)iVar5 >> 8);
    pbVar4 = pbVar4 + 1;
    abStack_100[iVar3] = bVar1;
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0xff);
  abStack_100[iVar3] = 0;
  *(undefined4 *)(param_2 + 0x40) = 1;
  FUN_0052f840();
  iVar3 = 0;
  do {
    bStack_10b = abStack_100[iVar3];
    uVar7 = CONCAT31((int3)((uint)uVar7 >> 8),bStack_10b);
    iVar5 = FUN_004b7370(uVar7);
    if (iVar5 == 0) {
      if (bStack_10b == 0) {
        *param_4 = 0;
        break;
      }
      local_10c = bStack_10b;
      bStack_10b = 0;
    }
    else {
      local_10c = abStack_100[iVar3 + 1];
      iVar3 = iVar3 + 1;
    }
    FUN_00438c70((uint)bStack_10b << 8 | CONCAT11(bStack_10b,local_10c) & 0xff,param_2);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0xff);
  *(undefined4 *)(param_2 + 0x40) = 0;
  FUN_0052f880();
  iVar3 = 0;
  iVar5 = param_2 + 0x60;
  do {
    iVar3 = iVar3 + 1;
    FUN_005232d0(1,iVar3);
    FUN_00523470(iVar5,0x15);
    iVar5 = iVar5 + 0x2a;
  } while (iVar3 < 7);
  FUN_005232d0(*(undefined4 *)(param_2 + 0x18),*(undefined4 *)(param_2 + 0x1c));
  FUN_00527030();
LAB_0043c712:
  *param_4 = 0;
  return;
}

