// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004d3a30
// entry: 004d3a30  size: 188


undefined4 FUN_004d3a30(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  FUN_004e5780(&local_c);
  iVar1 = FUN_004e71d0(param_1,&local_c);
  if (iVar1 == 0) {
    iVar1 = FUN_004e7250(param_1,&local_c);
    if (iVar1 != 0) {
      FUN_004e5630(0x11,param_2);
      return 0;
    }
    FUN_004e57a0(&local_c);
    FUN_004e7410(param_1,param_2);
    FUN_004e6c30(param_2,&local_c,&local_c);
    FUN_004e6d00(param_1,&local_c,param_2);
    if ((char)local_c == -0x10) {
      uVar2 = FUN_00501ed0(param_2);
      return uVar2;
    }
  }
  else {
    *param_2 = local_c;
    param_2[1] = local_8;
    param_2[2] = local_4;
  }
  return 1;
}

