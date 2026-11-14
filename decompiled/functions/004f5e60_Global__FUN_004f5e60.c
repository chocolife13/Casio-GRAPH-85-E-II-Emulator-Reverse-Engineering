// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004f5e60
// entry: 004f5e60  size: 66


undefined4 FUN_004f5e60(undefined4 param_1,char *param_2,undefined4 param_3,char *param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_004fe330(param_2,param_1);
  iVar1 = FUN_004f9960(param_2);
  if ((iVar1 == 0) && (*param_2 != -0x40)) {
    uVar2 = FUN_004f58f0(8,param_3);
    return uVar2;
  }
  *param_4 = *param_2;
  return 1;
}

