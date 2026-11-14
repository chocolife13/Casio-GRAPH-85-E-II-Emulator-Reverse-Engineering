// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005533e9
// entry: 005533e9  size: 49


undefined4 FUN_005533e9(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffff;
  if ((*(byte *)(param_1 + 0xc) & 0x40) == 0) {
    FUN_005572ad(param_1);
    uVar1 = __fclose_lk(param_1);
    FUN_005572ff(param_1);
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return uVar1;
}

