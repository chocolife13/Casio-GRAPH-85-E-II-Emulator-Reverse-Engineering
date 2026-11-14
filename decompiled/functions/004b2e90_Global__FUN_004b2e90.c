// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004b2e90
// entry: 004b2e90  size: 284


void FUN_004b2e90(byte *param_1,undefined4 param_2,undefined4 param_3)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  int local_50;
  int local_4c;
  undefined1 local_48;
  undefined1 local_47;
  undefined1 local_46;
  undefined1 local_45;
  undefined1 local_44;
  undefined1 local_43;
  undefined1 local_40 [32];
  undefined1 local_20 [32];
  
  local_4c = 0;
  local_50 = 0;
  local_48 = 0x45;
  local_47 = 0x52;
  local_46 = 0x52;
  local_45 = 0x4f;
  local_44 = 0x52;
  local_43 = 0;
  bVar1 = FUN_0052f6b0(0x3d);
  FUN_004b4d50(param_1,param_1);
  iVar2 = FUN_004b30c0(param_1,local_20,&local_4c,param_2,0);
  if (iVar2 == -1) {
    FUN_004b6ef0(param_3,&local_48);
    return;
  }
  if ((*param_1 & 0x80) != 0) {
    iVar2 = FUN_004b30c0(param_1 + 0xc,local_40,&local_50,param_2,1);
    if (iVar2 == -1) {
      FUN_004b6ef0(param_3,&local_48);
      return;
    }
    if (local_50 == 0) {
      local_50 = 1;
    }
  }
  if (local_4c == 0) {
    local_4c = 1;
  }
  if (((bVar1 & 0x70) == 0x20) || ((bVar1 & 0xf) != 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0x15;
  }
  FUN_004b4990(param_3,local_4c,local_20,local_50,local_40,0,uVar3);
  return;
}

