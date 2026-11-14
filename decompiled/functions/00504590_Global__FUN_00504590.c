// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00504590
// entry: 00504590  size: 376


undefined4 FUN_00504590(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int local_cf0;
  undefined1 local_cec [4];
  undefined1 local_ce8 [4];
  undefined1 local_ce4 [12];
  undefined1 local_cd8 [2268];
  undefined1 *local_3fc;
  byte local_3f8;
  undefined4 local_3f4;
  undefined1 local_3e0 [992];
  
  local_3fc = local_3e0;
  FUN_00503490(local_cd8);
  local_3f8 = local_3f8 & 0xcf;
  local_3f4 = CONCAT31(local_3f4._1_3_,0x23);
  iVar1 = FUN_00505f10(local_cd8,0x20);
  if (iVar1 == 0) {
    return 0x1e;
  }
  FUN_00528a20(local_3f4,local_ce8,&local_cf0);
  if (local_cf0 == 0) {
    return 4;
  }
  uVar2 = FUN_00526410();
  FUN_00538a00(local_ce4);
  FUN_00538980(0,0,local_cec);
  FUN_0053c6f0(0xb);
  FUN_0053c690(2);
  FUN_00526420(0xd6);
  FUN_00538860(0,0);
  FUN_005387f0(0);
  uVar3 = FUN_00504730(local_cd8,*param_1);
  FUN_00538810();
  FUN_00538a50(local_ce4);
  FUN_005389c0(0,0,local_cec);
  FUN_00526420(uVar2);
  switch(uVar3) {
  case 0xfffffff2:
  case 0xfffffffa:
  case 0xfffffffe:
    *param_1 = 0x7532;
    return 0;
  case 0xfffffff3:
    *param_1 = 0x753f;
    break;
  case 0xfffffff4:
  case 0:
    *param_1 = 0x7534;
    return 0;
  case 0xfffffff5:
    *param_1 = 0x7557;
    return 0;
  case 0xffffffff:
    *param_1 = 0x754d;
    return 0;
  }
  return 0;
}

