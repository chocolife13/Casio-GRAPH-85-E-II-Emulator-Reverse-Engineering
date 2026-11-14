// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004ae280
// entry: 004ae280  size: 1221


uint FUN_004ae280(int param_1,undefined4 param_2,int param_3)

{
  uint *puVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  uint local_500;
  uint local_4fc;
  undefined4 local_4f8;
  int local_4f4;
  undefined1 local_4ed;
  int local_4ec;
  uint local_4e8;
  uint local_4e4;
  undefined4 local_4e0;
  undefined4 local_4dc;
  int local_4d8;
  undefined1 local_4d4 [4];
  uint local_4d0;
  undefined1 local_4cc [4];
  undefined1 local_4c8 [4];
  undefined1 local_4c4 [4];
  undefined1 local_4c0 [32];
  undefined1 local_4a0 [1184];
  
  local_4fc = 0;
  local_4d8 = FUN_00495830();
  iVar3 = FUN_004adfc0(&local_4ec,param_1);
  if (iVar3 != 0) {
    return 0x17;
  }
  uVar4 = FUN_00531a80(param_1);
  local_4d0 = FUN_004adc60(local_4a0,param_1);
  local_4fc = ((local_4d0 & 0xffff) + 1) * 0x10 + uVar4 + local_4ec;
  if (param_1 == 0x4000) {
    local_4fc = local_4fc + 0x20;
    FUN_004ae1f0(local_4c0,local_4fc);
  }
  if (param_3 != 0) {
    return local_4fc;
  }
  if (0x7fff < local_4fc + 0x80) {
    return 4;
  }
  local_500 = 0;
  if (param_1 == 0x1000) {
    iVar3 = FUN_004105d0(&DAT_005bfd08,s_EACT1_005bfd10,&local_4ed,local_4cc,local_4c8,local_4c4);
    if (iVar3 != 0) {
      return 0x17;
    }
    FUN_004adb10(0);
    uVar5 = FUN_00411d60(local_4d4);
    if (uVar5 <= (local_4fc - local_4ec) + 0x80) {
      return 0x17;
    }
  }
  else if (param_1 == 0x4000) {
    local_500 = FUN_00429dc0(param_2,local_4fc + 0x80);
    if (local_500 != 0) {
      if ((local_500 != 0xfffffffc) && (local_500 != 0xfffffff4)) {
        return 0x17;
      }
      FUN_0042a250(param_2);
      local_500 = FUN_00429dc0(param_2,local_4fc + 0x80);
      if (local_500 != 0) {
        if (local_500 == 0xfffffffc) {
          iVar3 = FUN_004299c0(param_2);
          if (iVar3 == 1) {
            return 0x2a;
          }
          if (iVar3 != 2) {
            return 4;
          }
          return 0x29;
        }
        if (local_500 == 0xfffffff4) {
          return 0x2e;
        }
      }
    }
    if (30000 < local_4fc) {
      return 4;
    }
    iVar3 = FUN_00429e40(param_2,1,&local_4fc);
    if (iVar3 == -0xd) {
      iVar3 = FUN_0042a080(param_2,0);
      if (iVar3 < 0) {
        return 0x17;
      }
      iVar3 = FUN_00429e40(param_2,1,&local_4fc);
      if (iVar3 < 0) {
        return 0x17;
      }
    }
    else if (iVar3 == -1) {
      return 0x2c;
    }
    local_4f4 = FUN_00429b00(param_2,3,0);
    if (local_4f4 < 0) {
      return 0x17;
    }
  }
  else {
    FUN_00410e00(&DAT_005bfd08,s_EDIT_PAC_005c0638);
    uVar5 = FUN_00411d60(local_4d4);
    iVar3 = FUN_004adab0(0);
    if (uVar5 <= (iVar3 - local_4ec) + 0x94 + local_4fc) {
      return 4;
    }
  }
  puVar1 = (uint *)*DAT_005d6d74;
  puVar8 = puVar1;
  for (iVar3 = 0x2000; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  local_4e8 = local_4fc;
  local_4e0 = CONCAT22(0x100,(short)local_4d0);
  local_4dc = 0x6b636150;
  *puVar1 = local_4fc;
  puVar1[1] = uVar4;
  puVar1[2] = local_4e0;
  puVar1[3] = 0x6b636150;
  local_4e4 = uVar4;
  FUN_00531ca0(param_1,puVar1 + 4,0);
  iVar3 = uVar4 + 0x10;
  if (param_1 == 0x4000) {
    FUN_00420ce0(puVar1,1);
LAB_004ae5a1:
    iVar7 = local_4f4;
    iVar6 = FUN_00429fe0(local_4f4,local_4c0,0x20);
    if ((iVar6 < 0) || (iVar6 = FUN_00429fe0(iVar7,puVar1,iVar3), iVar6 < 0)) goto LAB_004ae6d2;
  }
  else if (param_1 == 0x1000) {
    iVar7 = FUN_00411350(&DAT_005bfd08,s_EACT1_005bfd10,local_4d8 + 4,iVar3,puVar1);
    if (iVar7 != 0) {
      return 0x17;
    }
    FUN_00495ac0(iVar3);
    iVar7 = local_4f4;
  }
  else {
    if (param_1 == 0x4000) goto LAB_004ae5a1;
    cVar2 = FUN_004abb50(&DAT_005bfd08,s_EDIT_PAC_005c0638,iVar3,puVar1);
    iVar7 = local_4f4;
    if (cVar2 != '\0') {
      return 0x17;
    }
  }
  FUN_004ae0a0(local_4a0,&local_4f8);
  if (param_1 == 0x4000) {
    FUN_00420d60(&local_4e8,puVar1,1);
  }
  else {
    FUN_004ade30(param_1);
  }
  if (param_1 == 0x1000) {
    iVar3 = FUN_00411350(&DAT_005bfd08,s_EACT1_005bfd10,uVar4 + 0x14 + local_4d8,local_4f8,puVar1);
    if (iVar3 != 0) {
      return 0x17;
    }
    FUN_00495ac0(local_4f8);
    return local_500;
  }
  if (param_1 != 0x4000) {
    iVar3 = FUN_00411350(&DAT_005bfd08,s_EDIT_PAC_005c0638,iVar3,local_4f8,puVar1);
    if (iVar3 != 0) {
      return 0x17;
    }
    iVar3 = FUN_004adad0(0);
    if (iVar3 == 0) {
      return 0;
    }
    return 0x17;
  }
  iVar3 = FUN_00429fe0(iVar7,puVar1,local_4f8);
  if (-1 < iVar3) {
    FUN_00429be0(iVar7);
    return local_500;
  }
LAB_004ae6d2:
  FUN_00429be0(iVar7);
  FUN_0042a080(param_2,0);
  return 0x17;
}

