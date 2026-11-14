// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00495970
// entry: 00495970  size: 239


int FUN_00495970(int param_1)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int local_24;
  undefined1 local_20 [6];
  short sStack_1a;
  undefined4 local_14;
  
  cVar2 = FUN_004ad800(DAT_005d6dc0,DAT_005d6d84,local_20,&local_24);
  if (cVar2 != '\0') {
    return 0;
  }
  uVar1 = *(uint *)(local_24 + 4 + param_1 * 4);
  uVar3 = uVar1 & 0xff000000;
  if (uVar3 < 0x6000001) {
    if (uVar3 == 0x6000000) {
      return 0xc;
    }
    if (uVar3 == 0x3000000) {
      sStack_1a = (short)((uint)*(undefined4 *)((uVar1 & 0xffffff) + local_24) >> 0x10);
      return (int)sStack_1a;
    }
    if (uVar3 == 0x4000000) {
      puVar5 = (undefined4 *)((uVar1 & 0xffffff) + 0x18 + local_24);
      puVar6 = &local_14;
      for (iVar4 = 5; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      return (int)local_14._2_2_;
    }
    if (uVar3 != 0x5000000) {
      return 0;
    }
  }
  else if ((uVar3 != 0x7000000) && (uVar3 != 0x81000000)) {
    if (uVar3 != 0x82000000) {
      return 0;
    }
    param_1._2_2_ = (short)((uint)*(undefined4 *)((uVar1 & 0xffffff) + local_24) >> 0x10);
    return (int)param_1._2_2_;
  }
  return 8;
}

