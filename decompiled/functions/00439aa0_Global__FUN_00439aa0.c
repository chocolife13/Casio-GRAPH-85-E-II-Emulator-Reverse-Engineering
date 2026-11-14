// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00439aa0
// entry: 00439aa0  size: 263


void FUN_00439aa0(int param_1,int param_2,int param_3,int param_4)

{
  char cVar1;
  int iVar2;
  char local_2c;
  byte bStack_2b;
  undefined1 local_24 [36];
  
  if ((param_2 == 0x7544) || (param_2 == 0x755a)) {
    iVar2 = FUN_004b73a0(*(int *)(param_4 + 0x2dc) + -1 + param_1);
    if (iVar2 == 0) {
      local_2c = ' ';
      cVar1 = *(char *)(*(int *)(param_4 + 0x2dc) + -1 + param_1);
      if (cVar1 != '\0') {
        local_2c = cVar1;
      }
      bStack_2b = 0;
    }
    else {
      local_2c = *(char *)(*(int *)(param_4 + 0x2dc) + -1 + param_1);
      bStack_2b = *(byte *)(*(int *)(param_4 + 0x2dc) + param_1 + -2);
    }
  }
  else {
    iVar2 = FUN_004b73a0(*(int *)(param_4 + 0x2dc) + 1 + param_1);
    if (iVar2 == 0) {
      bStack_2b = 0;
      local_2c = *(char *)(*(int *)(param_4 + 0x2dc) + param_1);
    }
    else {
      local_2c = *(char *)(*(int *)(param_4 + 0x2dc) + 1 + param_1);
      bStack_2b = *(byte *)(*(int *)(param_4 + 0x2dc) + param_1);
    }
  }
  FUN_004b79f0((uint)bStack_2b << 8 | CONCAT11(bStack_2b,local_2c) & 0xff,local_24);
  if (param_3 != 1) {
    FUN_004b6ca0(local_24);
    return;
  }
  FUN_004b6bd0(local_24);
  return;
}

