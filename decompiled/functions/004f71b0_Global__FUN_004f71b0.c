// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004f71b0
// entry: 004f71b0  size: 497


undefined4 FUN_004f71b0(undefined4 param_1,char *param_2,undefined4 param_3,int param_4,int param_5)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 local_30;
  undefined4 local_2c [11];
  
  puVar4 = local_2c;
  for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  local_30 = 0;
  switch(*param_2) {
  case '\0':
    break;
  default:
    uVar2 = FUN_004f58f0(2,param_3);
    return uVar2;
  case '\f':
    switch(*(undefined4 *)(param_4 + 0x138)) {
    case 0:
      FUN_004f74c0(param_4,1);
      FUN_004b5060(param_3,local_2c,param_4 + 0x13c);
      FUN_004f8990(local_2c,param_4,&local_30);
      break;
    case 1:
    case 3:
    case 4:
    case 5:
    case 7:
    case 8:
    case 9:
    case 10:
      FUN_004f74c0(param_4,0);
      FUN_00554ab0(param_4 + -0x2a + *(int *)(param_4 + 0x128) * 0x2a,"                 Done",0x2a);
      *(int *)(param_4 + 0x128) = *(int *)(param_4 + 0x128) + 1;
    }
    if ((2 < *(int *)(param_4 + 0x138)) &&
       (iVar3 = FUN_004f6000(param_2,param_3,param_4), iVar3 == 0)) {
      return 0;
    }
    if (*param_2 == '\f') {
      FUN_004f74c0(param_4,1);
      FUN_004f7410(param_4);
      iVar3 = FUN_004f85f0(param_4,param_3,&local_30,param_5);
      if (iVar3 == 0) {
        return 0;
      }
    }
    FUN_0052f840();
    thunk_FUN_0040add0();
    *(undefined4 *)(param_4 + 0x13c) = 0;
    return 1;
  case '\r':
  case ':':
    *(undefined4 *)(param_4 + 0x13c) = 0;
    return 1;
  }
  cVar1 = *(char *)(param_5 + 0x14);
  while (cVar1 == '\x01') {
    FUN_004f51b0(param_5);
    cVar1 = *(char *)(param_5 + 0x14);
  }
  if (*(char *)(param_5 + 0x11) == '\0') {
    iVar3 = FUN_004f61d0();
    if (((iVar3 != 0) && (2 < *(int *)(param_4 + 0x138))) &&
       (iVar3 = FUN_004f6000(param_2,param_3,param_4), iVar3 == 0)) {
      return 0;
    }
    uVar2 = FUN_004f1f30(param_1,param_2,param_3,param_4,param_5);
    return uVar2;
  }
  uVar2 = FUN_004f58f0(2,param_3);
  return uVar2;
}

