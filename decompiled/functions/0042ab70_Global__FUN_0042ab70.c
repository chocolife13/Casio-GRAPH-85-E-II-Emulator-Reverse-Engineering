// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0042ab70
// entry: 0042ab70  size: 96


void FUN_0042ab70(ushort *param_1,int param_2)

{
  ushort *puVar1;
  ushort uVar2;
  
  if (param_2 == 1) {
    uVar2 = *param_1;
    while (uVar2 != 0) {
      if ((0x60 < uVar2) && (uVar2 < 0x7b)) {
        *param_1 = uVar2 - 0x20;
      }
      puVar1 = param_1 + 1;
      param_1 = param_1 + 1;
      uVar2 = *puVar1;
    }
  }
  else if ((param_2 == 2) && (uVar2 = *param_1, uVar2 != 0)) {
    do {
      if ((0x40 < uVar2) && (uVar2 < 0x5b)) {
        *param_1 = uVar2 + 0x20;
      }
      uVar2 = param_1[1];
      param_1 = param_1 + 1;
    } while (uVar2 != 0);
    return;
  }
  return;
}

