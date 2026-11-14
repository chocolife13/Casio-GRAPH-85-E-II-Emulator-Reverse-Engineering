// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0049edc0
// entry: 0049edc0  size: 965


void FUN_0049edc0(undefined4 param_1,undefined1 *param_2)

{
  ushort uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined2 extraout_var;
  uint uVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int local_234;
  uint local_230;
  char local_22c [12];
  undefined1 local_220;
  undefined1 local_21f;
  undefined1 local_21e;
  undefined1 local_21d;
  undefined1 local_21c;
  undefined1 local_21b;
  undefined1 local_21a;
  undefined1 local_219;
  undefined1 local_218;
  undefined1 local_217;
  undefined1 local_216;
  undefined1 local_215;
  undefined1 local_214;
  uint local_210;
  undefined1 local_20c [524];
  
  local_234 = 0;
  local_22c[0] = '\0';
  local_22c[1] = 0;
  local_22c[2] = 0;
  local_22c[3] = 0;
  local_22c[4] = 0;
  local_22c[5] = 0;
  local_22c[6] = 0;
  local_22c[7] = 0;
  local_22c[8] = 0;
  local_230 = 0;
  local_220 = 0;
  local_21f = 0;
  local_21e = 0;
  local_21d = 0;
  local_21c = 0;
  local_21b = 0;
  local_21a = 0;
  local_219 = 0;
  local_218 = 0;
  local_217 = 0;
  local_216 = 0;
  local_215 = 0;
  local_214 = 0;
  local_210 = CONCAT31(local_210._1_3_,*param_2);
  iVar3 = FUN_004a2980();
  if (iVar3 == 0) {
    if ((local_210 & 0xf0) == 0) {
      iVar3 = FUN_004a2500(0x20a,0x1cf);
    }
    else {
      if ((local_210 & 0xf0) == 0x10) {
        cVar2 = FUN_004a0820(*(int *)(param_2 + 0x20) + (uint)*(ushort *)(param_2 + 2) * 0x1c,7);
        if (cVar2 != '\0') {
          return;
        }
        uVar11 = 0x222;
        uVar10 = 0x221;
      }
      else {
        uVar11 = 0x1cf;
        uVar10 = 0x20a;
      }
      iVar3 = FUN_004a2500(uVar10,uVar11);
    }
    if (iVar3 != 0x7539) {
      return;
    }
    iVar3 = FUN_004299c0(param_1);
    if ((iVar3 == 2) && (iVar3 = FUN_004300c0(1), iVar3 != 0)) {
      return;
    }
    thunk_FUN_0040add0();
    FUN_0052f840();
    iVar3 = FUN_004aacd0(0);
    if ((iVar3 != 0) && (((byte)local_210 & 0xf0) == 0x10)) {
      return;
    }
    FUN_0049d5c0(param_2,CONCAT22(extraout_var,*(undefined2 *)(param_2 + 2)),local_20c);
    iVar3 = FUN_0042a080(local_20c,0);
    if (iVar3 == -0xe) {
      FUN_004a20c0(0x2cf,0x2d0,0x2d1,1);
      return;
    }
    local_230 = (uint)*(ushort *)(param_2 + 2);
  }
  else {
    iVar3 = 0;
    if (*(short *)(param_2 + 0x1e) == 0) {
      return;
    }
    iVar7 = 0;
    while (cVar2 = FUN_004a0820(iVar7 + *(int *)(param_2 + 0x20),8), cVar2 == '\0') {
      iVar3 = iVar3 + 1;
      iVar7 = iVar7 + 0x1c;
      if ((int)(uint)*(ushort *)(param_2 + 0x1e) <= iVar3) {
        return;
      }
    }
    iVar3 = FUN_004a2500(0x1ce,0x1cf);
    if (iVar3 != 0x7539) {
      return;
    }
    iVar3 = FUN_004299c0(param_1);
    if ((iVar3 == 2) && (iVar3 = FUN_004300c0(1), iVar3 != 0)) {
      return;
    }
    FUN_004aacd0(0);
    FUN_0040ae30();
    FUN_0052f840();
    thunk_FUN_0040add0();
    iVar3 = 0;
    if (*(short *)(param_2 + 0x1e) != 0) {
      iVar7 = 0;
      do {
        cVar2 = FUN_004a0820(iVar7 + *(int *)(param_2 + 0x20),8);
        if (cVar2 != '\0') {
          FUN_0049d5c0(param_2,iVar3,local_20c);
          iVar4 = FUN_0052f820();
          if (iVar4 == 1) {
            FUN_0052b240(1);
            return;
          }
          iVar4 = FUN_0042a080(local_20c,0);
          if (iVar4 == -0xe) {
            FUN_004a20c0(0x2cf,0x2d0,0x2d1,1);
            if (local_234 == 0) {
              return;
            }
            break;
          }
          thunk_FUN_0040add0();
          local_230 = iVar3 - local_234;
          local_234 = local_234 + 1;
        }
        iVar3 = iVar3 + 1;
        iVar7 = iVar7 + 0x1c;
      } while (iVar3 < (int)(uint)*(ushort *)(param_2 + 0x1e));
    }
  }
  iVar3 = -1;
  pcVar8 = param_2 + 4;
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    cVar2 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar2 != '\0');
  if (iVar3 != -2) {
    uVar5 = 0xffffffff;
    pcVar8 = param_2 + 4;
    do {
      pcVar9 = pcVar8;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar9 = pcVar8 + 1;
      cVar2 = *pcVar8;
      pcVar8 = pcVar9;
    } while (cVar2 != '\0');
    uVar5 = ~uVar5;
    pcVar8 = pcVar9 + -uVar5;
    pcVar9 = local_22c;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar9 = pcVar9 + 4;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar9 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar9 = pcVar9 + 1;
    }
  }
  FUN_004a02b0(param_2,local_210);
  iVar3 = -1;
  pcVar8 = local_22c;
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    cVar2 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar2 != '\0');
  if (iVar3 != -2) {
    uVar5 = 0xffffffff;
    pcVar8 = local_22c;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar2 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar2 != '\0');
    _strncpy(param_2 + 4,local_22c,~uVar5 - 1);
  }
  FUN_0049d040(param_1,param_2);
  uVar1 = *(ushort *)(param_2 + 0x1e);
  if (uVar1 != 0) {
    if (uVar1 <= (ushort)local_230) {
      local_230 = uVar1 - 1;
    }
    FUN_004a02e0(param_2,&local_220,*(int *)(param_2 + 0x20) + 0x10 + (local_230 & 0xffff) * 0x1c,1)
    ;
  }
  return;
}

