// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005190b0
// entry: 005190b0  size: 475


undefined4 FUN_005190b0(int param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int local_140;
  undefined1 local_13c [4];
  undefined1 local_138 [12];
  undefined1 local_12c [12];
  undefined4 local_120 [12];
  undefined4 local_f0 [12];
  undefined4 local_c0 [12];
  undefined4 local_90 [12];
  undefined1 local_60 [48];
  undefined1 local_30 [48];
  
  FUN_00528a20(0x24,local_13c,&local_140);
  if (local_140 == 0) {
    thunk_FUN_0040add0();
    iVar2 = FUN_004408d0();
    if (iVar2 != 0) {
      FUN_00518200();
      FUN_0052b240(iVar2);
      return 0xfffffff5;
    }
  }
  FUN_00518f70(*(undefined4 *)(param_1 + 0x8dc),0x1f);
  iVar2 = FUN_00517c00();
  if ((*(byte *)(param_1 + 0x8e0) & 0x30) == 0) {
    FUN_00414240();
  }
  else {
    if (iVar2 == 0) {
      iVar3 = FUN_00514820();
      if (iVar3 != 0) {
        FUN_0052b240(iVar3);
        return 0xfffffff5;
      }
    }
    else {
      FUN_00516760(param_1);
    }
    FUN_0050ad60(param_1);
  }
  uVar4 = FUN_00526410();
  FUN_00538a00(local_138);
  FUN_00538980(0,2,local_12c);
  if (((*(byte *)(param_1 + 0x8e0) & 0x30) == 0) || (iVar2 == 0)) {
    uVar7 = 0xb;
  }
  else {
    uVar7 = 8;
  }
  FUN_0053c6f0(uVar7);
  if (iVar2 == 0) {
    uVar7 = 2;
  }
  else {
    uVar7 = 6;
  }
  FUN_0053c690(uVar7);
  FUN_00526420(0x46);
  puVar5 = &DAT_0058c7d8;
  puVar6 = local_120;
  for (iVar2 = 0x48; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  cVar1 = FUN_00526090(0x30);
  if ((cVar1 < '\x01') || ('\x02' < cVar1)) {
    if ((*(byte *)(param_1 + 0x8e1) & 2) == 0) {
      puVar5 = local_120;
    }
    else {
      puVar5 = local_c0;
    }
  }
  else if ((*(byte *)(param_1 + 0x8e1) & 2) == 0) {
    puVar5 = local_f0;
  }
  else {
    puVar5 = local_90;
  }
  FUN_00538860(0,puVar5);
  FUN_00538860(1,local_60);
  FUN_00538860(2,local_30);
  FUN_005387f0(0);
  uVar7 = FUN_00504730(param_1,param_2);
  FUN_00538810();
  FUN_00538a50(local_138);
  FUN_005389c0(0,2,local_12c);
  FUN_00526420(uVar4);
  return uVar7;
}

