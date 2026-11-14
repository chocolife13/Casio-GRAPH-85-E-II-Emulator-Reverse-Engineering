// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004a80c0
// entry: 004a80c0  size: 308


void FUN_004a80c0(int param_1)

{
  int iVar1;
  int local_34;
  undefined1 local_30 [16];
  undefined1 local_20 [24];
  undefined1 local_8 [8];
  
  FUN_005234d0(local_30);
  FUN_00525b70(param_1);
  FUN_004a7fb0(local_20);
  if (param_1 == 1) {
    FUN_005232d0(8,4);
    FUN_005233e0(s_Bonjur__005c03e0);
  }
  else if (param_1 == 2) {
    FUN_005232d0(3,3);
    FUN_005233e0(s_Soyez_les_005c03d4);
    FUN_005232d0(3,4);
    FUN_005233e0(&DAT_005c03c0);
  }
  else {
    if (param_1 == 3) {
      FUN_005232d0(3,4);
      FUN_005233e0(s__0_9999___005c03b4);
      iVar1 = FUN_00523c80(local_8,0xc,4,4);
      if (iVar1 == 0) {
        iVar1 = FUN_004a8040(local_20);
        if (iVar1 != 1) {
          FUN_0052b240(4);
        }
      }
      goto LAB_004a8121;
    }
    if (param_1 == 4) {
      FUN_004a8200();
    }
    else {
      if (param_1 == 5) {
        FUN_004a8270();
        goto LAB_004a8121;
      }
      if (param_1 == 6) {
        FUN_004a84f0(local_20);
        goto LAB_004a8121;
      }
    }
  }
  do {
    do {
      iVar1 = FUN_00526620(&local_34);
    } while (iVar1 != 0);
  } while ((local_34 != 0x7532) && (local_34 != 0x754d));
LAB_004a8121:
  FUN_00525bc0();
  FUN_00523630(local_30);
  return;
}

