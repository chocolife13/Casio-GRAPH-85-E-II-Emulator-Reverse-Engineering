// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0042cfa0
// entry: 0042cfa0  size: 79


undefined4 FUN_0042cfa0(undefined4 *param_1,undefined4 *param_2)

{
  short sVar1;
  undefined4 uVar2;
  
  uVar2 = FUN_00401170(param_1);
  if ((short)uVar2 == 0xf0) {
    return uVar2;
  }
  sVar1 = FUN_00401170(param_2);
  if (sVar1 == 0xf0) {
    uVar2 = *param_2;
    *param_1 = uVar2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    return CONCAT22((short)((uint)uVar2 >> 0x10),0xf0);
  }
  uVar2 = FUN_00401520(param_1,param_2);
  return uVar2;
}

