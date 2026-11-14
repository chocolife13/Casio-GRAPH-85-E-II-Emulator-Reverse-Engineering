// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004a0820
// entry: 004a0820  size: 193


uint FUN_004a0820(uint *param_1,undefined1 param_2)

{
  uint in_EAX;
  uint uVar1;
  
  uVar1 = in_EAX & 0xffffff00;
  switch(param_2) {
  case 0:
    return CONCAT31((int3)((uint)param_1 >> 8),(char)*param_1) & 0xffffff0f;
  case 1:
    return *param_1 >> 4 & 0xffffff0f;
  case 2:
    return *param_1 >> 8 & 0xffffff0f;
  case 3:
    return *param_1 >> 0xc & 0xffffff0f;
  case 4:
    return *param_1 >> 0x10 & 0xffffff0f;
  case 5:
    return *param_1 >> 0x14 & 0xffffff0f;
  case 6:
    return *param_1 >> 0x18 & 0xffffff01;
  case 7:
    return *param_1 >> 0x19 & 0xffffff01;
  case 8:
    return *param_1 >> 0x1a & 0xffffff01;
  case 9:
    return *param_1 >> 0x1b & 0xffffff01;
  case 10:
    return *param_1 >> 0x1c & 0xffffff01;
  case 0xb:
    return *param_1 >> 0x1d & 0xffffff01;
  case 0xc:
    return *param_1 >> 0x1e & 0xffffff01;
  case 0xd:
    uVar1 = *param_1 >> 0x1f;
  }
  return uVar1;
}

