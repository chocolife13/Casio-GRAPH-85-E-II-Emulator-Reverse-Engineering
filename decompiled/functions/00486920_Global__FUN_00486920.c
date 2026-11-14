// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00486920
// entry: 00486920  size: 150


undefined4 * FUN_00486920(undefined4 *param_1,int param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  short sStack_e;
  
  uVar1 = param_1;
  param_1 = (undefined4 *)FUN_004869c0(param_1);
  *param_4 = param_1;
  if (param_1 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  sStack_e = (short)((uint)*param_1 >> 0x10);
  if (sStack_e < param_2) {
    return (undefined4 *)0x0;
  }
  if (param_1[param_2 + 3] == 0) {
    return (undefined4 *)0x0;
  }
  iVar2 = FUN_00486fd0(uVar1,param_2,0,&param_1);
  if (iVar2 == 0) {
    return (undefined4 *)0x0;
  }
  puVar3 = param_1;
  for (iVar2 = 0x20; iVar2 != 0; iVar2 = iVar2 + -1) {
    *param_3 = *puVar3;
    puVar3 = puVar3 + 1;
    param_3 = param_3 + 1;
  }
  return param_1;
}

