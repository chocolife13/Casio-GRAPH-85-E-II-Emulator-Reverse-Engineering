// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00519770
// entry: 00519770  size: 432


int FUN_00519770(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 local_28;
  int local_24;
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  uVar8 = 0;
  iVar9 = 0;
  piVar4 = (int *)(*(int *)(param_1 + 0x8dc) + 8);
  iVar2 = *piVar4;
  while (iVar2 != param_3) {
    piVar1 = piVar4 + 8;
    piVar4 = piVar4 + 8;
    iVar9 = iVar9 + 1;
    iVar2 = *piVar1;
  }
  if (param_3 == 1) {
    uVar8 = 0xc;
  }
  else if (param_3 == 2) {
    uVar8 = 0xd;
  }
  else if (param_3 == 3) {
    uVar8 = 0xe;
  }
  local_24 = iVar9;
  FUN_004426c0(uVar8,&local_18);
  FUN_004e5780(&local_c);
  iVar2 = param_1 + 0x800;
  uVar5 = FUN_004d52d0(&local_18,&local_28,iVar2,*(undefined1 *)(param_1 + 0x8e2));
  uVar6 = FUN_004d53c0(&local_c,&param_3,iVar2);
  bVar3 = true;
  FUN_0052f840();
  uVar5 = uVar5 | uVar6;
  if (0 < param_2) {
    do {
      if (bVar3) {
        iVar9 = FUN_0050f060(&local_18,&local_c,param_1,iVar9,1);
        if (iVar9 != 0) {
          return iVar9;
        }
        bVar3 = false;
      }
      else {
        local_18 = local_c;
        local_14 = local_8;
        local_10 = local_4;
        bVar3 = true;
      }
      iVar9 = FUN_004e4020(&local_18);
      if (iVar9 != 0) {
        return iVar9;
      }
      iVar9 = FUN_004e4020(&local_c);
      if (iVar9 != 0) {
        return iVar9;
      }
      local_1c = local_28;
      local_20 = param_3;
      uVar6 = FUN_004d52d0(&local_18,&local_28,iVar2,*(undefined1 *)(param_1 + 0x8e2));
      uVar7 = FUN_004d53c0(&local_c,&param_3,iVar2);
      if ((uVar5 == 0) && ((uVar6 | uVar7) == 0)) {
        FUN_0050f940(local_1c,local_20,local_28,param_3,param_1,2,*(undefined1 *)(param_1 + 0x8e2));
      }
      param_2 = param_2 + -1;
      iVar9 = local_24;
      uVar5 = uVar6 | uVar7;
    } while (0 < param_2);
  }
  return 0;
}

