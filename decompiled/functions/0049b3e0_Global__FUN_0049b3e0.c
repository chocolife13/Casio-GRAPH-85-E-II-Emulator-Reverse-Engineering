// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0049b3e0
// entry: 0049b3e0  size: 387


undefined4 FUN_0049b3e0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_290;
  undefined2 local_28c;
  undefined2 local_28a;
  undefined1 local_288 [20];
  undefined1 local_274 [52];
  undefined1 local_240 [52];
  undefined1 local_20c [524];
  
  FUN_0042a490(local_20c,DAT_005d6db8);
  if (param_1 == 0xe) {
    iVar1 = FUN_0049b0d0();
    if (iVar1 != 0x7534) {
      return 0;
    }
    iVar1 = FUN_00429b00(DAT_005d6db8,1,local_288);
    if (-1 < iVar1) {
      FUN_00429be0(iVar1);
      iVar1 = FUN_0049a720(0xe);
      if (iVar1 != 0x7534) {
        FUN_0042a490(DAT_005d6db8,local_20c);
        return 0;
      }
    }
    uVar2 = FUN_00495770(0);
    FUN_004b6ef0(local_240,uVar2);
    FUN_00495f40(local_274,DAT_005d6db8);
    local_290 = 0x7000000;
    local_28c = 0x80;
    local_28a = 8;
    FUN_00496410(0,&local_290,local_274);
  }
  else if (DAT_005d6d80 == 0) {
    return 1;
  }
  iVar1 = FUN_004aacd0(0);
  if (iVar1 == 0) {
    iVar1 = FUN_004aeef0(0x4000,DAT_005d6db8);
    if (iVar1 == 0) {
      if ((param_1 == 0xd) || (param_1 == 0xe)) {
        DAT_005d6d80 = 0;
      }
      FUN_0049ab60(1);
      return 1;
    }
    FUN_004ab1c0(iVar1);
  }
  if (param_1 == 0xe) {
    FUN_00496410(0,&local_290,local_240);
    FUN_0042a490(DAT_005d6db8,local_20c);
  }
  return 0;
}

