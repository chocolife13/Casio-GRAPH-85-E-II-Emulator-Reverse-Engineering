// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00528740
// entry: 00528740  size: 213


char FUN_00528740(undefined4 param_1,undefined4 param_2,char *param_3)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  undefined1 local_1c [12];
  char local_10 [16];
  
  uVar1 = param_2;
  FUN_0052fbc0(param_1,param_2,local_1c);
  cVar2 = FUN_004ad2a0(5,local_1c,&param_2);
  if (cVar2 != '\0') {
    FUN_005281a0(param_1,uVar1,1);
  }
  cVar2 = FUN_004ad2a0(5,local_1c,&param_2);
  if ((cVar2 != '\0') || (cVar2 = FUN_004ad3f0(1,0x10,local_10), cVar2 != '\0')) {
    return cVar2;
  }
  iVar4 = 0;
  local_10[4] = '\0';
  local_10[5] = '\0';
  local_10[6] = '\0';
  local_10[7] = '\0';
  local_10[0] = '\0';
  local_10[1] = '\0';
  local_10[2] = '\0';
  local_10[3] = '\0';
  pcVar5 = param_3;
  do {
    iVar3 = FUN_004b7370(*pcVar5);
    if (iVar3 != 0) {
      if (6 < iVar4) {
        local_10[iVar4] = '\0';
LAB_005287f9:
        cVar2 = FUN_004ac2f0(0x10,local_10,0);
        return cVar2;
      }
      local_10[iVar4] = *pcVar5;
      iVar4 = iVar4 + 1;
      pcVar5 = pcVar5 + 1;
    }
    cVar2 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    local_10[iVar4] = cVar2;
    if ((*pcVar5 == '\0') || (iVar4 = iVar4 + 1, 7 < iVar4)) goto LAB_005287f9;
  } while( true );
}

