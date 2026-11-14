// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0041b270
// entry: 0041b270  size: 101


int FUN_0041b270(int param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  undefined1 local_1c [4];
  uint local_18;
  
  *param_2 = 0xffe;
  uVar2 = 0;
  do {
    if (DAT_005d8730 <= uVar2) {
      return 0;
    }
    iVar1 = FUN_0041af20(uVar2,local_1c);
    if (iVar1 < 0) {
      return iVar1;
    }
    if ((local_18 & 0xffff) == param_1 + 1U) {
      *param_2 = uVar2;
      return 1;
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0xffe);
  return 0;
}

