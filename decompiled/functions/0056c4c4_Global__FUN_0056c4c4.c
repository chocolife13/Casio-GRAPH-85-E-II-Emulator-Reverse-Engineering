// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0056c4c4
// entry: 0056c4c4  size: 70


int __fastcall FUN_0056c4c4(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int local_8;
  
  iVar5 = 0;
  puVar3 = *(undefined4 **)(param_1 + 8);
  local_8 = param_1;
  while (puVar3 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*puVar3;
    piVar2 = (int *)puVar3[2];
    local_8 = (**(code **)(*piVar2 + 0x54))();
    while (local_8 != 0) {
      iVar4 = (**(code **)(*piVar2 + 0x58))(&local_8);
      if (iVar4 != 0) {
        iVar5 = iVar5 + 1;
      }
    }
    local_8 = 0;
    puVar3 = puVar1;
  }
  return iVar5;
}

