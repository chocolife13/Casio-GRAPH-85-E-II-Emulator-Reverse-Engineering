// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00485e40
// entry: 00485e40  size: 161


undefined4 * FUN_00485e40(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  undefined1 local_10 [4];
  undefined1 local_c [2];
  undefined4 local_a;
  undefined4 local_6;
  
  iVar2 = FUN_00485cf0(local_c);
  if (iVar2 != 0) {
    FUN_00485c70();
    iVar2 = FUN_00485cf0(local_c);
    if (iVar2 != 0) {
      *(undefined1 *)param_1 = 0;
      return param_1;
    }
  }
  *param_1 = local_a;
  param_1[1] = local_6;
  *(undefined1 *)(param_1 + 2) = 0;
  if (param_1 == (undefined4 *)0x0) {
    cVar1 = FUN_004ad350(s__SSHEET_005be210,0,local_10);
    if (cVar1 != '\0') {
      iVar2 = FUN_00485cc0();
      if (iVar2 == 0) {
        return (undefined4 *)0x0;
      }
      iVar2 = FUN_00485cf0(local_c);
      if (iVar2 != 0) {
        return (undefined4 *)0x0;
      }
      uRam00000000 = local_a;
      uRam00000004 = local_6;
    }
  }
  return param_1;
}

