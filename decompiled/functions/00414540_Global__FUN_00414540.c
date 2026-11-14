// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00414540
// entry: 00414540  size: 178


undefined4 * FUN_00414540(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if (param_1 != 0) {
    switch(param_1) {
    case 1:
      puVar1 = (undefined4 *)&DAT_005d7e60;
      break;
    case 2:
      puVar1 = (undefined4 *)&DAT_005d7660;
      break;
    case 3:
      puVar1 = &DAT_005d6e60;
      break;
    default:
      goto LAB_004145ef;
    case 7:
      puVar1 = (undefined4 *)&DAT_005d7260;
      break;
    case 8:
      puVar1 = (undefined4 *)&DAT_005d7a60;
    }
    if (param_2 == 1) {
      puVar3 = &DAT_005d8280;
      do {
        puVar2 = puVar3 + 4;
        *puVar1 = *puVar3;
        puVar1[1] = puVar3[1];
        puVar1[2] = puVar3[2];
        puVar1[3] = puVar3[3];
        puVar1 = puVar1 + 4;
        puVar3 = puVar2;
      } while ((int)puVar2 < 0x5d8680);
      return (undefined4 *)0x0;
    }
    if (param_2 == 2) {
      return puVar1;
    }
    puVar3 = &DAT_005d8280;
    do {
      puVar2 = puVar3 + 4;
      *puVar3 = *puVar1;
      puVar3[1] = puVar1[1];
      puVar3[2] = puVar1[2];
      puVar3[3] = puVar1[3];
      puVar1 = puVar1 + 4;
      puVar3 = puVar2;
    } while ((int)puVar2 < 0x5d8680);
  }
LAB_004145ef:
  return (undefined4 *)0x0;
}

