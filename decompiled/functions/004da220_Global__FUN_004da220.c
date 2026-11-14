// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004da220
// entry: 004da220  size: 113


void FUN_004da220(int param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  
  piVar1 = *(int **)(param_1 + 8);
  iVar2 = FUN_004e4020(param_1);
  if (iVar2 == 0) {
    iVar2 = 0;
    if (*(short *)(param_1 + 2) != 0) {
      iVar4 = 0;
      do {
        pbVar3 = (byte *)(*piVar1 + iVar4);
        if ((*pbVar3 & 0x80) == 0) {
          *param_2 = *(undefined4 *)pbVar3;
          param_2[1] = *(undefined4 *)(pbVar3 + 4);
          param_2[2] = *(undefined4 *)(pbVar3 + 8);
        }
        else {
          *(undefined1 *)param_2 = 0xf0;
          *(undefined1 *)((int)param_2 + 1) = 0x11;
        }
        iVar2 = iVar2 + 1;
        iVar4 = iVar4 + 0xc;
        param_2 = param_2 + 3;
      } while (iVar2 < (int)(uint)*(ushort *)(param_1 + 2));
    }
    FUN_004ad6d0(piVar1);
  }
  return;
}

