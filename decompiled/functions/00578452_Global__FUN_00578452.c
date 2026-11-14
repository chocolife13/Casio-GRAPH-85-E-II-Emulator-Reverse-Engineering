// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00578452
// entry: 00578452  size: 235


void __thiscall FUN_00578452(int param_1,int param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0xec) == 0) {
    if (param_2 == 0) {
      param_3 = *(int *)(param_1 + 0xf4) - 1;
    }
    else if (param_2 == 1) {
      param_3 = *(int *)(param_1 + 0xf4) + 1;
    }
    else if (param_2 == 2) {
      iVar1 = *(int *)(**(int **)(param_1 + 0x114) + 0x5c);
      param_3 = *(int *)(param_1 + 0xf4) -
                (((uint)*(ushort *)(iVar1 + 0x1e) - (uint)*(ushort *)(iVar1 + 0x1c)) + 9) / 10;
    }
    else if (param_2 == 3) {
      iVar1 = *(int *)(**(int **)(param_1 + 0x114) + 0x5c);
      param_3 = (((uint)*(ushort *)(iVar1 + 0x1e) - (uint)*(ushort *)(iVar1 + 0x1c)) + 9) / 10 +
                *(int *)(param_1 + 0xf4);
    }
    else if (param_2 != 4) {
      if (param_2 == 6) {
        param_3 = (uint)*(ushort *)(*(int *)(**(int **)(param_1 + 0x114) + 0x5c) + 0x1c);
      }
      else {
        if (param_2 != 7) {
          return;
        }
        param_3 = (uint)*(ushort *)(*(int *)(**(int **)(param_1 + 0x114) + 0x5c) + 0x1e);
      }
    }
    FUN_00578891(param_3,1);
  }
  else {
    FUN_0056d4f4(param_2,param_3,param_4);
  }
  return;
}

