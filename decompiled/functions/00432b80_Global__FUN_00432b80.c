// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00432b80
// entry: 00432b80  size: 77


void FUN_00432b80(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 *puVar1;
  
  FUN_004e5640(&param_3,&param_3);
  puVar1 = param_2;
  if (param_1 != 1) {
    if (param_1 == 2) {
      puVar1 = param_2 + 3;
    }
    else {
      if (param_1 != 3) goto LAB_00432bc3;
      puVar1 = param_2 + 6;
    }
  }
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar1[2] = param_5;
LAB_00432bc3:
  FUN_004b8a80(param_2);
  return;
}

