// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00413870
// entry: 00413870  size: 55


uint FUN_00413870(uint param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_1 + ((int)param_1 >> 0x1f & 7U);
  param_1 = param_1 & 0x80000007;
  if ((int)param_1 < 0) {
    param_1 = (param_1 - 1 | 0xfffffff8) + 1;
  }
  return CONCAT31((int3)(iVar1 >> 0xb),
                  *(byte *)((int)&DAT_005d8280 + param_2 * 0x10 + (iVar1 >> 3)) >>
                  (7U - (char)param_1 & 0x1f)) & 0xffffff01;
}

