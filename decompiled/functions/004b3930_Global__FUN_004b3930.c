// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004b3930
// entry: 004b3930  size: 230


void FUN_004b3930(byte *param_1,undefined4 param_2)

{
  int iVar1;
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
  
  local_47 = 0x52;
  local_46 = 0x52;
  local_44 = 0x52;
  local_4c = 0;
  local_50 = 0;
  local_48 = 0x45;
  local_45 = 0x4f;
  local_43 = 0;
  iVar1 = FUN_004b3a20(param_1,local_20,&local_4c,0);
  if (iVar1 == -1) {
    FUN_004b6ef0(param_2,&local_48);
    return;
  }
  if ((*param_1 & 0x80) != 0) {
    iVar1 = FUN_004b3a20(param_1 + 0xc,local_40,&local_50,1);
    if (iVar1 == -1) {
      FUN_004b6ef0(param_2,&local_48);
      return;
    }
    if (local_50 == 0) {
      local_50 = 1;
    }
  }
  if (local_4c == 0) {
    local_4c = 1;
  }
  FUN_004b4990(param_2,local_4c,local_20,local_50,local_40,0,0);
  return;
}

