// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004f7cc0
// entry: 004f7cc0  size: 909


undefined4 FUN_004f7cc0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  int iVar10;
  int local_150;
  int local_14c;
  int local_148;
  int local_144;
  int local_140;
  undefined4 local_13c;
  char local_138 [52];
  char local_104 [260];
  
  iVar2 = FUN_004f57b0(param_1,param_2,param_3,&local_140,0x15);
  if (iVar2 == 0) {
    return 0;
  }
  iVar2 = FUN_004f5290(param_2,param_3,1);
  if (iVar2 == 0) {
    return 0;
  }
  iVar2 = FUN_004f57b0(param_1,param_2,param_3,&local_150,7);
  if (iVar2 == 0) {
    return 0;
  }
  iVar2 = FUN_004f5290(param_2,param_3,1);
  if (iVar2 == 0) {
    return 0;
  }
  if (*(char *)*param_1 == '\"') {
    FUN_004fe330(param_2,param_1);
    FUN_004fe330(param_2,param_1);
    iVar2 = FUN_004f7b70(param_1,param_2,param_3,local_104,1);
    if (iVar2 == 0) {
      return 0;
    }
    local_148 = FUN_004f7c40(local_104,local_138);
  }
  else {
    iVar2 = FUN_004fe470((char *)*param_1);
    if ((iVar2 == 0) || (iVar2 = FUN_004f6620(param_1,param_2,&local_13c), iVar2 == 0)) {
      iVar2 = FUN_004f5850(param_1,param_2,param_3,0);
      if (iVar2 == 0) {
        return 0;
      }
      FUN_004b5030(param_3,local_138);
      local_148 = FUN_004b6bd0(local_138);
    }
    else {
      iVar2 = FUN_005286a0(0,local_13c,local_104);
      if ((iVar2 == 0) || (local_104[0] == '\0')) {
        FUN_004f58f0(4,param_3);
        return 0;
      }
      local_148 = FUN_004f7c40(local_104,local_138);
    }
  }
  FUN_004f7410(param_4);
  bVar1 = false;
  iVar2 = 0;
  local_144 = 0x15;
  cVar6 = (char)local_14c;
  do {
    if (!bVar1) {
      cVar6 = *(char *)(iVar2 + local_150 * 0x2a + -0x2a + param_4);
      local_14c = CONCAT31(local_14c._1_3_,cVar6);
    }
    iVar3 = FUN_004b6ab0(local_14c);
    if (iVar3 == 0) {
      if (cVar6 == '\0') {
        bVar1 = true;
        iVar3 = iVar2 + local_150 * 0x2a;
        iVar2 = iVar2 + 1;
        *(undefined1 *)(iVar3 + -0x2a + param_4) = 0x20;
      }
      else {
        iVar2 = iVar2 + 1;
      }
    }
    else {
      iVar2 = iVar2 + 2;
    }
    local_144 = local_144 + -1;
  } while (local_144 != 0);
  iVar10 = 0;
  iVar3 = 0;
  iVar7 = 0;
  local_14c = 0;
  local_144 = 0;
  iVar2 = iVar10;
  iVar5 = iVar3;
  iVar4 = local_14c;
  if (local_140 != 1 && -1 < local_140 + -1) {
    do {
      iVar3 = iVar5 + 1;
      iVar10 = iVar2 + 1;
      cVar6 = *(char *)(iVar5 + local_150 * 0x2a + -0x2a + param_4);
      local_104[iVar2] = cVar6;
      iVar4 = FUN_004b6ab0(CONCAT31((int3)((uint)(local_150 * 0x15) >> 8),cVar6));
      if (iVar4 != 0) {
        iVar10 = iVar2 + 2;
        iVar4 = iVar3 + local_150 * 0x2a;
        iVar3 = iVar5 + 2;
        local_104[iVar2 + 1] = *(char *)(iVar4 + -0x2a + param_4);
      }
      iVar7 = iVar7 + 1;
      iVar2 = iVar10;
      iVar5 = iVar3;
      iVar4 = iVar7;
    } while (iVar7 < local_140 + -1);
  }
  local_14c = iVar4;
  if (local_14c < 0x15) {
    pcVar8 = local_138;
    do {
      if (local_148 < 1) {
        if (local_14c < 0x15) {
          iVar5 = 0x15 - local_14c;
          iVar2 = iVar10;
          do {
            iVar7 = iVar3 + 1;
            iVar10 = iVar2 + 1;
            cVar6 = *(char *)(iVar3 + local_150 * 0x2a + -0x2a + param_4);
            local_104[iVar2] = cVar6;
            iVar4 = FUN_004b6ab0(cVar6);
            if (iVar4 != 0) {
              iVar10 = iVar2 + 2;
              iVar4 = iVar7 + local_150 * 0x2a;
              iVar7 = iVar3 + 2;
              local_104[iVar2 + 1] = *(char *)(iVar4 + -0x2a + param_4);
            }
            iVar5 = iVar5 + -1;
            iVar2 = iVar10;
            iVar3 = iVar7;
          } while (iVar5 != 0);
        }
        break;
      }
      cVar6 = *pcVar8;
      pcVar9 = pcVar8 + 1;
      local_104[iVar10] = cVar6;
      iVar5 = FUN_004b6ab0(cVar6);
      iVar2 = iVar10 + 1;
      if (iVar5 != 0) {
        local_104[iVar10 + 1] = *pcVar9;
        pcVar9 = pcVar8 + 2;
        iVar2 = iVar10 + 2;
      }
      iVar10 = iVar2;
      iVar2 = iVar3 + local_150 * 0x2a;
      iVar5 = iVar3 + 1;
      iVar2 = FUN_004b6ab0(CONCAT31((int3)((uint)iVar2 >> 8),
                                    *(undefined1 *)(iVar2 + -0x2a + param_4)));
      if (iVar2 != 0) {
        iVar5 = iVar3 + 2;
      }
      local_148 = local_148 + -1;
      local_14c = local_14c + 1;
      pcVar8 = pcVar9;
      iVar3 = iVar5;
    } while (local_14c < 0x15);
  }
  local_104[iVar10] = '\0';
  FUN_00554ab0(param_4 + -0x2a + local_150 * 0x2a,local_104,0x2a);
  FUN_005232d0(1,local_150);
  FUN_00523470(local_104,0x15);
  FUN_0040ae30();
  return 1;
}

