// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0050faa0
// entry: 0050faa0  size: 233


void FUN_0050faa0(int param_1,uint param_2,int param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int local_c;
  int local_8;
  
  local_8 = 1;
  local_c = 1;
  bVar1 = false;
  FUN_00414290(param_1,param_2,1);
  uVar7 = param_3 - param_1;
  iVar2 = -1;
  if ((int)uVar7 < 0) {
    uVar7 = ~uVar7 + 1;
    local_8 = -1;
  }
  uVar5 = param_4 - param_2;
  if ((int)uVar5 < 0) {
    uVar5 = ~uVar5 + 1;
    local_c = -1;
  }
  else {
    iVar2 = 1;
  }
  iVar3 = iVar2;
  iVar4 = param_2;
  uVar6 = uVar5;
  if ((int)uVar7 < (int)uVar5) {
    bVar1 = true;
    if (param_1 != param_2) {
      iVar4 = param_1;
      param_1 = param_2;
    }
    uVar6 = uVar7;
    uVar7 = uVar5;
    if (local_8 != iVar2) {
      local_c = local_8;
      iVar3 = local_8;
      local_8 = iVar2;
    }
  }
  iVar2 = uVar7 * 2;
  param_2 = uVar7;
  for (; uVar7 != 0; uVar7 = uVar7 - 1) {
    param_2 = param_2 + uVar6 * -2;
    if ((int)param_2 < 0) {
      param_2 = param_2 + iVar2;
      iVar4 = iVar4 + iVar3;
    }
    param_1 = param_1 + local_8;
    iVar3 = param_1;
    iVar8 = iVar4;
    if (bVar1) {
      iVar3 = iVar4;
      iVar8 = param_1;
    }
    FUN_00414290(iVar3,iVar8,1);
    iVar3 = local_c;
  }
  return;
}

