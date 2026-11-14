// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00531b30
// entry: 00531b30  size: 81


int FUN_00531b30(ushort param_1)

{
  ushort *puVar1;
  int iVar2;
  ushort uVar3;
  ushort *puVar4;
  
  iVar2 = 0;
  if (PTR_DAT_005993d0 != (undefined *)0x0) {
    puVar4 = &DAT_005993d6;
    do {
      if ((param_1 & *puVar4) != 0) {
        uVar3 = *puVar4 & 0xff;
        if (uVar3 == 8) {
          iVar2 = iVar2 + 0x2b8;
        }
        else if (uVar3 == 9) {
          iVar2 = iVar2 + 100;
        }
        else {
          iVar2 = iVar2 + ((int)(short)puVar4[-1] + 3U & 0xfffffffc);
        }
      }
      puVar1 = puVar4 + 1;
      puVar4 = puVar4 + 4;
    } while (*(int *)puVar1 != 0);
  }
  return iVar2;
}

