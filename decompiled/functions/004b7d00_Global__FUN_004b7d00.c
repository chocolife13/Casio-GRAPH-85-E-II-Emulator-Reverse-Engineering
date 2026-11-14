// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004b7d00
// entry: 004b7d00  size: 124


undefined1 FUN_004b7d00(byte param_1,undefined4 param_2)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 local_c;
  uint local_8;
  undefined2 local_4;
  
  local_c = DAT_005bdd3c;
  local_4 = 0;
  local_8 = (uint)param_1;
  iVar3 = FUN_004b7550(param_2);
  cVar1 = FUN_004acd20(4,&local_c,1);
  if (cVar1 == '\0') {
    FUN_004ac5a0(4,&local_c);
  }
  uVar2 = FUN_004aba60(4,&local_c,iVar3 + 1,param_2);
  return uVar2;
}

