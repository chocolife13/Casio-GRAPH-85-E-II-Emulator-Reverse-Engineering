// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0049aab0
// entry: 0049aab0  size: 138


void FUN_0049aab0(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_004aacd0(0);
  if (iVar1 == 0) {
    iVar1 = FUN_004299c0(DAT_005d6db8);
    if (iVar1 == 1) {
      uVar2 = FUN_00418c90();
    }
    else {
      if (iVar1 != 2) {
        return;
      }
      iVar1 = FUN_004300c0(1);
      if (iVar1 != 0) {
        return;
      }
      uVar2 = FUN_0042a230(DAT_005d6db8);
    }
    switch(uVar2) {
    case 0:
      FUN_004a20c0(0x172,0x173,0x174,1);
      return;
    case 0xffffffe9:
    case 0xfffffff2:
    case 0xfffffffb:
      FUN_0049c820(uVar2);
      return;
    default:
      FUN_0052b240(4);
    }
  }
  return;
}

