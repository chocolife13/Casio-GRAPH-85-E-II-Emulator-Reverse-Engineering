// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004b4d50
// entry: 004b4d50  size: 105


void FUN_004b4d50(undefined4 *param_1,undefined4 *param_2)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  
  puVar4 = param_2;
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = *param_1;
    param_1 = param_1 + 1;
    puVar4 = puVar4 + 1;
  }
  bVar1 = FUN_0052f6b0(0x3d);
  if (((bVar1 & 0xf) != 1) && ((bVar1 & 0xf) != 8)) {
    cVar2 = FUN_00526090(0x57);
    if (cVar2 == '\0') {
      iVar3 = FUN_004b6670(param_2,param_2);
      if (iVar3 == 1) {
        bVar1 = bVar1 & 0xf1 | 1;
      }
    }
    FUN_0052f6c0(0x3d,bVar1);
  }
  return;
}

