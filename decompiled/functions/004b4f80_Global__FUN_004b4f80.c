// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004b4f80
// entry: 004b4f80  size: 174


int FUN_004b4f80(int param_1,int param_2,int param_3)

{
  byte bVar1;
  uint uVar2;
  byte bVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  bVar3 = 0;
  bVar1 = 0;
  uVar5 = FUN_004b6bd0(param_2);
  uVar4 = (undefined4)((ulonglong)uVar5 >> 0x20);
  uVar2 = 0;
  do {
    if ((int)uVar2 < (int)uVar5) {
      uVar2 = (uint)bVar3;
      bVar3 = bVar3 + 1;
      *(undefined1 *)(uVar2 + param_1) = *(undefined1 *)(uVar2 + param_2);
      uVar2 = (uint)bVar3;
      uVar6 = FUN_004b6ab0(CONCAT31((int3)((uint)uVar4 >> 8),*(undefined1 *)(uVar2 + param_2)));
      uVar4 = (undefined4)((ulonglong)uVar6 >> 0x20);
      if ((int)uVar6 != 0) {
        *(undefined1 *)(uVar2 + param_1) = *(undefined1 *)(uVar2 + param_2);
        goto LAB_004b4ff7;
      }
    }
    else {
      *(undefined1 *)((uint)bVar3 + param_1) = 0x20;
LAB_004b4ff7:
      bVar3 = bVar3 + 1;
    }
    bVar1 = bVar1 + 1;
    uVar2 = (uint)bVar1;
    if (param_3 <= (int)uVar2) {
      *(undefined1 *)((uint)bVar3 + param_1) = 0;
      return param_1;
    }
  } while( true );
}

