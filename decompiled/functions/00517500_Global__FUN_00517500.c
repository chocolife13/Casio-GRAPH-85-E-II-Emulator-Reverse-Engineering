// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00517500
// entry: 00517500  size: 340


undefined4 FUN_00517500(undefined4 param_1,undefined4 param_2,char *param_3,char param_4)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  char *local_c;
  undefined1 local_8;
  undefined1 local_7;
  undefined1 local_6;
  undefined1 local_5;
  int local_4;
  
  pcVar1 = param_3;
  local_8 = 0;
  local_7 = 0;
  local_6 = 0;
  local_5 = 0;
  if (*param_3 != '\0') {
    local_c = param_3;
    param_3 = (char *)CONCAT31(param_3._1_3_,0x30);
    if (param_4 == '\0') {
      do {
        FUN_004fe330(&param_3,&local_c);
        iVar3 = FUN_004f9b40(&param_3);
      } while (iVar3 == 0);
      if ((char)param_3 == '\0') {
        local_c = local_c + 1;
      }
    }
    else {
      do {
        FUN_004fe330(&param_3,&local_c);
      } while ((char)param_3 != '\0');
      local_c = local_c + 1;
    }
    iVar3 = (int)local_c - (int)pcVar1;
    cVar2 = FUN_004ad2a0(param_1,param_2,&local_4);
    if (cVar2 == '\0') {
      param_4 = FUN_004ac2f0(iVar3,pcVar1,4);
      if (param_4 == '\0') {
        FUN_004acb90((local_4 - iVar3) + -4,iVar3 + 4);
      }
      else if ((param_4 == '3') || (param_4 == 'Q')) {
        return 4;
      }
    }
    else {
      cVar2 = FUN_004aba60(param_1,param_2,iVar3 + 4,&local_8);
      if (cVar2 != '\0') {
        return 4;
      }
      FUN_004ac2f0(iVar3,pcVar1,4);
      param_4 = '\x02';
      FUN_004ac2f0(1,&param_4,3);
    }
    FUN_004ac2f0(1,&local_8,iVar3 + 3);
  }
  return 0;
}

