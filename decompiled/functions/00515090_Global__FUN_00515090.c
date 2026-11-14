// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00515090
// entry: 00515090  size: 944


uint FUN_00515090(int param_1,int param_2,int param_3,int *param_4)

{
  char cVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  byte local_ce1;
  int local_ce0;
  undefined1 local_cdc [4];
  undefined1 local_cd8 [2268];
  undefined1 *local_3fc;
  byte local_3f8;
  undefined1 local_3e0 [992];
  
  local_3fc = local_3e0;
  local_ce1 = 0;
  cVar1 = FUN_00515010();
  if (cVar1 != '\0') {
    FUN_00526070(0x19,0);
  }
  FUN_00503490(local_cd8);
  local_3f8 = local_3f8 & 0xcf;
  iVar3 = FUN_00505f10(local_cd8,0x10);
  if (((local_3f8 & 0xc0) != 0) && (iVar3 != 1)) {
    local_3f8 = local_3f8 & 0x3f | 0x80;
  }
  uVar4 = FUN_00514940(local_cd8,1);
  if (uVar4 != 0) {
    FUN_004ad6d0(param_4);
    if (param_1 == 10) {
      return uVar4;
    }
LAB_00515215:
    FUN_0052b240(uVar4);
    return 0xfffffff5;
  }
  uVar4 = 0;
  if ((param_1 == 10) && (uVar4 = FUN_00516800(local_cd8), uVar4 != 0)) {
    FUN_004ad6d0(param_4);
    return uVar4;
  }
  switch(*(undefined2 *)(param_3 + 0x24)) {
  case 1:
    local_ce1 = 1;
    break;
  case 2:
    local_ce1 = 4;
    break;
  case 3:
    local_ce1 = 3;
    break;
  case 4:
    local_ce1 = 2;
  }
  if ((param_1 == 1) || (param_1 == 10)) {
    uVar4 = FUN_00515560(param_3,param_4,param_2,local_cd8);
    if (uVar4 != 0) {
      FUN_004ad6d0(param_4);
      if (param_1 == 10) {
        return uVar4;
      }
      goto LAB_00515215;
    }
    *(undefined2 *)(param_3 + 0x2a) = 0;
    *(undefined2 *)(param_3 + 0x28) = 0;
    uVar4 = 0;
  }
  if (((param_1 == 0) || (param_1 == 3)) || (param_1 == 5)) {
    cVar1 = FUN_004ad800(&DAT_005be2a4,&DAT_005bdc30,local_cdc,&local_ce0);
    if (cVar1 != '\0') {
      FUN_0052b240(4);
      return 0xfffffff5;
    }
  }
  else {
    local_ce0 = *param_4;
  }
  if (((param_1 == 4) || (param_1 == 5)) && (local_ce1 != 1)) {
    local_ce1 = ~local_ce1 + 1;
  }
  sVar2 = *(short *)(param_3 + 0x2a);
  do {
    if (9 < sVar2) {
      *(undefined2 *)(param_3 + 0x2a) = 0;
      *(undefined2 *)(param_3 + 0x28) = 0;
      if (param_1 == 10) {
        FUN_0050acb0(local_cd8);
        FUN_005167a0(local_cd8);
      }
      return 0;
    }
    do {
      sVar2 = *(short *)(param_3 + 0x28);
      while (sVar2 < param_2) {
        if (((param_1 == 0) || (param_1 == 3)) || (param_1 == 5)) {
          FUN_004ad800(&DAT_005be2a4,&DAT_005bdc30,local_cdc,&local_ce0);
        }
        else {
          local_ce0 = *param_4;
        }
        FUN_00515450(*(short *)(param_3 + 0x28) * 0x400 + local_ce0,local_cd8,param_3);
        uVar4 = FUN_005157b0(&local_ce1);
        if (uVar4 != 0) goto LAB_005153b0;
        *(short *)(param_3 + 0x28) = *(short *)(param_3 + 0x28) + 1;
        sVar2 = *(short *)(param_3 + 0x28);
      }
      sVar2 = (short)param_2 + -1;
      *(short *)(param_3 + 0x28) = sVar2;
      if (sVar2 < 0) {
LAB_005153b0:
        if (uVar4 == 1) {
          return (uint)(param_1 == 10);
        }
        if (uVar4 == 0xffffffff) {
          return 0xffffffff;
        }
      }
      else {
        do {
          if (((param_1 == 0) || (param_1 == 3)) || (param_1 == 5)) {
            FUN_004ad800(&DAT_005be2a4,&DAT_005bdc30,local_cdc,&local_ce0);
          }
          else {
            local_ce0 = *param_4;
          }
          FUN_00515450(*(short *)(param_3 + 0x28) * 0x400 + local_ce0,local_cd8,param_3);
          uVar4 = FUN_005157b0(&local_ce1);
          if (uVar4 != 0) goto LAB_005153b0;
          *(short *)(param_3 + 0x28) = *(short *)(param_3 + 0x28) + -1;
        } while (-1 < *(short *)(param_3 + 0x28));
      }
      *(undefined2 *)(param_3 + 0x28) = 0;
      cVar1 = FUN_00526090(0x24);
    } while ((cVar1 == '\0') || (local_ce1 == 1));
    *(short *)(param_3 + 0x2a) = *(short *)(param_3 + 0x2a) + 1;
    sVar2 = *(short *)(param_3 + 0x2a);
  } while( true );
}

