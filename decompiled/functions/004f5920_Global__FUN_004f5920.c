// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004f5920
// entry: 004f5920  size: 301


int FUN_004f5920(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  int local_20;
  undefined1 local_1c [4];
  undefined4 local_18;
  undefined4 local_14;
  undefined1 local_10;
  undefined1 local_c [12];
  
  local_18 = *param_1;
  local_14 = param_1[1];
  local_10 = *(undefined1 *)(param_1 + 2);
  cVar1 = FUN_004ad750(1,param_1,local_1c,&local_20);
  if (cVar1 != '\0') {
    return 0;
  }
  local_20 = local_20 + 10;
  cVar1 = FUN_004acd20(1,&local_18,1);
  if (cVar1 != '\0') {
    return 0;
  }
  cVar1 = FUN_004ad250(local_c);
  if (cVar1 != '\0') {
    return 0;
  }
  iVar2 = FUN_004b7550(&local_18);
  iVar2 = FUN_004b79b0(local_c,&local_18,iVar2 + 1);
  cVar1 = '\0';
  do {
    if (iVar2 == 0) {
LAB_004f59ed:
      cVar1 = FUN_004ad3f0(9,1,&param_1);
      if (cVar1 != '\0') {
        return 0;
      }
      if ((char)param_1 == '\0') {
        cVar1 = FUN_00526090(0x17);
        if (cVar1 != '\0') {
          return 0;
        }
      }
      else {
        cVar1 = FUN_00526090(0x17);
        if (cVar1 == '\0') {
          return 0;
        }
      }
      return local_20;
    }
    if (cVar1 == '\0') {
      if (iVar2 != 0) {
        return 0;
      }
      goto LAB_004f59ed;
    }
    cVar1 = FUN_004ad000(1);
    iVar2 = FUN_004b7550(&local_18);
    iVar2 = FUN_004b79b0(local_c,&local_18,iVar2 + 1);
  } while( true );
}

