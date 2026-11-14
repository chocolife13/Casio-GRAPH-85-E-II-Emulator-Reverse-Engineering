// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005312a0
// entry: 005312a0  size: 154


undefined4 FUN_005312a0(undefined1 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  undefined1 local_1c [12];
  undefined1 local_10 [16];
  
  uVar1 = param_2;
  FUN_0052fbc0(0xfe,param_2,local_1c);
  cVar2 = FUN_004ad2a0(5,local_1c,&param_2);
  if (cVar2 == '\0') {
    FUN_00528480(0xfe,0);
  }
  iVar3 = FUN_005284b0(0xfe,uVar1,param_3);
  if (iVar3 != 0) {
    return 4;
  }
  cVar2 = FUN_004ad3f0(1,0x10,local_10);
  if (cVar2 == '\0') {
    local_10[0] = param_1;
    FUN_004ac2f0(0x10,local_10,0);
  }
  return 0;
}

