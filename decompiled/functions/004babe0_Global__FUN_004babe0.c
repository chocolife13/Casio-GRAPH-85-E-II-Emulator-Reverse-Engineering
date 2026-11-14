// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004babe0
// entry: 004babe0  size: 188


undefined4 FUN_004babe0(int *param_1,int param_2,int param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if (param_3 == 1) {
    puVar1 = (undefined4 *)(*param_1 + (param_2 * 3 + 3) * 4);
    *param_4 = *puVar1;
    param_4[1] = puVar1[1];
    param_4[2] = puVar1[2];
  }
  else {
    puVar1 = (undefined4 *)(*param_1 + param_2 * 0xc);
    puVar2 = (undefined4 *)(*param_1 + (param_2 * 3 + 3) * 4);
    local_18 = *puVar1;
    local_14 = puVar1[1];
    local_10 = puVar1[2];
    local_c = *puVar2;
    local_8 = puVar2[1];
    local_4 = puVar2[2];
    FUN_004e6ab0(&local_18,&local_c,param_4);
    FUN_004e5840(&local_18);
    FUN_004e6d00(param_4,&local_18,param_4);
    iVar3 = FUN_004e4020(param_4);
    if (iVar3 != 0) {
      return 0;
    }
  }
  return 1;
}

