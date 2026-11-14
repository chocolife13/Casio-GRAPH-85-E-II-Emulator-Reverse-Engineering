// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00560ce0
// entry: 00560ce0  size: 47


undefined4 * __thiscall FUN_00560ce0(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if (param_2 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)FUN_005564e3(param_1);
  }
  else {
    puVar1 = (undefined4 *)FUN_005564e3(param_1);
    if (puVar1 != (undefined4 *)0x0) {
      puVar3 = puVar1;
      puVar4 = param_2;
      for (iVar2 = 9; puVar1 = param_2, iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
    }
  }
  return puVar1;
}

