// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004b1d20
// entry: 004b1d20  size: 202


void FUN_004b1d20(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 local_64;
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 local_5d;
  undefined1 local_5c;
  undefined1 local_5b;
  byte local_58 [24];
  undefined1 local_40 [32];
  undefined1 local_20 [32];
  
  local_5f = 0x52;
  local_5e = 0x52;
  local_5c = 0x52;
  local_64 = 0;
  local_60 = 0x45;
  local_5d = 0x4f;
  local_5b = 0;
  FUN_00554ab0(local_58,param_1,0x18);
  if ((local_58[0] & 0x80) == 0) {
    iVar1 = FUN_004b3ee0(local_58);
    if (iVar1 != 0) {
      FUN_004b4050(local_58,0);
      iVar1 = FUN_004b1df0(local_58,local_40,&local_64);
      if (iVar1 != -1) {
        FUN_004b4990(local_20,local_64,local_40,0,0,0,0xffffffff);
        FUN_004b4f20(param_2,local_20,0xd);
        return;
      }
    }
  }
  FUN_004b6ef0(param_2,&local_60);
  return;
}

