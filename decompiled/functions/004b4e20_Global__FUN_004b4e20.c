// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004b4e20
// entry: 004b4e20  size: 250


undefined4 FUN_004b4e20(byte *param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined1 local_3c [12];
  byte local_30 [24];
  byte local_18 [24];
  
  bVar1 = *param_1;
  if (((((bVar1 & 0x70) == 0) || ((bVar1 & 0x70) == 0x10)) && ((bVar1 & 0xf) != 10)) &&
     ((bVar1 & 0x80) == 0)) {
    FUN_004e5780(&local_48);
    FUN_004e76c0(param_1,local_3c);
    iVar3 = FUN_004e71d0(&local_48,local_3c);
    if (iVar3 == 1) {
      *(undefined4 *)(param_1 + 0xc) = local_48;
      *(undefined4 *)(param_1 + 0x10) = local_44;
      *(undefined4 *)(param_1 + 0x14) = local_40;
      *param_1 = *param_1 | 0x80;
      return 1;
    }
  }
  cVar2 = FUN_005260a0();
  FUN_004e23b0(param_1,local_30,1);
  if ((local_30[0] & 0xf0) == 0xf0) {
    return 0;
  }
  FUN_004e28c0(param_1,local_18,(int)cVar2,1);
  if ((local_18[0] & 0xf0) == 0xf0) {
    return 0;
  }
  FUN_00554ab0(param_1,local_30,0xc);
  FUN_00554ab0(param_1 + 0xc,local_18,0xc);
  *param_1 = *param_1 | 0x80;
  return 1;
}

