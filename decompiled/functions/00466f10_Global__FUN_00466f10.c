// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00466f10
// entry: 00466f10  size: 1002


undefined4 FUN_00466f10(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  *param_1 = *(undefined4 *)(param_2 + 0x24);
  param_1[1] = *(undefined4 *)(param_2 + 0x28);
  param_1[2] = *(undefined4 *)(param_2 + 0x2c);
  FUN_004e57a0(local_18);
  FUN_004e6b80(local_18,param_1,local_c);
  puVar1 = param_1 + 9;
  FUN_004e7390(local_c,puVar1);
  puVar2 = param_1 + 3;
  FUN_00467300(param_1 + 0xf,puVar2);
  puVar3 = param_1 + 6;
  FUN_00467300(param_1 + 0x12,puVar3);
  FUN_004e57a0(local_18);
  iVar4 = FUN_004e7290(puVar2,local_18);
  if (iVar4 == 0) {
    iVar4 = FUN_004e7290(puVar3,local_18);
    if (iVar4 == 0) {
      FUN_004e57c0(local_c);
      FUN_004e5980(local_18);
      FUN_004e6dd0(local_c,local_18,local_c);
      FUN_004e7390(param_1,local_18);
      FUN_004e6dd0(puVar1,local_18,local_18);
      FUN_004e74f0(local_18,local_18,1);
      FUN_004e6d00(local_c,local_18,local_c);
      FUN_004e57a0(local_18);
      FUN_004e6b80(local_18,local_c,param_1 + 0xc);
      FUN_004e7390(param_1,local_c);
      FUN_004e6d00(local_c,puVar1,local_c);
      FUN_004e5980(local_18);
      FUN_004e6dd0(local_c,local_18,puVar1);
    }
    else {
      FUN_004e57a0(local_18);
      FUN_004e6b80(local_18,puVar1,param_1 + 0xc);
      FUN_004e6d00(param_1,puVar1,local_c);
      FUN_004e5840(local_18);
      FUN_004e6d00(local_c,local_18,puVar1);
    }
  }
  else {
    iVar4 = FUN_004e7290(puVar3,local_18);
    if (iVar4 == 0) {
      FUN_004e7390(param_1,param_1 + 0xc);
      FUN_004e57a0(local_18);
      FUN_004e6b80(local_18,param_1,local_c);
      FUN_004e6d00(param_1 + 0xc,local_c,local_c);
      FUN_004e5840(local_18);
      FUN_004e6d00(local_c,local_18,puVar1);
    }
    else {
      param_1[0xc] = *param_1;
      param_1[0xd] = param_1[1];
      param_1[0xe] = param_1[2];
      FUN_004e57a0(local_18);
      FUN_004e6b80(local_18,param_1 + 0xc,local_c);
      FUN_004e6d00(local_c,param_1 + 0xc,puVar1);
    }
  }
  while( true ) {
    iVar4 = FUN_0052f820();
    if (iVar4 != 0) {
      return 1;
    }
    iVar4 = FUN_004e7310(puVar3,param_1 + 0x12);
    if (iVar4 != 0) break;
    FUN_004e57c0(local_18);
    FUN_004e6dd0(local_18,puVar3,local_c);
    FUN_004e6d00(local_c,puVar1,local_c);
    FUN_004e6b80(param_1 + 0xc,local_c,param_1 + 0xc);
    FUN_004e6d00(param_1,puVar1,local_c);
    FUN_004e6a00(puVar2,puVar3,local_18);
    FUN_004e6d00(local_c,local_18,local_c);
    FUN_004e6dd0(local_c,puVar3,puVar1);
    FUN_004e57c0(local_18);
    FUN_004e6a00(puVar3,local_18,puVar3);
  }
  while( true ) {
    iVar4 = FUN_0052f820();
    if (iVar4 != 0) {
      return 1;
    }
    iVar4 = FUN_004e7310(puVar2,param_1 + 0xf);
    if (iVar4 != 0) break;
    FUN_004e57c0(local_18);
    FUN_004e6dd0(local_18,puVar2,local_c);
    FUN_004e6d00(local_c,puVar1,local_c);
    FUN_004e6a00(local_c,param_1 + 0xc,param_1 + 0xc);
    FUN_004e57a0(local_18);
    FUN_004e6b80(local_18,param_1,local_c);
    FUN_004e6d00(local_c,puVar1,local_c);
    FUN_004e6a00(puVar2,puVar3,local_18);
    FUN_004e6d00(local_c,local_18,local_c);
    FUN_004e6dd0(local_c,puVar2,puVar1);
    FUN_004e57c0(local_18);
    FUN_004e6a00(puVar2,local_18,puVar2);
  }
  return 0;
}

