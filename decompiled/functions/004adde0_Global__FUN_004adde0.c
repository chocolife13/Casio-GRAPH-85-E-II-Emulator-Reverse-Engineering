// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004adde0
// entry: 004adde0  size: 80


void FUN_004adde0(undefined4 param_1)

{
  ushort uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int local_4;
  
  uVar3 = param_1;
  iVar4 = FUN_004103d0(param_1,&local_4,&param_1);
  if (iVar4 == 0) {
    iVar4 = 0;
    uVar1 = *(ushort *)(local_4 + 0xc);
    uVar2 = *(undefined4 *)(local_4 + 8);
    if (uVar1 != 0) {
      do {
        iVar5 = FUN_00410e00(uVar3,uVar2);
        if (iVar5 != 0) {
          return;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)(uint)uVar1);
    }
  }
  return;
}

