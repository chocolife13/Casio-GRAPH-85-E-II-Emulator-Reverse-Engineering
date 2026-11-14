// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00411520
// entry: 00411520  size: 200


int FUN_00411520(int param_1,undefined4 param_2,uint param_3,uint param_4,undefined1 *param_5)

{
  int iVar1;
  undefined1 *puVar2;
  uint uVar3;
  int local_8;
  uint local_4;
  
  iVar1 = FUN_004105d0(param_1,param_2,&param_2,&param_1,&local_8,&local_4);
  uVar3 = param_4;
  if (iVar1 == 0) {
    if ((*(byte *)(param_1 + 0x11) & 1) != 0) {
      return 0x32;
    }
    if ((*(byte *)(param_1 + 0x11) & 6) != 0) {
      return 0x34;
    }
    puVar2 = (undefined1 *)(local_8 + param_3);
    if (local_4 < param_4) {
      return 0x13;
    }
    if (local_4 <= param_3) {
      return 0x15;
    }
    if ((undefined1 *)(local_8 + -1 + local_4) < puVar2 + (param_4 - 1)) {
      return 0x14;
    }
    FUN_00411f00();
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar2 = *param_5;
      puVar2 = puVar2 + 1;
      param_5 = param_5 + 1;
    }
  }
  return iVar1;
}

