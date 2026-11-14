// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00527690
// entry: 00527690  size: 569


int FUN_00527690(undefined4 param_1,undefined4 param_2,uint param_3,int param_4)

{
  int iVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint local_b8;
  uint local_b4 [2];
  int local_ac;
  int local_a8 [2];
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined1 local_84 [12];
  undefined4 local_78 [15];
  undefined4 local_3c [15];
  
  FUN_0052fbc0(param_1,param_2,local_84);
  FUN_004e5780(&local_a0);
  FUN_004e5780(local_78);
  cVar2 = FUN_004ad2a0(5,local_84,local_a8);
  if (((cVar2 == '\0') && (cVar2 = FUN_004ad3f0(1,0x10,&local_94), cVar2 == '\0')) &&
     (FUN_00527400(local_94,local_90,local_8c,local_88,local_b4), param_3 <= local_b4[0])) {
    local_ac = (local_b4[0] - param_3) + 1;
    if (5 < local_ac) {
      local_ac = 5;
    }
    iVar1 = local_ac;
    iVar8 = param_3 * 0xc;
    iVar6 = local_ac * 0xc;
    bVar3 = FUN_004ad3f0(iVar8 + 5,iVar6,local_3c);
    if (local_b4[0] * 0xc + 0x10 == local_a8[0]) {
      FUN_004e5780(&local_a0);
    }
    else {
      bVar4 = FUN_004ad3f0((local_b4[0] + param_3) * 0xc + 5,iVar6,local_78);
      bVar3 = bVar3 | bVar4;
    }
    if (bVar3 == 0) {
      local_b8 = param_3;
      iVar6 = iVar1;
      if (param_3 < param_3 + iVar1) {
        iVar7 = param_3 * 0x18;
        do {
          if (local_b4[0] < local_b8) {
            return iVar6;
          }
          iVar6 = iVar8 + param_3 * -0xc;
          puVar5 = (undefined4 *)(iVar7 + param_3 * -0x18 + param_4);
          *puVar5 = *(undefined4 *)((int)local_3c + iVar6);
          puVar5[1] = *(undefined4 *)((int)local_3c + iVar6 + 4);
          puVar5[2] = *(undefined4 *)((int)local_3c + iVar6 + 8);
          if (local_b4[0] * 0xc + 0x10 == local_a8[0]) {
            puVar5 = (undefined4 *)(iVar7 + param_3 * -0x18 + 0xc + param_4);
            *puVar5 = local_a0;
            puVar5[1] = local_9c;
            puVar5[2] = local_98;
          }
          else {
            iVar6 = iVar8 + param_3 * -0xc;
            puVar5 = (undefined4 *)(iVar7 + param_3 * -0x18 + 0xc + param_4);
            *puVar5 = *(undefined4 *)((int)local_78 + iVar6);
            puVar5[1] = *(undefined4 *)((int)local_78 + iVar6 + 4);
            puVar5[2] = *(undefined4 *)((int)local_78 + iVar6 + 8);
          }
          local_b8 = local_b8 + 1;
          iVar8 = iVar8 + 0xc;
          iVar7 = iVar7 + 0x18;
          iVar6 = local_ac;
        } while (local_b8 < param_3 + iVar1);
      }
      return iVar6;
    }
  }
  return -1;
}

