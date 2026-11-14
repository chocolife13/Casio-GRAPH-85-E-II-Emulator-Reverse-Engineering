// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00570c9a
// entry: 00570c9a  size: 82


void __thiscall FUN_00570c9a(int param_1,int *param_2,int param_3)

{
  undefined4 uVar1;
  
  if (*param_2 != param_3) {
    *param_2 = param_3;
    if ((((*(uint *)(param_1 + 0x70) & 0xa000) == 0) || ((*(uint *)(param_1 + 0x70) & 0x5000) == 0))
       || (*(int *)(param_1 + 0x7c) == 0)) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
    *(undefined4 *)(param_1 + 0x7c) = uVar1;
    if (*(int *)(param_1 + 0x80) == 0) {
      uVar1 = FUN_00570cec();
    }
    else {
      uVar1 = 0;
    }
    *(undefined4 *)(param_1 + 0x74) = uVar1;
    FUN_00570b84(0);
  }
  return;
}

