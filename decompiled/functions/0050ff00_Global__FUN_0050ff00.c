// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0050ff00
// entry: 0050ff00  size: 447


void FUN_0050ff00(int param_1,int param_2,int param_3)

{
  byte bVar1;
  short sVar2;
  short *psVar3;
  undefined4 uVar4;
  
  bVar1 = *(byte *)(param_1 + 0x8e2);
  uVar4 = 0x7f;
  if ((bVar1 & 0x80) != 0) {
    uVar4 = 0x3f;
  }
  psVar3 = *(short **)(param_1 + 0x8d8);
  sVar2 = psVar3[2];
  if (sVar2 == 0) {
    sVar2 = psVar3[param_3 * 4 + 2];
    if (sVar2 < 0x801) {
      if (sVar2 == 0x800) {
        FUN_0050f940(1,(int)psVar3[1],(int)*psVar3,(int)psVar3[1],param_1,
                     CONCAT31((int3)((uint)(param_2 * 0x20) >> 8),
                              *(undefined1 *)(*(int *)(param_1 + 0x8dc) + 0x1c + param_2 * 0x20)),
                     bVar1);
        return;
      }
      if (sVar2 == 0) {
        FUN_0050f830((int)psVar3[param_3 * 4],(int)psVar3[param_3 * 4 + 1],(int)*psVar3,
                     (int)psVar3[1],param_1,
                     CONCAT31((int3)((uint)(param_2 * 0x20) >> 8),
                              *(undefined1 *)(*(int *)(param_1 + 0x8dc) + 0x1c + param_2 * 0x20)),
                     bVar1);
        return;
      }
      if (sVar2 == 0x400) {
        FUN_0050f940(uVar4,(int)psVar3[1],(int)*psVar3,(int)psVar3[1],param_1,
                     CONCAT31((int3)((uint)(param_2 * 0x20) >> 8),
                              *(undefined1 *)(*(int *)(param_1 + 0x8dc) + 0x1c + param_2 * 0x20)),
                     bVar1);
        return;
      }
    }
    else if (sVar2 == 0x2000) {
      DAT_005d6800 = 0;
      psVar3 = *(short **)(param_1 + 0x8d8);
      FUN_0050f940((int)*psVar3,(int)psVar3[1],(int)*psVar3,(int)psVar3[1],param_1,
                   CONCAT31((int3)((uint)(param_2 * 0x20) >> 8),
                            *(undefined1 *)(*(int *)(param_1 + 0x8dc) + 0x1c + param_2 * 0x20)),
                   CONCAT31((int3)((uint)psVar3 >> 8),*(undefined1 *)(param_1 + 0x8e2)));
    }
  }
  else if (sVar2 == 0x400) {
    if (psVar3[param_3 * 4 + 2] == 0) {
      FUN_0050f830((int)psVar3[param_3 * 4],(int)psVar3[param_3 * 4 + 1],uVar4,
                   (int)psVar3[param_3 * 4 + 1],param_1,
                   CONCAT31((int3)((uint)(param_2 * 0x20) >> 8),
                            *(undefined1 *)(*(int *)(param_1 + 0x8dc) + 0x1c + param_2 * 0x20)),
                   bVar1);
      return;
    }
  }
  else if ((sVar2 == 0x800) && (psVar3[param_3 * 4 + 2] == 0)) {
    FUN_0050f830((int)psVar3[param_3 * 4],(int)psVar3[param_3 * 4 + 1],1,
                 (int)psVar3[param_3 * 4 + 1],param_1,
                 CONCAT31((int3)((uint)(param_2 * 0x20) >> 8),
                          *(undefined1 *)(*(int *)(param_1 + 0x8dc) + 0x1c + param_2 * 0x20)),bVar1)
    ;
    return;
  }
  return;
}

