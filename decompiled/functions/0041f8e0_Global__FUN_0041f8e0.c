// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0041f8e0
// entry: 0041f8e0  size: 107


uint FUN_0041f8e0(undefined4 *param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined2 uVar4;
  undefined4 *puVar5;
  undefined1 local_c [12];
  
  uVar4 = 0;
  if ((short)param_2 != 0) {
    param_2 = param_2 & 0xffff;
    puVar5 = param_1;
    do {
      iVar2 = FUN_0041f840(param_1);
      if (iVar2 != 0) {
        uVar4 = 1;
      }
      puVar3 = (undefined4 *)FUN_00531b90(local_c,puVar5);
      *puVar5 = *puVar3;
      param_2 = param_2 - 1;
      puVar5[1] = puVar3[1];
      uVar1 = puVar3[2];
      puVar5[2] = uVar1;
      puVar5 = puVar5 + 3;
    } while (param_2 != 0);
    return CONCAT22((short)((uint)uVar1 >> 0x10),uVar4);
  }
  return param_2 & 0xffff0000;
}

