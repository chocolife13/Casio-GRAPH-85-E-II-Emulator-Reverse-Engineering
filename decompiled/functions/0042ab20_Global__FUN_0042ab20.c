// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0042ab20
// entry: 0042ab20  size: 72


void FUN_0042ab20(short *param_1,short param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = 0;
  if (0 < param_3) {
    while ((*param_1 != 0 && (*param_1 != -1))) {
      iVar1 = iVar1 + 1;
      param_1 = param_1 + 1;
      if (param_3 <= iVar1) {
        return;
      }
    }
    if (iVar1 < param_3) {
      for (uVar2 = (uint)(param_3 - iVar1) >> 1; uVar2 != 0; uVar2 = uVar2 - 1) {
        *(uint *)param_1 = CONCAT22(param_2,param_2);
        param_1 = param_1 + 2;
      }
      for (uVar2 = (uint)((param_3 - iVar1 & 1U) != 0); uVar2 != 0; uVar2 = uVar2 - 1) {
        *param_1 = param_2;
        param_1 = param_1 + 1;
      }
    }
  }
  return;
}

