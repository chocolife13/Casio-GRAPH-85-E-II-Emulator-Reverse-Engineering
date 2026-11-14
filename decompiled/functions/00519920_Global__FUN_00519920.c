// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00519920
// entry: 00519920  size: 413


undefined4 FUN_00519920(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int local_cf0;
  undefined1 local_cec [4];
  undefined1 local_ce8 [4];
  undefined1 local_ce4 [12];
  undefined1 local_cd8 [2268];
  undefined1 *local_3fc;
  byte local_3f8;
  byte local_3f7;
  undefined4 local_3f4;
  undefined1 local_3e0 [992];
  
  local_3fc = local_3e0;
  FUN_00503490(local_cd8);
  local_3f8 = local_3f8 & 0xcf;
  local_3f4 = CONCAT31(local_3f4._1_3_,0x24);
  cVar1 = FUN_00526090(0x25);
  if (cVar1 == '\0') {
    local_3f7 = local_3f7 | 2;
  }
  else {
    local_3f7 = local_3f7 & 0xfd;
  }
  iVar2 = FUN_00518f70(local_3e0,0x1f);
  if (iVar2 == 0) {
    return 0x1e;
  }
  FUN_00528a20(local_3f4,local_ce8,&local_cf0);
  if (local_cf0 == 0) {
    return 4;
  }
  uVar3 = FUN_00526410();
  FUN_00538a00(local_ce4);
  FUN_00538980(0,0,local_cec);
  FUN_0053c6f0(0xb);
  FUN_0053c690(2);
  FUN_00526420(0xd6);
  FUN_00538860(0,0);
  FUN_005387f0(0);
  uVar4 = FUN_00504730(local_cd8,*param_1);
  FUN_00538810();
  FUN_00538a50(local_ce4);
  FUN_005389c0(0,0,local_cec);
  FUN_00526420(uVar3);
  switch(uVar4) {
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

