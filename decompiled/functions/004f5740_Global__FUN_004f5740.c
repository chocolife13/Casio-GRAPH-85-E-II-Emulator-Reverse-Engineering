// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004f5740
// entry: 004f5740  size: 111


void __thiscall FUN_004f5740(undefined4 param_1,int param_2)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  
  bVar1 = FUN_0052f6b0(0x47,param_1);
  if (bVar1 != 0) {
    uVar3 = (uint)bVar1;
    do {
      if (*(byte *)(param_2 + 0x11) != 0) {
        uVar4 = (uint)*(byte *)(param_2 + 0x11);
        do {
          FUN_004f51b0(param_2);
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      cVar2 = FUN_0052f6b0(0x47);
      if (cVar2 != '\0') {
        cVar2 = FUN_0052f6b0(0x47);
        FUN_0052f6c0(0x47,cVar2 + -1);
      }
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}

