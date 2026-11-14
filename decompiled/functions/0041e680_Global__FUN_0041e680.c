// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0041e680
// entry: 0041e680  size: 1866


int FUN_0041e680(undefined4 param_1,int param_2)

{
  uint uVar1;
  short sVar2;
  ushort uVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  uint *puVar7;
  undefined4 *puVar8;
  bool bVar9;
  undefined4 uVar10;
  uint local_268;
  int local_264;
  uint local_260;
  uint local_25c;
  int local_258;
  undefined4 local_254;
  uint local_250;
  undefined1 local_24c;
  undefined1 local_24b;
  undefined1 local_24a;
  undefined1 local_249;
  undefined1 local_248;
  undefined1 local_247;
  undefined1 local_246;
  undefined1 local_245;
  undefined1 local_244;
  undefined1 local_243;
  undefined1 local_242;
  undefined1 local_241;
  undefined1 local_240;
  uint local_23c;
  uint local_238;
  uint local_234;
  undefined1 local_230 [28];
  undefined1 local_214 [20];
  undefined2 local_200 [8];
  undefined4 local_1f0 [124];
  
  local_200[0] = 0x5c;
  local_200[1] = 0x5c;
  local_200[6] = 0x5c;
  local_200[2] = 0x66;
  local_200[3] = 0x6c;
  local_200[4] = 0x73;
  local_200[5] = 0x30;
  local_200[7] = 0;
  puVar8 = local_1f0;
  for (iVar6 = 0x7c; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  local_264 = 4;
  iVar6 = 0;
  local_258 = 0;
  local_268 = 0;
  local_260 = 0xffffffff;
  local_25c = 0xffffffff;
  local_250 = 0xffffffff;
  local_24c = 0;
  local_24b = 0;
  local_24a = 0;
  local_249 = 0;
  local_248 = 0;
  local_247 = 0;
  local_246 = 0;
  local_245 = 0;
  local_244 = 0;
  local_243 = 0;
  local_242 = 0;
  local_241 = 0;
  local_240 = 0;
  local_254 = param_1;
  iVar4 = FUN_0041b7d0(&local_254,&local_25c);
  if ((iVar4 < 0) || (iVar4 = FUN_0041a3c0(&local_268,&local_23c), iVar4 < 0)) {
    return iVar4;
  }
  while (((local_25c != local_234 || ((local_238 & 0xffff) == 0)) ||
         (iVar4 = FUN_0042a440(local_254,local_230), iVar4 == 0))) {
    local_268 = local_268 + 1;
    if (DAT_005d8730 <= (ushort)local_268) {
      return -1;
    }
    iVar4 = FUN_0041a3c0(&local_268,&local_23c);
    if (iVar4 < 0) {
      return iVar4;
    }
  }
  puVar7 = &DAT_005d8748;
  pcVar5 = &DAT_005d8ba4;
  do {
    if ((*pcVar5 == '\0') && ((puVar7[-1] == local_238 || (*puVar7 == local_238)))) {
      return -8;
    }
    pcVar5 = pcVar5 + 8;
    puVar7 = puVar7 + 10;
  } while ((int)pcVar5 < 0x5d8c04);
  if ((local_238 & 0xfff0000) == 0x1100000) {
    iVar4 = FUN_0042a410(local_254);
    iVar4 = FUN_0042a410(local_200,local_254,iVar4 + 1);
    FUN_0042a4c0(local_200 + iVar4);
    iVar4 = FUN_0042a410(local_200,&DAT_005bd6b8,4);
    FUN_0042aac0(local_200 + iVar4);
    if (param_2 != 0) {
      iVar4 = FUN_0041e550(local_200,&local_264,local_254,local_214);
      while (-1 < iVar4) {
        iVar4 = FUN_00418e50((&DAT_005d86a0)[local_264 * 0x12]);
        if (iVar4 < 0) goto LAB_0041ebe4;
        FUN_00419650(0);
        FUN_00419220(&local_260,4);
        FUN_00419650(4);
        FUN_00419220(&local_25c,4);
        if (*(uint *)(&DAT_005d86a4 + local_264 * 0x24) == local_25c) {
          local_258 = local_258 + 1;
        }
        FUN_00418f90();
        uVar1 = local_260;
        local_268 = CONCAT22((short)((uint)(local_264 * 9) >> 0x10),
                             (&DAT_005d86a0)[local_264 * 0x12] + 1);
        if ((ushort)((&DAT_005d86a0)[local_264 * 0x12] + 1) < DAT_005d8730) {
          do {
            iVar4 = FUN_00418e50(local_268 & 0xffff);
            if (iVar4 < 0) goto LAB_0041ebe4;
            FUN_00419650(0);
            FUN_00419220(&local_260,4);
            FUN_00419650(4);
            FUN_00419220(&local_25c,4);
            if (local_25c != uVar1) {
              FUN_00418f90();
              break;
            }
            local_258 = local_258 + 1;
            FUN_00418f90();
            local_268 = local_268 + 1;
          } while ((ushort)local_268 < DAT_005d8730);
        }
        iVar4 = FUN_0041e600(local_264,local_254,local_214);
      }
      if (local_264 < 4) {
        FUN_0041e650(local_264);
      }
      iVar4 = local_258 + 1;
      local_258 = iVar4;
      FUN_005237c0(6);
      FUN_00515990(0,iVar4);
    }
    iVar4 = FUN_0041e550(local_200,&local_264,local_254,local_214);
    while (-1 < iVar4) {
      iVar4 = FUN_00418e50((&DAT_005d86a0)[local_264 * 0x12]);
      if (iVar4 < 0) {
LAB_0041ebc6:
        if (param_2 != 0) {
          FUN_00515990(local_258,local_258);
          FUN_00523800(6);
        }
LAB_0041ebe4:
        if (3 < local_264) {
          return iVar4;
        }
        FUN_0041e650(local_264);
        return iVar4;
      }
      FUN_00419650(0);
      FUN_00419220(&local_260,4);
      FUN_00419650(4);
      FUN_00419220(&local_25c,4);
      if (*(uint *)(&DAT_005d86a4 + local_264 * 0x24) == local_25c) {
        local_250 = local_260 & 0xfff0000;
        FUN_00419700(0);
        FUN_004193e0(&local_250,4);
        FUN_00419120();
        if (param_2 != 0) {
          iVar6 = iVar6 + 1;
          FUN_00515990(iVar6,local_258);
        }
      }
      FUN_00418f90();
      uVar1 = local_260;
      local_268 = CONCAT22((short)((uint)local_264 >> 0x10),(&DAT_005d86a0)[local_264 * 0x12] + 1);
      if ((ushort)((&DAT_005d86a0)[local_264 * 0x12] + 1) < DAT_005d8730) {
        do {
          iVar4 = FUN_00418e50(local_268 & 0xffff);
          if (iVar4 < 0) goto LAB_0041ebc6;
          FUN_00419650(0);
          FUN_00419220(&local_260,4);
          FUN_00419650(4);
          FUN_00419220(&local_25c,4);
          if (local_25c != uVar1) {
            FUN_00418f90();
            break;
          }
          local_250 = local_260 & 0xfff0000;
          FUN_00419700(0);
          FUN_004193e0(&local_250,4);
          FUN_00419120();
          if (param_2 != 0) {
            iVar6 = iVar6 + 1;
            FUN_00515990(iVar6,local_258);
          }
          FUN_00418f90();
          local_268 = local_268 + 1;
        } while ((ushort)local_268 < DAT_005d8730);
      }
      iVar4 = FUN_0041e600(local_264,local_254,local_214);
    }
    if (local_264 < 4) {
      FUN_0041e650(local_264);
    }
  }
  else {
    param_2 = 0;
  }
  if ((local_238 & 0xfff0000) != 0x1200000) goto LAB_0041ec9e;
  FUN_0042aa50(&local_24c,local_230,0xc);
  sVar2 = FUN_0041a0e0(param_1,1,0);
  uVar3 = (ushort)local_23c;
  if (sVar2 == 4) {
    if (DAT_005d6e1c == 0xffff) goto LAB_0041ec9e;
    bVar9 = uVar3 == DAT_005d6e1c;
    if (uVar3 < DAT_005d6e1c) {
      DAT_005d6e50 = DAT_005d6e50 + -1;
      bVar9 = DAT_005d6e50 == 0;
    }
    if (!bVar9) goto LAB_0041ec9e;
    uVar10 = 0;
  }
  else {
    if ((sVar2 != 5) || (DAT_005d6e3a == 0xffff)) goto LAB_0041ec9e;
    bVar9 = uVar3 == DAT_005d6e3a;
    if (uVar3 < DAT_005d6e3a) {
      DAT_005d6e4c = DAT_005d6e4c + -1;
      bVar9 = DAT_005d6e4c == 0;
    }
    if (!bVar9) goto LAB_0041ec9e;
    uVar10 = 1;
  }
  FUN_004aaf90(uVar10);
LAB_0041ec9e:
  iVar6 = FUN_00418e50(local_23c & 0xffff);
  if (iVar6 < 0) {
    return iVar6;
  }
  FUN_00419650(0);
  FUN_00419220(&local_260,4);
  local_250 = local_260 & 0xfff0000;
  FUN_00419700(0);
  FUN_004193e0(&local_250,4);
  FUN_00419120();
  FUN_00418f90();
  uVar1 = local_260;
  local_268 = local_23c + 1;
  if ((ushort)local_268 < DAT_005d8730) {
    do {
      iVar6 = FUN_00418e50(local_268 & 0xffff);
      if (iVar6 < 0) {
        return iVar6;
      }
      FUN_00419650(0);
      FUN_00419220(&local_260,4);
      FUN_00419650(4);
      FUN_00419220(&local_25c,4);
      if (local_25c != uVar1) {
        FUN_00418f90();
        break;
      }
      local_250 = local_260 & 0xfff0000;
      FUN_00419700(0);
      FUN_004193e0(&local_250,4);
      FUN_00419120();
      FUN_00418f90();
      local_268 = local_268 + 1;
    } while ((ushort)local_268 < DAT_005d8730);
  }
  if (param_2 != 0) {
    FUN_00515990(local_258,local_258);
    FUN_00523800(6);
  }
  return 0;
}

