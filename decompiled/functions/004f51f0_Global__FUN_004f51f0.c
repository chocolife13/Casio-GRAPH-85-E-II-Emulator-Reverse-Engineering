// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004f51f0
// entry: 004f51f0  size: 73


undefined4 FUN_004f51f0(undefined4 param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  
  piVar1 = (int *)FUN_004ad630(0x28);
  if (piVar1 == (int *)0x0) {
    uVar2 = FUN_004f58f0(4,param_1);
    return uVar2;
  }
  uVar3 = 0;
  do {
    *(undefined1 *)(*piVar1 + uVar3) = *(undefined1 *)(uVar3 + 0x14 + param_2);
    uVar3 = uVar3 + 1;
  } while (uVar3 < 0x28);
  *(int **)(param_2 + 0x38) = piVar1;
  *(char *)(param_2 + 0x11) = *(char *)(param_2 + 0x11) + '\x01';
  return 1;
}

