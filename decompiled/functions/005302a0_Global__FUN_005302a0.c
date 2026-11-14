// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005302a0
// entry: 005302a0  size: 147


byte FUN_005302a0(int param_1)

{
  int iVar1;
  char cVar2;
  byte bVar3;
  undefined1 local_8;
  undefined1 local_7;
  undefined1 local_6;
  undefined1 local_5;
  undefined1 local_4;
  
  iVar1 = param_1;
  local_8 = 0x43;
  local_7 = 0x4f;
  local_6 = 0x4e;
  local_5 = 0x44;
  local_4 = 0;
  FUN_004e5640(param_1,param_1);
  FUN_004e5640(iVar1 + 0xc,iVar1 + 0xc);
  FUN_004e5640(iVar1 + 0x18,iVar1 + 0x18);
  cVar2 = FUN_004ad350(&DAT_005be2a4,&local_8,&param_1);
  if (cVar2 != '\0') {
    cVar2 = FUN_004abb50(&DAT_005be2a4,&local_8,0x2c,iVar1);
    return -(cVar2 != '\0') & 4;
  }
  bVar3 = FUN_004ac2f0(0x2c,iVar1,0);
  return -(2 < bVar3) & 4;
}

