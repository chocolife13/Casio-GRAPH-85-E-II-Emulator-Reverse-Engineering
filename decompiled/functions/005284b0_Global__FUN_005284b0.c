// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005284b0
// entry: 005284b0  size: 160


undefined4 FUN_005284b0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  undefined4 uVar5;
  undefined1 local_14 [4];
  undefined1 local_10 [4];
  undefined1 local_c [12];
  
  iVar2 = param_2;
  iVar1 = param_1;
  FUN_0052fbc0(param_1,param_2,local_c);
  cVar4 = FUN_004ad2a0(5,local_c,&param_2);
  if (cVar4 != '\0') {
    uVar5 = FUN_005281a0(iVar1,iVar2,param_3);
    return uVar5;
  }
  FUN_004ad550(local_10,local_14,&param_1);
  iVar3 = param_3;
  if (param_3 * 0xc + 0x10U <= (uint)(param_1 + param_2)) {
    FUN_00528480(iVar1,iVar2);
    uVar5 = FUN_005281a0(iVar1,iVar2,iVar3);
    return uVar5;
  }
  return 0x33;
}

