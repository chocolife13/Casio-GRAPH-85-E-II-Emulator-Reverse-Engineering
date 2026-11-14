// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005380f0
// entry: 005380f0  size: 63


void __thiscall FUN_005380f0(undefined4 param_1,undefined1 param_2)

{
  uint3 local_4;
  undefined1 uStack_1;
  
  local_4._0_2_ = 0x9ae6;
  if ((char)(DAT_005d572c >> 8) == '\0') {
    local_4._0_2_ = 0xafe6;
  }
  uStack_1 = (undefined1)((uint)param_1 >> 0x18);
  local_4 = (uint3)(ushort)local_4;
  FUN_00413e50(DAT_005d572c & 0xff,param_2,&local_4,0);
  return;
}

