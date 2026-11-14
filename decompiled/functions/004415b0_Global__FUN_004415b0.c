// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004415b0
// entry: 004415b0  size: 433


void FUN_004415b0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint local_4c;
  int local_48;
  undefined1 local_44 [4];
  undefined1 local_40 [12];
  undefined1 local_34 [52];
  
  FUN_00526440();
  FUN_00526420(8);
  uVar1 = FUN_00526410();
  FUN_00526420(199);
  FUN_00538a00(local_40);
  FUN_0053c690(2);
  FUN_00538980(0,0,local_44);
  puVar3 = &DAT_0057f750;
  puVar4 = &DAT_005ce4b0;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  FUN_00538860(0,&DAT_005ce4b0);
  FUN_005387f0(0);
  do {
    while( true ) {
      do {
        iVar2 = 0;
        do {
          FUN_005232d0(1,iVar2);
          FUN_00523470(&DAT_0057f5b4,0x15);
          iVar2 = iVar2 + 1;
        } while (iVar2 < 8);
        FUN_005232d0(1,1);
        FUN_0052f6f0(0xb4,local_34);
        FUN_00523470(local_34,0x15);
        FUN_005232d0(1,4);
        FUN_005233e0(&DAT_0057f5b8);
        FUN_005232d0(1,5);
        FUN_005233e0(&DAT_0057f5c8);
        FUN_005232d0(1,6);
        FUN_005233e0(&DAT_0057f5e0);
        FUN_00538b30();
        iVar2 = FUN_00526620(&local_4c);
      } while (iVar2 != 0);
      if (local_4c < 0x7533) break;
      if (local_4c == 0x754d) {
LAB_00441733:
        *param_2 = 1;
        goto LAB_00441739;
      }
      if (local_4c == 0x754e) {
        FUN_0052eb10(0);
      }
      else if ((local_4c == 0x7555) && (FUN_0052d2d0(s__RECUR_005be280,&local_48), local_48 == 1)) {
        FUN_00518200();
      }
    }
    if (local_4c == 0x7532) goto LAB_00441733;
    if (local_4c == 1) {
      *param_1 = 0;
      goto LAB_00441739;
    }
    if (local_4c == 2) {
      *param_1 = 1;
      goto LAB_00441739;
    }
  } while (local_4c != 3);
  *param_1 = 2;
LAB_00441739:
  FUN_00538a50(local_40);
  FUN_005389c0(0,0,local_44);
  FUN_00526420(uVar1);
  return;
}

