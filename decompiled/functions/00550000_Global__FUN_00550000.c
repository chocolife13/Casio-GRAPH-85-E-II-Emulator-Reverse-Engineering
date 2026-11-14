// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00550000
// entry: 00550000  size: 825


undefined4 FUN_00550000(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 local_6c;
  undefined4 local_68;
  int local_64;
  undefined4 local_60;
  char local_5c [12];
  undefined1 local_50 [12];
  int local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined1 local_34 [52];
  
  FUN_005234d0(&local_44);
  FUN_00523740();
  local_60 = FUN_00526410();
  FUN_00526420(0xf7);
  FUN_00414240();
  FUN_005232d0(1,1);
  FUN_0052f6f0(0x270,local_34);
  FUN_00523470(local_34,0x15);
  FUN_005232d0(1,2);
  FUN_00523470(&DAT_005bec50,0x15);
  FUN_005232d0(2,2);
  FUN_005262e0(0x84);
  FUN_00527030();
  FUN_005387c0();
  local_5c[0] = '\0';
  local_6c = 0;
  local_68 = 0;
  do {
    while( true ) {
      FUN_005252d0(local_5c,local_68,local_6c,2,2,9);
      uVar1 = FUN_0040ad00();
      iVar2 = FUN_00526620(&local_64);
      if (iVar2 == 0) break;
      iVar2 = FUN_00450420(local_64);
      if (iVar2 != 0) {
        local_6c = FUN_005254d0(local_5c,8,local_6c,local_64);
        FUN_00527030();
        local_68 = FUN_005252d0(local_5c,local_68,local_6c,2,2,9);
      }
    }
    switch(local_64) {
    case 0x7531:
      local_64 = FUN_00526040();
      local_6c = FUN_005254d0(local_5c,8,local_6c,local_64);
      FUN_00527030();
      local_68 = FUN_005252d0(local_5c,local_68,local_6c,2,2,9);
      break;
    case 0x7532:
switchD_00550143_caseD_7532:
      uVar1 = 0xfffffffe;
LAB_00550301:
      FUN_00538810();
      FUN_00526420(local_60);
      FUN_005232d0(local_40,local_3c);
      if (local_44 == -1) {
        FUN_00523740();
      }
      return uVar1;
    case 0x7534:
      if (local_5c[0] == '\0') {
        FUN_005262e0(uVar1);
        break;
      }
      iVar2 = 0;
      if (param_2 == 0) {
        FUN_00485e40(local_50);
        iVar3 = FUN_00485ef0(local_5c);
        if (iVar3 == 0) {
          iVar2 = 4;
        }
        iVar3 = FUN_00485d90(local_5c);
        if (iVar3 == 0) {
          iVar2 = 4;
          FUN_00485ef0(local_50);
        }
        FUN_004b7750(param_1,local_5c);
        if (iVar2 != 0) {
          FUN_0052b240(iVar2);
          break;
        }
      }
      else {
        if (param_2 != 1) break;
        FUN_004b7750(param_1,local_5c);
        iVar2 = FUN_00485d30(local_5c);
        if ((iVar2 != 1) && (iVar2 = FUN_0054fe60(local_5c), iVar2 != 0)) break;
        FUN_00485e40(local_50);
        iVar2 = FUN_00485ef0(local_5c);
        if ((iVar2 == 0) || (iVar2 = FUN_00546a00(local_5c,local_50), iVar2 != 0)) {
          FUN_0052b240(4);
          goto switchD_00550143_caseD_7532;
        }
      }
      uVar1 = 0;
      goto LAB_00550301;
    case 0x753f:
    case 0x7544:
    case 0x7545:
    case 0x7549:
      FUN_00524a50(local_5c,8,&local_68,&local_6c,&local_64,2,2);
      FUN_00527030();
      local_68 = FUN_005252d0(local_5c,local_68,local_6c,2,2,9);
      if (local_64 == 0x753f) {
        FUN_005262e0(0x84);
      }
      break;
    case 0x754d:
      uVar1 = 0xffffffff;
      goto LAB_00550301;
    }
  } while( true );
}

