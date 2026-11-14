// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0049dc90
// entry: 0049dc90  size: 672


int FUN_0049dc90(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined1 local_234 [2];
  short asStack_232 [281];
  
  switch(param_1) {
  case -0x2b:
    FUN_0052b240(0x2b);
    return param_1;
  case -0x2a:
    FUN_004a20c0(0x2d2,0x2d3,0x2d4,1);
    return param_1;
  case -0x29:
  case -0x21:
  case -0x1f:
  case -0x18:
  case -0x17:
  case -0x11:
  case -8:
  case -5:
  case -3:
  case -1:
    FUN_0049c820(param_1);
    return param_1;
  default:
    if (param_4 == 3) {
      FUN_0052b240(0x25);
      return param_1;
    }
    FUN_0052b240(4);
    break;
  case -0x22:
    FUN_004a20c0(0x2a4,0x2a5,0x2a6,1);
    return param_1;
  case -0x10:
  case 0:
    FUN_004a20c0(0x172,0x173,0x174,1);
    return param_1;
  case -0xe:
    FUN_004a20c0(0x2cf,0x2d0,0x2d1,1);
    return param_1;
  case -0xd:
    iVar1 = FUN_0042ac10(param_2,0x5c,1);
    iVar1 = FUN_004a2460(param_2 + 2 + (iVar1 - param_2 >> 1) * 2);
    if (iVar1 == 0x7539) {
      if ((param_4 != 3) || (param_1 = FUN_004300c0(1), param_1 == 0)) {
        FUN_0042a490(local_234,param_3);
        FUN_0042ab20(local_234,0,0x105);
        iVar1 = FUN_0042ac10(local_234,0x5c);
        if (*(short *)(local_234 + (iVar1 - (int)local_234 >> 1) * 2 + 2) == 0) {
          iVar1 = FUN_0042ac10(param_2,0x5c);
          iVar1 = FUN_0042a410(local_234,param_2 + 2 + (iVar1 - param_2 >> 1) * 2);
          FUN_0042a490(local_234 + iVar1 * 2);
        }
        iVar1 = FUN_0042a080(local_234,0);
        if (iVar1 != -0xe) {
          if ((-2 < iVar1) && (iVar1 < 1)) {
            return 0;
          }
          FUN_0052b240(4);
          return iVar1;
        }
        FUN_004a20c0(0x2cf,0x2d0,0x2d1,1);
        return -0xe;
      }
    }
    else if (iVar1 == 0x753f) {
      FUN_0052b240(1);
      return 1;
    }
    break;
  case -4:
    if (param_4 == 2) {
      FUN_004a20c0(0x29d,0x29e,0x29f,1);
      return param_1;
    }
    FUN_0052b240(0xd);
    return param_1;
  }
  return param_1;
}

