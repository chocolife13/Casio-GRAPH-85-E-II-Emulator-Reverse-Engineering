// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005186b0
// entry: 005186b0  size: 100


undefined4 FUN_005186b0(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined1 local_3c [4];
  undefined4 local_38 [14];
  
  puVar3 = local_38;
  for (iVar2 = 0xe; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  cVar1 = FUN_004ad2a0(0xffffffff,s_TANGENT_005c31e4,local_3c);
  if (cVar1 != '\0') {
    cVar1 = FUN_004aba60(0xffffffff,s_TANGENT_005c31e4,0x38,local_38);
    if (cVar1 != '\0') {
      return 4;
    }
  }
  FUN_004ac2f0(0x38,param_1,0);
  return 0;
}

