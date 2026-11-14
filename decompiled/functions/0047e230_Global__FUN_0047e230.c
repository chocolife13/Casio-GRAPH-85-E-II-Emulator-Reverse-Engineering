// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0047e230
// entry: 0047e230  size: 466


void FUN_0047e230(int param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5,
                 int param_6)

{
  int iVar1;
  
  if (param_1 == 0) {
    if (param_3 == 0) {
      FUN_0050fc60(param_2,param_5,param_4,param_5 + 0xc,param_6,2,0,
                   *(undefined1 *)(param_6 + 0x8e2));
      return;
    }
    if (param_3 == 0x400) {
      param_4 = 0xff;
    }
    else {
      if (param_3 != 0x800) {
        return;
      }
      param_4 = 0xffffff81;
    }
    FUN_0050f940(param_2,param_5,param_4,param_5,param_6,2,*(undefined1 *)(param_6 + 0x8e2));
    iVar1 = param_5 + 0xc;
    FUN_0050f940(param_2,iVar1,param_4,iVar1,param_6,2,*(undefined1 *)(param_6 + 0x8e2));
    FUN_0050f940(param_2,param_5,param_2,iVar1,param_6,2,*(undefined1 *)(param_6 + 0x8e2));
  }
  else if (param_1 == 0x400) {
    if (param_3 != 0) {
      if (param_3 != 0x800) {
        return;
      }
      param_4 = 0xffffff81;
    }
    FUN_0050f940(0xff,param_5,param_4,param_5,param_6,2,*(undefined1 *)(param_6 + 0x8e2));
    iVar1 = param_5 + 0xc;
    FUN_0050f940(0xff,iVar1,param_4,iVar1,param_6,2,*(undefined1 *)(param_6 + 0x8e2));
    if (param_3 == 0) {
      FUN_0050f940(param_4,param_5,param_4,iVar1,param_6,2,*(undefined1 *)(param_6 + 0x8e2));
      return;
    }
  }
  else if (param_1 == 0x800) {
    if (param_3 != 0) {
      if (param_3 != 0x400) {
        return;
      }
      param_4 = 0xff;
    }
    FUN_0050f940(0xffffff81,param_5,param_4,param_5,param_6,2,*(undefined1 *)(param_6 + 0x8e2));
    iVar1 = param_5 + 0xc;
    FUN_0050f940(0xffffff81,iVar1,param_4,iVar1,param_6,2,*(undefined1 *)(param_6 + 0x8e2));
    if (param_3 == 0) {
      FUN_0050f940(param_4,param_5,param_4,iVar1,param_6,2,*(undefined1 *)(param_6 + 0x8e2));
      return;
    }
  }
  return;
}

