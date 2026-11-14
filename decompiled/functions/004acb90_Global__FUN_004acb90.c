// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004acb90
// entry: 004acb90  size: 385


uint FUN_004acb90(uint param_1,uint param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined1 local_d;
  uint local_c;
  int local_8;
  undefined1 local_4 [4];
  
  DAT_005d6048 = FUN_004105d0(&DAT_005d5870,&DAT_005d5760,&local_d,local_4,&local_8,&local_c);
  if (DAT_005d6048 != 0) {
    uVar2 = FUN_004ab770(DAT_005d6048);
    return uVar2;
  }
  if (DAT_005d5b70 != '\0') {
    DAT_005d6048 = FUN_004115f0(&DAT_005d5870,&DAT_005d5760,param_2,param_1 & 0xfffffffc);
    if (DAT_005d6048 != 0) {
      uVar2 = FUN_004ab770(DAT_005d6048);
      return uVar2;
    }
    DAT_005d6048 = 0;
    uVar2 = param_2;
    if (param_2 < local_c - param_1) {
      iVar4 = (param_1 & 3) + param_2;
      uVar3 = param_2;
      do {
        uVar2 = uVar3 + 1;
        puVar1 = (undefined1 *)(iVar4 + local_8);
        iVar4 = iVar4 + 1;
        *(undefined1 *)(uVar3 + local_8) = *puVar1;
        uVar3 = uVar2;
      } while (uVar2 < local_c - param_1);
    }
    uVar2 = CONCAT31((int3)(uVar2 >> 8),DAT_005d5b70);
    if ((DAT_005d5b70 == '\x01') || (DAT_005d5b70 == '\x04')) {
      FUN_004105d0(&DAT_005d5870,&DAT_005d5760,&local_d,local_4,&local_8,&local_c);
      iVar4 = FUN_004b7550(local_8 + 10);
      uVar2 = iVar4 + 0xb;
      if ((3 < local_c - uVar2) &&
         (uVar2 = FUN_004115f0(&DAT_005d5870,&DAT_005d5760,uVar2,local_c - uVar2 & 0xfffffffc),
         DAT_005d6048 = uVar2, uVar2 != 0)) {
        uVar2 = FUN_004ab770(uVar2);
        return uVar2;
      }
    }
    else if ((param_2 == 0) && (param_1 == local_c)) {
      if (DAT_005d5b70 == -2) {
        uVar2 = FUN_004abb50(&DAT_005d5870);
      }
      else {
        uVar2 = FUN_004aba60(uVar2,&DAT_005d5760,4,&DAT_005d0200);
      }
      if ((char)uVar2 != '\0') {
        return uVar2;
      }
    }
    return uVar2 & 0xffffff00;
  }
  return 0x56;
}

