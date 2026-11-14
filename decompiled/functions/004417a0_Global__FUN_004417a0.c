// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004417a0
// entry: 004417a0  size: 732


void FUN_004417a0(undefined4 param_1,int param_2,int param_3,int *param_4,undefined4 param_5,
                 undefined4 *param_6)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined *puVar9;
  undefined4 uVar10;
  undefined4 local_138;
  undefined1 local_134 [52];
  undefined1 local_100 [256];
  
  local_138 = 0;
  FUN_0052f6f0(0x130,param_1);
  FUN_005232d0(1,1);
  FUN_00523470(param_1,0x15);
  iVar4 = 0;
  do {
    iVar7 = iVar4;
    iVar6 = 3;
    if (iVar7 == 0) {
      puVar8 = &DAT_005beb58;
LAB_00441811:
      FUN_004b6ef0(local_134,puVar8);
    }
    else {
      if (iVar7 == 1) {
        puVar8 = (undefined4 *)&DAT_005beb5c;
        goto LAB_00441811;
      }
      if (iVar7 == 2) {
        puVar8 = (undefined4 *)&DAT_005beb60;
        goto LAB_00441811;
      }
    }
    uVar1 = FUN_00526090(0x30);
    switch(uVar1) {
    case 0:
      *param_6 = 0;
      iVar6 = 6;
      local_138 = 1;
      break;
    case 1:
    case 2:
      puVar9 = &DAT_005beb50;
      *param_6 = 1;
      goto LAB_00441869;
    case 3:
    case 4:
      puVar9 = &DAT_005beb48;
      *param_6 = 2;
LAB_00441869:
      FUN_004b6e70(local_134,puVar9);
      iVar6 = 8;
    }
    if ((param_3 == 0) || (iVar7 + 1 != param_2)) {
      iVar4 = iVar7 + 1;
      iVar3 = FUN_005184f0(iVar4);
      if (iVar3 == 0) {
        FUN_004b6e70(local_134,&DAT_005be9dc);
      }
      else {
        cVar2 = FUN_00518560(iVar4);
        if (cVar2 == '\x01') {
          FUN_004b6e70(local_134,&DAT_005beb44);
          FUN_00518520(iVar4,local_100);
          if (local_138 == 1) {
            puVar5 = local_134 + iVar6 + -1;
            iVar4 = 0x16 - iVar6;
          }
          else {
            puVar5 = local_134 + iVar6 + 1;
            iVar4 = 0x14 - iVar6;
          }
        }
        else {
          FUN_004b6e70(local_134,&DAT_005be9e0);
          FUN_00518520(iVar4,local_100);
          if (local_138 == 1) {
            puVar5 = (undefined1 *)((int)&local_138 + 2);
            iVar4 = 0x17 - iVar6;
          }
          else {
            puVar5 = local_134;
            iVar4 = 0x15 - iVar6;
          }
          puVar5 = puVar5 + iVar6;
        }
        FUN_004b7b40(local_100,puVar5,iVar4);
      }
    }
    else {
      FUN_004b6e70(local_134,&DAT_005be9e0);
      FUN_004b7b40(param_1,local_134 + iVar6,0x15 - iVar6);
    }
    iVar4 = iVar7 + 1;
    FUN_005232d0(1,iVar7 + 2);
    *param_4 = iVar6 + -2;
    if ((iVar4 == param_2) && (param_3 == 0)) {
      FUN_00523490(local_134,0x11);
      uVar10 = 1;
LAB_00441a04:
      uVar1 = FUN_00518540(iVar4,uVar10);
      FUN_0052a070(uVar1);
    }
    else if (iVar4 == param_2) {
      if (param_3 == 0) {
LAB_004419f3:
        FUN_00523470(local_134,0x11);
        uVar10 = 0;
        goto LAB_00441a04;
      }
      local_134[iVar6] = 0;
      FUN_005233e0(local_134);
    }
    else if (param_3 == 0) goto LAB_004419f3;
    if (2 < iVar4) {
      if (iVar4 < 6) {
        iVar7 = iVar7 + 3;
        do {
          FUN_005232d0(1,iVar7);
          FUN_00523470(0,0x15);
          iVar7 = iVar7 + 1;
        } while (iVar7 < 8);
      }
      if (param_3 != 0) {
        FUN_005232d0(param_5,param_2 + 1);
        FUN_00527030();
      }
      return;
    }
  } while( true );
}

