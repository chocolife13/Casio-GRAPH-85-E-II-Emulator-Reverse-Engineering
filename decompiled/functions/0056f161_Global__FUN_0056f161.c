// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0056f161
// entry: 0056f161  size: 163


void __thiscall FUN_0056f161(int param_1,int *param_2,int param_3)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 100);
  if ((uVar1 & 0x100) != 0) {
    *param_2 = *param_2 + DAT_005d50b8;
  }
  if ((uVar1 & 0x200) != 0) {
    param_2[1] = param_2[1] + DAT_005d50bc;
  }
  if ((uVar1 & 0x400) != 0) {
    param_2[2] = param_2[2] - DAT_005d50b8;
  }
  if ((uVar1 & 0x800) != 0) {
    param_2[3] = param_2[3] - DAT_005d50bc;
  }
  if (param_3 == 0) {
    *param_2 = *param_2 + *(int *)(param_1 + 0x48);
    param_2[1] = param_2[1] + *(int *)(param_1 + 0x40);
    param_2[2] = param_2[2] - *(int *)(param_1 + 0x4c);
    param_2[3] = param_2[3] - *(int *)(param_1 + 0x44);
    if ((*(uint *)(param_1 + 100) & 0x400001) == 0x400000) {
      param_2[1] = param_2[1] + 7;
    }
  }
  else {
    *param_2 = *param_2 + *(int *)(param_1 + 0x40);
    param_2[1] = param_2[1] + *(int *)(param_1 + 0x48);
    param_2[2] = param_2[2] - *(int *)(param_1 + 0x44);
    param_2[3] = param_2[3] - *(int *)(param_1 + 0x4c);
    if ((*(uint *)(param_1 + 100) & 0x400001) == 0x400000) {
      *param_2 = *param_2 + 7;
    }
  }
  return;
}

