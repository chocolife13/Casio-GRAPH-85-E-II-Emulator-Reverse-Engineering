// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00486570
// entry: 00486570  size: 92


undefined4
FUN_00486570(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
            undefined4 param_5)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_18 [6];
  
  FUN_004e5780(local_18);
  uVar1 = FUN_004864a0(param_1,param_2,param_3,local_18,param_5,0);
  FUN_004e3800(local_18,local_18);
  puVar3 = local_18;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *param_4 = *puVar3;
    puVar3 = puVar3 + 1;
    param_4 = param_4 + 1;
  }
  return uVar1;
}

