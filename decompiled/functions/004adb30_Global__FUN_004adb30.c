// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004adb30
// entry: 004adb30  size: 70


bool FUN_004adb30(int param_1)

{
  int iVar1;
  undefined1 local_6 [2];
  int local_4;
  
  iVar1 = FUN_004ab600();
  if (iVar1 == 0) {
    return true;
  }
  FUN_004adeb0(s__REV2_005be1f8,&local_4,local_6);
  return (uint)(local_4 + param_1) < DAT_005d6d60;
}

