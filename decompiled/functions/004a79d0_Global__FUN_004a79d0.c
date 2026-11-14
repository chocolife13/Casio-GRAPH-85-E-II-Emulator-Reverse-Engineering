// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004a79d0
// entry: 004a79d0  size: 647


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004a79d0(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_60;
  int local_5c;
  undefined4 local_58;
  undefined1 local_54 [4];
  undefined4 local_50;
  undefined4 local_4c;
  undefined1 local_48;
  undefined1 local_47;
  int local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined1 local_34 [52];
  
  FUN_005234d0(&local_44);
  uVar1 = FUN_00526410();
  FUN_00526420(0xf7);
  FUN_00538980(0,0,local_54);
  _DAT_005d0128 = DAT_00585978;
  _DAT_005d012c = DAT_0058597c;
  FUN_00538860(0,&DAT_005d0128);
  FUN_005387f0(0);
  local_50 = DAT_005d67f0;
  local_4c = DAT_005d67f4;
  local_48 = DAT_005d67f8;
  local_47 = 0;
  local_58 = 0;
  local_60 = 0;
  FUN_00414240();
  FUN_005232d0(1,1);
  uVar2 = FUN_0052f6f0(0x289,local_34);
  FUN_005233e0(uVar2);
  FUN_005232d0(1,2);
  FUN_00523470(&DAT_005bec50,0x15);
  FUN_005232d0(2,2);
  FUN_005262e0(0x84);
  FUN_00527030();
  FUN_005252d0(&local_50,0,0,2,2,9);
  do {
    while( true ) {
      FUN_00538b30();
      iVar3 = FUN_00526620(&local_5c);
      if (iVar3 == 0) break;
      iVar3 = FUN_00450420(local_5c);
      if (iVar3 != 0) {
        local_58 = FUN_005254d0(&local_50,8,local_58,local_5c);
        local_60 = FUN_005252d0(&local_50,local_60,local_58,2,2,9);
      }
    }
    switch(local_5c) {
    case 0x7531:
      local_5c = FUN_00526040();
      local_58 = FUN_005254d0(&local_50,8,local_58,local_5c);
      local_60 = FUN_005252d0(&local_50,local_60,local_58,2,2,9);
      break;
    case 0x7532:
      uVar2 = 0xfffffffe;
LAB_004a7c11:
      FUN_00538810();
      FUN_005389c0(0,0,local_54);
      FUN_00526440();
      FUN_00526420(uVar1);
      FUN_005232d0(local_40,local_3c);
      if (local_44 == -1) {
        FUN_00523740();
      }
      return uVar2;
    case 0x7534:
      DAT_005d67f0 = local_50;
      DAT_005d67f4 = local_4c;
      DAT_005d67f8 = local_48;
      uVar2 = 0;
      goto LAB_004a7c11;
    case 0x753f:
    case 0x7544:
    case 0x7545:
    case 0x7549:
      FUN_00524a50(&local_50,8,&local_60,&local_58,&local_5c,2,2);
      local_60 = FUN_005252d0(&local_50,local_60,local_58,2,2,9);
      if (local_5c == 0x753f) {
        FUN_005262e0(0x84);
        FUN_00527030();
      }
      break;
    case 0x754d:
      uVar2 = 0xffffffff;
      goto LAB_004a7c11;
    }
  } while( true );
}

