// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00535980
// entry: 00535980  size: 258


undefined4 __thiscall FUN_00535980(char *param_1,char *param_2)

{
  char cVar1;
  char cVar2;
  undefined1 uVar3;
  uint uVar4;
  char *pcVar5;
  char *local_4;
  
  cVar1 = *param_2;
  DAT_005d5720 = param_2;
  local_4 = param_1;
  pcVar5 = param_2;
  do {
    if (cVar1 == '\0') {
      return 1;
    }
    cVar1 = FUN_00532fb0(pcVar5);
    if (cVar1 == '\n') {
      local_4 = pcVar5;
      cVar1 = FUN_00535690(&local_4);
      if (cVar1 == '\0') {
        uVar3 = FUN_00532fb0(local_4);
        cVar1 = FUN_00532a70(uVar3);
        if (cVar1 == '\0') {
          pcVar5 = local_4;
        }
        goto LAB_00535a72;
      }
    }
    else {
      cVar2 = FUN_00532ad0(cVar1);
      if (cVar2 == '\0') {
        cVar1 = FUN_00532ab0(cVar1);
        if (cVar1 == '\0') {
          if (*pcVar5 != ',') goto LAB_00535a34;
          cVar1 = FUN_00535800(pcVar5);
        }
        else {
          cVar1 = FUN_00533190(pcVar5);
        }
        if (cVar1 == '\0') {
LAB_00535a72:
          DAT_005d5728 = (short)pcVar5 - (short)param_2;
          return 0;
        }
      }
      else {
        uVar4 = FUN_005336e0(pcVar5,1);
        local_4 = pcVar5 + (uVar4 & 0xffff);
        uVar3 = FUN_00532fb0(local_4);
        cVar1 = FUN_00532a70(uVar3);
        if (cVar1 != '\0') goto LAB_00535a72;
      }
    }
LAB_00535a34:
    pcVar5 = (char *)FUN_004b7840(pcVar5);
    cVar1 = *pcVar5;
  } while( true );
}

