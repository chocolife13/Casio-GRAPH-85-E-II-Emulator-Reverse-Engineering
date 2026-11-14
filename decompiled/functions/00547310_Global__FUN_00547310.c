// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00547310
// entry: 00547310  size: 293


undefined4 FUN_00547310(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char cVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int *local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  uVar2 = param_1;
  piVar5 = (int *)FUN_004869c0(param_1);
  iVar7 = param_3;
  if (piVar5 == (int *)0x0) {
    return 0;
  }
  local_10 = *piVar5;
  local_c = piVar5[1];
  local_8 = piVar5[2];
  local_4 = piVar5[3];
  local_18 = piVar5;
  iVar6 = FUN_004885f0(uVar2,param_2,param_3,&local_14,&param_1,&local_18);
  iVar3 = param_4;
  if (iVar6 == 0) {
    if ((local_14 < iVar7) || (999 < local_14 + param_4)) {
      return 0x21;
    }
    iVar6 = param_4 * 4;
    cVar4 = FUN_004abeb0(iVar6,&DAT_005cd010,(iVar7 * 4 - (int)piVar5) + (int)local_18);
    if (cVar4 != '\0') {
      return 4;
    }
    iVar1 = iVar7 + iVar3;
    param_1 = 0xffff;
    for (; iVar7 < iVar1; iVar7 = iVar7 + 1) {
      local_18[iVar7] = 0xffff;
    }
    local_14 = local_14 + iVar3;
    *local_18 = local_14;
    FUN_00486870(1,param_2,iVar6,piVar5,&local_10);
  }
  return 0;
}

