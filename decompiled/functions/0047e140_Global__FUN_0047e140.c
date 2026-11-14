// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0047e140
// entry: 0047e140  size: 228


void FUN_0047e140(int param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5,
                 int param_6)

{
  if (param_1 == 0) {
    if (param_3 == 0x400) {
      param_4 = 0xff;
    }
    else if (param_3 == 0x800) {
      param_4 = 0xffffff81;
    }
    else if (param_3 != 0) {
      return;
    }
    FUN_0050f940(param_2,param_5,param_4,param_5,param_6,2,*(undefined1 *)(param_6 + 0x8e2));
  }
  else {
    if (param_1 == 0x400) {
      if (param_3 != 0) {
        if (param_3 != 0x800) {
          return;
        }
        param_4 = 0xffffff81;
      }
      FUN_0050f940(0xff,param_5,param_4,param_5,param_6,2,*(undefined1 *)(param_6 + 0x8e2));
      return;
    }
    if (param_1 == 0x800) {
      if (param_3 != 0) {
        if (param_3 != 0x400) {
          return;
        }
        param_4 = 0xff;
      }
      FUN_0050f940(0xffffff81,param_5,param_4,param_5,param_6,2,*(undefined1 *)(param_6 + 0x8e2));
      return;
    }
  }
  return;
}

