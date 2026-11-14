// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0043e430
// entry: 0043e430  size: 524


int FUN_0043e430(int param_1,int param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_88;
  int local_84;
  undefined1 local_80 [24];
  undefined1 local_68;
  char local_67;
  undefined1 local_34 [52];
  
  iVar5 = 1;
  iVar4 = -1;
  local_84 = -1;
  local_88 = -1;
  iVar3 = param_1;
  if (0 < param_1) {
    do {
      iVar4 = iVar4 + 1;
      cVar1 = *(char *)(iVar4 + param_3);
      for (; (cVar1 == '\0' && (iVar4 < 0x1a)); iVar4 = iVar4 + 1) {
        cVar1 = *(char *)(iVar4 + 1 + param_3);
      }
      iVar3 = iVar3 + -1;
      local_88 = iVar4;
    } while (iVar3 != 0);
  }
  if (0 < *(short *)(param_3 + 0x1e)) {
    do {
      if (5 < iVar5) {
        return local_84;
      }
      FUN_004b6ef0(&local_68,&DAT_005beb10);
      local_67 = (char)local_88 + 'A';
      uVar2 = CONCAT31((int3)((uint)local_88 >> 8),local_67);
      FUN_0052f760(uVar2,local_80);
      FUN_004e3800(local_80,local_80);
      FUN_0052f780(uVar2,local_80);
      uVar2 = FUN_004b22b0(local_80,local_34);
      FUN_004b6e70(&local_68,uVar2);
      FUN_005232d0(1,iVar5 + 2);
      iVar4 = iVar5 + -1 + param_1;
      if (param_2 == iVar4) {
        local_84 = local_88;
        FUN_00523490(&local_68,0x15);
      }
      else {
        FUN_00523470(&local_68,0x15);
      }
      FUN_005232d0(0x15,iVar5 + 2);
      FUN_004b6ef0(&local_68,&DAT_005ad48c);
      if (iVar5 == 1) {
        if (param_1 != 1) {
          FUN_004b6ef0(&local_68,&DAT_005beb20);
        }
      }
      else if ((iVar5 == 5) && (param_1 + 5 <= (int)*(short *)(param_3 + 0x1e))) {
        FUN_004b6ef0(&local_68,&DAT_005beb1c);
      }
      if (param_2 == iVar4) {
        FUN_00523490(&local_68);
      }
      else {
        FUN_00523470(&local_68,0x15);
      }
      cVar1 = *(char *)(param_3 + 1 + local_88);
      while ((local_88 = local_88 + 1, cVar1 == '\0' && (local_88 < 0x1a))) {
        cVar1 = *(char *)(param_3 + 1 + local_88);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 <= *(short *)(param_3 + 0x1e));
    if (5 < iVar5) {
      return local_84;
    }
  }
  iVar5 = iVar5 + 2;
  do {
    FUN_005232d0(1,iVar5);
    FUN_00523470(&DAT_005cd010,0x15);
    iVar5 = iVar5 + 1;
  } while (iVar5 < 8);
  return local_84;
}

