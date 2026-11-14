// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0042aac0
// entry: 0042aac0  size: 87


void FUN_0042aac0(ushort *param_1,byte *param_2,int param_3)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = 0;
  if (0 < param_3) {
    while (bVar1 = *param_2, bVar1 != 0xff) {
      if (bVar1 == 0) {
        uVar2 = 0;
        goto LAB_0042aafa;
      }
      *param_1 = (ushort)bVar1;
      iVar4 = iVar4 + 1;
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
      if (param_3 <= iVar4) {
        return;
      }
    }
    uVar2 = 0xffff;
LAB_0042aafa:
    if (iVar4 < param_3) {
      for (uVar3 = (uint)(param_3 - iVar4) >> 1; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(uint *)param_1 = CONCAT22(uVar2,uVar2);
        param_1 = param_1 + 2;
      }
      for (uVar3 = (uint)((param_3 - iVar4 & 1U) != 0); uVar3 != 0; uVar3 = uVar3 - 1) {
        *param_1 = uVar2;
        param_1 = param_1 + 1;
      }
    }
  }
  return;
}

