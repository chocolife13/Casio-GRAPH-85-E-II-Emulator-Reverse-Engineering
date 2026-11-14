// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004117b0
// entry: 004117b0  size: 180


int FUN_004117b0(int param_1,undefined4 param_2,uint param_3,uint param_4,undefined1 *param_5)

{
  int iVar1;
  undefined1 *puVar2;
  int local_8;
  uint local_4;
  
  iVar1 = FUN_004105d0(param_1,param_2,&param_2,&param_1,&local_8,&local_4);
  if (iVar1 == 0) {
    if ((*(byte *)(param_1 + 0x11) & 2) != 0) {
      return 0x34;
    }
    puVar2 = (undefined1 *)(local_8 + param_3);
    if (local_4 < param_4) {
      return 0x19;
    }
    if (local_4 <= param_3) {
      return 0x1b;
    }
    if ((undefined1 *)(local_8 + -1 + local_4) < puVar2 + (param_4 - 1)) {
      return 0x1a;
    }
    for (; param_4 != 0; param_4 = param_4 - 1) {
      *param_5 = *puVar2;
      param_5 = param_5 + 1;
      puVar2 = puVar2 + 1;
    }
  }
  return iVar1;
}

