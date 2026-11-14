// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004a1310
// entry: 004a1310  size: 449


void FUN_004a1310(uint *param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  char *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  undefined4 uVar9;
  char local_34;
  char local_33;
  char local_32;
  char local_31;
  char local_30;
  char local_2f;
  char local_2e;
  undefined1 local_2d [45];
  
  uVar3 = *param_1;
  bVar6 = uVar3 < 10000000;
  puVar4 = &DAT_00584ed8;
  pcVar5 = &local_34;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pcVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    pcVar5 = pcVar5 + 4;
  }
  if (!bVar6) {
    uVar3 = uVar3 >> 10;
  }
  bVar7 = uVar3 < 1000000;
  if (bVar7) {
    local_34 = ' ';
  }
  else {
    local_34 = (char)(uVar3 / 1000000) + '0';
    uVar3 = uVar3 % 1000000;
  }
  bVar8 = uVar3 < 100000;
  if (bVar8) {
    bVar1 = -bVar7 & 0xf0;
  }
  else {
    bVar1 = (byte)((uint)((ulonglong)uVar3 * 0x14f8b588f >> 0x21) >> 0x10);
    uVar3 = uVar3 % 100000;
  }
  local_33 = bVar1 + 0x30;
  bVar8 = bVar8 && bVar7;
  bVar7 = uVar3 < 10000;
  if (bVar7) {
    bVar1 = -bVar8 & 0xf0;
  }
  else {
    bVar1 = (byte)(uVar3 / 10000);
    uVar3 = uVar3 % 10000;
  }
  local_32 = bVar1 + 0x30;
  bVar7 = bVar7 && bVar8;
  bVar8 = uVar3 < 1000;
  if (bVar8) {
    bVar1 = -bVar7 & 0xf0;
  }
  else {
    bVar1 = (byte)(uVar3 / 1000);
    uVar3 = uVar3 % 1000;
  }
  local_31 = bVar1 + 0x30;
  bVar8 = bVar8 && bVar7;
  bVar7 = uVar3 < 100;
  if (bVar7) {
    bVar1 = -bVar8 & 0xf0;
  }
  else {
    bVar1 = (byte)(uVar3 / 100);
    uVar3 = uVar3 % 100;
  }
  local_30 = bVar1 + 0x30;
  if (uVar3 < 10) {
    bVar1 = -(bVar7 && bVar8) & 0xf0;
  }
  else {
    bVar1 = (byte)(uVar3 / 10);
    uVar3 = uVar3 % 10;
  }
  local_2f = bVar1 + 0x30;
  local_2e = (char)uVar3 + '0';
  if (bVar6) {
    uVar9 = 0x153;
  }
  else {
    uVar9 = 0x15b;
  }
  FUN_0052f6f0(uVar9,local_2d);
  FUN_005232d0(1,7);
  FUN_005233e0(&local_34);
  return;
}

