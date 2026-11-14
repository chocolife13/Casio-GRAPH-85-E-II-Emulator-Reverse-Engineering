// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0052eb10
// entry: 0052eb10  size: 287


undefined4 FUN_0052eb10(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int local_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 local_84 [132];
  
  uVar1 = FUN_00526410();
  FUN_00526420(0xe7);
  FUN_005234d0(&local_94);
  FUN_00523740();
  uVar4 = 1;
  if ((param_1 < 1) || ((2 < param_1 && (param_1 != 0x11)))) {
LAB_0052eb82:
    iVar2 = FUN_00515e10(local_84);
    if (iVar2 != 0) {
      iVar2 = FUN_00515f70(1);
      if (iVar2 != 0) goto LAB_0052ebd6;
      FUN_00515e10(local_84);
    }
    while( true ) {
      uVar3 = FUN_0052ec30(param_1);
      if ((uVar3 & 1) == 0) {
        FUN_00515dd0();
        uVar4 = 0;
      }
      if ((uVar3 & 2) == 0) break;
      param_1 = 2 - (uint)((uVar3 & 4) != 0);
    }
  }
  else {
    iVar2 = FUN_00515ec0(local_84);
    if (iVar2 == 0) goto LAB_0052eb82;
    iVar2 = FUN_00515f70(0);
    if (iVar2 == 0) {
      FUN_00515ec0(local_84);
      goto LAB_0052eb82;
    }
LAB_0052ebd6:
    FUN_0052b240(4);
    uVar3 = 0;
  }
  if ((uVar3 & 1) == 0) {
    FUN_00515dd0();
    uVar4 = 0;
  }
  FUN_005232d0(uStack_90,uStack_8c);
  if (local_94 == -1) {
    FUN_00523740();
  }
  else {
    FUN_00527030();
  }
  FUN_00526440();
  FUN_00526420(uVar1);
  return uVar4;
}

