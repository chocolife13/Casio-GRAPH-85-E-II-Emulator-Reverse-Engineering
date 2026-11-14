// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00485a30
// entry: 00485a30  size: 523


int FUN_00485a30(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_34 [52];
  
  FUN_005232d0(1,1);
  switch(param_1) {
  case 9:
    uVar2 = FUN_0052f6f0(0xe3,local_34);
    FUN_005233e0(uVar2);
    return 6;
  case 10:
    uVar2 = FUN_0052f6f0(0xe4,local_34);
    FUN_005233e0(uVar2);
    return 3;
  case 0xb:
    uVar2 = FUN_0052f6f0(0xe5,local_34);
    FUN_005233e0(uVar2);
    return 6;
  case 0xc:
    uVar2 = FUN_0052f6f0(0xe6,local_34);
    FUN_005233e0(uVar2);
    return 7;
  case 0xd:
    uVar2 = FUN_0052f6f0(0xe7,local_34);
    FUN_005233e0(uVar2);
    return 8;
  case 0xe:
    uVar2 = FUN_0052f6f0(0xe8,local_34);
    FUN_005233e0(uVar2);
    return 5;
  case 0xf:
    uVar2 = FUN_0052f6f0(0xe9,local_34);
    FUN_005233e0(uVar2);
    return 5;
  case 0x10:
    uVar2 = FUN_0052f6f0(0xea,local_34);
    FUN_005233e0(uVar2);
    return 5;
  case 0x11:
    uVar2 = FUN_0052f6f0(0xeb,local_34);
    FUN_005233e0(uVar2);
    return 4;
  case 0x12:
    uVar2 = FUN_0052f6f0(0xec,local_34);
    FUN_005233e0(uVar2);
    return 4;
  case 0x13:
    iVar1 = FUN_005313a0();
    uVar2 = FUN_0052f6f0(0xe2,local_34);
    FUN_005233e0(uVar2);
    return iVar1;
  case 0x14:
    iVar1 = FUN_005313a0();
    uVar2 = FUN_0052f6f0(0xe0,local_34);
    FUN_005233e0(uVar2);
    return iVar1 + 0xd;
  case 0x15:
    uVar2 = FUN_0052f6f0(0xe1,local_34);
    FUN_005233e0(uVar2);
    return 0x10;
  default:
    return 0;
  }
}

