// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0047f120
// entry: 0047f120  size: 951


void FUN_0047f120(int param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5,
                 undefined4 param_6,int param_7,undefined4 param_8,int param_9)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  
  if (param_1 == 0x2000) {
    return;
  }
  if (param_5 == 0x2000) {
    return;
  }
  if (param_3 == 0x1000) {
    return;
  }
  if (param_7 == 0x1000) {
    return;
  }
  uVar2 = param_6;
  if (param_1 == 0) {
    uVar1 = param_2;
    if (param_5 == 0) {
      FUN_0050f940(param_2,param_4,param_6,param_4,param_9,2,*(undefined1 *)(param_9 + 0x8e2));
      uVar3 = *(undefined1 *)(param_9 + 0x8e2);
    }
    else if (param_5 == 0x400) {
      FUN_0050f940(param_2,param_4,0xff,param_4,param_9,2,*(undefined1 *)(param_9 + 0x8e2));
      uVar3 = *(undefined1 *)(param_9 + 0x8e2);
      uVar2 = 0xff;
    }
    else {
      if (param_5 != 0x800) goto LAB_0047f307;
      FUN_0050f940(param_2,param_4,0xffffff81,param_4,param_9,2,
                   CONCAT31(0x10,*(undefined1 *)(param_9 + 0x8e2)));
      uVar3 = *(undefined1 *)(param_9 + 0x8e2);
      uVar2 = 0xffffff81;
    }
  }
  else if (param_1 == 0x400) {
    if (param_5 == 0) {
      FUN_0050f940(0xff,param_4,param_6,param_4,param_9,2,*(undefined1 *)(param_9 + 0x8e2));
      uVar3 = *(undefined1 *)(param_9 + 0x8e2);
      uVar1 = 0xff;
    }
    else {
      if (param_5 != 0x800) goto LAB_0047f307;
      FUN_0050f940(0xff,param_4,0xffffff81,param_4,param_9,2,*(undefined1 *)(param_9 + 0x8e2));
      uVar3 = *(undefined1 *)(param_9 + 0x8e2);
      uVar1 = 0xff;
      uVar2 = 0xffffff81;
    }
  }
  else {
    if (param_1 != 0x800) goto LAB_0047f307;
    if (param_5 == 0) {
      FUN_0050f940(0xffffff81,param_4,param_6,param_4,param_9,2,
                   CONCAT31(0x10,*(undefined1 *)(param_9 + 0x8e2)));
      uVar3 = *(undefined1 *)(param_9 + 0x8e2);
      uVar1 = 0xffffff81;
    }
    else {
      if (param_5 != 0x400) goto LAB_0047f307;
      FUN_0050f940(0xffffff81,param_4,0xff,param_4,param_9,2,*(undefined1 *)(param_9 + 0x8e2));
      uVar3 = *(undefined1 *)(param_9 + 0x8e2);
      uVar1 = 0xffffff81;
      uVar2 = 0xff;
    }
  }
  FUN_0050f940(uVar1,param_8,uVar2,param_8,param_9,2,uVar3);
LAB_0047f307:
  if (param_3 == 0) {
    if (param_7 == 0) {
      FUN_0050f940(param_2,param_4,param_2,param_8,param_9,2,*(undefined1 *)(param_9 + 0x8e2));
      FUN_0050f940(param_6,param_4,param_6,param_8,param_9,2,*(undefined1 *)(param_9 + 0x8e2));
    }
    else {
      if (param_7 == 0x100) {
        FUN_0050f940(param_2,param_4,param_2,0xffffffc1,param_9,2,
                     CONCAT31(1,*(undefined1 *)(param_9 + 0x8e2)));
        FUN_0050f940(param_6,param_4,param_6,0xffffffc1,param_9,2,*(undefined1 *)(param_9 + 0x8e2));
        return;
      }
      if (param_7 == 0x200) {
        FUN_0050f940(param_2,param_4,param_2,0x7f,param_9,2,*(undefined1 *)(param_9 + 0x8e2));
        FUN_0050f940(param_6,param_4,param_6,0x7f,param_9,2,*(undefined1 *)(param_9 + 0x8e2));
        return;
      }
    }
  }
  else if (param_3 == 0x100) {
    if (param_7 == 0) {
      FUN_0050f940(param_2,0xffffffc1,param_2,param_8,param_9,2,*(undefined1 *)(param_9 + 0x8e2));
      FUN_0050f940(param_6,0xffffffc1,param_6,param_8,param_9,2,*(undefined1 *)(param_9 + 0x8e2));
      return;
    }
    if (param_7 == 0x200) {
      FUN_0050f940(param_2,0xffffffc1,param_2,0x7f,param_9,2,
                   CONCAT31(2,*(undefined1 *)(param_9 + 0x8e2)));
      FUN_0050f940(param_6,0xffffffc1,param_6,0x7f,param_9,2,*(undefined1 *)(param_9 + 0x8e2));
      return;
    }
  }
  else if (param_3 == 0x200) {
    if (param_7 == 0) {
      FUN_0050f940(param_2,0x7f,param_2,param_8,param_9,2,*(undefined1 *)(param_9 + 0x8e2));
      FUN_0050f940(param_6,0x7f,param_6,param_8,param_9,2,*(undefined1 *)(param_9 + 0x8e2));
      return;
    }
    if (param_7 == 0x100) {
      FUN_0050f940(param_2,0x7f,param_2,0xffffffc1,param_9,2,*(undefined1 *)(param_9 + 0x8e2));
      FUN_0050f940(param_6,0x7f,param_6,0xffffffc1,param_9,2,*(undefined1 *)(param_9 + 0x8e2));
      return;
    }
  }
  return;
}

