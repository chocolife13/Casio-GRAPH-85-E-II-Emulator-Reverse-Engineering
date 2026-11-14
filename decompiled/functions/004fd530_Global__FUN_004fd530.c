// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004fd530
// entry: 004fd530  size: 116


undefined4 FUN_004fd530(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  byte local_18;
  char local_17;
  byte local_c;
  
  uVar2 = 0;
  iVar1 = FUN_004e4020(param_1);
  if (iVar1 != 0) {
    return 0;
  }
  FUN_004e4080(param_1,&local_18);
  if (local_17 != '\0') {
    local_c = local_18;
  }
  if (((local_c & 0xf0) == 0x50) || ((local_c & 0xf0) == 0x60)) {
    uVar2 = 1;
    FUN_004fd960(param_1);
  }
  return uVar2;
}

