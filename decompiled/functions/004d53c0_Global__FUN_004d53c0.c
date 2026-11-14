// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004d53c0
// entry: 004d53c0  size: 186


uint FUN_004d53c0(undefined4 param_1,int *param_2,int param_3)

{
  int iVar1;
  byte local_c [12];
  
  iVar1 = param_3;
  FUN_004e6b40(param_1,param_3 + 0x3c,local_c);
  FUN_004e6d90(local_c,iVar1 + 0x60,local_c);
  FUN_004e7910(local_c,local_c);
  if ((local_c[0] & 0xf0) == 0xf0) {
    return 0x1000;
  }
  iVar1 = FUN_004d4f00(local_c,&param_3);
  if (iVar1 != 0) {
    return ((-1 < iVar1) - 1 & 0x100) + 0x100;
  }
  param_3 = 0x3f - param_3;
  *param_2 = param_3;
  if (param_3 < -0x3f) {
    return 0x100;
  }
  return (param_3 < 0x80) - 1 & 0x200;
}

