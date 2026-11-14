// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00562a62
// entry: 00562a62  size: 57


undefined4 * __thiscall FUN_00562a62(undefined4 *param_1,uint param_2,undefined4 param_3)

{
  FUN_00563012();
  *param_1 = &PTR_LAB_0059a304;
  _memset(param_1 + 0xf,0,0x20);
  param_1[0x14] = param_3;
  param_1[0xf] = param_2;
  param_1[0x10] = param_2 & 0xffff;
  return param_1;
}

