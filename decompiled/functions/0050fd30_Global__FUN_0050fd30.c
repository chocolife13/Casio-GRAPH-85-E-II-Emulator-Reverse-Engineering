// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0050fd30
// entry: 0050fd30  size: 451


void FUN_0050fd30(int param_1,int param_2,int param_3)

{
  short sVar1;
  short *psVar2;
  int3 iVar3;
  
  psVar2 = *(short **)(param_1 + 0x8d8);
  sVar1 = psVar2[2];
  if (sVar1 == 0) {
    sVar1 = psVar2[param_3 * 4 + 2];
    if (sVar1 < 0x201) {
      iVar3 = (int3)(char)((ushort)sVar1 >> 8);
      if (sVar1 == 0x200) {
        FUN_0050f940((int)*psVar2,0x3f,(int)*psVar2,(int)psVar2[1],param_1,
                     CONCAT31((int3)((uint)(param_2 * 0x20) >> 8),
                              *(undefined1 *)(*(int *)(param_1 + 0x8dc) + 0x1c + param_2 * 0x20)),
                     CONCAT31(iVar3,*(undefined1 *)(param_1 + 0x8e2)));
        return;
      }
      if (sVar1 == 0) {
        FUN_0050f830((int)psVar2[param_3 * 4],(int)psVar2[param_3 * 4 + 1],(int)*psVar2,
                     (int)psVar2[1],param_1,
                     CONCAT31((int3)((uint)(param_2 * 0x20) >> 8),
                              *(undefined1 *)(*(int *)(param_1 + 0x8dc) + 0x1c + param_2 * 0x20)),
                     CONCAT31(iVar3,*(undefined1 *)(param_1 + 0x8e2)));
        return;
      }
      if (sVar1 == 0x100) {
        FUN_0050f940((int)*psVar2,1,(int)*psVar2,(int)psVar2[1],param_1,
                     CONCAT31((int3)((uint)(param_2 * 0x20) >> 8),
                              *(undefined1 *)(*(int *)(param_1 + 0x8dc) + 0x1c + param_2 * 0x20)),
                     CONCAT31(1,*(undefined1 *)(param_1 + 0x8e2)));
        return;
      }
    }
    else if (sVar1 == 0x1000) {
      DAT_005d6800 = 0;
      psVar2 = *(short **)(param_1 + 0x8d8);
      FUN_0050f940((int)*psVar2,(int)psVar2[1],(int)*psVar2,(int)psVar2[1],param_1,
                   CONCAT31((int3)((uint)(param_2 * 0x20) >> 8),
                            *(undefined1 *)(*(int *)(param_1 + 0x8dc) + 0x1c + param_2 * 0x20)),
                   CONCAT31((int3)((uint)psVar2 >> 8),*(undefined1 *)(param_1 + 0x8e2)));
    }
  }
  else {
    iVar3 = (int3)(char)((ushort)sVar1 >> 8);
    if (sVar1 == 0x100) {
      if (psVar2[param_3 * 4 + 2] == 0) {
        FUN_0050f830((int)psVar2[param_3 * 4],(int)psVar2[param_3 * 4 + 1],(int)psVar2[param_3 * 4],
                     1,param_1,
                     CONCAT31((int3)((uint)(param_2 * 0x20) >> 8),
                              *(undefined1 *)(*(int *)(param_1 + 0x8dc) + 0x1c + param_2 * 0x20)),
                     CONCAT31(iVar3,*(undefined1 *)(param_1 + 0x8e2)));
        return;
      }
    }
    else if ((sVar1 == 0x200) && (psVar2[param_3 * 4 + 2] == 0)) {
      FUN_0050f830((int)psVar2[param_3 * 4],(int)psVar2[param_3 * 4 + 1],(int)psVar2[param_3 * 4],
                   0x3f,param_1,
                   CONCAT31((int3)((uint)(param_2 * 0x20) >> 8),
                            *(undefined1 *)(*(int *)(param_1 + 0x8dc) + 0x1c + param_2 * 0x20)),
                   CONCAT31(iVar3,*(undefined1 *)(param_1 + 0x8e2)));
      return;
    }
  }
  return;
}

