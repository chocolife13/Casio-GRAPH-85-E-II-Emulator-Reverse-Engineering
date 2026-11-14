// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004b1b70
// entry: 004b1b70  size: 422


void FUN_004b1b70(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  byte bVar3;
  byte bVar4;
  undefined8 uVar5;
  undefined1 local_8c;
  undefined1 local_8b;
  undefined1 local_8a;
  undefined1 local_89;
  undefined1 local_88;
  undefined1 local_87;
  uint local_84;
  undefined4 local_80;
  undefined4 local_7c;
  byte local_78 [12];
  undefined1 local_6c [12];
  undefined1 local_60 [32];
  undefined1 local_40 [32];
  undefined1 local_20 [32];
  
  local_8b = 0x52;
  local_8a = 0x52;
  local_88 = 0x52;
  local_80 = 0;
  local_7c = 0;
  local_8c = 0x45;
  local_89 = 0x4f;
  local_87 = 0;
  FUN_00554ab0(local_78,param_1,0x18);
  iVar1 = FUN_004b3ee0(local_78);
  if (iVar1 != 0) {
    iVar1 = FUN_004b4e20(local_78);
    if (iVar1 == 0) {
      FUN_004b1890(local_78,param_2);
      return;
    }
    FUN_004b4050(local_78,0);
    iVar1 = FUN_004b1a10(local_78,local_20,&local_80);
    if (iVar1 != -1) {
      if ((local_78[0] & 0x80) != 0) {
        iVar1 = FUN_004b1a10(local_6c,local_40,&local_7c);
        if (iVar1 == -1) {
          FUN_004b6ef0(param_2,&local_8c);
          return;
        }
      }
      FUN_004b4ba0(local_60,local_80,local_20,local_7c,local_40,1,0xffffffff);
      uVar5 = FUN_004b6bd0(local_60);
      uVar2 = (undefined4)((ulonglong)uVar5 >> 0x20);
      if (6 < (uint)uVar5) {
        bVar4 = 0;
        local_84 = local_84 & 0xffffff00;
        iVar1 = 5;
        do {
          uVar5 = FUN_004b6ab0(CONCAT31((int3)((uint)uVar2 >> 8),local_60[local_84 & 0xff]));
          uVar2 = (undefined4)((ulonglong)uVar5 >> 0x20);
          bVar3 = bVar4;
          if ((int)uVar5 != 0) {
            bVar3 = bVar4 + 1;
          }
          bVar4 = bVar3 + 1;
          iVar1 = iVar1 + -1;
          local_84 = CONCAT31(local_84._1_3_,bVar4);
        } while (iVar1 != 0);
        local_60[bVar4] = 0x3e;
        local_60[(byte)(bVar3 + 2)] = 0;
      }
      FUN_004b4f20(param_2,local_60,6);
      return;
    }
  }
  FUN_004b6ef0(param_2,&local_8c);
  return;
}

