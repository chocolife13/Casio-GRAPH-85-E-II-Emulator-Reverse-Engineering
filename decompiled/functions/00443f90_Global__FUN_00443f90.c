// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00443f90
// entry: 00443f90  size: 871


void FUN_00443f90(undefined1 param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  char local_20 [8];
  char local_18;
  char local_17;
  char local_16;
  char local_15;
  undefined1 local_14;
  
  builtin_strncpy(local_20,"XYZTUV",7);
  switch(param_1) {
  case 0x1e:
    iVar4 = 0;
    if (-1 < param_6) {
      iVar8 = 0x14;
      iVar6 = param_4;
      do {
        local_18 = ' ';
        if (param_2 < 4) {
          local_17 = 0x20;
          local_16 = (char)param_4 + (char)iVar4 + 'a';
LAB_004441a4:
          local_15 = ' ';
        }
        else {
          local_17 = 0x61;
          if (iVar6 / 10 == 0) {
            local_16 = (char)(iVar6 % 10) + '0';
            goto LAB_004441a4;
          }
          local_16 = (char)(iVar6 / 10) + '0';
          local_15 = (char)(iVar6 % 10) + '0';
        }
        local_14 = 0;
        FUN_00523a60(iVar8,8,&local_18,0x10);
        iVar4 = iVar4 + 1;
        iVar6 = iVar6 + 1;
        iVar8 = iVar8 + 0x1c;
        if (param_6 < iVar4) {
          return;
        }
      } while( true );
    }
    break;
  case 0x1f:
    if (-1 < param_5) {
      iVar6 = 0x12;
      iVar4 = param_3 + 1;
      do {
        if (iVar4 / 10 == 0) {
          local_18 = ' ';
        }
        else {
          local_18 = (char)(iVar4 / 10) + '0';
        }
        local_16 = 0;
        local_17 = (char)(iVar4 % 10) + '0';
        FUN_00523a60(5,iVar6,&local_18,0x10);
        iVar4 = iVar4 + 1;
        iVar6 = iVar6 + 8;
      } while (iVar4 + (-1 - param_3) <= param_5);
    }
    break;
  case 0x20:
    iVar4 = 0;
    if (-1 < param_6) {
      iVar6 = 0x14;
      do {
        if (param_2 < 7) {
          local_18 = ' ';
          local_17 = 0x20;
          local_16 = (char)param_4 + (char)iVar4 + 'a';
LAB_00444083:
          local_15 = ' ';
LAB_00444088:
          local_14 = 0;
        }
        else {
          iVar8 = iVar4 + 1 + param_4;
          if (iVar8 != param_2 + 1) {
            local_18 = 'a';
            local_17 = 0xd4;
            if (iVar8 / 10 == 0) {
              local_16 = (char)(iVar8 % 10) + '0';
              goto LAB_00444083;
            }
            local_16 = (char)(iVar8 / 10) + '0';
            local_15 = (char)(iVar8 % 10) + '0';
            goto LAB_00444088;
          }
          uVar2 = 0xffffffff;
          pcVar5 = &DAT_0057f95c;
          do {
            pcVar7 = pcVar5;
            if (uVar2 == 0) break;
            uVar2 = uVar2 - 1;
            pcVar7 = pcVar5 + 1;
            cVar1 = *pcVar5;
            pcVar5 = pcVar7;
          } while (cVar1 != '\0');
          uVar2 = ~uVar2;
          pcVar5 = pcVar7 + -uVar2;
          pcVar7 = &local_18;
          for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
            *(undefined4 *)pcVar7 = *(undefined4 *)pcVar5;
            pcVar5 = pcVar5 + 4;
            pcVar7 = pcVar7 + 4;
          }
          for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
            *pcVar7 = *pcVar5;
            pcVar5 = pcVar5 + 1;
            pcVar7 = pcVar7 + 1;
          }
        }
        FUN_00523a60(iVar6,8,&local_18,0x10);
        iVar4 = iVar4 + 1;
        iVar6 = iVar6 + 0x1c;
      } while (iVar4 <= param_6);
    }
    if (-1 < param_5) {
      iVar6 = 0x12;
      iVar4 = param_3 + 1;
      do {
        if (iVar4 / 10 == 0) {
          local_18 = ' ';
        }
        else {
          local_18 = (char)(iVar4 / 10) + '0';
        }
        local_16 = 0;
        local_17 = (char)(iVar4 % 10) + '0';
        FUN_00523a60(5,iVar6,&local_18,0x10);
        iVar4 = iVar4 + 1;
        iVar6 = iVar6 + 8;
      } while ((-1 - param_3) + iVar4 <= param_5);
      return;
    }
    break;
  case 0x21:
    iVar4 = 0;
    if (-1 < param_5) {
      iVar6 = 0x12;
      do {
        if (param_2 < 7) {
          local_18 = ' ';
          local_17 = ' ';
          local_16 = local_20[iVar4 + param_3];
        }
        else {
          iVar8 = iVar4 + 1 + param_3;
          if (iVar8 < 10) {
            local_18 = ' ';
            local_16 = (char)param_3 + (char)iVar4 + '1';
            local_17 = 'X';
          }
          else {
            local_18 = 'X';
            local_17 = (((char)(iVar8 / 10) + (char)(iVar8 >> 0x1f)) -
                       (char)((longlong)iVar8 * 0x66666667 >> 0x3f)) + '0';
            local_16 = (char)(iVar8 % 10) + '0';
          }
        }
        local_15 = 0;
        FUN_00523a60(1,iVar6,&local_18,0x10);
        iVar4 = iVar4 + 1;
        iVar6 = iVar6 + 8;
      } while (iVar4 <= param_5);
      return;
    }
  }
  return;
}

