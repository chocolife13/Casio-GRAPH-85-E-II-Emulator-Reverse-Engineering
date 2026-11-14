// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00501ca0
// entry: 00501ca0  size: 219


int FUN_00501ca0(undefined4 *param_1,undefined1 *param_2,undefined1 *param_3,int param_4,
                uint param_5)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined1 *local_e8;
  undefined1 *local_e4;
  undefined1 *local_e0;
  undefined1 local_d8 [28];
  undefined1 local_bc [64];
  undefined1 local_7c [124];
  
  local_e8 = local_7c;
  local_e4 = local_d8;
  local_e0 = local_bc;
  local_bc[0] = 0;
  local_d8[0] = 0;
  local_7c[0] = 0;
  uVar1 = FUN_0052f6b0(0x3b);
  FUN_0052f6c0(0x3b,uVar1 & 0xfffffffe);
  if ((param_5 & 0x4000) != 0) {
    *param_2 = 0x28;
    FUN_00501010(param_2,local_d8);
  }
  FUN_0052f840();
  *param_3 = 0;
  if (param_4 != 0) {
    *param_2 = 0x30;
    FUN_004fe330(param_2,param_1);
  }
  iVar2 = FUN_004fc460(param_1,param_2,param_3,&local_e8,param_5);
  if (iVar2 == 0) {
    uVar1 = FUN_0052f6b0(0x3b);
    if ((uVar1 & 1) != 0) {
      puVar3 = (undefined4 *)FUN_0052f6e0(0xc);
      *param_1 = *puVar3;
    }
  }
  return iVar2;
}

