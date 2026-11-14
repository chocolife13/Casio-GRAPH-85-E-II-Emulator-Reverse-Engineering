// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0056f0e8
// entry: 0056f0e8  size: 121


void __thiscall FUN_0056f0e8(int param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if ((*(uint *)(param_1 + 100) & 0x400001) == 0x400000) {
    iVar1 = *(int *)(param_1 + 0x48);
    if ((*(uint *)(param_1 + 100) & 0xa000) == 0) {
      iVar4 = ((param_3[2] - *(int *)(param_1 + 0x4c)) - *param_3) - iVar1;
      iVar3 = 3;
      iVar2 = param_3[1] + 2;
      iVar1 = *param_3 + iVar1;
    }
    else {
      iVar3 = ((param_3[3] - *(int *)(param_1 + 0x4c)) - param_3[1]) - iVar1;
      iVar2 = param_3[1] + iVar1;
      iVar4 = 3;
      iVar1 = *param_3 + 2;
    }
    FUN_00573d0c(iVar1,iVar2,iVar4,iVar3,DAT_005d50d8,DAT_005d50d4);
  }
  return;
}

