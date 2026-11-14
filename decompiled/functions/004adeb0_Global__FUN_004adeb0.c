// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004adeb0
// entry: 004adeb0  size: 132


int FUN_004adeb0(undefined4 param_1,int *param_2,undefined2 *param_3)

{
  int iVar1;
  int local_8;
  uint local_4;
  
  iVar1 = FUN_004103d0(param_1,&local_8,&param_1);
  if (iVar1 != 0) {
    return iVar1;
  }
  if ((char)param_1 == '\x01') {
    FUN_00411d60(&local_4);
  }
  else {
    local_4 = *(uint *)(local_8 + 0x18);
  }
  if (((*(uint *)(local_8 + 8) | local_4) & 3) != 0) {
    return 0xff;
  }
  *param_3 = *(undefined2 *)(local_8 + 0xc);
  *param_2 = local_4 - *(int *)(local_8 + 8);
  return 0;
}

