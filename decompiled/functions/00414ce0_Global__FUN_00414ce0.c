// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00414ce0
// entry: 00414ce0  size: 169


undefined4 FUN_00414ce0(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined1 local_428 [24];
  undefined4 local_410 [260];
  
  puVar3 = local_410;
  for (iVar2 = 0x104; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  if (param_1 == 0) {
    if (param_2 == 0x1a) {
      cVar1 = -0x32;
    }
    else if (param_2 == 0x1b) {
      cVar1 = -0x33;
    }
    else if (param_2 == 0x1c) {
      cVar1 = -0x40;
    }
    else {
      if ((param_2 < 0) || (0x1b < param_2)) {
        return 4;
      }
      cVar1 = (char)param_2 + 'A';
    }
    FUN_0052f760(cVar1,local_428);
    FUN_00414b60(local_428,local_410);
  }
  else if (param_1 != 1) {
    return 2;
  }
  return 0;
}

