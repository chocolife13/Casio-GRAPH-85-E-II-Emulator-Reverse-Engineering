// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0048aeb0
// entry: 0048aeb0  size: 181


void FUN_0048aeb0(void)

{
  char cVar1;
  undefined1 local_68;
  undefined1 local_67;
  undefined1 local_66;
  undefined1 local_65;
  undefined1 local_64;
  undefined1 local_34 [52];
  
  FUN_0052f6f0(0x129,local_34);
  cVar1 = FUN_00526090(0x27);
  if (cVar1 == '\0') {
    local_67 = 0x42;
    local_66 = 0x67;
    local_65 = 0x6e;
  }
  else {
    cVar1 = FUN_00526090(0x27);
    if (cVar1 == '\x01') {
      local_67 = 0x45;
      local_66 = 0x6e;
      local_65 = 100;
    }
    else {
      local_67 = 0x3f;
      local_66 = 0x3f;
      local_65 = 0x3f;
    }
  }
  local_64 = 0;
  local_68 = 0x3a;
  FUN_004b6e70(local_34,&local_68);
  FUN_005232d0(1,1);
  FUN_00523470(local_34,0x15);
  return;
}

