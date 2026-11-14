// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005515d0
// entry: 005515d0  size: 130


byte FUN_005515d0(undefined4 param_1,int param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_18 [6];
  
  iVar1 = FUN_004e4000(param_4);
  if (iVar1 == 0) {
    puVar2 = local_18;
    for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = *param_4;
      param_4 = param_4 + 1;
      puVar2 = puVar2 + 1;
    }
  }
  else if (iVar1 == 1) {
    FUN_004e3800(param_4,local_18);
  }
  else {
    FUN_004e5780(local_18);
  }
  if ((param_2 < 0x1b) && (param_3 < 1000)) {
    iVar1 = FUN_00485fc0(param_1,param_2,param_3,local_18);
    return -(iVar1 != 0) & 4;
  }
  return 0x21;
}

