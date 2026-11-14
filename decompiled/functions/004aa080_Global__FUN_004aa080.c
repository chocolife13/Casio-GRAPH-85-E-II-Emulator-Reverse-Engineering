// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004aa080
// entry: 004aa080  size: 224


undefined4 FUN_004aa080(void)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 local_430;
  undefined1 local_424 [16];
  undefined1 local_414 [20];
  undefined4 local_400 [256];
  
  DAT_005d6c29 = 3;
  FUN_005234d0(local_424);
  uVar1 = DAT_005d8260;
  DAT_005d8260 = 0;
  uVar2 = FUN_0040ad00();
  FUN_005262e0(0);
  uVar3 = FUN_00526410();
  FUN_00526420(0xe7);
  puVar4 = (undefined4 *)FUN_004138b0();
  puVar6 = puVar4;
  puVar7 = local_400;
  for (iVar5 = 0x100; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  iVar5 = FUN_00499d60(local_414);
  if (iVar5 == 1) {
    local_430 = FUN_004a98d0(local_414,0);
  }
  else {
    local_430 = 7;
  }
  puVar6 = local_400;
  for (iVar5 = 0x100; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar4 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar4 = puVar4 + 1;
  }
  FUN_0040ae30();
  FUN_005262e0(uVar2);
  FUN_00526420(uVar3);
  FUN_00523630(local_424);
  DAT_005d8260 = uVar1;
  DAT_005d6c29 = DAT_005d6806;
  return local_430;
}

