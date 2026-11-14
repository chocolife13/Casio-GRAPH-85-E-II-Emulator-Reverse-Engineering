// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0042f560
// entry: 0042f560  size: 90


uint FUN_0042f560(ushort param_1,undefined4 *param_2)

{
  ushort uVar2;
  uint uVar1;
  
  if (10 < param_1) {
    uVar1 = FUN_0042f540(0x10,param_2);
    return uVar1;
  }
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined2 *)(param_2 + 2) = 0;
  *(undefined2 *)((int)param_2 + 10) = 0;
  if (param_1 == 0) {
    return (uint)param_2 & 0xffff0000;
  }
  uVar2 = (ushort)((uint)param_2 >> 0x10);
  if (param_1 == 10) {
    *(undefined1 *)param_2 = 1;
    *(undefined2 *)((int)param_2 + 10) = 0x1001;
    return (uint)uVar2 << 0x10;
  }
  *(char *)param_2 = (char)param_1;
  *(undefined2 *)((int)param_2 + 10) = 0x1000;
  return (uint)uVar2 << 0x10;
}

