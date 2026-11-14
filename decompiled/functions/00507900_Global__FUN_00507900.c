// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00507900
// entry: 00507900  size: 65


bool FUN_00507900(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = ((int)(param_2 + (param_2 >> 0x1f & 7U)) >> 3) + param_3 * 0x10;
  return (byte)((byte)(0x80 >> ((byte)param_2 & 7)) &
               (*(byte *)(iVar1 + 0x400 + param_1) | *(byte *)(iVar1 + param_1))) != 0;
}

