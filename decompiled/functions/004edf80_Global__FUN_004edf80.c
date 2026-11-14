// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004edf80
// entry: 004edf80  size: 209


int FUN_004edf80(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  undefined1 local_10e [2];
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined1 *local_100;
  undefined1 *local_fc;
  undefined1 *local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined1 local_d8 [28];
  undefined1 local_bc [64];
  undefined1 local_7c [124];
  
  local_100 = local_7c;
  local_fc = local_d8;
  local_f8 = local_bc;
  local_bc[0] = 0;
  local_d8[0] = 0;
  local_7c[0] = 0;
  local_10e[0] = 0x30;
  FUN_004fe330(local_10e,param_1);
  iVar1 = FUN_004ced10(param_3,param_4,&local_f0,param_2,param_5,param_6,param_1,local_10e,
                       &local_100,0);
  if (iVar1 == 1) {
    return 0;
  }
  local_10c = local_f0;
  local_108 = local_ec;
  local_104 = local_e8;
  iVar1 = FUN_004e4020(&local_10c);
  if (iVar1 == 0) {
    iVar1 = 0x1d;
  }
  return iVar1;
}

