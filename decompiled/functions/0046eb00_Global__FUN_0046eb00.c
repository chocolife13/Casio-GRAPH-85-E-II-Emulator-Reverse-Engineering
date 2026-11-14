// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0046eb00
// entry: 0046eb00  size: 2048


int FUN_0046eb00(uint param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined1 local_40 [4];
  undefined1 local_3c [12];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar2 = param_4;
  iVar5 = param_3;
  uVar1 = param_1;
  iVar4 = 0;
  if (param_1 != 0) {
    if (param_2 == 1) {
      iVar4 = FUN_004e4020(param_3 + 0xc);
      if (((((iVar4 != 0) || (iVar4 = FUN_004e4020(iVar5 + 0x48), iVar4 != 0)) ||
           (iVar4 = FUN_004e4020(iVar5 + 0x18), iVar4 != 0)) ||
          ((iVar4 = FUN_004e4020(iVar5 + 0x54), iVar4 != 0 ||
           (iVar4 = FUN_004e4020(iVar5 + 0x60), iVar4 != 0)))) ||
         ((iVar4 = FUN_004e4020(iVar5 + 0x24), iVar4 != 0 ||
          (iVar4 = FUN_004e4020(iVar5 + 0x30), iVar4 != 0)))) goto LAB_0046edf3;
      iVar4 = FUN_004e4020(iVar5 + 0x3c);
    }
    else {
      if ((((*(int *)(param_4 + 0x10) == 0) &&
           (((iVar4 = FUN_004e4020(param_4 + 0x8c), iVar4 != 0 ||
             (iVar4 = FUN_004e4020(iVar2 + 0x98), iVar4 != 0)) ||
            ((iVar4 = FUN_004e4020(iVar2 + 0xa4), iVar4 != 0 ||
             ((iVar4 = FUN_004e4020(iVar2 + 0xb0), iVar4 != 0 ||
              (iVar4 = FUN_004e4020(iVar2 + 0xbc), iVar4 != 0)))))))) ||
          (iVar4 = FUN_004e4020(iVar2 + 0x14), iVar4 != 0)) ||
         (((((iVar4 = FUN_004e4020(iVar2 + 0x50), iVar4 != 0 ||
             (iVar4 = FUN_004e4020(iVar2 + 200), iVar4 != 0)) ||
            (iVar4 = FUN_004e4020(iVar2 + 0x20), iVar4 != 0)) ||
           ((iVar4 = FUN_004e4020(iVar2 + 0x5c), iVar4 != 0 ||
            (iVar4 = FUN_004e4020(iVar2 + 0xd4), iVar4 != 0)))) ||
          ((((iVar4 = FUN_004e4020(iVar2 + 0x2c), iVar4 != 0 ||
             ((iVar4 = FUN_004e4020(iVar2 + 0x68), iVar4 != 0 ||
              (iVar4 = FUN_004e4020(iVar2 + 0xe0), iVar4 != 0)))) ||
            (iVar4 = FUN_004e4020(iVar2 + 0x38), iVar4 != 0)) ||
           ((iVar4 = FUN_004e4020(iVar2 + 0x74), iVar4 != 0 ||
            (iVar4 = FUN_004e4020(iVar2 + 0x44), iVar4 != 0)))))))) goto LAB_0046edf3;
      iVar4 = FUN_004e4020(iVar2 + 0x80);
    }
    if (iVar4 != 0) {
LAB_0046edf3:
      FUN_0052b240(3);
      return iVar4;
    }
    FUN_004ad550(local_40,&param_3,&param_1);
    uVar6 = uVar1;
    if ((int)uVar1 < (int)(uVar1 + 5)) {
      do {
        FUN_0052fbc0(0,uVar6,local_3c);
        cVar3 = FUN_004ad2a0(5,local_3c,&param_4);
        if (cVar3 != '\0') {
          param_4 = 0;
        }
        param_1 = param_1 + param_4;
        uVar6 = uVar6 + 1;
      } while ((int)uVar6 < (int)(uVar1 + 5));
    }
    if (param_2 == 1) {
      uVar6 = 0x114;
    }
    else {
      uVar6 = (-(uint)(*(int *)(iVar2 + 0x10) != 1) & 0x3c) + 0x150;
    }
    if (param_1 < uVar6) {
      FUN_0052b240(4);
      return 4;
    }
    if (param_2 != 1) {
      if (*(int *)(iVar2 + 0x10) != 1) {
        local_30 = *(undefined4 *)(iVar2 + 0x14);
        local_2c = *(undefined4 *)(iVar2 + 0x18);
        local_24 = *(undefined4 *)(iVar2 + 0x50);
        local_28 = *(undefined4 *)(iVar2 + 0x1c);
        local_20 = *(undefined4 *)(iVar2 + 0x54);
        local_1c = *(undefined4 *)(iVar2 + 0x58);
        local_18 = *(undefined4 *)(iVar2 + 0x8c);
        local_14 = *(undefined4 *)(iVar2 + 0x90);
        local_c = *(undefined4 *)(iVar2 + 200);
        local_10 = *(undefined4 *)(iVar2 + 0x94);
        local_8 = *(undefined4 *)(iVar2 + 0xcc);
        local_4 = *(undefined4 *)(iVar2 + 0xd0);
        FUN_0046eac0(uVar1,0,4,&local_30);
        local_30 = *(undefined4 *)(iVar2 + 0x20);
        local_2c = *(undefined4 *)(iVar2 + 0x24);
        local_24 = *(undefined4 *)(iVar2 + 0x5c);
        local_28 = *(undefined4 *)(iVar2 + 0x28);
        local_20 = *(undefined4 *)(iVar2 + 0x60);
        local_1c = *(undefined4 *)(iVar2 + 100);
        local_18 = *(undefined4 *)(iVar2 + 0x98);
        local_14 = *(undefined4 *)(iVar2 + 0x9c);
        local_c = *(undefined4 *)(iVar2 + 0xd4);
        local_10 = *(undefined4 *)(iVar2 + 0xa0);
        local_8 = *(undefined4 *)(iVar2 + 0xd8);
        local_4 = *(undefined4 *)(iVar2 + 0xdc);
        FUN_0046eac0(uVar1,1,4,&local_30);
        local_30 = *(undefined4 *)(iVar2 + 0x2c);
        local_2c = *(undefined4 *)(iVar2 + 0x30);
        local_24 = *(undefined4 *)(iVar2 + 0x68);
        local_28 = *(undefined4 *)(iVar2 + 0x34);
        local_20 = *(undefined4 *)(iVar2 + 0x6c);
        local_1c = *(undefined4 *)(iVar2 + 0x70);
        local_18 = *(undefined4 *)(iVar2 + 0xa4);
        local_14 = *(undefined4 *)(iVar2 + 0xa8);
        local_c = *(undefined4 *)(iVar2 + 0xe0);
        local_10 = *(undefined4 *)(iVar2 + 0xac);
        local_8 = *(undefined4 *)(iVar2 + 0xe4);
        local_4 = *(undefined4 *)(iVar2 + 0xe8);
        FUN_0046eac0(uVar1,2,4,&local_30);
        local_30 = *(undefined4 *)(iVar2 + 0x38);
        local_2c = *(undefined4 *)(iVar2 + 0x3c);
        local_24 = *(undefined4 *)(iVar2 + 0x74);
        local_28 = *(undefined4 *)(iVar2 + 0x40);
        local_20 = *(undefined4 *)(iVar2 + 0x78);
        local_1c = *(undefined4 *)(iVar2 + 0x7c);
        local_18 = *(undefined4 *)(iVar2 + 0xb0);
        local_14 = *(undefined4 *)(iVar2 + 0xb4);
        local_10 = *(undefined4 *)(iVar2 + 0xb8);
        FUN_0046eac0(uVar1,3,3,&local_30);
        local_30 = *(undefined4 *)(iVar2 + 0x44);
        local_2c = *(undefined4 *)(iVar2 + 0x48);
        local_24 = *(undefined4 *)(iVar2 + 0x80);
        local_28 = *(undefined4 *)(iVar2 + 0x4c);
        local_18 = *(undefined4 *)(iVar2 + 0xbc);
        local_20 = *(undefined4 *)(iVar2 + 0x84);
        local_14 = *(undefined4 *)(iVar2 + 0xc0);
        local_1c = *(undefined4 *)(iVar2 + 0x88);
        local_10 = *(undefined4 *)(iVar2 + 0xc4);
        iVar5 = FUN_0046eac0(uVar1,4,3,&local_30);
        return iVar5;
      }
      local_30 = *(undefined4 *)(iVar2 + 0x14);
      local_2c = *(undefined4 *)(iVar2 + 0x18);
      local_24 = *(undefined4 *)(iVar2 + 0x50);
      local_28 = *(undefined4 *)(iVar2 + 0x1c);
      local_20 = *(undefined4 *)(iVar2 + 0x54);
      local_1c = *(undefined4 *)(iVar2 + 0x58);
      local_18 = *(undefined4 *)(iVar2 + 200);
      local_14 = *(undefined4 *)(iVar2 + 0xcc);
      local_10 = *(undefined4 *)(iVar2 + 0xd0);
      FUN_0046eac0(uVar1,0,3,&local_30);
      local_30 = *(undefined4 *)(iVar2 + 0x20);
      local_2c = *(undefined4 *)(iVar2 + 0x24);
      local_24 = *(undefined4 *)(iVar2 + 0x5c);
      local_28 = *(undefined4 *)(iVar2 + 0x28);
      local_20 = *(undefined4 *)(iVar2 + 0x60);
      local_1c = *(undefined4 *)(iVar2 + 100);
      local_18 = *(undefined4 *)(iVar2 + 0xd4);
      local_14 = *(undefined4 *)(iVar2 + 0xd8);
      local_10 = *(undefined4 *)(iVar2 + 0xdc);
      FUN_0046eac0(uVar1,1,3,&local_30);
      local_30 = *(undefined4 *)(iVar2 + 0x2c);
      local_2c = *(undefined4 *)(iVar2 + 0x30);
      local_24 = *(undefined4 *)(iVar2 + 0x68);
      local_28 = *(undefined4 *)(iVar2 + 0x34);
      local_20 = *(undefined4 *)(iVar2 + 0x6c);
      local_1c = *(undefined4 *)(iVar2 + 0x70);
      local_18 = *(undefined4 *)(iVar2 + 0xe0);
      local_14 = *(undefined4 *)(iVar2 + 0xe4);
      local_10 = *(undefined4 *)(iVar2 + 0xe8);
      FUN_0046eac0(uVar1,2,3,&local_30);
      local_30 = *(undefined4 *)(iVar2 + 0x38);
      local_2c = *(undefined4 *)(iVar2 + 0x3c);
      local_24 = *(undefined4 *)(iVar2 + 0x74);
      local_28 = *(undefined4 *)(iVar2 + 0x40);
      local_20 = *(undefined4 *)(iVar2 + 0x78);
      local_1c = *(undefined4 *)(iVar2 + 0x7c);
      FUN_0046eac0(uVar1,3,2,&local_30);
      local_30 = *(undefined4 *)(iVar2 + 0x44);
      local_24 = *(undefined4 *)(iVar2 + 0x80);
      local_2c = *(undefined4 *)(iVar2 + 0x48);
      local_20 = *(undefined4 *)(iVar2 + 0x84);
      local_28 = *(undefined4 *)(iVar2 + 0x4c);
      local_1c = *(undefined4 *)(iVar2 + 0x88);
      iVar5 = FUN_0046eac0(uVar1,4,2,&local_30);
      return iVar5;
    }
    local_30 = *(undefined4 *)(iVar5 + 0xc);
    local_2c = *(undefined4 *)(iVar5 + 0x10);
    local_24 = *(undefined4 *)(iVar5 + 0x48);
    local_28 = *(undefined4 *)(iVar5 + 0x14);
    local_20 = *(undefined4 *)(iVar5 + 0x4c);
    local_1c = *(undefined4 *)(iVar5 + 0x50);
    FUN_0046eac0(uVar1,0,2,&local_30);
    local_30 = *(undefined4 *)(iVar5 + 0x18);
    local_2c = *(undefined4 *)(iVar5 + 0x1c);
    local_24 = *(undefined4 *)(iVar5 + 0x54);
    local_28 = *(undefined4 *)(iVar5 + 0x20);
    local_20 = *(undefined4 *)(iVar5 + 0x58);
    local_1c = *(undefined4 *)(iVar5 + 0x5c);
    FUN_0046eac0(uVar1,1,2,&local_30);
    local_30 = *(undefined4 *)(iVar5 + 0x24);
    local_2c = *(undefined4 *)(iVar5 + 0x28);
    local_24 = *(undefined4 *)(iVar5 + 0x60);
    local_28 = *(undefined4 *)(iVar5 + 0x2c);
    local_20 = *(undefined4 *)(iVar5 + 100);
    local_1c = *(undefined4 *)(iVar5 + 0x68);
    FUN_0046eac0(uVar1,2,2,&local_30);
    local_30 = *(undefined4 *)(iVar5 + 0x30);
    local_2c = *(undefined4 *)(iVar5 + 0x34);
    local_28 = *(undefined4 *)(iVar5 + 0x38);
    FUN_0046eac0(uVar1,3,1,&local_30);
    local_30 = *(undefined4 *)(iVar5 + 0x3c);
    local_2c = *(undefined4 *)(iVar5 + 0x40);
    local_28 = *(undefined4 *)(iVar5 + 0x44);
    iVar4 = FUN_0046eac0(uVar1,4,1,&local_30);
  }
  return iVar4;
}

