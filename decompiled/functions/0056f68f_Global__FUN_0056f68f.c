// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0056f68f
// entry: 0056f68f  size: 66


int __fastcall FUN_0056f68f(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int local_8;
  
  iVar4 = 0;
  puVar3 = *(undefined4 **)(param_1 + 8);
  local_8 = param_1;
  while (puVar3 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*puVar3;
    piVar2 = (int *)puVar3[2];
    local_8 = (**(code **)(*piVar2 + 0x54))();
    while (local_8 != 0) {
      (**(code **)(*piVar2 + 0x58))(&local_8);
      iVar4 = iVar4 + 1;
    }
    local_8 = 0;
    puVar3 = puVar1;
  }
  return iVar4;
}

