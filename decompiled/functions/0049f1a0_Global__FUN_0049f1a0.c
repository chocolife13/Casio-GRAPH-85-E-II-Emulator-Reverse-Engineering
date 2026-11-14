// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0049f1a0
// entry: 0049f1a0  size: 476


void FUN_0049f1a0(int param_1,undefined1 *param_2)

{
  char cVar1;
  undefined1 uVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  char local_38 [12];
  undefined1 local_2c;
  undefined1 local_2b;
  undefined1 local_2a;
  undefined1 local_29;
  undefined1 local_28;
  undefined1 local_27;
  undefined1 local_26;
  undefined1 local_25;
  undefined1 local_24;
  undefined1 local_23;
  undefined1 local_22;
  undefined1 local_21;
  undefined1 local_20;
  undefined2 local_1c;
  undefined2 local_1a;
  undefined2 local_18;
  undefined2 local_16;
  undefined2 local_14;
  undefined2 local_12;
  undefined2 local_10;
  undefined2 local_e;
  undefined2 local_c;
  undefined2 local_a;
  undefined2 local_8;
  undefined2 local_6;
  undefined2 local_4;
  
  local_1c = 0;
  uVar2 = *param_2;
  local_1a = 0;
  local_18 = 0;
  local_16 = 0;
  local_14 = 0;
  local_12 = 0;
  local_10 = 0;
  local_e = 0;
  local_c = 0;
  local_a = 0;
  local_8 = 0;
  local_6 = 0;
  local_4 = 0;
  local_38[0] = '\0';
  local_38[1] = 0;
  local_38[2] = 0;
  local_38[3] = 0;
  local_38[4] = 0;
  local_38[5] = 0;
  local_38[6] = 0;
  local_38[7] = 0;
  local_38[8] = 0;
  local_2c = 0;
  local_2b = 0;
  local_2a = 0;
  local_29 = 0;
  local_28 = 0;
  local_27 = 0;
  local_26 = 0;
  local_25 = 0;
  local_24 = 0;
  local_23 = 0;
  local_22 = 0;
  local_21 = 0;
  local_20 = 0;
  cVar3 = FUN_004a0820(*(int *)(param_2 + 0x20) + (uint)*(ushort *)(param_2 + 2) * 0x1c,7);
  if (cVar3 != '\0') {
    cVar3 = FUN_004a0820(*(int *)(param_2 + 0x20) + (uint)*(ushort *)(param_2 + 2) * 0x1c,8);
    FUN_0042a490(&local_1c,param_1 + 0xe);
    FUN_0042aac0(param_1 + 0xe,
                 *(int *)(param_2 + 0x20) + 0x10 + (uint)*(ushort *)(param_2 + 2) * 0x1c,0xc);
    iVar4 = FUN_0042a410(param_1);
    *(undefined2 *)(param_1 + iVar4 * 2) = 0x5c;
    iVar4 = FUN_0042a410(param_1,&local_1c);
    FUN_0042a490(param_1 + iVar4 * 2);
    _strncpy(local_38,(char *)(*(int *)(param_2 + 0x20) + 0x10 +
                              (uint)*(ushort *)(param_2 + 2) * 0x1c),0xc);
    FUN_004a02b0(param_2,uVar2);
    uVar5 = 0xffffffff;
    pcVar6 = local_38;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    _strncpy(param_2 + 4,local_38,~uVar5 - 1);
    FUN_0049d040(param_1,param_2);
    if (*(short *)(param_2 + 0x1e) != 0) {
      FUN_004a02e0(param_2,&local_2c,*(int *)(param_2 + 0x20) + 0x10,1);
    }
    if (cVar3 != '\0') {
      FUN_0049dc50(param_2);
    }
    FUN_004a28b0();
  }
  return;
}

