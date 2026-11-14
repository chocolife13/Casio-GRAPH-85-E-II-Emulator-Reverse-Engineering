// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00466dc0
// entry: 00466dc0  size: 333


byte FUN_00466dc0(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined *puVar3;
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  *param_1 = param_1[0x15];
  param_1[1] = param_1[0x16];
  param_1[2] = param_1[0x17];
  FUN_004e57a0(local_18);
  FUN_004e6b80(local_18,param_1,local_18);
  FUN_004e6d00(local_18,param_1,local_18);
  FUN_004e5070(4,local_c);
  FUN_004e6d00(local_18,local_c,local_18);
  FUN_004e7410(local_18,local_18);
  FUN_004e7730(local_18,local_c);
  FUN_004e6d00(local_c,&DAT_00581458,local_18);
  puVar3 = &DAT_00581464;
  do {
    FUN_004e6a00(local_18,puVar3,local_18);
    FUN_004e6d00(local_18,local_c,local_18);
    puVar3 = puVar3 + 0xc;
  } while ((int)puVar3 < 0x5814dc);
  FUN_004e5780(local_c);
  iVar2 = FUN_004e7250(local_18,local_c);
  if (iVar2 != 0) {
    return 3;
  }
  puVar1 = param_1 + 0xc;
  FUN_004e7390(local_18,puVar1);
  FUN_004e5840(local_c);
  iVar2 = FUN_004e7290(param_1,local_c);
  if (iVar2 != 0) {
    FUN_004e7730(puVar1,puVar1);
  }
  iVar2 = FUN_004e4020(puVar1);
  return -(iVar2 != 0) & 3;
}

