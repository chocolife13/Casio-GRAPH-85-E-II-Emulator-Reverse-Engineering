// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0052ae20
// entry: 0052ae20  size: 274


undefined4
FUN_0052ae20(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4,
            undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if (param_1 == 0) {
    local_c = *param_2;
    local_8 = param_2[1];
    local_4 = param_2[2];
    while( true ) {
      iVar1 = FUN_005245e0(param_4,param_5,4,&local_c,"Xfact:");
      if (iVar1 != 0) break;
      uVar2 = FUN_004e5640(&local_c,&local_c);
      iVar1 = FUN_005168d0(0,uVar2);
      if (iVar1 == 0) {
LAB_0052af0b:
        *param_2 = local_c;
        param_2[1] = local_8;
        param_2[2] = local_4;
        return 1;
      }
      FUN_0052b240(iVar1);
      param_4 = 0;
      param_5 = 0x7545;
    }
  }
  else {
    local_c = *param_3;
    local_8 = param_3[1];
    local_4 = param_3[2];
    while( true ) {
      iVar1 = FUN_005245e0(param_4,param_5,5,&local_c,"Yfact:");
      if (iVar1 != 0) break;
      uVar2 = FUN_004e5640(&local_c,&local_c);
      iVar1 = FUN_005168d0(1,uVar2);
      param_2 = param_3;
      if (iVar1 == 0) goto LAB_0052af0b;
      FUN_0052b240(iVar1);
      param_4 = 0;
      param_5 = 0x7545;
    }
  }
  return 0;
}

