// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004f7a60
// entry: 004f7a60  size: 269


undefined4
FUN_004f7a60(undefined4 param_1,char *param_2,undefined4 param_3,int param_4,undefined4 param_5,
            int param_6)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined1 local_108 [4];
  undefined4 local_104 [65];
  
  puVar3 = local_104;
  for (iVar2 = 0x40; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  FUN_004fe330(param_2,param_1);
  iVar2 = FUN_004f7b70(param_1,param_2,param_3,local_104,0);
  if (iVar2 == 0) {
    return 0;
  }
  iVar2 = FUN_004f9b40(param_2);
  if (iVar2 != 0) {
    FUN_004f7720(local_104,local_108,param_4,1);
    return 1;
  }
  if (*param_2 != '\x0e') {
    if (*param_2 != '?') {
      uVar1 = FUN_004f58f0(2,param_3);
      return uVar1;
    }
    uVar1 = FUN_004f8050(param_1,param_2,param_3,param_4,local_104,param_5);
    return uVar1;
  }
  uVar1 = FUN_004f3eb0(param_1,param_2,param_3,param_4,local_104);
  if (param_6 == 5) {
    *(undefined4 *)(param_4 + 0x138) = 5;
  }
  return uVar1;
}

