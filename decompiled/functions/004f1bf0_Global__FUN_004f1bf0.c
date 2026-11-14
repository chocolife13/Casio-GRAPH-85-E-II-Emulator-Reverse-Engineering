// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004f1bf0
// entry: 004f1bf0  size: 393


undefined4
FUN_004f1bf0(undefined4 *param_1,char *param_2,byte *param_3,undefined4 param_4,undefined4 param_5)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  FUN_004e5780(local_c);
  FUN_004e57a0(local_18);
  bVar3 = false;
  bVar1 = *param_3;
  if ((bVar1 & 0x60) == 0x20) {
    uVar4 = FUN_004f58f0(3,param_3);
    return uVar4;
  }
  cVar2 = *param_2;
  if (cVar2 == '\x13') {
    if (((bVar1 & 0x80) != 0) && ((bVar1 & 0xf0) != 0xf0)) {
      FUN_004fe3e0(param_2,param_1);
      uVar4 = FUN_004f58f0(3,param_3);
      return uVar4;
    }
    iVar5 = FUN_004f9b40(*param_1);
    if (iVar5 != 0) {
      uVar4 = FUN_004f58f0(2,param_3);
      return uVar4;
    }
  }
  else {
    if (cVar2 == -0x18) {
      bVar3 = true;
    }
    else if (cVar2 != -0x17) goto LAB_004f1c53;
    FUN_004fe330(param_2,param_1);
    iVar5 = FUN_004f5240(param_2,param_3,1);
    if (iVar5 == 0) {
      return 0;
    }
    FUN_0052f760(*param_2,param_3);
    if (((*param_3 & 0x80) != 0) && ((*param_3 & 0xf0) != 0xf0)) {
      uVar4 = FUN_004f58f0(3,param_3);
      return uVar4;
    }
    if (bVar3) {
      FUN_004e6b80(param_3,local_18);
    }
    else {
      FUN_004e6a00(param_3,local_18,param_3);
    }
    FUN_0052f780(*param_2,param_3);
    FUN_004fe330(param_2,param_1);
    iVar5 = FUN_004f71b0(param_1,param_2,param_3,param_4,param_5);
    if (iVar5 == 0) {
      return 0;
    }
  }
LAB_004f1c53:
  iVar5 = FUN_004e71d0(param_3,local_c);
  if (iVar5 != 0) {
    do {
      FUN_004fe330(param_2,param_1);
      iVar5 = FUN_004f9b40(param_2);
    } while (iVar5 == 0);
  }
  *param_2 = '\r';
  return 1;
}

