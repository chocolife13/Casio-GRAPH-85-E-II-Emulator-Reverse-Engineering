// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0052ab40
// entry: 0052ab40  size: 280


undefined4 FUN_0052ab40(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  uint local_48;
  int local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined1 local_34 [52];
  
  FUN_005234d0(&local_44);
  uVar1 = FUN_00523790(6);
  FUN_00538350(uVar1);
  FUN_00523740();
  FUN_005232d0(1,1);
  uVar1 = FUN_0052f6f0(0x1b3,local_34);
  FUN_005233e0(uVar1);
switchD_0052abbb_caseD_7533:
  do {
    while( true ) {
      do {
        FUN_0052a9c0(param_1);
        iVar2 = FUN_00526620(&local_48);
      } while (iVar2 != 0);
      if (0x7542 < local_48) break;
      if (local_48 == 0x7542) {
        param_1 = param_1 + -1;
        if (param_1 < 1) {
          param_1 = 0xf;
        }
      }
      else {
        switch(local_48) {
        case 0x7532:
          uVar1 = 0xfffffffe;
          goto LAB_0052ac1a;
        case 0x7539:
switchD_0052abbb_caseD_7539:
          uVar1 = 0xfffffffd;
          goto LAB_0052ac1a;
        case 0x753a:
          goto switchD_0052abbb_caseD_753a;
        case 0x753b:
          uVar1 = 0xfffffffb;
          goto LAB_0052ac1a;
        }
      }
    }
    if (local_48 < 0x791a) {
      if (local_48 == 0x7919) goto switchD_0052abbb_caseD_7539;
      if (local_48 == 0x7547) {
        param_1 = param_1 + 1;
        if (0xf < param_1) {
          param_1 = 1;
        }
      }
      else if (local_48 == 0x754d) {
        uVar1 = 0xffffffff;
        goto LAB_0052ac1a;
      }
      goto switchD_0052abbb_caseD_7533;
    }
    if (local_48 == 0x791f) {
switchD_0052abbb_caseD_753a:
      uVar1 = 0xfffffffc;
LAB_0052ac1a:
      FUN_005232d0(local_40,local_3c);
      if (local_44 == -1) {
        FUN_00523740();
      }
      else {
        FUN_00527030();
      }
      uVar3 = FUN_00523790(6);
      FUN_00538370(uVar3);
      return uVar1;
    }
  } while( true );
}

