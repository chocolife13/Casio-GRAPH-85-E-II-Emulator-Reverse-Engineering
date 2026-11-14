// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004a8d30
// entry: 004a8d30  size: 225


void FUN_004a8d30(int *param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined1 local_34 [52];
  
  FUN_00414240();
  iVar2 = 1;
  do {
    FUN_005232d0(1,iVar2);
    if (*param_1 == 0) {
      FUN_0050af00(iVar2);
    }
    else {
      FUN_0052f6f0(*param_1,local_34);
      iVar1 = *param_1;
      if (iVar1 == 0x229) {
        if (DAT_005d6504 == '\0') {
          pcVar3 = (char *)&PTR_LAB_005c05b8;
        }
        else {
          pcVar3 = &DAT_005c05b0;
        }
LAB_004a8ddc:
        FUN_004b6e70(local_34,pcVar3);
      }
      else {
        if (iVar1 == 0x22a) {
          if (DAT_005d6505 == '\x01') {
            pcVar3 = &DAT_005bf310;
          }
          else {
            pcVar3 = &DAT_005bf30c;
          }
          goto LAB_004a8ddc;
        }
        if (iVar1 == 0x22b) {
          if (DAT_005d67d8 == '\x02') {
            pcVar3 = &DAT_005c05c8;
          }
          else if (DAT_005d67d8 == '\0') {
            pcVar3 = &DAT_005c05c4;
          }
          else {
            pcVar3 = s_Memory_005c05bc;
          }
          goto LAB_004a8ddc;
        }
      }
      FUN_005233e0(local_34);
    }
    iVar2 = iVar2 + 1;
    param_1 = param_1 + 1;
    if (7 < iVar2) {
      FUN_0040ae30();
      return;
    }
  } while( true );
}

