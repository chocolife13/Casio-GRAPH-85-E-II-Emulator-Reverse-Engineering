// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00444830
// entry: 00444830  size: 127


undefined4 FUN_00444830(undefined4 param_1,uint *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  char local_18 [24];
  
  FUN_00528a20(param_1,param_2,param_3);
  if ((*param_3 == 2) && (uVar1 = 0, *param_2 != 0)) {
    do {
      uVar1 = uVar1 + 1;
      iVar2 = FUN_00528ac0(param_1,uVar1,2,local_18);
      if (iVar2 != 0) {
        return 0xff;
      }
      if (local_18[0] != '\0') {
        *param_3 = 2;
        return 1;
      }
      *param_3 = 1;
    } while (uVar1 < *param_2);
  }
  return 0;
}

