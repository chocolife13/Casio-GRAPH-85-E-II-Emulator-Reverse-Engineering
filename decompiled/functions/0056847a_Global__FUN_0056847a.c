// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0056847a
// entry: 0056847a  size: 113


void __thiscall FUN_0056847a(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined1 local_108 [260];
  
  FUN_00569123(local_108,param_2);
  iVar2 = 0;
  if (*(int *)(param_1 + 4) != 1 && -1 < *(int *)(param_1 + 4) + -1) {
    do {
      iVar1 = FUN_005692b9(*(undefined4 *)(*(int *)(param_1 + 8) + iVar2 * 4),local_108);
      if (iVar1 != 0) break;
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 4) + -1);
    for (; 0 < iVar2; iVar2 = iVar2 + -1) {
      FUN_00567485(*(int *)(param_1 + 8) + iVar2 * 4 + -4);
    }
  }
  FUN_005674d5(local_108);
  return;
}

