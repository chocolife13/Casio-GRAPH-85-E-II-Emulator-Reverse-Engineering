// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005288c0
// entry: 005288c0  size: 181


int FUN_005288c0(uint *param_1,uint *param_2,uint param_3,uint param_4)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  byte *pbVar4;
  uint uVar5;
  int local_8;
  undefined1 local_4 [4];
  
  puVar1 = param_1;
  FUN_004ad8a0(local_4,&local_8);
  iVar2 = 0;
  uVar5 = 1;
  *param_1 = 0;
  *param_2 = 0;
  if (param_3 == 0) {
    return 0;
  }
  param_1 = (uint *)(local_8 + 0x10);
  do {
    uVar3 = 1;
    pbVar4 = (byte *)param_1;
    if (param_4 != 0) {
      do {
        if ((*pbVar4 != 0xf0) && ((*pbVar4 & 0x80) == 0x80)) {
          if (iVar2 != 0) {
            return 0;
          }
          *puVar1 = uVar5;
          *param_2 = uVar3;
          iVar2 = 1;
        }
        uVar3 = uVar3 + 1;
        pbVar4 = pbVar4 + 0xc;
      } while (uVar3 <= param_4);
    }
    uVar5 = uVar5 + 1;
    param_1 = (uint *)((int)param_1 + param_4 * 0xc);
  } while (uVar5 <= param_3);
  return iVar2;
}

