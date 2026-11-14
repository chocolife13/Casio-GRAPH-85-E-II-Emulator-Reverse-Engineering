// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00430f30
// entry: 00430f30  size: 222


int FUN_00430f30(int param_1,undefined4 param_2,uint *param_3)

{
  int iVar1;
  uint local_4;
  
  FUN_00523740();
  FUN_00431030(param_1,param_2);
switchD_00430fdc_caseD_7546:
  do {
    while( true ) {
      FUN_00538b30();
      iVar1 = FUN_00526620(&local_4);
      if (iVar1 != 0) {
        *param_3 = local_4;
        return iVar1;
      }
      if (local_4 < 0x7540) break;
      switch(local_4) {
      case 0x7544:
      case 0x7545:
      case 0x754d:
switchD_00430fdc_caseD_7544:
        *param_3 = local_4;
        return 0;
      case 0x7555:
        FUN_00430c40(param_1);
        FUN_00431030(param_1,param_2);
      }
    }
    if (local_4 == 0x753f) goto switchD_00430fdc_caseD_7544;
    if (local_4 < 0x7532) {
      if (local_4 == 0x7531) {
        *param_3 = 0x1a;
      }
      else if (local_4 != 0) {
        if (local_4 < 4) {
          *(uint *)(param_1 + 4) = local_4 - 1;
          FUN_00431030(param_1,param_2);
        }
        else if (local_4 == 4) {
          FUN_004309e0(param_1);
          FUN_00431030(param_1,param_2);
        }
      }
      goto switchD_00430fdc_caseD_7546;
    }
    if (local_4 == 0x7532) goto switchD_00430fdc_caseD_7544;
  } while( true );
}

