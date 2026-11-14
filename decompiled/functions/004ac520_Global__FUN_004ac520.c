// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004ac520
// entry: 004ac520  size: 123


uint FUN_004ac520(undefined4 param_1)

{
  ushort uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int local_4;
  
  uVar3 = param_1;
  DAT_005d6048 = FUN_004103d0(param_1,&local_4,&param_1);
  if (DAT_005d6048 != 0) {
    uVar4 = FUN_004ab770(DAT_005d6048);
    return uVar4;
  }
  uVar1 = *(ushort *)(local_4 + 0xc);
  if (uVar1 != 0) {
    uVar4 = (uint)uVar1;
    uVar2 = *(undefined4 *)(local_4 + 8);
    DAT_005d6048 = 0;
    uVar5 = uVar4;
    if (uVar1 != 0) {
      do {
        uVar4 = FUN_00410e00(uVar3,uVar2);
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
    DAT_005d5870 = DAT_005cd010;
    DAT_005d5760 = DAT_005cd010;
    DAT_005d5b70 = 0x80;
    return uVar4 & 0xffffff00;
  }
  return 0x23;
}

