// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0047e790
// entry: 0047e790  size: 749


int FUN_0047e790(int param_1,int param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int local_54;
  int local_50;
  undefined1 local_4c [4];
  undefined1 local_48 [12];
  undefined1 local_3c [12];
  undefined1 local_30 [12];
  undefined1 local_24 [12];
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  iVar5 = 0;
  local_50 = 0;
  switch(*(undefined2 *)(param_2 + 2)) {
  case 7:
    local_50 = FUN_00481110(param_1,local_3c,local_30);
    break;
  default:
    goto switchD_0047e7b5_caseD_8;
  case 0xd:
    FUN_00483e70(0xff,param_1 * 10,5,local_c);
  case 0xc:
  case 0x11:
    FUN_00483e70(0xff,param_1 * 10,4,local_18);
  case 0xb:
  case 0x12:
    FUN_00483e70(0xff,param_1 * 10,3,local_24);
  case 9:
  case 10:
  case 0xe:
  case 0xf:
  case 0x10:
    FUN_00483e70(0xff,param_1 * 10,1,local_3c);
    FUN_00483e70(0xff,param_1 * 10,2,local_30);
    local_50 = FUN_00481e10((int)*(short *)(param_2 + 2),(int)*(short *)(param_2 + 4),
                            (int)*(short *)(param_2 + 6),(int)*(short *)(param_2 + 8));
  }
  if (local_50 != 0) {
switchD_0047e7b5_caseD_8:
    return local_50;
  }
  if (param_4 == 1) {
    iVar5 = 0x75;
  }
  else if (param_4 == 2) {
    iVar5 = 0xb;
    local_54 = 1;
    goto LAB_0047e8a6;
  }
  local_54 = 0x80;
LAB_0047e8a6:
  uVar1 = FUN_00482a30((int)*(short *)(param_2 + 2),local_3c,param_3,iVar5,local_48);
  FUN_00414db0(local_4c);
  thunk_FUN_0040add0();
  FUN_0052f840();
  iVar2 = FUN_0047e750(local_48,uVar1);
  iVar3 = FUN_0052f820();
  do {
    if (iVar3 == 1) {
      return 1;
    }
    iVar6 = iVar5 + 1;
    if (param_4 == 2) {
      iVar6 = iVar5 + -1;
    }
    uVar4 = FUN_00482a30((int)*(short *)(param_2 + 2),local_3c,param_3,iVar6,local_48);
    iVar3 = FUN_0047e750(local_48,uVar4);
    if (iVar3 == 0) {
      switch(iVar2) {
      case 0:
        FUN_0050f940(iVar5,uVar1,iVar6,uVar4,param_3,2,*(undefined1 *)(param_3 + 0x8e2));
        break;
      case 1:
        FUN_0050f990(iVar6,uVar4,param_3,0x20,*(undefined1 *)(param_3 + 0x8e2));
        break;
      case 2:
        FUN_0050f940(iVar5,0xffffffc0,iVar6,uVar4,param_3,2,*(undefined1 *)(param_3 + 0x8e2));
        break;
      case 3:
        FUN_0050f940(iVar5,0x8a,iVar6,uVar4,param_3,2,*(undefined1 *)(param_3 + 0x8e2));
      }
    }
    else if (iVar3 == 2) {
      if (iVar2 == 0) {
        FUN_0050f940(iVar5,uVar1,iVar6,0xffffffc1,param_3,2,*(undefined1 *)(param_3 + 0x8e2));
      }
    }
    else if ((iVar3 == 3) && (iVar2 == 0)) {
      FUN_0050f940(iVar5,uVar1,iVar6,0x7f,param_3,2,*(undefined1 *)(param_3 + 0x8e2));
    }
    if (param_4 == 2) {
      if (iVar6 < local_54) goto LAB_0047ea64;
    }
    else if (local_54 < iVar6) {
LAB_0047ea64:
      FUN_00414db0(local_4c);
      return 0;
    }
    iVar2 = FUN_0047e750(local_48,uVar4);
    iVar3 = FUN_0052f820();
    uVar1 = uVar4;
    iVar5 = iVar6;
  } while( true );
}

