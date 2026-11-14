// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00434940
// entry: 00434940  size: 540


uint FUN_00434940(char param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  uint local_9c;
  int local_98 [5];
  undefined1 local_84 [4];
  undefined1 local_80 [4];
  undefined1 local_7c [24];
  char local_64 [4];
  char local_60 [4];
  char local_5c [92];
  
  local_98[0] = (int)param_1;
  local_98[1] = 1;
  local_98[2] = 1;
  local_98[3] = 1;
  local_98[4] = 1;
  bVar1 = false;
  FUN_00528a20(local_98[0],local_84,local_80);
switchD_00434a28_caseD_7533:
  do {
    while( true ) {
      while( true ) {
        do {
          if (!bVar1) {
            iVar3 = FUN_00528ac0(local_98[0],local_98[3],local_98[4],local_7c);
            if (iVar3 == 0) {
              FUN_004b5030(local_7c,local_64);
            }
            else {
              local_64[0] = s_Mem_ERROR_0057ec48[0];
              local_64[1] = s_Mem_ERROR_0057ec48[1];
              local_64[2] = s_Mem_ERROR_0057ec48[2];
              local_64[3] = s_Mem_ERROR_0057ec48[3];
              local_60[0] = s_Mem_ERROR_0057ec48[4];
              local_60[1] = s_Mem_ERROR_0057ec48[5];
              local_60[2] = s_Mem_ERROR_0057ec48[6];
              local_60[3] = s_Mem_ERROR_0057ec48[7];
              local_5c[0] = s_Mem_ERROR_0057ec48[8];
              local_5c[1] = s_Mem_ERROR_0057ec48[9];
            }
          }
          FUN_00414240();
          FUN_00436f70(local_98,local_64);
          FUN_00538b30();
          iVar3 = FUN_00526620(&local_9c);
        } while (iVar3 != 0);
        if (local_9c < 0x7548) {
          if (local_9c != 0x7547) goto code_r0x00434a20;
          goto switchD_00434a28_caseD_7542;
        }
        if (0x754e < local_9c) break;
        if (local_9c == 0x754e) {
          cVar2 = FUN_00526090(0x22);
          if (cVar2 == '\x03') {
            cVar2 = '\0';
          }
          FUN_005237c0(1);
          FUN_0052eb10((int)cVar2);
          FUN_00523800(1);
        }
        else if (local_9c == 0x754a) {
          FUN_004b5ad0(local_7c,local_64);
          bVar1 = true;
        }
        else if (local_9c == 0x754d) {
          return 0x754d;
        }
      }
      if (local_9c != 0x755e) break;
      FUN_004b5e70(local_7c,local_64);
      bVar1 = true;
    }
  } while ((local_9c < 0x794a) || (0x794c < local_9c));
  if (local_9c == 0x794a) {
    FUN_004b6300(local_7c,local_64);
  }
  else {
    if (local_9c == 0x794b) {
      FUN_004b6330(local_7c,local_64,0);
      bVar1 = true;
      goto switchD_00434a28_caseD_7533;
    }
    if (local_9c == 0x794c) {
      FUN_004b6330(local_7c,local_64,1);
      bVar1 = true;
      goto switchD_00434a28_caseD_7533;
    }
  }
  bVar1 = true;
  goto switchD_00434a28_caseD_7533;
code_r0x00434a20:
  switch(local_9c) {
  case 0x7532:
  case 0x7534:
    return local_9c;
  case 0x753f:
    iVar3 = FUN_005387b0();
    if (iVar3 < 0) {
      return local_9c;
    }
    break;
  case 0x7542:
  case 0x7544:
  case 0x7545:
switchD_00434a28_caseD_7542:
    FUN_00436330(local_98,local_9c);
    bVar1 = false;
  }
  goto switchD_00434a28_caseD_7533;
}

