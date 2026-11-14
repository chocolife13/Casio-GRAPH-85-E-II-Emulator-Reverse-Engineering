// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004a31e0
// entry: 004a31e0  size: 911


int FUN_004a31e0(int param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  char *pcVar10;
  char *pcVar11;
  int local_54;
  int local_50;
  char local_48 [4];
  char local_44 [9];
  char local_3b [4];
  char local_37 [11];
  undefined1 local_2c [36];
  int local_8;
  
  local_54 = 0xc;
  local_50 = 0;
  iVar8 = 0x20;
  bVar1 = false;
  uVar3 = 0;
  if (*(short *)(param_1 + 0x1e) != 0) {
    do {
      FUN_0049c8f0(param_2,(uint)uVar3,0x40);
      iVar9 = (uint)uVar3 * 0x1c;
      cVar2 = FUN_004a0820(*(int *)(param_1 + 0x20) + iVar9,8);
      if ((cVar2 != '\0') &&
         (cVar2 = FUN_004a0820(*(int *)(param_1 + 0x20) + iVar9,7), cVar2 == '\0')) {
        iVar4 = *(int *)(param_1 + 0x20) + iVar9;
        iVar8 = iVar8 + 0x14;
        iVar4 = FUN_004298f0(iVar4 + 4,iVar4 + 0x10,local_2c);
        do {
          iVar5 = FUN_00421eb0(*(int *)(param_1 + 0x20) + 4 + iVar9,s_SETUP_005be050);
          if (iVar5 == 0) {
            bVar1 = true;
          }
          local_50 = local_50 + 1;
          iVar5 = *(int *)(param_1 + 0x20) + iVar9;
          iVar8 = local_8 + 0x18 + iVar8;
          iVar4 = FUN_00429910(iVar5 + 4,iVar5 + 0x10,iVar4,local_2c);
        } while (iVar4 != -1);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(ushort *)(param_1 + 0x1e));
  }
  uVar3 = 0;
  if (*(short *)(param_1 + 0x1e) != 0) {
    do {
      FUN_0049c8f0(param_2,uVar3 + 0x20,0x40);
      if (bVar1) {
        local_44[0] = s_SETUP_005be050[4];
        local_44[1] = s_SETUP_005be050[5];
        local_37[0] = s_SETUP_005be050[4];
        local_37[1] = s_SETUP_005be050[5];
        local_48[0] = s_SETUP_005be050[0];
        local_48[1] = s_SETUP_005be050[1];
        local_48[2] = s_SETUP_005be050[2];
        local_48[3] = s_SETUP_005be050[3];
        local_3b[0] = s_SETUP_005be050[0];
        local_3b[1] = s_SETUP_005be050[1];
        local_3b[2] = s_SETUP_005be050[2];
        local_3b[3] = s_SETUP_005be050[3];
        local_54 = FUN_004230e0(param_2,local_48,local_50,iVar8);
        if (local_54 < 0) {
          iVar8 = FUN_0042ac10(param_2,0x5c);
          if (*(short *)(param_2 + 2 + (iVar8 - param_2 >> 1) * 2) == 0) {
            FUN_004298f0(local_48,local_3b,local_2c);
            iVar8 = FUN_0042a410(param_2,local_2c,0xc);
            FUN_0042aac0(param_2 + iVar8 * 2);
          }
          goto LAB_004a3524;
        }
        bVar1 = false;
      }
      iVar9 = (uint)uVar3 * 0x1c;
      cVar2 = FUN_004a0820(*(int *)(param_1 + 0x20) + iVar9,8);
      if (((cVar2 != '\0') &&
          (cVar2 = FUN_004a0820(*(int *)(param_1 + 0x20) + iVar9,7), cVar2 == '\0')) &&
         (iVar4 = FUN_00421eb0(*(int *)(param_1 + 0x20) + 4 + iVar9,s_SETUP_005be050), iVar4 != 0))
      {
        iVar9 = *(int *)(param_1 + 0x20) + iVar9;
        uVar6 = 0xffffffff;
        pcVar10 = (char *)(iVar9 + 4);
        do {
          pcVar11 = pcVar10;
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          pcVar11 = pcVar10 + 1;
          cVar2 = *pcVar10;
          pcVar10 = pcVar11;
        } while (cVar2 != '\0');
        uVar6 = ~uVar6;
        pcVar10 = pcVar11 + -uVar6;
        pcVar11 = local_48;
        for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
          pcVar10 = pcVar10 + 4;
          pcVar11 = pcVar11 + 4;
        }
        for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *pcVar11 = *pcVar10;
          pcVar10 = pcVar10 + 1;
          pcVar11 = pcVar11 + 1;
        }
        uVar6 = 0xffffffff;
        pcVar10 = (char *)(iVar9 + 0x10);
        do {
          pcVar11 = pcVar10;
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          pcVar11 = pcVar10 + 1;
          cVar2 = *pcVar10;
          pcVar10 = pcVar11;
        } while (cVar2 != '\0');
        uVar6 = ~uVar6;
        pcVar10 = pcVar11 + -uVar6;
        pcVar11 = local_3b;
        for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
          pcVar10 = pcVar10 + 4;
          pcVar11 = pcVar11 + 4;
        }
        for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *pcVar11 = *pcVar10;
          pcVar10 = pcVar10 + 1;
          pcVar11 = pcVar11 + 1;
        }
        if (local_54 == 0xc) {
          local_54 = FUN_004230e0(param_2,local_48,local_50,iVar8);
          if (local_54 < 0) {
            iVar8 = FUN_0042ac10(param_2,0x5c);
            if (*(short *)(param_2 + 2 + (iVar8 - param_2 >> 1) * 2) == 0) {
              FUN_004298f0(local_48,local_3b,local_2c);
              iVar8 = FUN_0042a410(param_2,local_2c,0xc);
              FUN_0042aac0(param_2 + iVar8 * 2);
            }
LAB_004a3524:
            if (local_54 != -0xd) {
              FUN_0042a080(param_2,0);
            }
            FUN_00525bc0();
            return local_54;
          }
        }
        else {
          iVar9 = FUN_00423360(local_54,local_48);
          if (iVar9 < 0) {
            FUN_00525bc0();
            FUN_004234c0(local_54);
            FUN_0042a080(param_2,0);
            return iVar9;
          }
        }
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(ushort *)(param_1 + 0x1e));
  }
  FUN_00525bc0();
  iVar8 = FUN_004234c0(local_54);
  return iVar8;
}

