// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0051d6e0
// entry: 0051d6e0  size: 1008


undefined4
FUN_0051d6e0(uint *param_1,undefined4 param_2,uint *param_3,int param_4,int param_5,
            undefined4 param_6)

{
  bool bVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint local_54;
  int local_50;
  int local_4c;
  undefined1 local_48 [12];
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 local_24 [12];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c [12];
  
  local_4c = 0;
  thunk_FUN_0040add0();
  FUN_0052f840();
  local_50 = 0;
  iVar5 = *(int *)(param_4 + 0x8dc);
  iVar4 = param_5 * 0x20 + iVar5;
  uVar3 = *(uint *)(iVar4 + 0x18);
  if ((uVar3 & 0x800) == 0) {
    if ((uVar3 & 0x100) == 0) {
      if ((uVar3 & 0x4000) == 0) {
        local_3c = *(undefined4 *)(param_4 + 0x86c);
        local_38 = *(undefined4 *)(param_4 + 0x870);
        local_30 = *(undefined4 *)(param_4 + 0x878);
        local_34 = *(undefined4 *)(param_4 + 0x874);
        local_2c = *(undefined4 *)(param_4 + 0x87c);
        local_28 = *(undefined4 *)(param_4 + 0x880);
        local_18 = *(undefined4 *)(param_4 + 0x884);
        bVar2 = *(byte *)(param_4 + 0x884) & 0xf0;
        local_14 = *(undefined4 *)(param_4 + 0x888);
        local_10 = *(undefined4 *)(param_4 + 0x88c);
        if ((bVar2 == 0x50) || (bVar1 = false, bVar2 == 0x60)) {
          bVar1 = true;
        }
      }
      else {
        FUN_0051ae90(0,iVar5,param_5,&local_3c);
        FUN_0051ae90(1,*(undefined4 *)(param_4 + 0x8dc),param_5,&local_30);
        bVar1 = false;
        FUN_004e7620(param_4 + 0x884,&local_18);
      }
      while( true ) {
        if (bVar1) {
          iVar5 = FUN_004e7310(&local_3c,&local_30);
        }
        else {
          iVar5 = FUN_004e72d0(&local_3c,&local_30);
        }
        if (iVar5 != 1) break;
        local_4c = FUN_0050e230(&local_3c,local_48,local_24,local_c,param_4,param_5,param_6);
        if (local_4c != 0) goto LAB_0051daab;
        uVar3 = FUN_004d5130(local_48,param_1,param_4 + 0x800,*(undefined1 *)(param_4 + 0x8e2));
        *param_3 = uVar3;
        uVar3 = FUN_004d5210(local_24,param_2,param_4 + 0x800);
        uVar3 = *param_3 | uVar3;
        *param_3 = uVar3;
        if (uVar3 == 0) {
          return 0;
        }
        if ((uVar3 & 0x3000) == 0) {
          local_50 = 1;
        }
        FUN_004e6a00(&local_3c,&local_18,&local_3c);
      }
    }
    else {
      if ((uVar3 & 0x4000) == 0) {
        bVar2 = *(byte *)(param_4 + 0x8e2);
        *param_1 = 1;
        local_54 = (uint)((byte)(~bVar2 | 0x7e) >> 1);
      }
      else {
        FUN_0051ae90(0,iVar5,param_5,local_48);
        iVar5 = FUN_004d5130(local_48,param_1,param_4 + 0x800,*(undefined1 *)(param_4 + 0x8e2));
        if (iVar5 != 0) {
          *param_1 = 1;
        }
        FUN_0051ae90(1,*(undefined4 *)(param_4 + 0x8dc),param_5,local_48);
        iVar5 = FUN_004d5130(local_48,&local_54,param_4 + 0x800,*(undefined1 *)(param_4 + 0x8e2));
        if (iVar5 != 0) {
          local_54 = (uint)((byte)(~*(byte *)(param_4 + 0x8e2) | 0x7e) >> 1);
        }
        uVar3 = *param_1;
        if ((int)local_54 < (int)uVar3) {
          *param_1 = uVar3 ^ local_54;
          *param_1 = local_54;
          local_54 = uVar3;
        }
      }
      if ((int)local_54 < (int)*param_1) {
        return 1;
      }
      do {
        FUN_004d4da0(local_48,*param_1,param_4 + 0x800,*(undefined1 *)(param_4 + 0x8e2));
        local_4c = FUN_0050f060(local_48,local_24,param_4,param_5,param_6);
        if (local_4c != 0) goto LAB_0051daab;
        uVar3 = FUN_004d5210(local_24,param_2,param_4 + 0x800);
        *param_3 = uVar3;
        if (uVar3 == 0) {
          return 0;
        }
        if ((uVar3 & 0x3000) == 0) {
          local_50 = 1;
        }
        uVar3 = *param_1;
        *param_1 = uVar3 + 1;
      } while ((int)(uVar3 + 1) <= (int)local_54);
    }
  }
  else {
    local_54 = *(uint *)(iVar4 + 4);
    iVar5 = 1;
    if ((int)local_54 < 1) {
      return 1;
    }
    do {
      FUN_0050df50(iVar5,local_48,local_24,param_4,param_5);
      uVar3 = FUN_004d5130(local_48,param_1,param_4 + 0x800,*(undefined1 *)(param_4 + 0x8e2));
      *param_3 = uVar3;
      uVar3 = FUN_004d5210(local_24,param_2,param_4 + 0x800);
      uVar3 = *param_3 | uVar3;
      *param_3 = uVar3;
      if (uVar3 == 0) {
        return 0;
      }
      if ((uVar3 & 0x3000) == 0) {
        local_50 = 1;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 <= (int)local_54);
  }
  if (local_50 == 1) {
    return 0;
  }
  if (local_50 != -1) {
    return 1;
  }
LAB_0051daab:
  FUN_0052b240(local_4c);
  return 0xffffffff;
}

