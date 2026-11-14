// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004d9320
// entry: 004d9320  size: 242


undefined4 FUN_004d9320(int param_1,char *param_2)

{
  int iVar1;
  char cVar2;
  int local_18;
  int local_14;
  int local_10;
  undefined1 local_c [12];
  
  iVar1 = param_1;
  local_18 = 0;
  if (param_1 == -1) {
    FUN_004e5630(4,param_2);
    return 0;
  }
  if ((-1 < param_1) && (param_1 < 100)) {
    FUN_0052f8a0(param_1,local_c);
    FUN_00528a20(iVar1,&local_14,&local_10);
    cVar2 = FUN_004ad750(6,local_c,&local_18,&param_1);
    if (cVar2 != '\0') {
      FUN_004e5630(4,param_2);
      return 0;
    }
    *(short *)(param_2 + 2) = (short)local_14;
    *(short *)(param_2 + 4) = (short)local_10;
    *param_2 = (-(local_14 * local_10 * 0xc - (local_18 + -0x10) != 0) & 0x80U) + 0x30;
    *(int *)(param_1 + 0xc) = param_1 + 0x10;
    *(int *)(param_2 + 8) = param_1 + 0xc;
    return 1;
  }
  FUN_004e5630(4,param_2);
  return 0;
}

