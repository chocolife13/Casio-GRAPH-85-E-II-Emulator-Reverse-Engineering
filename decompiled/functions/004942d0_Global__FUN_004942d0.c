// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004942d0
// entry: 004942d0  size: 194


void FUN_004942d0(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  iVar1 = FUN_004943a0((int)*(short *)(param_1 + 0xf0),&local_30,&local_24,param_2);
  if (iVar1 == 0) {
    FUN_004e5070(*param_2,local_18);
    FUN_004e5780(local_c);
    FUN_004e7620(&local_30,&local_30);
    FUN_004e7620(&local_24,&local_24);
    iVar1 = FUN_00469e60(&local_30,&local_24);
    if (iVar1 < 0) {
      local_30 = local_24;
      local_2c = local_20;
      local_28 = local_1c;
    }
    FUN_004e7730(&local_30,&local_24);
    FUN_00494560(local_c,local_18,&local_24,&local_30);
  }
  return;
}

