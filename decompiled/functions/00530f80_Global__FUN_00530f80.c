// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00530f80
// entry: 00530f80  size: 356


uint FUN_00530f80(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined1 local_1c [4];
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  uVar4 = 0;
  uVar5 = 0;
  FUN_004e4c30("-1e98",local_18);
  FUN_004e4c30(&DAT_005992f8,local_c);
  iVar3 = FUN_004e72d0(param_1,local_18);
  if ((iVar3 == 1) || (iVar3 = FUN_004e7310(param_1,local_c), iVar3 == 1)) {
    uVar4 = 1;
  }
  FUN_004e5780(local_18);
  iVar3 = FUN_004e72d0(param_2,local_18);
  if ((iVar3 == 1) || (iVar3 = FUN_004e7310(param_2,local_c), iVar3 == 1)) {
    uVar4 = uVar4 | 0x10;
  }
  FUN_004895c0(param_1,param_2,0);
  cVar1 = FUN_004ad350(s__STAT_005be2bc,&DAT_005bdc48,local_1c);
  if (cVar1 != '\0') {
    cVar1 = FUN_004abb50(s__STAT_005be2bc,&DAT_005bdc48,0x5e,0);
    if (cVar1 != '\0') {
      return 4;
    }
    uVar5 = FUN_00530d40();
    if (uVar5 != 0) {
      return 4;
    }
  }
  switch(uVar4) {
  case 0:
    bVar2 = FUN_004ac2f0(0xc,param_1,0);
    if (2 < bVar2) {
      return 4;
    }
    bVar2 = FUN_004ac2f0(0xc,param_2,0xc);
    return -(uint)(2 < bVar2) & 4;
  case 1:
    uVar6 = 0xc;
    param_1 = param_2;
    break;
  default:
    return uVar5;
  case 0x10:
    uVar6 = 0;
    break;
  case 0x11:
    goto switchD_00531083_caseD_2;
  }
  FUN_004ac2f0(0xc,param_1,uVar6);
switchD_00531083_caseD_2:
  return 0x1c;
}

