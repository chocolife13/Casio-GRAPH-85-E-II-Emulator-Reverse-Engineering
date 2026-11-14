// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00546ac0
// entry: 00546ac0  size: 133


int FUN_00546ac0(undefined4 *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  byte *pbVar4;
  byte local_80 [128];
  
  if (param_1 == (undefined4 *)0x0) {
    return 0;
  }
  puVar3 = param_1;
  pbVar4 = local_80;
  for (iVar1 = 0x20; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pbVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    pbVar4 = pbVar4 + 4;
  }
  uVar2 = param_2 - 1;
  iVar1 = (int)(uVar2 + ((int)uVar2 >> 0x1f & 7U)) >> 3;
  uVar2 = uVar2 & 0x80000007;
  if ((int)uVar2 < 0) {
    uVar2 = (uVar2 - 1 | 0xfffffff8) + 1;
  }
  if ((local_80[iVar1] >> (7U - (char)uVar2 & 0x1f) & 1) == 0) {
    return 0;
  }
  iVar1 = FUN_004870d0(iVar1,uVar2,local_80);
  return iVar1 + (int)param_1;
}

