// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004e5600
// entry: 004e5600  size: 42


void FUN_004e5600(byte *param_1)

{
  undefined4 uVar1;
  char cVar2;
  
  if ((*param_1 & 0x60) == 0x20) {
    uVar1 = *(undefined4 *)(param_1 + 8);
    cVar2 = FUN_004ada20(uVar1);
    if (cVar2 == '\0') {
      FUN_004ad6d0(uVar1);
    }
  }
  return;
}

