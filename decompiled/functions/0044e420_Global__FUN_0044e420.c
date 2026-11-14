// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0044e420
// entry: 0044e420  size: 89


void FUN_0044e420(int param_1,int param_2,undefined4 param_3)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 uVar4;
  
  iVar2 = FUN_004b7370(*(undefined1 *)(param_1 + -1 + *(int *)(param_2 + 0x1fc)));
  if (iVar2 == 0) {
    uVar4 = 0;
    uVar1 = *(undefined1 *)(param_1 + -1 + *(int *)(param_2 + 0x1fc));
  }
  else {
    puVar3 = (undefined1 *)(*(int *)(param_2 + 0x1fc) + param_1);
    uVar4 = puVar3[-1];
    uVar1 = *puVar3;
  }
  FUN_004b79f0(CONCAT11(uVar4,uVar1),param_3);
  FUN_004b6bd0(param_3);
  return;
}

