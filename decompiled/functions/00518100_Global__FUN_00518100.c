// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00518100
// entry: 00518100  size: 92


void FUN_00518100(void)

{
  int iVar1;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_8 = 0;
  local_c = DAT_005bdc68;
  local_4 = 0;
  FUN_004ac5a0(0xffffffff,s_COMGRAPH_005bdc6c);
  iVar1 = 1;
  do {
    FUN_0055c2fe(iVar1,(int)&local_c + 3,10);
    FUN_004ac5a0(0xffffffff,&local_c);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x1f);
  FUN_005186a0();
  FUN_00518760();
  return;
}

