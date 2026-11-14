// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004ac470
// entry: 004ac470  size: 174


undefined4 FUN_004ac470(undefined4 param_1)

{
  ushort uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  int local_4;
  
  uVar3 = param_1;
  uVar2 = FUN_004ab740(param_1);
  cVar4 = (char)uVar3;
  if (cVar4 == '\0') {
    return 0x10;
  }
  uVar7 = FUN_004103d0(uVar2,&local_4,&param_1);
  uVar3 = (undefined4)((ulonglong)uVar7 >> 0x20);
  DAT_005d6048 = (int)uVar7;
  if (DAT_005d6048 == 0) {
    uVar1 = *(ushort *)(local_4 + 0xc);
    if (uVar1 != 0) {
      uVar5 = (uint)uVar1;
      iVar6 = *(int *)(local_4 + 8);
      DAT_005d6048 = 0;
      if (uVar1 != 0) {
        do {
          if ((cVar4 == -0x80) ||
             (uVar7 = FUN_004ab990(CONCAT31((int3)((uint)uVar3 >> 8),*(undefined1 *)(iVar6 + 0x10)))
             , (char)uVar7 == cVar4)) {
            uVar7 = FUN_00410e00(uVar2,iVar6);
          }
          else {
            iVar6 = iVar6 + 0x14;
          }
          uVar3 = (undefined4)((ulonglong)uVar7 >> 0x20);
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
      DAT_005d5870 = DAT_005cd010;
      DAT_005d5760 = DAT_005cd010;
      DAT_005d5b70 = 0x80;
      return 0;
    }
    return 0x23;
  }
  uVar3 = FUN_004ab770(DAT_005d6048);
  return uVar3;
}

