// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0051ab30
// entry: 0051ab30  size: 305


undefined4
FUN_0051ab30(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 *param_6)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 unaff_EBX;
  undefined4 *puVar4;
  uint local_128;
  undefined1 *local_124;
  undefined1 *local_120;
  undefined1 *local_11c;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined1 local_fc;
  undefined4 local_fb [8];
  undefined1 local_d8 [28];
  undefined1 local_bc [64];
  undefined1 local_7c [124];
  
  local_fc = 0x30;
  puVar4 = local_fb;
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  local_120 = local_d8;
  *(undefined1 *)puVar4 = 0;
  local_124 = local_7c;
  local_11c = local_bc;
  local_bc[0] = 0;
  local_d8[0] = 0;
  local_7c[0] = 0;
  FUN_004fe330(&local_fc,param_5);
  thunk_FUN_0040add0();
  FUN_0052f840();
  uVar1 = FUN_0052f6b0(0x4a);
  local_128 = CONCAT31(local_128._1_3_,uVar1) | 1;
  FUN_0052f6c0(0x4a,local_128);
  iVar3 = FUN_004d3b90(param_2,param_3,param_4,&local_114,param_5,&local_fc,&local_124);
  FUN_0052f6c0(0x4a,CONCAT31((int3)((uint)unaff_EBX >> 8),uVar1) & 0xffffffe0);
  if (iVar3 == 0) {
    FUN_00515dd0();
    FUN_00518100();
    uVar2 = FUN_004e4020(&local_114);
    return uVar2;
  }
  if (param_6 != (undefined4 *)0x0) {
    *param_6 = local_114;
    param_6[1] = local_110;
    param_6[2] = local_10c;
  }
  FUN_0050acb0(param_1);
  FUN_0051ac70(param_1,param_2,param_3,&local_114);
  return 0;
}

