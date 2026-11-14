// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004909c0
// entry: 004909c0  size: 254


int FUN_004909c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                undefined4 param_5,int param_6,int param_7)

{
  int iVar1;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined1 local_100 [256];
  
  local_118 = *param_4;
  local_114 = param_4[1];
  local_110 = param_4[2];
  local_100[0] = 0;
  iVar1 = FUN_00523ec0(param_1,param_2,param_3,&local_118,local_100,2,param_5,1);
  while( true ) {
    if (iVar1 != 0) {
      return iVar1;
    }
    *param_4 = local_118;
    param_4[1] = local_114;
    param_4[2] = local_110;
    FUN_004e5640(param_4,param_4);
    iVar1 = FUN_0048fdd0(param_4);
    if ((iVar1 <= param_7) && (param_6 <= iVar1)) break;
    FUN_0052b240(3);
    local_118 = *param_4;
    local_100[0] = 0;
    local_114 = param_4[1];
    local_110 = param_4[2];
    iVar1 = FUN_00523ec0(0,0x7545,param_3,&local_118,local_100,2,param_5,1);
  }
  return 0;
}

