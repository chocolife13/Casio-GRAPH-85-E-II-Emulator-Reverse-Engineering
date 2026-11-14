// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004110d0
// entry: 004110d0  size: 191


int FUN_004110d0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int local_14;
  int local_10;
  undefined1 local_c [4];
  undefined1 local_8 [4];
  undefined1 local_4 [4];
  
  uVar2 = param_2;
  uVar1 = param_1;
  iVar4 = FUN_004105d0(param_1,param_2,&param_2,&local_14,local_c,&local_10);
  uVar3 = param_3;
  if (iVar4 == 0) {
    if ((*(byte *)(local_14 + 0x11) & 1) != 0) {
      return 0x32;
    }
    if ((*(byte *)(local_14 + 0x11) & 6) != 0) {
      return 0x34;
    }
    iVar4 = FUN_004103d0(param_3,local_8,&param_1);
    if (iVar4 == 0) {
      uVar5 = FUN_00411d60(local_4);
      if (uVar5 < local_10 + 0x14U) {
        iVar4 = 0x5f;
      }
      else {
        iVar4 = FUN_00410c90(uVar1,uVar2,uVar3,param_4);
        if (iVar4 == 0) {
          iVar4 = FUN_00410e00(uVar1,uVar2);
          return iVar4;
        }
      }
    }
  }
  return iVar4;
}

