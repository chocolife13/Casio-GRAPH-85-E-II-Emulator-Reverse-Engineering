// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00420ce0
// entry: 00420ce0  size: 117


void FUN_00420ce0(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  *param_1 = (uVar1 & 0xff0000 | uVar1 >> 0x10) >> 8 | (uVar1 << 0x10 | uVar1 & 0xff00) << 8;
  param_1[1] = (uVar2 & 0xff0000 | uVar2 >> 0x10) >> 8 | (uVar2 << 0x10 | uVar2 & 0xff00) << 8;
  *(ushort *)(param_1 + 2) =
       CONCAT11((char)(short)param_1[2],(char)((ushort)(short)param_1[2] >> 8));
  *(ushort *)((int)param_1 + 10) =
       CONCAT11((char)*(undefined2 *)((int)param_1 + 10),
                (char)((ushort)*(undefined2 *)((int)param_1 + 10) >> 8));
  return;
}

