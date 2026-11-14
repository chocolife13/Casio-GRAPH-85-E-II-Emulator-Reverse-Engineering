// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004a7fb0
// entry: 004a7fb0  size: 137


void FUN_004a7fb0(undefined4 *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined1 local_3c [4];
  undefined1 local_38 [24];
  undefined4 local_20 [6];
  undefined4 local_8;
  undefined4 local_4;
  
  FUN_004e5780(local_20);
  local_8 = 0;
  local_4 = 0;
  puVar2 = local_20;
  puVar4 = param_1;
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar4 = puVar4 + 1;
  }
  cVar1 = FUN_004ad2a0(0xffffffff,s_InpDat_005c03ac,local_3c);
  if (cVar1 == '\0') {
    cVar1 = FUN_004ad3f0(1,0x20,local_20);
    if (cVar1 == '\0') {
      puVar2 = local_20;
      puVar4 = param_1;
      for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar4 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar4 = puVar4 + 1;
      }
      puVar2 = (undefined4 *)FUN_00531c50(local_38,local_20);
      for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
        *param_1 = *puVar2;
        puVar2 = puVar2 + 1;
        param_1 = param_1 + 1;
      }
    }
  }
  return;
}

