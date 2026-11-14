// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00476780
// entry: 00476780  size: 195


void FUN_00476780(short param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar3 = 0;
  do {
    iVar2 = iVar3 * 0x30;
    iVar1 = 0;
    do {
      *(undefined4 *)((int)&DAT_005cec30 + iVar2) = *(undefined4 *)((int)&DAT_00582728 + iVar2);
      *(undefined4 *)((int)&DAT_005cec34 + iVar2) = *(undefined4 *)((int)&DAT_0058272c + iVar2);
      if (((param_1 == 10) || (param_1 == 2)) && (iVar3 == 2)) {
        *(undefined4 *)((int)&DAT_005cec90 + iVar1) = *(undefined4 *)((int)&DAT_00582b78 + iVar1);
        *(undefined4 *)((int)&DAT_005cec94 + iVar1) = *(undefined4 *)((int)&DAT_00582b7c + iVar1);
      }
      iVar1 = iVar1 + 8;
      iVar2 = iVar2 + 8;
    } while (iVar1 < 0x30);
    FUN_00538860(iVar3,&DAT_005cec30 + iVar3 * 0xc);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x17);
  if (param_1 == 10) {
    FUN_005387f0(2);
  }
  else {
    if (param_1 == 2) {
      uVar4 = 2;
    }
    else {
      uVar4 = 1;
    }
    FUN_005383a0(uVar4);
  }
  FUN_0053c6f0(1);
  FUN_0053edf0(2);
  FUN_0053c690(2);
  FUN_00538e10(0);
  FUN_00538d50(0);
  return;
}

