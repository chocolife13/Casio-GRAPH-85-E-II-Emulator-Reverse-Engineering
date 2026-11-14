// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00495420
// entry: 00495420  size: 200


void FUN_00495420(void)

{
  char cVar1;
  undefined1 local_68;
  undefined1 local_67;
  undefined1 local_66;
  undefined1 local_65;
  undefined1 local_34 [52];
  
  FUN_0052f6f0(0x126,local_34);
  local_68 = 0x3a;
  local_67 = 0;
  FUN_004b6e70(local_34,&local_68);
  cVar1 = FUN_00526090(0x28);
  if (cVar1 == '\0') {
    local_68 = 0x33;
    local_67 = 0x36;
    local_66 = 0x35;
  }
  else {
    cVar1 = FUN_00526090(0x28);
    if (cVar1 == '\x01') {
      local_68 = 0x33;
      local_67 = 0x36;
      local_66 = 0x30;
    }
    else {
      local_68 = 0x3f;
      local_67 = 0x3f;
      local_66 = 0x3f;
    }
  }
  local_65 = 0;
  FUN_004b6e70(local_34,&local_68);
  FUN_005232d0(1,1);
  FUN_00523470(local_34,0x15);
  return;
}

