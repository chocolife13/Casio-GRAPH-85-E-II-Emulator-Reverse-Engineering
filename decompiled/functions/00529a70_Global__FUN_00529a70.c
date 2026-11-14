// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00529a70
// entry: 00529a70  size: 222


undefined2 FUN_00529a70(undefined4 param_1)

{
  undefined1 uVar1;
  undefined2 uVar2;
  int iVar3;
  char local_100 [256];
  
  uVar2 = FUN_005172b0(param_1);
  FUN_00517360(param_1,local_100);
  if ((local_100[0] == '\0') || (iVar3 = FUN_00517320(param_1), iVar3 == 0)) {
    uVar1 = FUN_00526090(0x18);
    switch(uVar1) {
    default:
      uVar2 = 0x108;
      break;
    case 1:
      return 0x40a;
    case 2:
      return 0x409;
    case 3:
      return 0x209;
    case 4:
      return 0x198;
    case 5:
      return 0x188;
    case 6:
      return 0x1b8;
    case 7:
      return 0x1a8;
    }
  }
  return uVar2;
}

