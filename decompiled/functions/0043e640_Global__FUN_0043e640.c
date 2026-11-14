// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0043e640
// entry: 0043e640  size: 220


undefined4 FUN_0043e640(undefined4 param_1,undefined4 param_2)

{
  ushort uVar1;
  undefined2 *puVar2;
  undefined1 local_15c [4];
  undefined1 local_158 [80];
  undefined1 local_108 [264];
  
  uVar1 = FUN_005172b0(param_1);
  if (uVar1 < 0x1b9) {
    if (uVar1 != 0x1b8) {
      switch(uVar1) {
      case 0x108:
      case 0x188:
      case 0x198:
      case 0x1a8:
        break;
      default:
        goto switchD_0043e686_caseD_109;
      }
    }
    puVar2 = &DAT_005beb28;
  }
  else if (uVar1 == 0x209) {
    puVar2 = &DAT_005be980;
  }
  else if (uVar1 == 0x409) {
    puVar2 = &DAT_005beb24;
  }
  else {
    if (uVar1 != 0x40a) goto switchD_0043e686_caseD_109;
    puVar2 = &DAT_005a8d20;
  }
  FUN_004b6ef0(param_2,puVar2);
switchD_0043e686_caseD_109:
  FUN_0055c2fe(param_1,local_15c,10);
  FUN_004b6e70(param_2,local_15c);
  FUN_004b6e70(param_2,&DAT_005be9e0);
  FUN_00517360(param_1,local_108);
  FUN_004b7b40(local_108,local_158,0x15);
  FUN_004b6e70(param_2,local_158);
  return param_2;
}

