// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0048af70
// entry: 0048af70  size: 1254


int FUN_0048af70(int param_1,undefined4 *param_2,int param_3)

{
  undefined4 *puVar1;
  uint *puVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 uVar8;
  uint local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  uint local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  local_40 = 0;
  if (((*(int *)(param_3 + 0x7c) == 0x20) || ((*(byte *)(param_1 + 0xc) & 0xf0) != 0x60)) ||
     ((*(byte *)(param_1 + 0xd) & 0x20) < 0x20)) {
    FUN_00489c80(param_1,param_3);
    if (*(int *)(param_3 + 0x7c) == 0x20) {
      FUN_004e5780(param_3 + 0x18);
    }
    *(undefined4 *)(param_3 + 0x94) = 0;
    *(undefined4 *)(param_3 + 0x60) = *(undefined4 *)(param_3 + 0x18);
    *(undefined4 *)(param_3 + 100) = *(undefined4 *)(param_3 + 0x1c);
    *(undefined4 *)(param_3 + 0x68) = *(undefined4 *)(param_3 + 0x20);
    *(undefined4 *)(param_3 + 0x6c) = *(undefined4 *)(param_3 + 0x18);
    *(undefined4 *)(param_3 + 0x70) = *(undefined4 *)(param_3 + 0x1c);
    *(undefined4 *)(param_3 + 0x74) = *(undefined4 *)(param_3 + 0x20);
    do {
      FUN_004e57a0(param_3 + 0x24);
      *(undefined4 *)(param_3 + 0x90) = 0;
      puVar1 = (undefined4 *)(param_3 + 0xc);
      FUN_004e5780(puVar1);
      *(undefined4 *)(param_3 + 0x54) = *puVar1;
      *(undefined4 *)(param_3 + 0x58) = *(undefined4 *)(param_3 + 0x10);
      *(undefined4 *)(param_3 + 0x48) = *puVar1;
      *(undefined4 *)(param_3 + 0x5c) = *(undefined4 *)(param_3 + 0x14);
      *(undefined4 *)(param_3 + 0x4c) = *(undefined4 *)(param_3 + 0x10);
      local_30 = *puVar1;
      *(undefined4 *)(param_3 + 0x50) = *(undefined4 *)(param_3 + 0x14);
      local_24 = *puVar1;
      local_2c = *(undefined4 *)(param_3 + 0x10);
      local_20 = *(undefined4 *)(param_3 + 0x10);
      local_28 = *(undefined4 *)(param_3 + 0x14);
      local_1c = *(undefined4 *)(param_3 + 0x14);
      uVar8 = FUN_00527440(0,CONCAT31((int3)((uint)local_20 >> 8),*(undefined1 *)(param_1 + 0xf0)));
      uVar6 = (undefined4)((ulonglong)uVar8 >> 0x20);
      iVar5 = (int)uVar8;
      if (iVar5 == 0) {
        FUN_004e5630(9,param_2);
        return 9;
      }
      iVar7 = 1;
      if (0 < iVar5) {
        do {
          iVar4 = FUN_00527570(0,CONCAT31((int3)((uint)uVar6 >> 8),*(undefined1 *)(param_1 + 0xf0)),
                               iVar7,&local_18);
          if (iVar4 != 0) {
            FUN_004e5630(4,param_2);
            return 4;
          }
          if ((local_18 & 0x80) != 0) {
            FUN_004e5630(0x19,param_2);
            return 0x19;
          }
          puVar2 = (uint *)(param_3 + 0x3c);
          *puVar2 = local_18;
          *(undefined4 *)(param_3 + 0x40) = local_14;
          *(undefined4 *)(param_3 + 0x44) = local_10;
          bVar3 = *(byte *)puVar2;
          if (((bVar3 != 0) || (*(char *)(param_3 + 0x3d) != '\0')) && ((local_40 & 8) == 0)) {
            if (local_40 == 0) {
              local_40 = 1;
              if (((bVar3 & 0xf0) == 0x50) || ((bVar3 & 0xf0) == 0x60)) {
                local_40 = 5;
              }
            }
            else if (local_40 == 1) {
              if (((bVar3 & 0xf0) == 0x50) || ((bVar3 & 0xf0) == 0x60)) {
LAB_0048b131:
                local_40 = 8;
              }
            }
            else if (((bVar3 & 0xf0) != 0x50) && ((bVar3 & 0xf0) != 0x60)) goto LAB_0048b131;
          }
          iVar4 = param_3 + 0x24;
          FUN_004e6d00(iVar4,puVar2,&local_3c);
          if (iVar7 != 1) {
            local_30 = *(undefined4 *)(param_3 + 0x48);
            local_2c = *(undefined4 *)(param_3 + 0x4c);
            local_28 = *(undefined4 *)(param_3 + 0x50);
          }
          FUN_004e6a00(param_3 + 0x48,&local_3c,param_3 + 0x48);
          FUN_004e5070(iVar7,&local_3c);
          FUN_004e7730(&local_3c,&local_3c);
          FUN_0048b460(param_3 + 0x18,&local_3c,iVar4);
          iVar4 = FUN_004e4020(iVar4);
          if (iVar4 != 0) {
            FUN_004e5630(iVar4,param_2);
            return iVar4;
          }
          if (((*(int *)(param_3 + 0x7c) == 0x21) &&
              (bVar3 = *(byte *)(param_3 + 0x48) & 0xf0, bVar3 != 0x50)) && (bVar3 != 0x60)) {
            FUN_004e5070(iVar7 + -1,param_2);
            FUN_004e5780(&local_18);
            puVar1 = (undefined4 *)(param_3 + 0x48);
            iVar5 = FUN_004e7210(puVar1,&local_18);
            if (iVar5 == 1) {
              FUN_004e7620(&local_30,&local_30);
              FUN_004e6a00(&local_30,puVar1,&local_30);
              local_3c = *puVar1;
              local_38 = *(undefined4 *)(param_3 + 0x4c);
              local_34 = *(undefined4 *)(param_3 + 0x50);
              FUN_004e6dd0(&local_3c,&local_30,&local_3c);
              FUN_004e6b80(param_2,&local_3c,param_2);
              iVar5 = FUN_004e7250(param_2,&local_18);
              if (iVar5 == 1) {
                FUN_004e5780(param_2);
              }
            }
            iVar5 = FUN_004e4020(param_2);
            return iVar5;
          }
          if (*(int *)(param_3 + 0x7c) == 0x20) {
            FUN_004e5070(iVar7 + -1,&local_3c);
            FUN_004e7730(&local_3c,&local_3c);
            FUN_004e6d00(puVar2,&local_3c,&local_3c);
            FUN_004e6d00(param_3 + 0x24,&local_3c,&local_3c);
            FUN_004e6a00(&local_24,&local_3c,&local_24);
          }
          uVar8 = FUN_0052f820();
          uVar6 = (undefined4)((ulonglong)uVar8 >> 0x20);
          if ((int)uVar8 == 1) {
            FUN_004e5630(1,param_2);
            return 1;
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 <= iVar5);
      }
      *param_2 = *(undefined4 *)(param_3 + 0x48);
      param_2[1] = *(undefined4 *)(param_3 + 0x4c);
      param_2[2] = *(undefined4 *)(param_3 + 0x50);
      iVar7 = *(int *)(param_3 + 0x7c);
      if (iVar7 == 0x1f) {
LAB_0048b3ee:
        iVar5 = FUN_004e4020(param_2);
        return iVar5;
      }
      if (iVar7 == 0x22) {
        FUN_004e5070(iVar5 + -1,&local_3c);
        FUN_0048b460(param_3 + 0x18,&local_3c,&local_3c);
        FUN_004e6d00(param_3 + 0x48,&local_3c,param_2);
        iVar5 = FUN_004e4020(param_2);
        return iVar5;
      }
      if ((iVar7 == 0x21) || (local_40 < 8)) break;
      FUN_004e6a00(param_3 + 0x54,&local_24,param_3 + 0x54);
      iVar5 = FUN_0048c5c0(param_3,param_2);
      if (iVar5 == 0) goto LAB_0048b3ee;
    } while (iVar5 != 3);
  }
  FUN_004e5630(3,param_2);
  return 3;
}

