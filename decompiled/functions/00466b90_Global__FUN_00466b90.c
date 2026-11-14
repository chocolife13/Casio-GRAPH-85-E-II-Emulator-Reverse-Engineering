// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00466b90
// entry: 00466b90  size: 552


uint FUN_00466b90(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined1 local_24 [12];
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  uVar3 = FUN_00466dc0(param_1);
  if (uVar3 == 0) {
    FUN_004e57c0(local_24);
    FUN_004e5070(9,local_18);
    FUN_004e6dd0(local_24,local_18,local_24);
    FUN_004e57a0(local_18);
    FUN_004e6dd0(local_24,param_1 + 0x3c,param_1);
    FUN_004e6b80(local_18,param_1,param_1 + 0x18);
    iVar5 = param_1 + 0xc;
    FUN_004e6dd0(local_24,param_1 + 0x48,iVar5);
    iVar1 = param_1 + 0x24;
    FUN_004e6b80(local_18,iVar5,iVar1);
    FUN_004e6d00(iVar1,iVar1,local_24);
    FUN_004e6d00(local_24,param_1,local_24);
    FUN_004e6d00(param_1,iVar5,local_18);
    iVar2 = param_1 + 0x30;
    FUN_004e6d00(iVar2,iVar2,local_c);
    FUN_004e6d00(local_18,local_c,local_18);
    FUN_004e6b80(local_24,local_18,local_24);
    FUN_004e6d00(param_1 + 0x18,param_1 + 0x18,local_18);
    FUN_004e6d00(local_18,iVar5,local_18);
    FUN_004e6a00(local_24,local_18,local_24);
    FUN_004e5780(local_18);
    iVar4 = FUN_004e7250(local_24,local_18);
    if (iVar4 != 0) {
      return 3;
    }
    FUN_004e7390(local_24,local_24);
    FUN_004e6d00(local_24,iVar2,local_24);
    FUN_004e6d00(param_1 + 0x18,iVar1,local_18);
    FUN_004e6a00(local_24,local_18,local_24);
    FUN_004e6d00(iVar1,iVar1,local_18);
    FUN_004e6d00(iVar2,iVar2,local_c);
    FUN_004e6d00(local_c,iVar5,local_c);
    FUN_004e6b80(local_18,local_c,local_18);
    FUN_004e6dd0(local_24,local_18,local_24);
    FUN_004e6d00(local_24,local_24,local_18);
    FUN_004e6d00(local_24,local_18,param_1 + 0x60);
    iVar5 = FUN_004e4020(param_1 + 0x60);
    uVar3 = -(uint)(iVar5 != 0) & 3;
  }
  return uVar3;
}

