// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004b7610
// entry: 004b7610  size: 109


undefined4 FUN_004b7610(int param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  switch(*(undefined1 *)(param_2 + param_1)) {
  case 0x7f:
  case 0xe5:
  case 0xe6:
  case 0xe7:
  case 0xf7:
  case 0xf9:
    return 1;
  }
  uVar2 = 0;
  cVar1 = ((undefined1 *)(param_2 + param_1))[-1];
  if (cVar1 == -0x1b) {
    uVar2 = 2;
  }
  if (cVar1 == -0x1a) {
    uVar2 = 2;
  }
  if (cVar1 == -0x19) {
    uVar2 = 2;
  }
  if (cVar1 == -9) {
    uVar2 = 2;
  }
  if (cVar1 == -7) {
    uVar2 = 2;
  }
  if (cVar1 == '\x7f') {
    uVar2 = 2;
  }
  return uVar2;
}

