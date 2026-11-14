// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00577dc8
// entry: 00577dc8  size: 132


void __thiscall FUN_00577dc8(int param_1,int *param_2)

{
  short sVar1;
  int iVar2;
  int local_14 [2];
  int local_c;
  int local_8;
  
  FUN_0056d17a(&local_c,local_14);
  if (*(int *)(param_1 + 0xec) == 0) {
    iVar2 = *(int *)(**(int **)(param_1 + 0x114) + 0x5c);
    sVar1 = *(short *)(iVar2 + 0x1e);
    if ((sVar1 != -1) && (sVar1 != *(short *)(iVar2 + 0x1c))) {
      local_c = local_c - local_14[0];
    }
  }
  *(int *)(param_1 + 0xfc) = (local_c + -8) / 2;
  if (*(int *)(param_1 + 0xf8) == 2) {
    local_c = (local_c + -0x18) / 2;
  }
  else {
    local_c = local_c + -0x10;
  }
  *param_2 = local_c;
  param_2[1] = local_8 + -0x10;
  return;
}

