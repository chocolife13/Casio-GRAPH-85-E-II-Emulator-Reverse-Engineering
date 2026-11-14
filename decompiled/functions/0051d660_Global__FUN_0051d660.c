// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0051d660
// entry: 0051d660  size: 125


void FUN_0051d660(int param_1,int param_2)

{
  int iVar1;
  byte *pbVar2;
  
  if (param_1 == 0x7545) {
    iVar1 = 0;
    do {
      *(undefined1 *)(iVar1 + param_2) = *(undefined1 *)(iVar1 + 1 + param_2);
      iVar1 = iVar1 + 1;
    } while (iVar1 < 0x800);
    pbVar2 = (byte *)(param_2 + 0xe);
    do {
      pbVar2[-0xe] = pbVar2[-0xe] & 0x7f;
      *pbVar2 = *pbVar2 & 0xfe;
      pbVar2[1] = 0;
      pbVar2 = pbVar2 + 0x10;
    } while ((int)(pbVar2 + (-0xe - param_2)) < 0x800);
    return;
  }
  iVar1 = 0x7ff;
  do {
    *(undefined1 *)(iVar1 + param_2) = *(undefined1 *)(iVar1 + -1 + param_2);
    iVar1 = iVar1 + -1;
  } while (0 < iVar1);
  pbVar2 = (byte *)(param_2 + 1);
  do {
    pbVar2[-1] = 0;
    *pbVar2 = *pbVar2 & 0x3f;
    pbVar2 = pbVar2 + 0x10;
  } while ((int)(pbVar2 + (-1 - param_2)) < 0x800);
  return;
}

