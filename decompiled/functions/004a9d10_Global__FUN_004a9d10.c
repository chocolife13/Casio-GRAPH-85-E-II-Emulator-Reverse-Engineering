// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004a9d10
// entry: 004a9d10  size: 196


void FUN_004a9d10(void)

{
  byte bVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined1 local_410 [16];
  undefined4 local_400 [256];
  
  FUN_005234d0(local_410);
  uVar2 = DAT_005d8260;
  DAT_005d8260 = 0;
  uVar3 = FUN_0040ad00();
  FUN_005262e0(0);
  uVar4 = FUN_00526410();
  FUN_00526420(0xe7);
  bVar1 = DAT_005d6d65;
  if ((DAT_005d6d65 & 0x68) == 0) {
    DAT_005d6d65 = 0;
  }
  puVar5 = (undefined4 *)FUN_004138b0();
  puVar7 = puVar5;
  puVar8 = local_400;
  for (iVar6 = 0x100; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  FUN_004aa160(0);
  puVar7 = local_400;
  for (iVar6 = 0x100; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar5 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar5 = puVar5 + 1;
  }
  FUN_0040ae30();
  DAT_005d6d65 = bVar1;
  FUN_005262e0(uVar3);
  FUN_00526420(uVar4);
  FUN_00523630(local_410);
  DAT_005d8260 = uVar2;
  return;
}

