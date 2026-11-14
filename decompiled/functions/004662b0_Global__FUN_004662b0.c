// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004662b0
// entry: 004662b0  size: 139


int FUN_004662b0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 local_14 [4];
  undefined1 local_10 [16];
  
  thunk_FUN_0040add0();
  FUN_0052f840();
  FUN_0051e2a0(*(undefined4 *)(param_1 + 0x8dc));
  iVar2 = FUN_00513550(param_1,local_14);
  if (iVar2 == 0) {
    iVar2 = *(int *)(param_1 + 0x8dc);
    *(undefined1 **)(param_1 + 0x8d8) = local_10;
    iVar4 = 0;
    if (*(char *)(iVar2 + 0x1c) != '\0') {
      iVar3 = 0;
      do {
        if (*(int *)(iVar3 + 8 + iVar2) == 9) {
          iVar2 = FUN_00466480(param_1,iVar4);
        }
        else {
          iVar2 = FUN_00512360(param_1,iVar4,0);
        }
        if (iVar2 != 0) {
          return iVar2;
        }
        iVar2 = *(int *)(param_1 + 0x8dc);
        iVar4 = iVar4 + 1;
        iVar1 = iVar3 + 0x3c;
        iVar3 = iVar3 + 0x20;
      } while (*(char *)(iVar1 + iVar2) != '\0');
    }
    iVar2 = 0;
  }
  return iVar2;
}

