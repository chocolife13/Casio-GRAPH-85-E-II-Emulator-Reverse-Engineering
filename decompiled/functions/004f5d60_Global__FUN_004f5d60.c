// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004f5d60
// entry: 004f5d60  size: 117


undefined4 FUN_004f5d60(undefined4 param_1,char *param_2,undefined4 param_3,int *param_4)

{
  byte bVar1;
  undefined4 uVar2;
  
  if (*param_2 != '\x7f') {
    uVar2 = FUN_004f58f0(2,param_3);
    return uVar2;
  }
  bVar1 = param_2[1];
  if ((0x69 < bVar1) && (bVar1 < 0x70)) {
    *param_4 = bVar1 - 0x69;
    FUN_004fe330(param_2,param_1);
    return 1;
  }
  if (bVar1 == 0x51) {
    uVar2 = FUN_004f56b0(param_1,param_2,param_3,param_4,0x1a);
    return uVar2;
  }
  uVar2 = FUN_004f58f0(2,param_3);
  return uVar2;
}

