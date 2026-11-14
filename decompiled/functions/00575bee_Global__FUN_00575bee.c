// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00575bee
// entry: 00575bee  size: 177


undefined4 FUN_00575bee(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (DAT_005d5104 == 0) {
    iVar1 = FUN_0057633b(&LAB_0057437f);
    if (*(int *)(iVar1 + 4) == 0) {
      *(code **)(iVar1 + 0xc) = FUN_0055cfb0;
      *(code **)(iVar1 + 0x10) = FUN_0055d020;
      *(code **)(iVar1 + 0x14) = FUN_0055d0e0;
      *(code **)(iVar1 + 0x18) = FUN_0055d260;
      *(undefined1 **)(iVar1 + 0x1c) = &LAB_0055d700;
      *(undefined1 **)(iVar1 + 0x20) = &LAB_0055d600;
      *(code **)(iVar1 + 0x24) = FUN_0055d9e0;
      *(undefined1 **)(iVar1 + 0x28) = &LAB_0055d300;
      *(undefined1 **)(iVar1 + 0x2c) = &LAB_0055d440;
      iVar2 = FUN_0057497f();
      iVar2 = (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar2 + 8));
      if (iVar2 == 0) {
        *(undefined4 *)(iVar1 + 0xc) = 0;
        *(undefined4 *)(iVar1 + 0x10) = 0;
        *(undefined4 *)(iVar1 + 0x14) = 0;
        *(undefined4 *)(iVar1 + 0x18) = 0;
        *(undefined4 *)(iVar1 + 0x1c) = 0;
        *(undefined4 *)(iVar1 + 0x20) = 0;
        *(undefined4 *)(iVar1 + 0x24) = 0;
        *(undefined4 *)(iVar1 + 0x28) = 0;
        *(undefined4 *)(iVar1 + 0x2c) = 0;
      }
      *(undefined4 *)(iVar1 + 4) = 1;
    }
    if (*(int *)(iVar1 + 0x14) == 0) {
      uVar3 = 0;
    }
    else {
      iVar2 = FUN_0057497f();
      uVar3 = (**(code **)(iVar1 + 0x14))(*(undefined4 *)(iVar2 + 8));
    }
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}

