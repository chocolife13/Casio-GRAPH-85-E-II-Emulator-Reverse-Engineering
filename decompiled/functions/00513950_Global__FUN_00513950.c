// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00513950
// entry: 00513950  size: 251


undefined4 FUN_00513950(int param_1,int param_2,int param_3)

{
  byte *pbVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  
  iVar4 = param_2 * 0x20;
  *(uint *)(iVar4 + 0x18 + *(int *)(param_1 + 0x8dc)) =
       *(uint *)(iVar4 + 0x18 + *(int *)(param_1 + 0x8dc)) | 0x4000;
  *(undefined1 *)(iVar4 + 0xd + *(int *)(param_1 + 0x8dc)) = 0;
  if (((*(uint *)(iVar4 + 0x18 + *(int *)(param_1 + 0x8dc)) & 0x400) != 0) &&
     ((bVar3 = *(byte *)(param_1 + 0x884) & 0xf0, bVar3 == 0x50 || (bVar3 == 0x60)))) {
    pbVar1 = (byte *)(iVar4 + *(int *)(param_1 + 0x8dc) + 0xd);
    *pbVar1 = *pbVar1 | 0x40;
  }
  iVar2 = FUN_004e7290(param_3,param_3 + 0xc);
  if (iVar2 != 0) {
    *(byte *)(iVar4 + 0xd + *(int *)(param_1 + 0x8dc)) =
         *(byte *)(iVar4 + 0xd + *(int *)(param_1 + 0x8dc)) | 0x10;
    return 2;
  }
  iVar2 = FUN_004e71d0(param_3,param_3 + 0xc);
  if (iVar2 != 0) {
    *(byte *)(iVar4 + 0xd + *(int *)(param_1 + 0x8dc)) =
         *(byte *)(iVar4 + 0xd + *(int *)(param_1 + 0x8dc)) | 0x20;
  }
  if ((*(uint *)(iVar4 + 0x18 + *(int *)(param_1 + 0x8dc)) & 0x400) != 0) {
    FUN_00513a50(param_1,param_2,param_3);
    return 0;
  }
  if (((*(byte *)(param_1 + 0x8e2) & 0x10) != 0) && ((*(byte *)(param_1 + 0x8e2) & 8) == 0)) {
    pbVar1 = (byte *)(iVar4 + *(int *)(param_1 + 0x8dc) + 0xd);
    *pbVar1 = *pbVar1 ^ 0x40;
  }
  FUN_00513b20(param_1,param_2,param_3);
  return 0;
}

