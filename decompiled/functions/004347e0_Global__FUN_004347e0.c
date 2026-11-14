// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004347e0
// entry: 004347e0  size: 79


void FUN_004347e0(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(param_1 + 4);
  uVar2 = (uVar1 - 1) + *(int *)(param_1 + 8);
  if ((uVar2 < *(uint *)(param_1 + 0xc)) && (uVar2 < 999)) {
    uVar2 = *(int *)(param_1 + 8) + 1;
    *(uint *)(param_1 + 8) = uVar2;
    if ((5 < uVar2) && (*(undefined4 *)(param_1 + 8) = 5, uVar1 + 4 < *(uint *)(param_1 + 0xc))) {
      *(uint *)(param_1 + 4) = uVar1 + 1;
      return;
    }
  }
  else {
    *(undefined4 *)(param_1 + 8) = 1;
    if (1 < uVar1) {
      *(undefined4 *)(param_1 + 4) = 1;
    }
  }
  return;
}

