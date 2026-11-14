// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004af610
// entry: 004af610  size: 215


uint FUN_004af610(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int local_4;
  
  iVar1 = FUN_004103d0(param_1,&local_4,&param_1);
  if (iVar1 != 0) {
    uVar2 = FUN_0052b240(4);
    return uVar2 & 0xffff0000;
  }
  if (*(ushort *)(local_4 + 0xc) < 0x65) {
    uVar2 = 0;
    puVar5 = param_2;
    for (iVar1 = 0x10b; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    *(undefined2 *)puVar5 = 0;
    iVar4 = 0;
    *(undefined1 *)((int)puVar5 + 2) = 0;
    iVar1 = *(int *)(local_4 + 8);
    puVar5 = param_2;
    if (*(short *)(local_4 + 0xc) != 0) {
      do {
        FUN_004b71f0(puVar5,iVar1,8);
        FUN_004af350(*(undefined1 *)(iVar1 + 0x10),(int)puVar5 + 0xb);
        iVar3 = FUN_004af240(*(int *)(iVar1 + 0xc) + 0x14);
        FUN_004af220(*(int *)(iVar1 + 0xc) + 0x14,(int)puVar5 + (0x15 - iVar3));
        uVar2 = 0;
        do {
          if (*(char *)((int)puVar5 + uVar2) == '\0') {
            *(undefined1 *)((int)puVar5 + uVar2) = 0x20;
          }
          uVar2 = uVar2 + 1;
        } while ((int)uVar2 < 0x15);
        iVar1 = iVar1 + 0x14;
        iVar4 = iVar4 + 1;
        puVar5 = (undefined4 *)((int)puVar5 + 0x15);
      } while (iVar4 < (int)(uint)*(ushort *)(local_4 + 0xc));
    }
    return uVar2 & 0xffff0000;
  }
  uVar2 = FUN_0052b240(4);
  return uVar2 & 0xffff0000;
}

