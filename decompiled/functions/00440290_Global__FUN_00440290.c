// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00440290
// entry: 00440290  size: 383


void FUN_00440290(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  if (param_1 == 1) {
    FUN_004426c0(0x110,local_18);
    FUN_00442340(param_2,local_18,local_18,param_3,param_4,param_5);
    FUN_004426c0(0x113,local_18);
    FUN_00442430(param_2,local_18,local_18,param_3,param_4,param_5);
    FUN_004426c0(0x116,local_18);
    FUN_00442550(param_2,local_18,local_18,param_3,param_4,param_5);
    FUN_004426c0(0x11d,local_18);
    FUN_004426a0(param_2,local_18,param_5);
    return;
  }
  FUN_004426c0(0x111,local_18);
  FUN_004426c0(0x11a,local_c);
  FUN_00442340(param_2,local_18,local_c,param_3,param_4,param_5);
  FUN_004426c0(0x114,local_18);
  FUN_004426c0(0x11b,local_c);
  FUN_00442430(param_2,local_18,local_c,param_3,param_4,param_5);
  FUN_004426c0(0x117,local_18);
  FUN_004426c0(0x11c,local_c);
  FUN_00442550(param_2,local_18,local_c,param_3,param_4,param_5);
  FUN_004426c0(0x11d,local_18);
  FUN_004426a0(param_2,local_18,param_5);
  return;
}

