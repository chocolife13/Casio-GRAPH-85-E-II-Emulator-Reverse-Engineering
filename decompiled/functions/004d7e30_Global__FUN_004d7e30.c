// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004d7e30
// entry: 004d7e30  size: 121


byte * __thiscall FUN_004d7e30(ushort param_1,byte *param_2,byte *param_3)

{
  int iVar1;
  byte bVar2;
  undefined1 auStack_4 [3];
  undefined1 local_1;
  
  _auStack_4 = CONCAT13(0x80,CONCAT12(0,param_1));
  FUN_004e57a0(param_3);
  FUN_004e5640(param_2,param_2);
  if ((*param_2 != 0) || (param_2[1] != 0)) {
    *param_3 = *param_2;
    param_3[1] = param_3[1] | param_2[1] & 0xf0;
  }
  bVar2 = *param_3 & 0xf0;
  if ((bVar2 == 0x50) || (bVar2 == 0x60)) {
    *param_3 = *param_3 + 0xb0;
  }
  iVar1 = FUN_004fc120(param_3,auStack_4 + 2);
  if (iVar1 == 0) {
    FUN_004e5630(3,param_3);
  }
  return param_3;
}

