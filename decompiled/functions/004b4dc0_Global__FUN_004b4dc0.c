// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004b4dc0
// entry: 004b4dc0  size: 90


int FUN_004b4dc0(undefined1 *param_1,int param_2)

{
  int iVar1;
  byte *pbVar2;
  
  iVar1 = *(int *)(param_2 + 8);
  if (iVar1 == 0) {
    return iVar1;
  }
  if (0 < iVar1) {
    pbVar2 = (byte *)(param_2 + 0xc);
    do {
      if (*pbVar2 == 10) {
        *param_1 = 0xbb;
      }
      else {
        *param_1 = (&DAT_00586f74)[*pbVar2];
      }
      param_1 = param_1 + 1;
      pbVar2 = pbVar2 + 1;
    } while ((int)(pbVar2 + (-0xc - param_2)) < *(int *)(param_2 + 8));
    *param_1 = 0;
    return *(int *)(param_2 + 4);
  }
  *param_1 = 0;
  return *(int *)(param_2 + 4);
}

