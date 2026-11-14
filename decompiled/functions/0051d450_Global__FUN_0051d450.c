// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0051d450
// entry: 0051d450  size: 528


int FUN_0051d450(int param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  int local_90;
  undefined4 local_8c;
  undefined1 local_88 [12];
  undefined1 *local_7c;
  undefined4 *local_78;
  undefined4 local_64;
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_40;
  undefined4 local_3c [15];
  
  if (param_2 == 0) {
    uVar3 = FUN_004e6b80(param_1 + 0x8a8,param_1 + 0x8b4,&local_9c,&local_9c);
    FUN_004e6d00(&local_9c,uVar3);
    uVar3 = FUN_004e6b80(param_1 + 0x8c0,param_1 + 0x8cc,local_88,local_88);
    FUN_004e6d00(local_88,uVar3);
    uVar3 = FUN_004e6a00(&local_9c,local_88,&local_9c,&local_9c);
    FUN_004e7390(uVar3);
  }
  else {
    local_9c = *(undefined4 *)(param_1 + 0x8b4);
    local_98 = *(undefined4 *)(param_1 + 0x8b8);
    local_94 = *(undefined4 *)(param_1 + 0x8bc);
  }
  local_60 = *(undefined1 *)(param_1 + 0x8e3);
  local_78 = &local_9c;
  bVar1 = *(byte *)(param_1 + 0x8e1);
  local_8c = *(undefined4 *)(param_1 + 0x8dc);
  *(byte *)(param_1 + 0x8e1) = bVar1 & 0xfe;
  bVar2 = *(byte *)(param_1 + 0x8e0);
  *(byte *)(param_1 + 0x8e0) = bVar2 & 0xf7 | 4;
  *(undefined1 ***)(param_1 + 0x8dc) = &local_7c;
  puVar6 = (undefined4 *)(param_1 + 0x86c);
  puVar7 = local_3c;
  for (iVar4 = 0xf; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  local_64 = 0x1401;
  local_7c = &LAB_0051d3b0;
  local_5f = 0;
  local_40 = 0;
  FUN_004e4c30(&DAT_005a91c0,(undefined4 *)(param_1 + 0x86c));
  FUN_004e4c30(s_6_28318530717960_005bed04,param_1 + 0x878);
  FUN_004e4c30(&DAT_005a91c0,param_1 + 0x890);
  FUN_004e4c30(s_6_28318530717960_005bed04,param_1 + 0x89c);
  FUN_004e4c30(s_0_10471975511966_005c32cc,param_1 + 0x884);
  local_90 = FUN_00510270(param_1);
  FUN_0050acb0(param_1);
  iVar4 = local_90;
  puVar6 = local_3c;
  puVar7 = (undefined4 *)(param_1 + 0x86c);
  for (iVar5 = 0xf; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  *(byte *)(param_1 + 0x8e0) = (bVar2 >> 2 & 3) << 2 | *(byte *)(param_1 + 0x8e0) & 0xf3;
  *(undefined4 *)(param_1 + 0x8dc) = local_8c;
  *(byte *)(param_1 + 0x8e1) =
       (*(byte *)(param_1 + 0x8e1) ^ bVar1 & 1) & 1 ^ *(byte *)(param_1 + 0x8e1);
  if (local_90 != 0) {
    FUN_00515dd0();
  }
  return iVar4;
}

