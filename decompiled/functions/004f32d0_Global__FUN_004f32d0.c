// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004f32d0
// entry: 004f32d0  size: 1012


undefined4
FUN_004f32d0(undefined4 *param_1,char *param_2,undefined4 *param_3,int param_4,int param_5)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  byte bVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined1 local_60 [12];
  undefined1 local_54 [12];
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined1 local_30 [24];
  undefined4 local_18 [6];
  
  FUN_004e5780(local_54);
  if (param_2[1] != '\x04') {
    if (param_2[1] == '\a') {
      if (*(char *)(param_5 + 0x14) != '\x02') {
        uVar2 = FUN_004f58f0(2,param_3);
        return uVar2;
      }
      *param_1 = *(undefined4 *)(param_5 + 0x18);
      FUN_004fe370(param_2,param_1);
      FUN_0052f760(*(undefined1 *)(param_5 + 0x1c),local_30);
      iVar3 = FUN_004f5370(local_30,0);
      if (iVar3 == 0) {
        uVar2 = FUN_004e4020(local_30,param_3);
        uVar2 = FUN_004f58f0(uVar2);
        return uVar2;
      }
      FUN_004e6a00(local_30,param_5 + 0x2c,&local_48);
    }
LAB_004f3558:
    if (*param_2 == '\f') {
      *(undefined4 *)(param_4 + 0x138) = 0;
    }
    FUN_004e6b80(param_5 + 0x20,&local_48,local_60);
    FUN_004e6dd0(local_60,param_5 + 0x2c,local_60);
    iVar3 = FUN_004e7250(local_60,local_54);
    if (iVar3 == -1) {
LAB_004f369a:
      uVar2 = FUN_004f58f0(2,param_3);
      return uVar2;
    }
    if (iVar3 != 1) {
      FUN_0052f780(*(undefined1 *)(param_5 + 0x1c),&local_48);
      return 1;
    }
    bVar1 = *(byte *)(param_5 + 0x11);
    bVar4 = bVar1;
    do {
      FUN_004f1760(param_1,param_2);
      switch(*param_2) {
      case '\0':
        uVar2 = FUN_004f58f0(2,param_3);
        return uVar2;
      case '\"':
        FUN_004f1860(param_1,param_2);
        break;
      case '\'':
        FUN_004f3c10(param_1,param_2);
        break;
      case -9:
        if (param_2[1] == '\x04') {
          bVar1 = bVar1 + 1;
          bVar4 = bVar1;
        }
        else if (param_2[1] == '\a') {
          if ((uint)bVar4 == (int)*(char *)(param_5 + 0x11)) {
            FUN_004f51b0(param_5);
            FUN_004fe330(param_2,param_1);
            return 1;
          }
          bVar1 = bVar1 - 1;
          bVar4 = bVar1;
          if ((int)(uint)bVar1 < (int)*(char *)(param_5 + 0x11)) goto LAB_004f369a;
        }
      }
    } while( true );
  }
  puVar5 = param_3;
  puVar6 = local_18;
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  iVar3 = FUN_004f51f0(param_3,param_5);
  if (iVar3 == 0) {
    return 0;
  }
  iVar3 = FUN_004f5850(param_1,param_2,param_3,2);
  if (iVar3 == 0) {
    return 0;
  }
  if (*param_2 == '\x0e') {
    FUN_004fe330(param_2,param_1);
    iVar3 = FUN_004f5240(param_2,param_3,1);
    if (iVar3 == 0) {
      return 0;
    }
    FUN_0052f780(*param_2,param_3);
    *(char *)(param_5 + 0x1c) = *param_2;
    local_48 = *param_3;
    local_44 = param_3[1];
    local_40 = param_3[2];
    FUN_004fe330(param_2,param_1);
    if ((*param_2 == -9) && (param_2[1] == '\x05')) {
      iVar3 = FUN_004f5850(param_1,param_2,param_3,2);
      if (iVar3 == 0) {
        return 0;
      }
      *(undefined4 *)(param_5 + 0x20) = *param_3;
      *(undefined4 *)(param_5 + 0x24) = param_3[1];
      *(undefined4 *)(param_5 + 0x28) = param_3[2];
      if ((*param_2 == '\0') || (iVar3 = FUN_004f9b40(param_2), iVar3 == 0)) {
        if ((*param_2 != -9) || (param_2[1] != '\x06')) goto LAB_004f36b1;
        iVar3 = FUN_004f5850(param_1,param_2,param_3,2);
        if (iVar3 == 0) {
          return 0;
        }
        if ((*param_2 == '\0') || (iVar3 = FUN_004f9b40(param_2), iVar3 == 0)) goto LAB_004f36b1;
        *(undefined4 *)(param_5 + 0x2c) = *param_3;
        *(undefined4 *)(param_5 + 0x30) = param_3[1];
        *(undefined4 *)(param_5 + 0x34) = param_3[2];
      }
      else {
        FUN_004e57a0(param_5 + 0x2c);
      }
      *(undefined4 *)(param_5 + 0x18) = *param_1;
      *(undefined1 *)(param_5 + 0x14) = 2;
      FUN_004e6a00(&local_48,param_5 + 0x2c,local_60);
      iVar3 = FUN_004e71d0(local_60,&local_48);
      if (iVar3 != 0) {
        FUN_004fe3e0(param_2,param_1);
        uVar2 = FUN_004f58f0(8,param_3);
        return uVar2;
      }
      puVar5 = local_18;
      puVar6 = param_3;
      for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      goto LAB_004f3558;
    }
  }
LAB_004f36b1:
  uVar2 = FUN_004f58f0(2,param_3);
  return uVar2;
}

