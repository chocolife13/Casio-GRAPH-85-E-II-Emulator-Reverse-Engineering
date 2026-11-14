// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004f5370
// entry: 004f5370  size: 91


undefined4 FUN_004f5370(byte *param_1,char param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = FUN_004e96c0(param_1);
  if (iVar2 != 0) {
    FUN_004e5640(param_1,param_1);
  }
  bVar1 = *param_1;
  if ((bVar1 & 0x60) != 0x20) {
    if (((bVar1 & 0x80) == 0) || ((bVar1 & 0xf0) == 0xf0)) {
      return 1;
    }
    if (param_2 != '\0') {
      uVar3 = FUN_004f58f0(3,param_1);
      return uVar3;
    }
  }
  uVar3 = FUN_004f58f0(2,param_1);
  return uVar3;
}

