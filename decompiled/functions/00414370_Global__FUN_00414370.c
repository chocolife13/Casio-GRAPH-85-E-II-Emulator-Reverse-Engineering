// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00414370
// entry: 00414370  size: 51


bool FUN_00414370(int param_1,int param_2)

{
  byte bVar1;
  
  bVar1 = FUN_00414270(param_1);
  return (*(byte *)((int)&DAT_005d8280 +
                   param_2 * 0x10 + ((int)(param_1 + (param_1 >> 0x1f & 7U)) >> 3)) & bVar1) != 0;
}

