// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004f7720
// entry: 004f7720  size: 821


void FUN_004f7720(char *param_1,int *param_2,int param_3,int param_4)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  undefined4 *puVar7;
  int local_330;
  int local_32c;
  int local_328;
  int local_324;
  char local_31c [36];
  char local_2f8 [380];
  undefined1 local_17c [380];
  
  local_2f8[0] = '\0';
  iVar6 = 0;
  cVar1 = *param_1;
  while (cVar1 != '\0') {
    uVar2 = FUN_004b78f0(param_1);
    uVar2 = FUN_004b79f0(uVar2,local_31c);
    iVar3 = FUN_004b6bd0(uVar2);
    iVar6 = iVar6 + iVar3;
    FUN_004b6e70(local_2f8,local_31c);
    if ((local_31c[0] == '\r') || (local_31c[0] == '\f')) {
      iVar6 = ((iVar6 + -1) / 0x15 + 1) * 0x15;
    }
    if (0x93 < iVar6) {
      if ((((char *)*param_2 <= param_1) && (param_4 == 0)) ||
         ((param_1 + 1 == (char *)*param_2 && ((param_4 == 0 && (iVar6 == 0x15))))))
      goto LAB_004f791a;
      pcVar5 = local_2f8;
      iVar3 = 0;
      do {
        cVar1 = *pcVar5;
        if ((cVar1 == '\r') || (cVar1 == '\f')) {
          pcVar5 = pcVar5 + 1;
          break;
        }
        iVar4 = FUN_004b6ab0(cVar1);
        if (iVar4 != 0) {
          pcVar5 = pcVar5 + 1;
        }
        iVar3 = iVar3 + 1;
        pcVar5 = pcVar5 + 1;
      } while (iVar3 < 0x15);
      FUN_004b6ef0(local_17c,pcVar5);
      FUN_004b6ef0(local_2f8,local_17c);
      iVar6 = iVar6 + -0x15;
      if ((param_1 == (char *)*param_2) && (param_4 == 0)) {
        cVar1 = *param_1;
        goto joined_r0x004f78d8;
      }
    }
    param_1 = (char *)FUN_004b7840(param_1);
    cVar1 = *param_1;
  }
  if (param_4 == 0) {
LAB_004f791a:
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(param_3 + 0x128);
    local_330 = (iVar6 + 0x14) / 0x15 + iVar3;
    while ((8 < local_330 || (7 < iVar3))) {
      iVar4 = 6;
      iVar6 = param_3;
      do {
        FUN_00554ab0(iVar6,iVar6 + 0x2a,0x2a);
        iVar4 = iVar4 + -1;
        iVar6 = iVar6 + 0x2a;
      } while (iVar4 != 0);
      iVar3 = iVar3 + -1;
      puVar7 = (undefined4 *)(param_3 + 0xfc);
      for (iVar6 = 10; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar7 = 0x20202020;
        puVar7 = puVar7 + 1;
      }
      *(undefined2 *)puVar7 = 0x2020;
      local_330 = local_330 + -1;
    }
    if (iVar3 < 1) {
      iVar3 = 1;
    }
    iVar3 = iVar3 + -1;
  }
  pcVar5 = local_2f8;
  local_32c = 0;
  local_324 = 8;
  if (iVar3 < 7) {
    local_328 = iVar3 + 2;
    iVar6 = param_3 + iVar3 * 0x2a;
    do {
      if (local_32c == 1) {
        local_32c = 2;
      }
      iVar3 = 0;
      local_330 = 0;
      do {
        cVar1 = *pcVar5;
        if (cVar1 == '\0') {
          if (local_32c != 2) {
            *(undefined1 *)(iVar6 + iVar3) = 0x20;
          }
          if (local_32c == 0) {
            local_32c = 1;
            local_324 = local_328;
          }
        }
        else {
          iVar4 = FUN_004b6ab0(cVar1);
          *(char *)(iVar6 + iVar3) = cVar1;
          if (iVar4 == 0) {
            pcVar5 = pcVar5 + 1;
            if (((cVar1 == '\r') || (cVar1 == '\f')) && (local_330 < 0x15)) {
              iVar4 = 0x15 - local_330;
              local_330 = local_330 + iVar4;
              do {
                iVar3 = iVar3 + 1;
                iVar4 = iVar4 + -1;
                *(undefined1 *)(iVar6 + iVar3) = 0x20;
              } while (iVar4 != 0);
            }
          }
          else {
            iVar3 = iVar3 + 1;
            *(char *)(iVar6 + iVar3) = pcVar5[1];
            pcVar5 = pcVar5 + 2;
          }
        }
        local_330 = local_330 + 1;
        iVar3 = iVar3 + 1;
      } while (local_330 < 0x15);
      iVar6 = iVar6 + 0x2a;
      local_328 = local_328 + 1;
    } while (local_328 < 9);
  }
  FUN_004f7410(param_3);
  if (param_4 != 0) {
    *(int *)(param_3 + 0x128) = local_324;
  }
  FUN_0040ae30();
  return;
joined_r0x004f78d8:
  if (cVar1 == '\0') goto LAB_004f791a;
  param_1 = (char *)FUN_004b7840(param_1);
  uVar2 = FUN_004b78f0(param_1);
  uVar2 = FUN_004b79f0(uVar2,local_31c);
  iVar3 = FUN_004b6bd0(uVar2);
  iVar6 = iVar6 + iVar3;
  FUN_004b6e70(local_2f8,local_31c);
  if (0xa7 < iVar6) goto LAB_004f791a;
  cVar1 = *param_1;
  goto joined_r0x004f78d8;
}

