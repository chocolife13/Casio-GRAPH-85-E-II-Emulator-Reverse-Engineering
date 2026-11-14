// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004a7920
// entry: 004a7920  size: 170


int FUN_004a7920(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined1 local_34 [52];
  
  if (7 < param_1) {
    return param_1;
  }
  FUN_005232d0(1,param_1);
  uVar1 = FUN_0052f6f0(0x289,local_34,0x14);
  FUN_00523470(uVar1);
  if (param_1 == 7) {
    puVar3 = (undefined2 *)&DAT_005beb1c;
  }
  else {
    puVar3 = &DAT_005ad48c;
  }
  FUN_00523470(puVar3,0x15);
  iVar2 = param_1 + 1;
  if (7 < iVar2) {
    return iVar2;
  }
  FUN_005232d0(1,iVar2);
  FUN_005233e0(&DAT_005c031c);
  FUN_004b7b40(&DAT_005d67f0,local_34,8);
  FUN_00523470(local_34,10);
  FUN_00523470(&DAT_005a8df8,0x15);
  return param_1 + 2;
}

