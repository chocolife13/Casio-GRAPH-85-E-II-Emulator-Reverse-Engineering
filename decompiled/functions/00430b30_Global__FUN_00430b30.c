// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00430b30
// entry: 00430b30  size: 271


int FUN_00430b30(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined1 local_18 [24];
  
  FUN_005237c0(5);
  FUN_00525b40(4);
  FUN_005232d0(3,2);
  FUN_00523470(s_Select_005be894,0x13);
  FUN_005232d0(3,3);
  if (param_1 == 0) {
    FUN_00523470(s_Display_Figure_005be860,0x13);
    pcVar3 = s_Fig_1_16___005be850;
  }
  else {
    if (param_1 != 1) goto LAB_00430ba9;
    FUN_00523470(s_Digits_Space_005be884,0x13);
    pcVar3 = s_Space_3_16___005be874;
  }
  FUN_004b6ef0(local_18,pcVar3);
LAB_00430ba9:
  FUN_005232d0(3,4);
  FUN_00523470(&DAT_005cd010,0x13);
  FUN_005232d0(3,5);
  FUN_00523470(local_18,0x13);
  local_18[0] = 0;
  while( true ) {
    iVar1 = FUN_00523ca0(local_18,0x11,5);
    if (iVar1 != 0) break;
    iVar2 = FUN_0055401d(local_18);
    *param_2 = iVar2;
    if (iVar2 < 0x11) {
      if ((param_1 != 1) || (2 < iVar2)) break;
      FUN_0052b240(8);
    }
    else {
      FUN_0052b240(8);
    }
  }
  FUN_00523800(5);
  return iVar1;
}

