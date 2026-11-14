// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0051b920
// entry: 0051b920  size: 2484


int FUN_0051b920(int param_1,int param_2)

{
  undefined4 *puVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined1 local_9c [12];
  undefined1 local_90 [12];
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined1 local_6c [12];
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined1 local_3c [48];
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  FUN_00515e10(&local_84);
  switch(param_1) {
  case 0x75f8:
    local_84 = *(undefined4 *)(param_2 + 0x8a8);
    local_80 = *(undefined4 *)(param_2 + 0x8ac);
    local_78 = *(undefined4 *)(param_2 + 0x8b4);
    local_7c = *(undefined4 *)(param_2 + 0x8b0);
    local_74 = *(undefined4 *)(param_2 + 0x8b8);
    local_70 = *(undefined4 *)(param_2 + 0x8bc);
    local_54 = *(undefined4 *)(param_2 + 0x8c0);
    local_50 = *(undefined4 *)(param_2 + 0x8c4);
    local_48 = *(undefined4 *)(param_2 + 0x8cc);
    local_4c = *(undefined4 *)(param_2 + 0x8c8);
    local_44 = *(undefined4 *)(param_2 + 0x8d0);
    local_40 = *(undefined4 *)(param_2 + 0x8d4);
    break;
  case 0x75fa:
  case 0x75fb:
    FUN_004e6b40(&local_78,&local_84,&local_a8);
    FUN_004e7910(&local_a8,&local_a8);
    uVar3 = FUN_004e57c0(local_9c,&local_a8);
    FUN_004e6d90(&local_a8,uVar3);
    FUN_004e7910(&local_a8,&local_a8);
    if (param_1 == 0x75fa) {
      uVar3 = FUN_00516980(0,local_9c,&local_a8);
      FUN_004e6d90(&local_a8,uVar3);
    }
    else {
      uVar3 = FUN_00516980(0,local_9c,&local_a8);
      FUN_004e6cc0(&local_a8,uVar3);
    }
    FUN_004e7910(&local_a8,&local_a8);
    FUN_004e6b40(param_2 + 0x8a8,&local_a8,&local_84);
    FUN_004e7910(&local_84,&local_84);
    FUN_004e69c0(param_2 + 0x8a8,&local_a8,&local_78);
    FUN_004e7910(&local_78,&local_78);
    FUN_004e6b40(&local_48,&local_54,&local_a8);
    FUN_004e7910(&local_a8,&local_a8);
    uVar3 = FUN_004e57c0(local_9c,&local_a8);
    FUN_004e6d90(&local_a8,uVar3);
    FUN_004e7910(&local_a8,&local_a8);
    if (param_1 == 0x75fa) {
      uVar3 = FUN_00516980(1,local_9c,&local_a8);
      FUN_004e6d90(&local_a8,uVar3);
    }
    else {
      uVar3 = FUN_00516980(1,local_9c,&local_a8);
      FUN_004e6cc0(&local_a8,uVar3);
    }
    FUN_004e7910(&local_a8,&local_a8);
    FUN_004e6b40(param_2 + 0x8c0,&local_a8,&local_54);
    FUN_004e7910(&local_54,&local_54);
    FUN_004e69c0(param_2 + 0x8c0,&local_a8,&local_48);
    FUN_004e7910(&local_48,&local_48);
    break;
  case 0x75fc:
    bVar2 = *(byte *)(param_2 + 0x8e2);
    *(byte *)(param_2 + 0x8e2) = bVar2 | 4;
    iVar4 = FUN_00510270(param_2);
    *(byte *)(param_2 + 0x8e2) = bVar2;
    if (iVar4 != 0) {
      return iVar4;
    }
    puVar1 = (undefined4 *)(param_2 + 0x8a8);
    iVar4 = FUN_004e4020(puVar1);
    if (iVar4 == 0) {
      iVar4 = FUN_004e71d0(puVar1,(undefined4 *)(param_2 + 0x8b4));
      if (iVar4 == 0) {
        local_84 = *puVar1;
        local_80 = *(undefined4 *)(param_2 + 0x8ac);
        local_7c = *(undefined4 *)(param_2 + 0x8b0);
        local_78 = *(undefined4 *)(param_2 + 0x8b4);
        local_74 = *(undefined4 *)(param_2 + 0x8b8);
        local_70 = *(undefined4 *)(param_2 + 0x8bc);
      }
      else {
        FUN_004e6b40(&local_78,&local_84,&local_a8);
        FUN_004e7910(&local_a8,&local_a8);
        uVar3 = FUN_004e57c0(local_9c,&local_a8);
        FUN_004e6d90(&local_a8,uVar3);
        FUN_004e7910(&local_a8,&local_a8);
        FUN_004e69c0(puVar1,&local_a8,&local_78);
        FUN_004e6b40(puVar1,&local_a8,&local_84);
      }
    }
    puVar1 = (undefined4 *)(param_2 + 0x8c0);
    iVar4 = FUN_004e4020(puVar1);
    if (iVar4 == 0) {
      iVar4 = FUN_004e71d0(puVar1,(undefined4 *)(param_2 + 0x8cc));
      if (iVar4 == 0) {
        local_54 = *puVar1;
        local_50 = *(undefined4 *)(param_2 + 0x8c4);
        local_4c = *(undefined4 *)(param_2 + 0x8c8);
        local_48 = *(undefined4 *)(param_2 + 0x8cc);
        local_44 = *(undefined4 *)(param_2 + 0x8d0);
        local_40 = *(undefined4 *)(param_2 + 0x8d4);
      }
      else {
        FUN_004e6b40(&local_48,&local_54,&local_a8);
        FUN_004e7910(&local_a8,&local_a8);
        uVar3 = FUN_004e57c0(local_9c,&local_a8);
        FUN_004e6d90(&local_a8,uVar3);
        FUN_004e7910(&local_a8,&local_a8);
        FUN_004e69c0(puVar1,&local_a8,&local_48);
        FUN_004e6b40(puVar1,&local_a8,&local_54);
      }
    }
    FUN_004e7910(&local_78,&local_78);
    FUN_004e7910(&local_84,&local_84);
    break;
  case 0x75fd:
    FUN_00516af0(&local_84);
    break;
  case 0x75fe:
    FUN_004e6b40(&local_48,&local_54,&local_a8);
    FUN_004e7910(&local_a8,&local_a8);
    FUN_004e69c0(&local_78,&local_84,local_9c);
    FUN_004e7910(local_9c,local_9c);
    uVar3 = FUN_004e57c0(local_90,local_9c);
    FUN_004e6d90(local_9c,uVar3);
    FUN_004e7910(local_9c,local_9c);
    FUN_004e69c0(local_9c,&local_a8,&local_78);
    FUN_004e7910(&local_78,&local_78);
    FUN_004e6b40(local_9c,&local_a8,&local_84);
    FUN_004e7910(&local_84,&local_84);
    break;
  case 0x75ff:
    iVar4 = FUN_004d7e00(&local_84,&local_a8,5);
    if (iVar4 != 0) {
      return 0x1c;
    }
    local_7c = local_a0;
    local_84 = local_a8;
    local_80 = local_a4;
    if ((*(byte *)(param_2 + 0x8e2) & 0x80) == 0) {
      local_a8 = local_60;
      local_a4 = local_5c;
      local_4 = local_58;
    }
    else {
      local_a8 = local_c;
      local_a4 = local_8;
    }
    local_a0 = local_4;
    iVar4 = FUN_004d7e00(&local_a8,local_9c,2);
    if (iVar4 != 0) {
      return 0x1c;
    }
    uVar3 = FUN_004e5780(&local_a8);
    iVar4 = FUN_004e71d0(local_9c,uVar3);
    if (iVar4 != 0) {
      return 0x1c;
    }
    uVar3 = FUN_004e5070((~*(byte *)(param_2 + 0x8e2) & 0x80 | 0x7c) >> 1,&local_a8,local_9c);
    FUN_004e6cc0(local_9c,uVar3);
    FUN_004e69c0(&local_84,local_9c,&local_78);
    iVar4 = FUN_004d7e00(&local_54,&local_a8,5);
    if (iVar4 != 0) {
      return 0x1c;
    }
    local_54 = local_a8;
    local_50 = local_a4;
    local_4c = local_a0;
    FUN_004e6b40(&local_48,&local_54,&local_a8);
    uVar3 = FUN_004e5070(0x3e,local_9c,&local_a8);
    FUN_004e6d90(&local_a8,uVar3);
    iVar4 = FUN_004d7e00(&local_a8,local_90,2);
    if (iVar4 != 0) {
      return 0x1c;
    }
    uVar3 = FUN_004e5780(&local_a8);
    iVar4 = FUN_004e71d0(local_90,uVar3);
    if (iVar4 != 0) {
      return 0x1c;
    }
    uVar3 = FUN_004e5070(0x3e,&local_a8,&local_a8);
    FUN_004e6cc0(local_90,uVar3);
    FUN_004e69c0(&local_54,&local_a8,&local_48);
    break;
  case 0x7600:
    uVar3 = FUN_004e5840(local_90,&local_a8);
    FUN_004e69c0(param_2 + 0x8a8,uVar3);
    FUN_004e69c0(param_2 + 0x8c0,local_90,local_9c);
    FUN_004e7680(&local_a8,&local_a8);
    FUN_004e7680(local_9c,local_9c);
    FUN_004e5070((byte)(~*(byte *)(param_2 + 0x8e2) | 0x7c) >> 2,local_90);
    FUN_004e6b40(&local_a8,local_90,&local_84);
    FUN_004e69c0(&local_a8,local_90,&local_78);
    FUN_004e5070(0x1f,local_90);
    FUN_004e6b40(local_9c,local_90,&local_54);
    FUN_004e69c0(local_9c,local_90,&local_48);
    FUN_004e5070(10,local_6c);
    FUN_004e5070(10,local_3c);
    break;
  case 0x7601:
    iVar4 = FUN_005169f0(&local_84);
    if (iVar4 != 0) {
      return 0x15;
    }
  }
  FUN_004e6b40(&local_78,&local_84,&local_a8);
  FUN_004e7910(&local_a8,&local_a8);
  uVar3 = FUN_004e5070(0x7e,local_9c,&local_60);
  FUN_004e6d90(&local_a8,uVar3);
  FUN_004e7910(&local_60,&local_60);
  uVar3 = FUN_004e5070(0x3e,local_9c,&local_c);
  FUN_004e6d90(&local_a8,uVar3);
  FUN_004e7910(&local_c,&local_c);
  FUN_004e6b40(&local_48,&local_54,&local_a8);
  uVar3 = FUN_004e5070(0x3e,local_9c,&local_a8);
  FUN_004e6d90(&local_a8,uVar3);
  if ((((char)local_a8 == '\0') && ((char)((uint)local_a8 >> 8) == '\0')) ||
     (iVar4 = FUN_0051c300(&local_84), iVar4 != 0)) {
    return 0x1c;
  }
  iVar4 = FUN_00516a30((*(byte *)(param_2 + 0x8e0) & 0x30) == 0x10);
  if (iVar4 != 0) {
    return 4;
  }
  if ((*(byte *)(param_2 + 0x8e0) & 0x30) != 0x10) {
    FUN_00515e50(&local_84);
    return 0;
  }
  FUN_00515f00(&local_84);
  return 0;
}

