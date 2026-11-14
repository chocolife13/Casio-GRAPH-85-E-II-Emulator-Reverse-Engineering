// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005794ef
// entry: 005794ef  size: 351


undefined4 FUN_005794ef(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 local_c;
  
  local_c = (longlong)param_2 * (longlong)param_3;
  iVar5 = (int)((ulonglong)local_c >> 0x20);
  iVar2 = (int)local_c;
  lVar1 = (longlong)param_4 * (longlong)param_5;
  iVar6 = (int)((ulonglong)lVar1 >> 0x20);
  lVar8 = local_c;
  if ((iVar5 == 0 || local_c < 0) && (local_c < 0)) {
    lVar8 = CONCAT44(-(iVar5 + (uint)(iVar2 != 0)),-iVar2);
  }
  iVar7 = 0;
  while (lVar8 != 0) {
    lVar8 = __allshr();
    iVar7 = iVar7 + 1;
  }
  iVar3 = param_1;
  if (param_1 < 0) {
    iVar3 = -param_1;
  }
  param_2 = 0;
  lVar8 = (longlong)iVar3;
  while (lVar8 != 0) {
    lVar8 = __allshr();
    param_2 = param_2 + 1;
  }
  iVar7 = iVar7 + param_2;
  if ((iVar6 == 0 || lVar1 < 0) && (lVar1 < 0)) {
    lVar1 = CONCAT44(-(iVar6 + (uint)((int)lVar1 != 0)),-(int)lVar1);
    local_c = CONCAT44(-(iVar5 + (uint)(iVar2 != 0)),-iVar2);
  }
  while (0x1f < iVar7) {
    local_c = __allshr();
    lVar1 = __allshr();
    iVar2 = iVar7 + -2;
    if (iVar7 + -1 < 0x20) break;
    local_c = __allshr();
    lVar1 = __allshr();
    iVar7 = iVar7 + -3;
    if (iVar2 < 0x20) break;
    param_1 = param_1 >> 1;
    lVar1 = __allshr();
  }
  lVar8 = __allmul(param_1,param_1 >> 0x1f,(undefined4)local_c,local_c._4_4_);
  if (lVar1 == 0) {
    if ((lVar8 < 0x100000000) && (lVar8 < 0)) {
      uVar4 = 0x80000000;
    }
    else {
      uVar4 = 0x7fffffff;
    }
  }
  else {
    lVar9 = __alldiv(lVar1,2,0);
    uVar4 = __alldiv(lVar9 + lVar8,lVar1);
  }
  return uVar4;
}

