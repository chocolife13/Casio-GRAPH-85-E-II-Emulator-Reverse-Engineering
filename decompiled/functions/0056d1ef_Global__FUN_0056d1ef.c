// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0056d1ef
// entry: 0056d1ef  size: 197


void __thiscall
FUN_0056d1ef(int param_1,int param_2,int param_3,uint *param_4,int *param_5,int *param_6,int param_7
            )

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  int local_c;
  int local_8;
  
  local_c = param_1;
  local_8 = param_1;
  FUN_0056d120(&local_c);
  piVar2 = param_5;
  iVar1 = *(int *)(param_1 + 0x50);
  *param_5 = *(int *)(param_1 + 0x4c) - param_2;
  param_5[1] = iVar1 - param_3;
  piVar3 = (int *)FUN_0056cf91(&param_2);
  *param_6 = *piVar3;
  param_6[1] = piVar3[1];
  param_5 = (int *)(uint)(0 < *piVar2);
  if (param_5 == (int *)0x0) {
    *param_6 = 0;
  }
  else if (param_7 != 0) {
    piVar2[1] = piVar2[1] + local_8;
  }
  uVar4 = (uint)(0 < piVar2[1]);
  if (uVar4 == 0) {
    param_6[1] = 0;
  }
  else {
    if (param_7 != 0) {
      *piVar2 = *piVar2 + local_c;
    }
    if ((param_5 == (int *)0x0) && (0 < *piVar2)) {
      param_5 = (int *)0x1;
      piVar2[1] = piVar2[1] + local_8;
    }
  }
  iVar1 = *piVar2;
  if ((0 < iVar1) && (iVar1 <= *param_6)) {
    *param_6 = iVar1;
  }
  iVar1 = piVar2[1];
  if ((0 < iVar1) && (iVar1 <= param_6[1])) {
    param_6[1] = iVar1;
  }
  *param_4 = (uint)param_5;
  param_4[1] = uVar4;
  return;
}

