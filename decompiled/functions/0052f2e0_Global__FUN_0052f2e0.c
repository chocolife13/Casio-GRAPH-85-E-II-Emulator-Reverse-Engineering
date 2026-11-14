// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0052f2e0
// entry: 0052f2e0  size: 409


void FUN_0052f2e0(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char *local_98;
  undefined1 local_94 [12];
  undefined1 local_88 [24];
  undefined1 local_70 [60];
  undefined1 local_34 [52];
  
  iVar5 = param_3 + -0xc + param_1 * 0xc;
  local_98 = "Xmin  :" + param_4 * 0xc;
  iVar4 = 2;
  iVar6 = iVar5 + 0x54;
  do {
    FUN_005232d0(1,iVar4);
    FUN_004b71f0(local_70,local_98,0x30);
    if (param_4 + -2 + iVar4 == 3) {
      iVar2 = FUN_004ab6a0(s__TABLE_005be208);
      if ((iVar2 == 1) || (iVar2 = FUN_004ab6a0(s__RECUR_005be280), iVar2 == 1)) {
        cVar1 = FUN_00526090(0x31);
        if (cVar1 != '\0') goto LAB_0052f3f9;
      }
      else if ((param_5 < 1) ||
              ((2 < param_5 && ((param_5 != 0x11 || (cVar1 = FUN_00526090(0x22), cVar1 == '\x03'))))
              )) goto LAB_0052f3f9;
      uVar3 = FUN_004e5780(local_94,local_88);
      FUN_004e4120(iVar6,uVar3);
    }
    else {
LAB_0052f3f9:
      uVar3 = FUN_004e5780(local_94,local_88);
      FUN_004e4120(iVar5,uVar3);
    }
    iVar6 = iVar6 + 0xc;
    iVar5 = iVar5 + 0xc;
    uVar3 = FUN_004b22b0(local_88,local_34);
    FUN_004b6e70(local_70,uVar3);
    if (param_1 + -2 + iVar4 == param_2) {
      FUN_00523490(local_70);
    }
    else {
      FUN_00523470(local_70,0x15);
    }
    iVar4 = iVar4 + 1;
    local_98 = local_98 + 0xc;
    if (7 < iVar4) {
      return;
    }
  } while( true );
}

