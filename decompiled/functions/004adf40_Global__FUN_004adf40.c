// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004adf40
// entry: 004adf40  size: 113


int FUN_004adf40(int param_1,undefined2 *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  uint local_4;
  
  iVar1 = param_1;
  iVar2 = FUN_00411d80(param_1,&param_1);
  if (iVar2 == 0) {
    if (iVar1 == 1) {
      FUN_00411d60(&local_4);
    }
    else {
      local_4 = *(uint *)(param_1 + 0x18);
    }
    if (((*(uint *)(param_1 + 8) | local_4) & 3) != 0) {
      return 0xff;
    }
    *param_2 = *(undefined2 *)(param_1 + 0xc);
    *param_3 = local_4 - *(int *)(param_1 + 8);
  }
  return iVar2;
}

