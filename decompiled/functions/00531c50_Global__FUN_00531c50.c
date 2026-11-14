// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00531c50
// entry: 00531c50  size: 79


void FUN_00531c50(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined1 local_24 [12];
  undefined4 local_18 [6];
  
  puVar1 = param_2;
  puVar3 = local_18;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar1 = (undefined4 *)FUN_00531b90(local_24,param_2);
  local_18[0] = *puVar1;
  local_18[1] = puVar1[1];
  local_18[2] = puVar1[2];
  puVar1 = local_18;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *param_1 = *puVar1;
    puVar1 = puVar1 + 1;
    param_1 = param_1 + 1;
  }
  return;
}

