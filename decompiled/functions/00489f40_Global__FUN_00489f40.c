// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00489f40
// entry: 00489f40  size: 185


void FUN_00489f40(int param_1)

{
  char cVar1;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if ((*(int *)(param_1 + 0x88) != 1) || (cVar1 = FUN_00526090(0x27), cVar1 != '\0')) {
    FUN_004e6d00(param_1 + 0x3c,param_1 + 0x18,&local_c);
    FUN_004e7620(&local_c,&local_c);
    if (*(int *)(param_1 + 0x8c) == -1) {
      FUN_004e7730(&local_c,&local_c);
    }
    switch(*(undefined4 *)(param_1 + 0x7c)) {
    case 0x2a:
    case 0x2b:
    case 0x2e:
    case 0x2f:
      *(undefined4 *)(param_1 + 0x54) = local_c;
      *(undefined4 *)(param_1 + 0x58) = local_8;
      *(undefined4 *)(param_1 + 0x5c) = local_4;
      return;
    case 0x2d:
      if (*(int *)(param_1 + 0x80) <= *(int *)(param_1 + 0x88)) {
        FUN_004e6a00(param_1 + 0x54,&local_c,param_1 + 0x54);
      }
    }
  }
  return;
}

