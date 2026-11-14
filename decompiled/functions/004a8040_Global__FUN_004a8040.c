// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004a8040
// entry: 004a8040  size: 119


bool FUN_004a8040(undefined4 *param_1)

{
  char cVar1;
  byte bVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined1 local_38 [24];
  undefined4 local_20 [8];
  
  puVar3 = param_1;
  puVar5 = local_20;
  for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar3 = (undefined4 *)FUN_00531c50(local_38,param_1);
  puVar5 = local_20;
  for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar5 = puVar5 + 1;
  }
  cVar1 = FUN_004ad2a0(0xffffffff,s_InpDat_005c03ac,&param_1);
  if (cVar1 != '\0') {
    FUN_004aba60(0xffffffff,s_InpDat_005c03ac,0x20,&DAT_005cd010);
  }
  bVar2 = FUN_004ac2f0(0x20,local_20,0);
  return bVar2 < 3;
}

