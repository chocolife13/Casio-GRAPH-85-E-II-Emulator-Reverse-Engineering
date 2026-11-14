// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00434e20
// entry: 00434e20  size: 369


undefined1 FUN_00434e20(byte *param_1,char *param_2,undefined4 *param_3,undefined4 *param_4)

{
  byte bVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int local_6cc;
  int local_6c8;
  int *local_6c4;
  undefined1 *local_6c0;
  undefined4 *local_6bc;
  undefined1 local_6b8 [12];
  undefined4 local_6ac [28];
  undefined1 local_63c [224];
  undefined4 local_55c [343];
  
  FUN_00538a00(local_6b8);
  uVar3 = FUN_00526410();
  FUN_00526420(0xe7);
  FUN_005387f0(1);
  local_6c4 = &local_6cc;
  local_6bc = local_6ac;
  bVar1 = *param_1;
  local_6c0 = local_63c;
  if ((char)bVar1 < '\0') {
    local_6c8 = 1;
    local_6cc = 1;
  }
  else {
    if (bVar1 == 0) {
      local_6c8 = 0x1b;
    }
    else {
      local_6c8 = (int)(char)bVar1;
    }
    local_6cc = (int)*param_2;
  }
  puVar7 = local_6ac;
  iVar6 = 0x1c;
  puVar5 = local_55c;
  do {
    *puVar7 = puVar5;
    puVar8 = puVar5;
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar8 = 0;
      puVar8 = puVar8 + 1;
    }
    *(undefined1 *)puVar8 = 0;
    puVar7 = puVar7 + 1;
    iVar6 = iVar6 + -1;
    puVar8 = puVar5;
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar8 = 0x20202020;
      puVar8 = puVar8 + 1;
    }
    puVar5 = (undefined4 *)((int)puVar5 + 0x31);
  } while (iVar6 != 0);
  FUN_00434fa0(local_6ac,local_63c);
  FUN_00434b80(local_6bc,1,1,1,0);
  FUN_00434b80(local_6bc + local_6cc,1,2,7,(local_6c8 - local_6cc) + 2);
  uVar2 = FUN_00435180(&local_6c4);
  *param_1 = (local_6c8 == 0x1b) - 1U & (byte)local_6c8;
  *param_2 = (char)local_6cc;
  *param_3 = *(undefined4 *)(local_6c0 + local_6c8 * 8);
  *param_4 = *(undefined4 *)(local_6c0 + local_6c8 * 8 + 4);
  FUN_00538810();
  FUN_00538a50(local_6b8);
  FUN_00526420(uVar3);
  return uVar2;
}

