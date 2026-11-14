// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004d4e70
// entry: 004d4e70  size: 142


void FUN_004d4e70(undefined4 *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  uVar1 = FUN_004e5070(0x3f - param_2,&local_c,&local_c);
  FUN_004e6cc0(param_3 + 0x60,uVar1);
  FUN_004e7910(&local_c,&local_c);
  FUN_004e69c0(param_3 + 0x3c,&local_c,&local_c);
  FUN_004e7910(&local_c,&local_c);
  FUN_004d4d50(&local_c,param_3 + 0x60);
  *param_1 = local_c;
  param_1[1] = local_8;
  param_1[2] = local_4;
  return;
}

