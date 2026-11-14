// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00485cf0
// entry: 00485cf0  size: 61


uint FUN_00485cf0(undefined4 param_1)

{
  char cVar1;
  uint uVar2;
  undefined1 local_4 [4];
  
  cVar1 = FUN_004ad350(s__SSHEET_005be210,s__SNAME_005bdc28,local_4);
  if ((cVar1 != '\0') && (uVar2 = FUN_00485c70(), uVar2 != 0)) {
    return uVar2;
  }
  uVar2 = FUN_004ad3f0(1,0xb,param_1);
  return uVar2 & 0xff;
}

