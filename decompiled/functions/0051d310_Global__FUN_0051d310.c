// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0051d310
// entry: 0051d310  size: 149


void FUN_0051d310(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,int param_6)

{
  if (param_1 < 0x164) {
    if (param_1 == 0x163) {
      FUN_00522700(param_4,param_5,1);
      return;
    }
    if (param_1 == 300) {
      FUN_0050fc10(param_4,param_5,param_2,param_3);
      return;
    }
    if (param_1 == 0x12d) {
      FUN_0050faa0(param_4,param_5,param_2,param_3);
      return;
    }
  }
  else if (param_1 == 0x7613) {
    FUN_0050fb90(param_2);
  }
  else if (param_1 == 0x7614) {
    FUN_0050fbb0(param_3,*(undefined1 *)(param_6 + 0x8e2));
    return;
  }
  return;
}

