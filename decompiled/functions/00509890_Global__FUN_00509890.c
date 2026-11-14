// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00509890
// entry: 00509890  size: 966


int FUN_00509890(int param_1)

{
  char *pcVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int extraout_ECX;
  int iVar7;
  int local_4c;
  undefined1 local_48 [12];
  byte local_3c [24];
  undefined1 local_24 [12];
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  FUN_0052f840();
  iVar4 = FUN_00513550(param_1,&local_4c);
  if (iVar4 != 0) {
    return iVar4;
  }
  iVar4 = *(int *)(param_1 + 0x8dc);
  iVar7 = 0;
  cVar3 = *(char *)(iVar4 + 0x1c);
  iVar5 = iVar4;
  iVar2 = extraout_ECX;
  while (cVar3 != '\0') {
    if ((*(uint *)(iVar5 + 0x18) & 0xe000) != 0) {
      return 2;
    }
    pcVar1 = (char *)(iVar5 + 0x3c);
    iVar5 = iVar5 + 0x20;
    iVar7 = iVar7 + 1;
    iVar2 = iVar5;
    cVar3 = *pcVar1;
  }
  iVar4 = FUN_00503d90(*(undefined4 *)(iVar4 + 0x18),
                       CONCAT31((int3)((uint)iVar2 >> 8),*(byte *)(param_1 + 0x8e1) >> 1) &
                       0xffffff01);
  cVar3 = FUN_00526090(0x2f);
  iVar5 = (int)cVar3;
  if (iVar5 != 0) {
    local_4c = FUN_00527440(0,iVar5);
    if (local_4c == 0) {
      return 9;
    }
    if (0xff < local_4c) {
      return 9;
    }
    thunk_FUN_0040add0();
    iVar4 = FUN_00529980(*(undefined1 *)(param_1 + 0x8e4),local_4c,iVar4 * iVar7 + 1);
    if (iVar4 != 0) {
      return 4;
    }
    FUN_0051e2a0(*(undefined4 *)(param_1 + 0x8dc));
    iVar4 = 1;
    if (0 < local_4c) {
      do {
        FUN_00527570(0,iVar5,iVar4,local_3c);
        if (((local_3c[0] & 0x80) != 0) && ((local_3c[0] & 0xf0) != 0xf0)) {
          FUN_00518160();
          return 0x19;
        }
        iVar7 = FUN_00509c60(local_3c,param_1,iVar4);
        if (iVar7 != 0) {
          return iVar7;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 <= local_4c);
    }
    goto LAB_00509b61;
  }
  iVar5 = FUN_004b89d0(local_24);
  if (iVar5 != 0) {
    iVar5 = FUN_005303a0();
    if (iVar5 != 0) {
      return 4;
    }
    FUN_004b89d0(local_24);
  }
  iVar5 = FUN_00516d40(local_24);
  if (iVar5 != 0) {
    return 0x1c;
  }
  iVar5 = FUN_00516d40(local_18);
  if (iVar5 != 0) {
    return 0x1c;
  }
  iVar5 = FUN_00516d40(local_c);
  if (iVar5 != 0) {
    return 0x1c;
  }
  iVar5 = FUN_004e7290(local_24,local_18);
  if (iVar5 == 0) {
LAB_005099c5:
    iVar5 = FUN_004e7250(local_24,local_18);
    if (iVar5 != 0) {
      uVar6 = FUN_004e5780(local_48);
      iVar5 = FUN_004e7250(local_c,uVar6);
      if (iVar5 != 0) goto LAB_005099f7;
    }
  }
  else {
    uVar6 = FUN_004e5780(local_48);
    iVar5 = FUN_004e7290(local_c,uVar6);
    if (iVar5 == 0) goto LAB_005099c5;
LAB_005099f7:
    FUN_004e7730(local_c,local_c);
    FUN_004b8a80(local_24);
  }
  uVar6 = FUN_004e6b40(local_18,local_24,local_3c,local_c,local_3c);
  FUN_004e6d90(uVar6);
  uVar6 = FUN_004e5780(local_48);
  iVar5 = FUN_004e7250(local_3c,uVar6);
  if (iVar5 != 0) {
    return 0x1c;
  }
  uVar6 = FUN_004e5860(local_48);
  iVar5 = FUN_004e7310(local_3c,uVar6);
  if (iVar5 != 0) {
    return 0x1c;
  }
  uVar6 = FUN_004e76a0(local_3c,local_3c);
  local_4c = FUN_004e50a0(uVar6);
  local_4c = local_4c + 1;
  if (0xff < local_4c) {
    return 0x1c;
  }
  thunk_FUN_0040add0();
  iVar4 = FUN_00529980(*(undefined1 *)(param_1 + 0x8e4),local_4c,iVar4 * iVar7 + 1);
  if (iVar4 != 0) {
    return 4;
  }
  FUN_0051e2a0(*(undefined4 *)(param_1 + 0x8dc));
  iVar4 = 0;
  if (0 < local_4c) {
    do {
      uVar6 = FUN_004e5070(iVar4,local_48,local_3c);
      FUN_004e6d00(local_c,uVar6);
      FUN_004e7910(local_3c,local_3c);
      FUN_004e6a00(local_24,local_3c,local_3c);
      FUN_004e7910(local_3c,local_3c);
      FUN_004d4d50(local_3c,local_c);
      iVar4 = iVar4 + 1;
      iVar5 = FUN_00509c60(local_3c,param_1,iVar4);
      if (iVar5 != 0) {
        return iVar5;
      }
    } while (iVar4 < local_4c);
  }
LAB_00509b61:
  *(undefined4 *)(param_1 + 0x8ec) = 1;
  *(undefined4 *)(param_1 + 0x8e8) = 1;
  *(undefined4 *)(param_1 + 0x8f4) = 1;
  *(undefined4 *)(param_1 + 0x8f0) = 1;
  return 0;
}

