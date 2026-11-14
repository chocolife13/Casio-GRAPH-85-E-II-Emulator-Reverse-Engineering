// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00523b00
// entry: 00523b00  size: 330


/* WARNING: Type propagation algorithm not settling */

undefined4
FUN_00523b00(undefined4 param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  uint local_50 [3];
  int local_44;
  undefined4 local_40;
  undefined4 local_3c;
  char local_34 [52];
  
  local_50[2] = FUN_00526410();
  FUN_00526430(0x90);
  FUN_005234d0(&local_44);
  local_50[1] = 0;
  FUN_004b7750(local_34,param_1);
  do {
    FUN_005252d0(local_34,0,param_5,param_2,param_3,param_2 + -1 + param_4);
switchD_00523bbe_caseD_7533:
    iVar1 = FUN_00526620(local_50);
    if (iVar1 == 0) {
      switch(local_50[0]) {
      case 0x7532:
        uVar2 = 0xfffffffe;
        break;
      default:
        goto switchD_00523bbe_caseD_7533;
      case 0x7534:
        if (local_34[0] == '\0') goto switchD_00523bbe_caseD_7533;
        FUN_004b7750(param_1,local_34);
        uVar2 = 0;
        break;
      case 0x753f:
      case 0x7544:
      case 0x7545:
      case 0x7549:
        FUN_00524a50(local_34,param_4,local_50 + 1,&param_5,local_50,param_2,param_3);
        goto switchD_00523bbe_caseD_7533;
      case 0x754d:
        uVar2 = 0xffffffff;
      }
      FUN_005232d0(local_40,local_3c);
      if (local_44 == -1) {
        FUN_00523740();
      }
      FUN_00526420(local_50[2]);
      return uVar2;
    }
    if ((local_50[0] < 0x30) || (0x39 < local_50[0])) goto switchD_00523bbe_caseD_7533;
    param_5 = FUN_005254d0(local_34,param_4,param_5,local_50[0]);
  } while( true );
}

