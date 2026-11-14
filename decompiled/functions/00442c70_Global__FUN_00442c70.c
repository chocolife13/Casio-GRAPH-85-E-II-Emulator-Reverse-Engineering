// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00442c70
// entry: 00442c70  size: 168


undefined4 FUN_00442c70(int param_1)

{
  char cVar1;
  
  if (param_1 == 1) {
    FUN_00526070(0x30,0);
    FUN_00518200();
    return 0;
  }
  if (param_1 == 2) {
    cVar1 = FUN_00526090(0x30);
    if (cVar1 != '\x02') {
      cVar1 = FUN_00526090(0x30);
      if (cVar1 != '\x04') {
        FUN_00526070(0x30,1);
        FUN_00518200();
        return 0;
      }
    }
    FUN_00526070(0x30,2);
    FUN_00518200();
    return 0;
  }
  cVar1 = FUN_00526090(0x30);
  if (cVar1 != '\x02') {
    cVar1 = FUN_00526090(0x30);
    if (cVar1 != '\x04') {
      FUN_00526070(0x30,3);
      FUN_00518200();
      return 0;
    }
  }
  FUN_00526070(0x30,4);
  FUN_00518200();
  return 0;
}

