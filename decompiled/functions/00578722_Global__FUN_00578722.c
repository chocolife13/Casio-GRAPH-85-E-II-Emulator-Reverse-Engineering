// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00578722
// entry: 00578722  size: 367


void __thiscall FUN_00578722(int param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  undefined1 local_20 [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  undefined4 local_10;
  
  if (*(int *)(param_1 + 0xec) == 0) {
    *(undefined4 *)(param_1 + 0xf8) = *(undefined4 *)(param_1 + 0xe8);
    ShowScrollBar(*(HWND *)(param_1 + 0x1c),0,0);
    iVar3 = *(int *)(**(int **)(param_1 + 0x114) + 0x5c);
    uVar2 = *(ushort *)(iVar3 + 0x1e);
    if ((0x7fff < uVar2) || (param_2 = 1, 0x7fff < (uint)uVar2 - (uint)*(ushort *)(iVar3 + 0x1c))) {
      param_2 = 0;
    }
    ShowScrollBar(*(HWND *)(param_1 + 0x1c),1,param_2);
    if (param_2 != 0) {
      local_1c = 3;
      local_18 = (uint)*(ushort *)(*(int *)(**(int **)(param_1 + 0x114) + 0x5c) + 0x1c);
      local_14 = (uint)*(ushort *)(*(int *)(**(int **)(param_1 + 0x114) + 0x5c) + 0x1e);
      local_10 = 1;
      iVar3 = FUN_00564d7a(1,local_20,0);
      if (iVar3 == 0) {
        FUN_00564cd4(1,local_18,local_14,0);
      }
    }
    FUN_00578891(*(undefined4 *)(param_1 + 0xf4),1);
  }
  else {
    iVar3 = *(int *)(param_1 + 0x90);
    *(undefined4 *)(param_1 + 0xf8) = 1;
    iVar4 = param_2 * 0x28;
    *(undefined4 *)(iVar3 + 0x20) = *(undefined4 *)(iVar3 + 0x20 + iVar4);
    *(undefined4 *)(iVar3 + 0x24) = *(undefined4 *)(iVar3 + 0x24 + iVar4);
    iVar3 = *(int *)(param_1 + 0x90);
    *(undefined4 *)(iVar3 + 0x10) = *(undefined4 *)(iVar3 + 0x10 + iVar4);
    *(undefined4 *)(iVar3 + 0x14) = *(undefined4 *)(iVar3 + 0x14 + iVar4);
    FUN_00578891(*(int *)(param_1 + 0xf4) + param_2,0);
    FUN_00577e4c(0);
    piVar1 = (int *)(iVar4 + 0x18 + *(int *)(param_1 + 0x90));
    iVar3 = MulDiv(param_3,*piVar1,*(int *)(iVar4 + 0x1c + *(int *)(param_1 + 0x90)));
    iVar4 = MulDiv(param_4,*piVar1,piVar1[1]);
    FUN_0056d084(iVar3 + **(int **)(param_1 + 0x90),iVar4 + (*(int **)(param_1 + 0x90))[1]);
  }
  return;
}

