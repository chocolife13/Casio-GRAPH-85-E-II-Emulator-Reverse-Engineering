// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00523dc0
// entry: 00523dc0  size: 256


uint FUN_00523dc0(int param_1,int param_2,undefined1 *param_3,uint param_4)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined1 local_24 [36];
  
  param_1 = param_2 - param_1;
  if ((int)param_4 <= param_1) {
    uVar4 = 0;
    param_2 = 0;
    puVar2 = param_3;
    do {
      uVar5 = FUN_004b78f0(puVar2);
      uVar3 = (undefined4)((ulonglong)uVar5 >> 0x20);
      if ((int)uVar5 == 0) {
        param_2 = param_2 + 1;
      }
      else {
        uVar3 = FUN_004b79f0((int)uVar5,local_24);
        uVar5 = FUN_004b6bd0(uVar3);
        uVar3 = (undefined4)((ulonglong)uVar5 >> 0x20);
        param_2 = param_2 + (int)uVar5;
      }
      iVar1 = FUN_004b7370(CONCAT31((int3)((uint)uVar3 >> 8),*puVar2));
      if (iVar1 == 0) {
        uVar4 = uVar4 + 1;
      }
      else {
        uVar4 = uVar4 + 2;
      }
      puVar2 = (undefined1 *)FUN_004b7840(puVar2);
    } while (uVar4 <= param_4);
    if (param_2 <= param_1) {
      return 0;
    }
  }
  puVar2 = param_3 + param_4;
  while( true ) {
    if (param_1 < 1) {
      return param_4;
    }
    iVar1 = FUN_004b7610(param_3,param_4 - 1);
    if (-1 < iVar1) {
      if (iVar1 < 2) {
        if (param_4 == 0) {
          return 0;
        }
        puVar2 = puVar2 + -1;
        param_4 = param_4 - 1;
      }
      else if (iVar1 == 2) {
        if (param_4 < 2) {
          return param_4;
        }
        puVar2 = puVar2 + -2;
        param_4 = param_4 - 2;
      }
    }
    iVar1 = FUN_004b78f0(puVar2);
    if (iVar1 == 0) {
      iVar1 = 1;
    }
    else {
      uVar3 = FUN_004b79f0(iVar1,local_24);
      iVar1 = FUN_004b6bd0(uVar3);
    }
    if (param_1 < iVar1) break;
    param_1 = param_1 - iVar1;
  }
  return param_4;
}

