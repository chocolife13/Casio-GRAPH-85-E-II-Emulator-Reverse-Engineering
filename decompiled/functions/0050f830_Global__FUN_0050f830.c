// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0050f830
// entry: 0050f830  size: 267


void FUN_0050f830(int param_1,int param_2,uint param_3,int param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int local_c;
  int local_8;
  
  iVar2 = 1;
  iVar4 = 1;
  local_8 = 1;
  local_c = 1;
  bVar1 = false;
  if ((char)param_6 != '\x01') {
    param_3 = param_3 - param_1;
    if ((int)param_3 < 0) {
      param_3 = ~param_3 + 1;
      local_8 = -1;
      iVar2 = -1;
    }
    uVar6 = param_4 - param_2;
    if ((int)uVar6 < 0) {
      uVar6 = ~uVar6 + 1;
      local_c = -1;
      iVar4 = -1;
    }
    iVar5 = iVar4;
    uVar7 = uVar6;
    uVar3 = param_3;
    iVar8 = param_2;
    if ((int)param_3 < (int)uVar6) {
      bVar1 = true;
      if (param_1 != param_2) {
        iVar8 = param_1;
        param_1 = param_2;
      }
      uVar7 = param_3;
      uVar3 = uVar6;
      if (iVar2 != iVar4) {
        iVar5 = iVar2;
        local_c = iVar2;
        local_8 = iVar4;
      }
    }
    iVar2 = uVar3 * 2;
    param_3 = uVar3;
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      param_3 = param_3 + uVar7 * -2;
      if ((int)param_3 < 0) {
        param_3 = param_3 + iVar2;
        iVar8 = iVar8 + iVar5;
      }
      param_1 = param_1 + local_8;
      iVar4 = iVar8;
      if ((bVar1) && (param_1 != iVar8)) {
        iVar4 = param_1;
        param_1 = iVar8;
      }
      FUN_0050f4c0(param_1,iVar4,param_5,param_6,param_7);
      iVar8 = iVar4;
      if ((bVar1) && (param_1 != iVar4)) {
        iVar8 = param_1;
        param_1 = iVar4;
      }
      iVar5 = local_c;
    }
  }
  return;
}

