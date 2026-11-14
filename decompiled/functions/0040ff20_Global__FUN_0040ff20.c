// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0040ff20
// entry: 0040ff20  size: 43


undefined * FUN_0040ff20(uint param_1,undefined2 *param_2)

{
  int iVar1;
  
  iVar1 = (param_1 & 0xffff) * 4;
  *param_2 = *(undefined2 *)(&DAT_005ab6b2 + iVar1);
  return &DAT_005ab4e0 + *(ushort *)(&DAT_005ab6b0 + iVar1);
}

