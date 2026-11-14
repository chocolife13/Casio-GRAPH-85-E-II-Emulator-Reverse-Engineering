// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004864a0
// entry: 004864a0  size: 203


bool FUN_004864a0(undefined4 param_1,undefined4 param_2,int param_3,undefined4 *param_4,int param_5)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  bool bVar5;
  byte local_80 [128];
  
  iVar1 = FUN_00486470(param_2,param_3);
  if (iVar1 == 0) {
    return false;
  }
  if (param_5 == 0) {
    iVar1 = FUN_004862f0(param_1,param_2,local_80);
    if (iVar1 != 0) {
      uVar4 = param_3 - 1;
      iVar2 = (int)(uVar4 + ((int)uVar4 >> 0x1f & 7U)) >> 3;
      uVar4 = uVar4 & 0x80000007;
      if ((int)uVar4 < 0) {
        uVar4 = (uVar4 - 1 | 0xfffffff8) + 1;
      }
      bVar5 = (local_80[iVar2] >> (7U - (char)uVar4 & 0x1f) & 1) != 0;
      if (bVar5) {
        iVar2 = FUN_004870d0(iVar2,uVar4,local_80);
        puVar3 = (undefined4 *)(iVar2 + iVar1);
        *param_4 = *puVar3;
        param_4[1] = puVar3[1];
        param_4[2] = puVar3[2];
      }
      return bVar5;
    }
  }
  return false;
}

