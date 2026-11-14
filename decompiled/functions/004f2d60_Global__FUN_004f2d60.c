// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004f2d60
// entry: 004f2d60  size: 1074


undefined4
FUN_004f2d60(undefined4 *param_1,char *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 *param_5)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  byte bVar4;
  char local_1d;
  char *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  cVar1 = *param_2;
  local_1d = '\0';
  FUN_004fe330(param_2,param_1);
  iVar2 = FUN_004f9d40(param_2);
  if ((iVar2 == 0) && (iVar2 = FUN_004f5240(param_2,param_3,1), iVar2 == 0)) {
    uVar3 = FUN_004f58f0(8,param_3);
    return uVar3;
  }
  if (cVar1 == -0x1e) {
    FUN_004fe330(param_2,param_1);
    return 1;
  }
  cVar1 = *param_2;
  FUN_004fe330(param_2,param_1);
  if ((*param_2 != '\0') &&
     (iVar2 = FUN_004f71b0(param_1,param_2,param_3,param_4,param_5), iVar2 == 0)) {
    return 0;
  }
  local_1c = (char *)*param_5;
  *param_2 = '\r';
  do {
    FUN_004f1760(&local_1c,param_2);
    switch(*param_2) {
    case '\"':
      FUN_004f1860(&local_1c,param_2);
      break;
    case '\'':
      FUN_004f3c10(&local_1c,param_2);
      break;
    case -0x1e:
      FUN_004fe330(param_2,&local_1c);
      iVar2 = FUN_004f9d40(param_2);
      if (((iVar2 != 0) || (iVar2 = FUN_004f5240(param_2,param_3,1), iVar2 != 0)) &&
         (cVar1 == *param_2)) {
        *param_1 = local_1c;
        *param_2 = *local_1c;
        FUN_004fe330(param_2,param_1);
        bVar4 = *(byte *)((int)param_5 + 0x11);
        if ((char)bVar4 < local_1d) {
          *(char *)((int)param_5 + 0x11) = local_1d;
          *param_2 = ':';
          return 1;
        }
        if (local_1d < (char)bVar4) {
          for (; (int)local_1d < (int)(uint)bVar4; bVar4 = bVar4 - 1) {
            FUN_004f51b0(param_5);
          }
        }
        *param_2 = ':';
        return 1;
      }
      break;
    case -9:
      switch(param_2[1]) {
      case '\0':
        iVar2 = FUN_004f51f0(param_3,param_5);
        if (iVar2 == 0) {
          return 0;
        }
        *(undefined1 *)(param_5 + 5) = 1;
        local_1d = local_1d + '\x01';
        *(undefined1 *)(param_5 + 7) = 0;
        break;
      case '\x03':
      case '\a':
      case '\t':
      case '\v':
        local_1d = local_1d + -1;
        if (local_1d < '\0') goto LAB_004f3120;
        FUN_004f51b0(param_5);
        break;
      case '\x04':
        iVar2 = FUN_004f51f0(param_3,param_5);
        if (iVar2 == 0) {
          return 0;
        }
        iVar2 = FUN_004f5850(&local_1c,param_2,&local_18,2);
        if (iVar2 == 0) {
LAB_004f3101:
          uVar3 = FUN_004e4020(&local_18,param_3);
          uVar3 = FUN_004f58f0(uVar3);
          return uVar3;
        }
        if (*param_2 != '\x0e') {
LAB_004f3120:
          uVar3 = FUN_004f58f0(2,param_3);
          return uVar3;
        }
        FUN_004fe330(param_2,&local_1c);
        iVar2 = FUN_004f5240(param_2,&local_18,1);
        if (iVar2 == 0) {
          uVar3 = FUN_004e4020(&local_18,param_3);
          uVar3 = FUN_004f58f0(uVar3);
          return uVar3;
        }
        *(char *)(param_5 + 7) = *param_2;
        FUN_004fe330(param_2,&local_1c);
        if ((*param_2 != -9) || (param_2[1] != '\x05')) goto LAB_004f3120;
        iVar2 = FUN_004f5850(&local_1c,param_2,&local_18,2);
        if (iVar2 == 0) {
          uVar3 = FUN_004e4020(&local_18,param_3);
          uVar3 = FUN_004f58f0(uVar3);
          return uVar3;
        }
        param_5[8] = local_18;
        param_5[9] = local_14;
        param_5[10] = local_10;
        if ((*param_2 == '\0') || (iVar2 = FUN_004f9b40(param_2), iVar2 == 0)) {
          if ((*param_2 != -9) || (param_2[1] != '\x06')) goto LAB_004f3120;
          iVar2 = FUN_004f5850(&local_1c,param_2,&local_18,2);
          if (iVar2 == 0) goto LAB_004f3101;
          if ((*param_2 == '\0') || (iVar2 = FUN_004f9b40(param_2), iVar2 == 0)) goto LAB_004f3120;
          param_5[0xb] = local_18;
          param_5[0xc] = local_14;
          param_5[0xd] = local_10;
        }
        else {
          FUN_004e57a0(param_5 + 0xb);
        }
        local_1d = local_1d + '\x01';
        param_5[6] = local_1c;
        *(undefined1 *)(param_5 + 5) = 2;
        break;
      case '\b':
        iVar2 = FUN_004f51f0(param_3,param_5);
        if (iVar2 == 0) {
          return 0;
        }
        *(undefined1 *)(param_5 + 5) = 4;
        param_5[6] = local_1c;
        local_1d = local_1d + '\x01';
        break;
      case '\n':
        iVar2 = FUN_004f51f0(param_3,param_5);
        if (iVar2 == 0) {
          return 0;
        }
        local_1d = local_1d + '\x01';
        param_5[6] = local_1c;
        *(undefined1 *)(param_5 + 5) = 3;
      }
    }
    if (*param_2 == '\0') {
      uVar3 = FUN_004f58f0(5,param_3);
      return uVar3;
    }
  } while( true );
}

