// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00485d90
// entry: 00485d90  size: 168


undefined4 FUN_00485d90(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  undefined1 local_10;
  undefined1 local_f;
  undefined2 local_e;
  undefined2 local_c;
  undefined2 local_a;
  undefined4 local_8;
  undefined4 local_4;
  
  local_10 = 1;
  local_f = 0;
  local_e = 0;
  local_c = 0;
  local_a = 0;
  local_8 = 0;
  local_4 = 0;
  iVar2 = FUN_004b6ca0(param_1);
  if ((iVar2 < 1) || (8 < iVar2)) {
    cVar1 = FUN_004abb50(s__SSHEET_005be210,s_SHEET_005bf958,0x10,&local_10);
    if ((cVar1 == '\0') || (cVar1 == '%')) {
      FUN_004b6ef0(param_1,s_SHEET_005bf958);
    }
  }
  else {
    cVar1 = FUN_004abb50(s__SSHEET_005be210,param_1,0x10,&local_10);
  }
  if ((cVar1 != '\0') && (cVar1 != '%')) {
    return 0;
  }
  return 1;
}

