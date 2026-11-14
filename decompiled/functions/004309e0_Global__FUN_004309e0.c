// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004309e0
// entry: 004309e0  size: 330


int FUN_004309e0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  undefined1 local_4c [8];
  int local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined1 local_34 [52];
  
  FUN_005234d0(&local_44);
  FUN_00523740();
  FUN_005237c0(5);
  FUN_00525b40(4);
  FUN_005232d0(3,2);
  FUN_00523470(s_Display_Figure_005be840,0x13);
  FUN_004b6ef0(local_34,s_Now__005be838);
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 == 0) {
    pcVar4 = s_Automatic_005be814;
  }
  else {
    if (iVar2 != 1) {
      uVar1 = FUN_0055c2fe(iVar2,local_4c,10);
      FUN_004b6e70(local_34,uVar1);
      FUN_004b6e70(local_34,s_Figures_005be82c);
      goto LAB_00430a84;
    }
    pcVar4 = s_1_Figure_005be820;
  }
  FUN_004b6e70(local_34,pcVar4);
LAB_00430a84:
  FUN_005232d0(3,3);
  FUN_00523470(local_34,0x13);
  FUN_005232d0(3,5);
  FUN_00523470(s__Auto_0_1_16_>_005be804,0x13);
  local_34[0] = 0;
  do {
    iVar2 = FUN_00523ca0(local_34,0x12,5);
    if (iVar2 != 0) {
LAB_00430aee:
      FUN_00523800(5);
      FUN_005232d0(local_40,local_3c);
      if (local_44 != -1) {
        FUN_00527030();
        return iVar2;
      }
      FUN_00523740();
      return iVar2;
    }
    iVar3 = FUN_0055401d(local_34);
    if (iVar3 < 0x11) {
      *(int *)(param_1 + 8) = iVar3;
      goto LAB_00430aee;
    }
    FUN_0052b240(8);
  } while( true );
}

