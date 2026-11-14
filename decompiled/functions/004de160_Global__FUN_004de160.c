// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004de160
// entry: 004de160  size: 80


undefined4 * FUN_004de160(byte *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = FUN_004e4020(param_1);
  if (iVar1 != 0) {
    puVar2 = param_2;
    for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = *(undefined4 *)param_1;
      param_1 = param_1 + 4;
      puVar2 = puVar2 + 1;
    }
    return param_2;
  }
  if ((*param_1 & 0x70) != 0x20) {
    puVar2 = (undefined4 *)FUN_004e5630(3,param_2);
    return puVar2;
  }
  FUN_004c71c0(param_1,param_2);
  return param_2;
}

