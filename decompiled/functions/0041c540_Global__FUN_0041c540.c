// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0041c540
// entry: 0041c540  size: 300


undefined8 FUN_0041c540(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined8 uVar6;
  undefined4 local_64 [25];
  
  uVar3 = 0;
  puVar4 = local_64;
  for (iVar2 = 0x19; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  if (param_1 == 0) {
    uVar3 = FUN_0041c520(local_64);
  }
  else {
    if (param_1 == 1) {
      iVar2 = FUN_0041c0e0(local_64);
      if (iVar2 < 0) {
        uVar6 = FUN_00419fc0(iVar2);
        return uVar6;
      }
      FUN_005237c0(6);
      FUN_00515990(0,0x19);
      iVar2 = 0;
      iVar5 = 1;
      puVar4 = local_64;
      do {
        iVar1 = FUN_0041c2f0(iVar2);
        if (iVar1 == 0) {
          *puVar4 = 0xffffffff;
        }
        FUN_00515990(iVar5,0x19);
        iVar2 = iVar2 + 1;
        puVar4 = puVar4 + 1;
        iVar5 = iVar5 + 1;
      } while ((ushort)iVar2 < 0x19);
      FUN_00523800(6);
      uVar3 = FUN_0041c520(local_64);
      return CONCAT44(uVar3,uVar3);
    }
    if (param_1 == 2) {
      FUN_005237c0(6);
      FUN_00515990(0,0x19);
      iVar2 = 0;
      iVar5 = 1;
      puVar4 = local_64;
      do {
        iVar1 = FUN_0041c2f0(iVar2);
        if (iVar1 == 0) {
          *puVar4 = 0xffffffff;
        }
        FUN_00515990(iVar5,0x19);
        iVar2 = iVar2 + 1;
        puVar4 = puVar4 + 1;
        iVar5 = iVar5 + 1;
      } while ((ushort)iVar2 < 0x19);
      FUN_00523800(6);
      uVar3 = FUN_0041c520(local_64);
      return CONCAT44(uVar3,uVar3);
    }
  }
  return CONCAT44(uVar3,uVar3);
}

