// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004b2160
// entry: 004b2160  size: 331


void FUN_004b2160(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 local_88;
  undefined1 local_87;
  undefined1 local_86;
  undefined1 local_85;
  undefined1 local_84;
  undefined1 local_83;
  undefined4 local_80;
  undefined4 local_7c;
  byte local_78 [12];
  undefined1 local_6c [12];
  undefined1 local_60 [32];
  undefined1 local_40 [32];
  undefined1 local_20 [32];
  
  local_87 = 0x52;
  local_86 = 0x52;
  local_84 = 0x52;
  local_80 = 0;
  local_7c = 0;
  local_88 = 0x45;
  local_85 = 0x4f;
  local_83 = 0;
  FUN_00554ab0(local_78,param_1,0x18);
  iVar1 = FUN_004b3ee0(local_78);
  if (iVar1 != 0) {
    iVar1 = FUN_004b4e20(local_78);
    if (iVar1 == 0) {
      FUN_004b1f10(local_78,param_2);
      return;
    }
    FUN_004b4050(local_78,0);
    iVar1 = FUN_004b1a10(local_78,local_60,&local_80);
    if (iVar1 != -1) {
      if ((local_78[0] & 0x80) != 0) {
        iVar1 = FUN_004b1a10(local_6c,local_40,&local_7c);
        if (iVar1 == -1) {
          FUN_004b6ef0(param_2,&local_88);
          return;
        }
      }
      FUN_004b4ba0(local_20,local_80,local_60,local_7c,local_40,1,0xffffffff);
      FUN_004b4f20(param_2,local_20,0xe);
      return;
    }
  }
  FUN_004b6ef0(param_2,&local_88);
  return;
}

