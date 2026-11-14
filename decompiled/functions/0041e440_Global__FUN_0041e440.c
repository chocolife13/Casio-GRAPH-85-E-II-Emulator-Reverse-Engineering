// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0041e440
// entry: 0041e440  size: 270


undefined4 FUN_0041e440(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 local_3c [5];
  undefined1 local_28 [4];
  uint local_24;
  int local_20;
  undefined1 local_1c [28];
  
  iVar3 = param_1;
  iVar4 = param_1 * 0x24;
  if ((ushort)(&DAT_005d86a0)[param_1 * 0x12] < 0xffe) {
    param_1 = CONCAT22((short)((uint)param_1 >> 0x10),(&DAT_005d86a0)[param_1 * 0x12]) + 1;
  }
  else {
    param_1 = 0x19;
  }
  iVar1 = FUN_0041a3c0(&param_1,local_28);
  while( true ) {
    if (iVar1 < 0) {
      uVar2 = FUN_00419fc0(iVar1);
      return uVar2;
    }
    if (((local_20 == *(int *)(&DAT_005d86a4 + iVar4)) && ((local_24 & 0xffff) != 0)) &&
       (iVar1 = FUN_0041e0c0(&DAT_005d86a8 + iVar4,local_1c), iVar1 != 0)) break;
    param_1 = param_1 + 1;
    if (DAT_005d8730 <= (ushort)param_1) {
      return 0xfffffff0;
    }
    iVar1 = FUN_0041a3c0(&param_1,local_28);
  }
  iVar4 = FUN_0041ab70(param_1,local_3c);
  if (iVar4 < 0) {
    uVar2 = FUN_00419fc0(iVar4);
    return uVar2;
  }
  (&DAT_005d86a0)[iVar3 * 0x12] = (undefined2)param_1;
  FUN_0042a490(param_2,local_1c);
  puVar5 = local_3c;
  for (iVar3 = 5; iVar3 != 0; iVar3 = iVar3 + -1) {
    *param_3 = *puVar5;
    puVar5 = puVar5 + 1;
    param_3 = param_3 + 1;
  }
  return 0;
}

