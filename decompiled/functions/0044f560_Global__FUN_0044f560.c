// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0044f560
// entry: 0044f560  size: 202


int FUN_0044f560(undefined4 *param_1)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  int local_20;
  undefined1 local_1c [4];
  undefined4 local_18;
  undefined4 local_14;
  undefined1 local_10;
  undefined1 local_c [12];
  
  puVar1 = param_1;
  local_18 = *param_1;
  local_14 = param_1[1];
  local_10 = 0;
  cVar2 = FUN_004ad750(1,param_1,local_1c,&local_20);
  if (cVar2 == '\0') {
    local_20 = local_20 + 10;
    cVar2 = FUN_004acd20(1,puVar1,1);
    if ((cVar2 == '\0') && (cVar2 = FUN_004ad250(local_c), cVar2 == '\0')) {
      iVar3 = FUN_004b7550(&local_18);
      iVar3 = FUN_004b79b0(local_c,&local_18,iVar3 + 1);
      if ((iVar3 == 0) && (cVar2 = FUN_004ad3f0(9,1,&param_1), cVar2 == '\0')) {
        cVar2 = FUN_00526090(0x17);
        if (cVar2 == '\0') {
          if ((char)param_1 == '\0') {
            return local_20;
          }
        }
        else if ((char)param_1 != '\0') {
          return local_20;
        }
      }
    }
  }
  return 0;
}

