// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004f1b90
// entry: 004f1b90  size: 91


undefined4
FUN_004f1b90(undefined4 param_1,char *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  FUN_004fe330(param_2,param_1);
  iVar2 = FUN_004f9b40(param_2);
  if (iVar2 != 0) {
    FUN_004f5740(param_5);
    cVar1 = *param_2;
    while (cVar1 != '\0') {
      FUN_004fe330(param_2,param_1);
      cVar1 = *param_2;
    }
    return 1;
  }
  uVar3 = FUN_004f58f0(2,param_3);
  return uVar3;
}

