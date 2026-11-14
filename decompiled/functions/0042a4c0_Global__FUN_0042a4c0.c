// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0042a4c0
// entry: 0042a4c0  size: 87


void FUN_0042a4c0(short *param_1,short *param_2,int param_3)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < param_3) {
    while( true ) {
      *param_1 = *param_2;
      if ((*param_2 == 0) || (*param_2 == -1)) break;
      iVar3 = iVar3 + 1;
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
      if (param_3 <= iVar3) {
        return;
      }
    }
    sVar1 = *param_2;
    if (iVar3 < param_3) {
      for (uVar2 = (uint)(param_3 - iVar3) >> 1; uVar2 != 0; uVar2 = uVar2 - 1) {
        *(uint *)param_1 = CONCAT22(sVar1,sVar1);
        param_1 = param_1 + 2;
      }
      for (uVar2 = (uint)((param_3 - iVar3 & 1U) != 0); uVar2 != 0; uVar2 = uVar2 - 1) {
        *param_1 = sVar1;
        param_1 = param_1 + 1;
      }
    }
  }
  return;
}

