// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004f7b70
// entry: 004f7b70  size: 207


undefined4 FUN_004f7b70(undefined4 param_1,char *param_2,undefined4 param_3,int param_4,int param_5)

{
  char cVar1;
  undefined4 in_EAX;
  undefined3 uVar4;
  int iVar2;
  undefined4 uVar3;
  uint uVar5;
  uint uVar6;
  
  uVar5 = 0;
  cVar1 = *param_2;
  uVar4 = (undefined3)((uint)in_EAX >> 8);
  if (cVar1 != '\"') {
    do {
      if (0xfe < uVar5) {
        uVar3 = FUN_004f58f0(4,param_3);
        return uVar3;
      }
      *(char *)(uVar5 + param_4) = cVar1;
      uVar6 = uVar5 + 1;
      iVar2 = FUN_004b7370(CONCAT31(uVar4,*param_2));
      if (iVar2 == 0) {
        if ((param_5 != 0) && (*param_2 == '\r')) {
          FUN_004fe3e0(param_2,param_1);
          break;
        }
        if (*param_2 == '\0') {
          uVar5 = uVar6;
          if (param_5 == 0) {
            uVar3 = FUN_004f58f0(2,param_3);
            return uVar3;
          }
          break;
        }
      }
      else {
        *(char *)(uVar6 + param_4) = param_2[1];
        uVar6 = uVar5 + 2;
      }
      uVar3 = FUN_004fe330(param_2,param_1);
      cVar1 = *param_2;
      uVar4 = (undefined3)((uint)uVar3 >> 8);
      uVar5 = uVar6;
    } while (cVar1 != '\"');
    if (0xff < uVar5) {
      uVar3 = FUN_004f58f0(4,param_3);
      return uVar3;
    }
  }
  FUN_004fe330(param_2,param_1);
  *(undefined1 *)(uVar5 + param_4) = 0;
  return 1;
}

