// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004d0250
// entry: 004d0250  size: 225


bool FUN_004d0250(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  undefined1 local_18;
  undefined1 local_17;
  undefined1 local_c [12];
  
  FUN_004e5780(&local_18);
  local_18 = 8;
  local_17 = 0x71;
  FUN_004e7620(param_1 + 0x24,local_c);
  iVar1 = FUN_004e7310(local_c,&local_18);
  if (iVar1 == 1) {
    return true;
  }
  FUN_004e5780(param_1 + 3);
  *param_1 = param_1[3];
  param_1[1] = param_1[4];
  param_1[2] = param_1[5];
  iVar1 = FUN_004d06d0(0,param_1,param_2,param_3,param_4,param_5,1);
  if (iVar1 == 0) {
    return true;
  }
  iVar1 = FUN_004d06d0(1,param_1,param_2,param_3,param_4,param_5,1);
  if (iVar1 == 0) {
    return true;
  }
  iVar1 = FUN_004e71d0(param_1 + 0xf,param_1 + 0x12);
  return iVar1 != 1;
}

