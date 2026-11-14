// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00443760
// entry: 00443760  size: 210


void FUN_00443760(uint param_1,ushort param_2,uint param_3)

{
  undefined4 uVar1;
  uint uVar2;
  undefined1 local_30 [48];
  
  FUN_005232d0(1,1);
  uVar1 = FUN_0052f6f0(0x11b,local_30,0x15);
  FUN_00523470(uVar1);
  uVar2 = 2;
  do {
    if ((int)((param_1 & 0xffff) * 2) < (int)uVar2) goto joined_r0x004437ee;
    FUN_0050baa0((int)(uVar2 - 2) / 2 + (uint)param_2,uVar2,uVar2 == (param_3 & 0xffff));
    uVar2 = uVar2 + 2;
  } while ((int)uVar2 < 8);
LAB_0044380d:
  if (param_2 != 1) {
    FUN_00443980();
  }
  if ((uint)param_2 != (param_1 & 0xffff) - 2) {
    FUN_00443a40();
  }
  return;
joined_r0x004437ee:
  for (; (int)uVar2 < 8; uVar2 = uVar2 + 1) {
    FUN_005232d0(1,uVar2);
    FUN_00523470(&DAT_005cd010,0x15);
  }
  goto LAB_0044380d;
}

