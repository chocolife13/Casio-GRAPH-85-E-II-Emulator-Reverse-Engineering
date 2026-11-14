// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00565b9d
// entry: 00565b9d  size: 48


undefined4 FUN_00565b9d(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = *(uint *)(param_1 + 4);
  if (((uVar1 < 0x100) || (0x108 < uVar1)) && ((uVar1 < 0x200 || (0x209 < uVar1)))) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_005661ab(param_1);
  }
  return uVar2;
}

