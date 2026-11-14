// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004a49b0
// entry: 004a49b0  size: 198


void FUN_004a49b0(void)

{
  int iVar1;
  undefined1 *puVar2;
  undefined2 local_c;
  undefined2 local_a;
  undefined2 local_8;
  undefined2 local_6;
  undefined2 local_4;
  
  local_c = 0x66;
  local_a = 0x6c;
  local_8 = 0x73;
  local_6 = 0x30;
  local_4 = 0;
  iVar1 = FUN_004ab180();
  if ((iVar1 == 0) || (iVar1 = FUN_004a2200(0x2ac,0x2ad,0x296,0x297), iVar1 == 0x31)) {
    puVar2 = &DAT_005be7ec;
  }
  else {
    if (iVar1 != 0x32) {
      return;
    }
    iVar1 = FUN_004300c0(1);
    if (iVar1 != 0) {
      return;
    }
    puVar2 = &DAT_005be7e4;
  }
  FUN_0042aac0(&local_c,puVar2,4);
  FUN_004aacd0(0);
  iVar1 = FUN_0042a230(&local_c);
  if (-1 < iVar1) {
    FUN_004a20c0(0x172,0x173,0x174,1);
    return;
  }
  FUN_0052b240(4);
  return;
}

