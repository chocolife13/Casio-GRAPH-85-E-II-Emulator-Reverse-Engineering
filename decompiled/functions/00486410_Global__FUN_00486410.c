// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00486410
// entry: 00486410  size: 82


uint FUN_00486410(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                 undefined4 param_5)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)FUN_004869c0(param_1);
  if (puVar1 == (undefined4 *)0x0) {
    return 0;
  }
  *param_4 = *puVar1;
  param_4[1] = puVar1[1];
  param_4[2] = puVar1[2];
  param_4[3] = puVar1[3];
  iVar2 = FUN_00486330(param_2,param_3,param_5,puVar1);
  return -(uint)(iVar2 != 0) & (uint)puVar1;
}

