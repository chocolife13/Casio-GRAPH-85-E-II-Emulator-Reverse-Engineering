// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0049cca0
// entry: 0049cca0  size: 920


void FUN_0049cca0(undefined4 param_1,undefined1 *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  undefined1 *puVar6;
  undefined4 local_24c;
  uint local_248;
  int local_244;
  undefined2 local_240 [14];
  int local_224;
  undefined1 local_220 [2];
  short local_21e;
  int local_218;
  undefined1 local_20c [524];
  
  local_244 = 0;
  local_24c = 4;
  local_248 = 0;
  local_240[0] = 0;
  local_240[1] = 0;
  local_240[2] = 0;
  local_240[3] = 0;
  local_240[4] = 0;
  local_240[5] = 0;
  local_240[6] = 0;
  local_240[7] = 0;
  local_240[8] = 0;
  local_240[9] = 0;
  local_240[10] = 0;
  local_240[0xb] = 0;
  local_240[0xc] = 0;
  if (param_3 != 0) {
    FUN_005237c0(5);
    FUN_0049ca20(0,10);
  }
  iVar2 = FUN_004a2c40(*param_2,local_20c);
  if (iVar2 == 0) {
    param_2[0x29] = 5;
    param_2[0x28] = 0;
  }
  else {
    param_2[0x29] = 6;
    param_2[0x28] = 1;
  }
  iVar2 = FUN_0042a410(local_20c,&DAT_005bfef0,3);
  FUN_0042aac0(local_20c + iVar2 * 2);
  iVar2 = -1;
  pcVar5 = param_2 + 4;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  if (iVar2 == -2) {
    uVar4 = 0;
    iVar2 = FUN_0042a100(local_20c,&local_24c,local_240,local_220);
    if (*(short *)(param_2 + 0x1e) != 0) {
      do {
        if (iVar2 < 0) break;
        if (local_21e == 0) {
          local_240[8] = 0;
          iVar2 = FUN_0042a410(local_240);
          local_240[iVar2] = 0;
          FUN_0042ab20(local_240,0,0xc);
          iVar2 = (uVar4 & 0xffff) * 0x1c;
          FUN_0042aa50(iVar2 + 0x10 + *(int *)(param_2 + 0x20),local_240,0xc);
          FUN_0042aa50(iVar2 + 4 + *(int *)(param_2 + 0x20),local_240,0xc);
          FUN_004a0620(iVar2 + *(int *)(param_2 + 0x20),7,1);
          uVar4 = uVar4 + 1;
        }
        iVar2 = FUN_0042a150(local_24c,local_240,local_220);
        local_244 = local_244 + 1;
      } while ((ushort)uVar4 < *(ushort *)(param_2 + 0x1e));
    }
    FUN_0042a180(local_24c);
    FUN_0055531d(*(undefined4 *)(param_2 + 0x20),uVar4 & 0xffff,0x1c,&LAB_00425f70);
    local_248 = uVar4;
  }
  uVar4 = local_248;
  iVar2 = FUN_0042a100(param_1,&local_24c,local_240,local_220);
  if ((ushort)uVar4 < *(ushort *)(param_2 + 0x1e)) {
    local_224 = 1;
    do {
      if (iVar2 < 0) break;
      if ((((local_21e != 0) && (local_21e != 10)) && (local_21e != 8)) && (local_21e != 9)) {
        iVar2 = FUN_0042a410(local_240);
        local_240[iVar2] = 0;
        FUN_0042ab20(local_240,0,0xc);
        iVar2 = (uVar4 & 0xffff) * 0x1c;
        FUN_0042aa50(iVar2 + 0x10 + *(int *)(param_2 + 0x20),local_240,0xc);
        FUN_004a0920(iVar2 + *(int *)(param_2 + 0x20),local_218);
        *(int *)(param_2 + 0x24) = *(int *)(param_2 + 0x24) + local_218;
        uVar4 = uVar4 + 1;
      }
      iVar3 = local_224;
      if (param_3 != 0) {
        iVar2 = local_244;
        if (local_244 == 0) {
          iVar2 = 10;
        }
        FUN_0049ca20(local_224,iVar2);
      }
      iVar2 = FUN_0042a150(local_24c,local_240,local_220);
      local_224 = iVar3 + 1;
    } while ((ushort)uVar4 < *(ushort *)(param_2 + 0x1e));
  }
  FUN_0042a180(local_24c);
  if (param_2[0x28] == '\0') {
    puVar6 = &LAB_00425f70;
    iVar3 = (uVar4 & 0xffff) - (local_248 & 0xffff);
    iVar2 = *(int *)(param_2 + 0x20) + (local_248 & 0xffff) * 0x1c;
  }
  else {
    puVar6 = &LAB_004a0040;
    iVar3 = (uVar4 & 0xffff) - (local_248 & 0xffff);
    iVar2 = *(int *)(param_2 + 0x20) + (local_248 & 0xffff) * 0x1c;
  }
  FUN_0055531d(iVar2,iVar3,0x1c,puVar6);
  *(short *)(param_2 + 0x1e) = (short)uVar4;
  if ((byte)param_2[0x29] < 6) {
    FUN_00429c40(param_1,param_2 + 0x24);
  }
  if (param_3 != 0) {
    FUN_0049ca20(local_244,local_244);
    FUN_00525bc0();
  }
  return;
}

