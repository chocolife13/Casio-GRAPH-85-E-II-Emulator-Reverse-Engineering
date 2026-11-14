// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00556ebb
// entry: 00556ebb  size: 517


uint FUN_00556ebb(byte *param_1,int *param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  byte bVar5;
  uint uVar6;
  uint local_c;
  byte *local_8;
  
  local_c = 0;
  bVar5 = *param_1;
  local_8 = param_1 + 1;
  while( true ) {
    if (DAT_005cc6b4 < 2) {
      uVar1 = (byte)PTR_DAT_005cc4a8[(uint)bVar5 * 2] & 8;
    }
    else {
      uVar1 = FUN_00559be3(bVar5,8);
    }
    if (uVar1 == 0) break;
    bVar5 = *local_8;
    local_8 = local_8 + 1;
  }
  if (bVar5 == 0x2d) {
    param_4 = param_4 | 2;
LAB_00556f16:
    bVar5 = *local_8;
    local_8 = local_8 + 1;
  }
  else if (bVar5 == 0x2b) goto LAB_00556f16;
  if ((((int)param_3 < 0) || (param_3 == 1)) || (0x24 < (int)param_3)) {
    if (param_2 != (int *)0x0) {
      *param_2 = (int)param_1;
    }
    return 0;
  }
  if (param_3 == 0) {
    if (bVar5 != 0x30) {
      param_3 = 10;
      goto LAB_00556f80;
    }
    if ((*local_8 != 0x78) && (*local_8 != 0x58)) {
      param_3 = 8;
      goto LAB_00556f80;
    }
    param_3 = 0x10;
  }
  if (((param_3 == 0x10) && (bVar5 == 0x30)) && ((*local_8 == 0x78 || (*local_8 == 0x58)))) {
    bVar5 = local_8[1];
    local_8 = local_8 + 2;
  }
LAB_00556f80:
  uVar1 = (uint)(0xffffffff / (ulonglong)param_3);
  do {
    uVar6 = (uint)bVar5;
    if (DAT_005cc6b4 < 2) {
      uVar2 = (byte)PTR_DAT_005cc4a8[uVar6 * 2] & 4;
    }
    else {
      uVar2 = FUN_00559be3(uVar6,4);
    }
    if (uVar2 == 0) {
      if (DAT_005cc6b4 < 2) {
        uVar6 = *(ushort *)(PTR_DAT_005cc4a8 + uVar6 * 2) & 0x103;
      }
      else {
        uVar6 = FUN_00559be3(uVar6,0x103);
      }
      if (uVar6 == 0) {
LAB_0055702c:
        local_8 = local_8 + -1;
        if ((param_4 & 8) == 0) {
          if (param_2 != (int *)0x0) {
            local_8 = param_1;
          }
          local_c = 0;
        }
        else if (((param_4 & 4) != 0) ||
                (((param_4 & 1) == 0 &&
                 ((((param_4 & 2) != 0 && (0x80000000 < local_c)) ||
                  (((param_4 & 2) == 0 && (0x7fffffff < local_c)))))))) {
          puVar4 = (undefined4 *)FUN_005542c1();
          *puVar4 = 0x22;
          if ((param_4 & 1) == 0) {
            local_c = ((param_4 & 2) != 0) + 0x7fffffff;
          }
          else {
            local_c = 0xffffffff;
          }
        }
        if (param_2 != (int *)0x0) {
          *param_2 = (int)local_8;
        }
        if ((param_4 & 2) == 0) {
          return local_c;
        }
        return -local_c;
      }
      iVar3 = FUN_0055b93e((int)(char)bVar5);
      uVar6 = iVar3 - 0x37;
    }
    else {
      uVar6 = (int)(char)bVar5 - 0x30;
    }
    if (param_3 <= uVar6) goto LAB_0055702c;
    if ((local_c < uVar1) ||
       ((local_c == uVar1 && (uVar6 <= (uint)(0xffffffff % (ulonglong)param_3))))) {
      local_c = local_c * param_3 + uVar6;
      param_4 = param_4 | 8;
    }
    else {
      param_4 = param_4 | 0xc;
    }
    bVar5 = *local_8;
    local_8 = local_8 + 1;
  } while( true );
}

