// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004106b0
// entry: 004106b0  size: 1491


int FUN_004106b0(int param_1,uint param_2,uint param_3,uint param_4,undefined4 param_5)

{
  ushort uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  byte bVar8;
  ushort uVar9;
  uint uVar10;
  int *piVar11;
  int *piVar12;
  int local_54;
  int local_50;
  uint local_4c;
  int local_48;
  uint local_44;
  uint local_40;
  int local_3c;
  int local_38;
  uint local_34;
  short *local_30;
  int *local_2c;
  int *local_28;
  int local_24;
  undefined4 local_20;
  undefined1 local_1c [8];
  int local_14 [4];
  undefined1 local_4;
  undefined1 local_3;
  undefined1 local_2;
  byte local_1;
  
  uVar10 = param_4;
  uVar3 = param_2;
  uVar2 = param_1;
  local_28 = DAT_005d67e8;
  if ((param_4 & 3) != 0) {
    return 0x10;
  }
  if (param_4 == 0) {
    return 0x10;
  }
  iVar4 = FUN_004105d0(param_1,param_2,&param_2,&local_38,&param_1,&local_34);
  if (iVar4 == 0) {
    if ((*(byte *)(local_38 + 0x11) & 1) != 0) {
      return 0x32;
    }
    if ((*(byte *)(local_38 + 0x11) & 6) != 0) {
      return 0x34;
    }
    if ((param_2 & 0x40) != 0) {
      return 0x35;
    }
    FUN_00411f00();
    if (local_34 < uVar10) {
      local_54 = FUN_00411190(uVar2,uVar3,0,uVar10 - local_34,0);
      if (local_54 == 0) {
        local_54 = 0;
LAB_004107c4:
        FUN_00410210(param_1,param_5,uVar10);
        *(undefined1 *)(local_38 + 0x10) = (undefined1)param_3;
        return local_54;
      }
    }
    else {
      local_54 = 0;
      if ((local_34 <= uVar10) ||
         (local_54 = FUN_004115f0(uVar2,uVar3,0,local_34 - uVar10), local_54 == 0))
      goto LAB_004107c4;
    }
  }
  else {
    uVar10 = uVar10 + 0x14;
    local_40 = uVar10;
    uVar5 = FUN_00411d60(&local_50);
    if (uVar5 < uVar10) {
      return 0x50;
    }
    FUN_00411f00();
    local_54 = FUN_00411e00(uVar2,local_1c,2);
    if (((local_54 == 0) && (local_54 = FUN_00411e00(uVar3,&local_24,2), local_54 == 0)) &&
       (local_54 = FUN_004103d0(local_1c,&local_48,&local_4c), local_54 == 0)) {
      piVar7 = *(int **)(local_48 + 8);
      uVar1 = *(ushort *)(local_48 + 0xc);
      local_2c = (int *)(local_48 + 8);
      local_30 = (short *)(local_48 + 0xc);
      if (uVar1 == 0xffff) {
        return 0x53;
      }
      FUN_00411e80(&local_24,local_48,&local_44);
      local_14[1] = local_20;
      local_14[0] = local_24;
      uVar9 = (ushort)local_44;
      if (uVar9 == 0) {
        local_14[2] = (uVar1 + 1) * 0x14;
      }
      else {
        local_14[2] = piVar7[(local_44 & 0xffff) * 5 + -2] + 0x14 +
                      piVar7[(local_44 & 0xffff) * 5 + -3];
      }
      local_3 = 0;
      local_14[3] = param_4;
      local_4 = (undefined1)param_3;
      local_2 = 0;
      local_1 = (byte)local_4c;
      if (uVar1 == 0) {
        if ((byte)local_4c < 2) {
          param_1 = (int)piVar7 + local_14[2];
          piVar11 = local_14;
          for (iVar4 = 5; iVar4 != 0; iVar4 = iVar4 + -1) {
            *piVar7 = *piVar11;
            piVar11 = piVar11 + 1;
            piVar7 = piVar7 + 1;
          }
          FUN_00410210(param_1,param_5,param_4);
        }
        else {
          param_1 = local_50 + -1 + uVar10;
          FUN_004101a0(local_50 + -1,param_1,local_50 - (int)piVar7);
          piVar11 = local_14;
          piVar12 = piVar7;
          for (iVar4 = 5; iVar4 != 0; iVar4 = iVar4 + -1) {
            *piVar12 = *piVar11;
            piVar11 = piVar11 + 1;
            piVar12 = piVar12 + 1;
          }
          param_1 = (int)piVar7 + local_14[2];
          FUN_00410210(param_1,param_5,param_4);
        }
      }
      else if (uVar9 == 0) {
        param_1 = local_50 + -1 + uVar10;
        FUN_004101a0(local_50 + -1,param_1,(local_50 - piVar7[2]) - (int)piVar7);
        iVar4 = piVar7[2] + -1 + (int)piVar7;
        param_3 = (uint)uVar1;
        param_1 = iVar4 + 0x14;
        FUN_004101a0(iVar4,param_1,param_3 * 0x14);
        piVar11 = local_14;
        piVar12 = piVar7;
        for (iVar4 = 5; iVar4 != 0; iVar4 = iVar4 + -1) {
          *piVar12 = *piVar11;
          piVar11 = piVar11 + 1;
          piVar12 = piVar12 + 1;
        }
        param_1 = local_14[2] + (int)piVar7;
        FUN_00410210(param_1,param_5,param_4);
        if (uVar1 != 0) {
          piVar7 = piVar7 + 7;
          do {
            *piVar7 = *piVar7 + local_40;
            piVar7 = piVar7 + 5;
            param_3 = param_3 - 1;
          } while (param_3 != 0);
        }
      }
      else if (uVar9 == uVar1) {
        if ((byte)local_4c < 2) {
          iVar4 = local_50 + -1;
          param_1 = local_50 + 0x13;
          FUN_00411dd0(local_4c,&local_48);
          FUN_004101a0(iVar4,param_1,local_50 - local_48);
        }
        else {
          iVar4 = local_50 + -1;
          param_1 = iVar4 + uVar10;
          iVar6 = FUN_00411d80((byte)local_4c - 1,&local_3c);
          if (iVar6 != 0) {
            return iVar6;
          }
          FUN_004101a0(iVar4,param_1,local_50 - *(int *)(local_3c + 8));
          iVar4 = *(int *)(local_3c + 8);
          param_1 = iVar4 + 0x13;
          FUN_00411dd0(local_4c,&local_48);
          FUN_004101a0(iVar4 + -1,param_1,*(int *)(local_3c + 8) - local_48);
          local_54 = 0;
        }
        piVar11 = local_14;
        piVar12 = piVar7 + (local_44 & 0xffff) * 5;
        for (iVar4 = 5; iVar4 != 0; iVar4 = iVar4 + -1) {
          *piVar12 = *piVar11;
          piVar11 = piVar11 + 1;
          piVar12 = piVar12 + 1;
        }
        param_1 = local_14[2] + (int)piVar7;
        FUN_00410210(param_1,param_5,param_4);
        if (uVar1 != 0) {
          uVar10 = (uint)uVar1;
          piVar7 = piVar7 + 2;
          do {
            uVar10 = uVar10 - 1;
            *piVar7 = *piVar7 + 0x14;
            piVar7 = piVar7 + 5;
          } while (uVar10 != 0);
        }
      }
      else {
        param_1 = uVar10 + local_50 + -1;
        piVar11 = piVar7 + (local_44 & 0xffff) * 5;
        FUN_004101a0(local_50 + -1,param_1,(local_50 - piVar11[2]) - (int)piVar7);
        iVar4 = piVar11[2] + -1 + (int)piVar7;
        param_1 = iVar4 + 0x14;
        FUN_004101a0(iVar4,param_1,(piVar11[2] - (int)piVar11) + (int)piVar7);
        piVar12 = local_14;
        for (iVar4 = 5; iVar4 != 0; iVar4 = iVar4 + -1) {
          *piVar11 = *piVar12;
          piVar12 = piVar12 + 1;
          piVar11 = piVar11 + 1;
        }
        param_1 = local_14[2] + (int)piVar7;
        FUN_00410210(param_1,param_5,param_4);
        uVar9 = 1;
        piVar11 = piVar7;
        if ((ushort)local_44 != 0) {
          do {
            piVar7 = piVar11 + 5;
            uVar9 = uVar9 + 1;
            piVar11[2] = piVar11[2] + 0x14;
            piVar11 = piVar7;
          } while (uVar9 <= (ushort)local_44);
        }
        if ((ushort)(local_44 + 1) <= uVar1) {
          piVar7 = piVar7 + 7;
          iVar4 = ((uint)uVar1 - (local_44 + 1 & 0xffff)) + 1;
          do {
            *piVar7 = *piVar7 + local_40;
            piVar7 = piVar7 + 5;
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
        }
      }
      *local_30 = *local_30 + 1;
      bVar8 = (byte)local_4c;
      while (1 < bVar8) {
        piVar7 = local_2c + 4;
        local_2c = local_2c + 4;
        *local_2c = *piVar7 + local_40;
        bVar8 = (byte)local_4c - 1;
        local_4c = (uint)bVar8;
      }
      *local_28 = *local_28 + local_40;
    }
  }
  return local_54;
}

