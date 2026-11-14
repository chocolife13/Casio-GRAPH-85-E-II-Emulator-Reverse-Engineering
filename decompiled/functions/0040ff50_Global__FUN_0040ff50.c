// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0040ff50
// entry: 0040ff50  size: 96


undefined * FUN_0040ff50(char param_1,undefined2 *param_2)

{
  uint uVar1;
  
  if (param_1 == 'P') {
    uVar1 = 1;
  }
  else if (param_1 == 'S') {
    uVar1 = 2;
  }
  else if (param_1 == -0x39) {
    uVar1 = 4;
  }
  else {
    uVar1 = (param_1 != 'T') - 1 & 3;
  }
  *param_2 = *(undefined2 *)(&DAT_005ababa + uVar1 * 4);
  return &DAT_005abaa4 + *(ushort *)(&DAT_005abab8 + uVar1 * 4);
}

