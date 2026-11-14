// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00515da0
// entry: 00515da0  size: 40


uint FUN_00515da0(int param_1,uint param_2)

{
  uint in_EAX;
  uint uVar1;
  
  if ((((-1 < param_1) && (param_1 < 0x80)) && (in_EAX = param_2, -1 < (int)param_2)) &&
     ((int)param_2 < 0x40)) {
    uVar1 = FUN_00414370(param_1,param_2);
    return uVar1;
  }
  return in_EAX & 0xffffff00;
}

