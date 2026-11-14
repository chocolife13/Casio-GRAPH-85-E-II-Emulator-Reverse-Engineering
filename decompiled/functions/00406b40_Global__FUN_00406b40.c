// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00406b40
// entry: 00406b40  size: 280


undefined4 __thiscall FUN_00406b40(int param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  undefined1 local_310 [4];
  char local_30c [256];
  char local_20c [256];
  undefined1 local_10c [256];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0057a828;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0055393d(param_2,local_310,local_10c,local_20c,local_30c);
  uVar3 = 0xffffffff;
  pcVar6 = local_20c;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  iVar4 = ~uVar3 - 1;
  if (iVar4 < 9) {
    if (*(int *)(param_1 + 0xa8) == 0) {
      iVar5 = -1;
      pcVar6 = local_30c;
      do {
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      if (iVar5 != -2) {
        iVar5 = FUN_0055b770(local_30c,&DAT_005a8d7c);
        if (iVar5 != 0) goto LAB_00406bd4;
      }
    }
    iVar5 = 0;
    if (0 < iVar4) {
      do {
        cVar1 = local_20c[iVar5];
        if (((((cVar1 < 'A') || ('Z' < cVar1)) && ((cVar1 < 'a' || ('z' < cVar1)))) &&
            ((((cVar1 < '0' || ('9' < cVar1)) && (cVar1 != '{')) &&
             ((cVar1 != '}' && (cVar1 != '\'')))))) && (cVar1 != '~')) goto LAB_00406bd4;
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar4);
    }
    local_4 = 0xffffffff;
    FUN_00567398();
    uVar2 = 1;
  }
  else {
LAB_00406bd4:
    local_4 = 0xffffffff;
    FUN_00567398();
    uVar2 = 0;
  }
  ExceptionList = local_c;
  return uVar2;
}

