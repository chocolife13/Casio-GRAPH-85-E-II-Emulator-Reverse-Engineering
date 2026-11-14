// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005709a1
// entry: 005709a1  size: 217


void __fastcall FUN_005709a1(int param_1)

{
  int iVar1;
  HWND pHVar2;
  undefined4 uVar3;
  undefined4 local_14;
  undefined4 uStack_10;
  tagPOINT local_c;
  
  iVar1 = FUN_005738d6();
  if (iVar1 == 0) {
    local_c.x = *(int *)(param_1 + 0xa8);
    local_c.y = *(int *)(param_1 + 0xac);
    if ((local_c.x < 0) || (local_c.y < 0)) {
      local_c.x = *(int *)(param_1 + 0x94);
      local_c.y = *(int *)(param_1 + 0x98);
      pHVar2 = GetParent(*(HWND *)(*(int *)(param_1 + 0x68) + 0x1c));
      iVar1 = FUN_00563433(pHVar2);
      ClientToScreen(*(HWND *)(iVar1 + 0x1c),&local_c);
    }
    FUN_0057408c(*(undefined4 *)(param_1 + 0x68),local_c.x,local_c.y,*(undefined4 *)(param_1 + 0xa4)
                );
  }
  else if ((*(byte *)(*(int *)(param_1 + 0x68) + 0x69) & 0xf0) != 0) {
    local_14 = *(undefined4 *)(param_1 + 0x94);
    uStack_10 = *(undefined4 *)(param_1 + 0x98);
    local_c.x = *(LONG *)(param_1 + 0x9c);
    local_c.y = *(LONG *)(param_1 + 0xa0);
    uVar3 = 0;
    if (*(int *)(param_1 + 0x90) != 0) {
      uVar3 = FUN_0057301c(*(int *)(param_1 + 0x90));
      FUN_0056a401(&local_14);
    }
    FUN_00574007(*(undefined4 *)(param_1 + 0x68),uVar3,&local_14);
    (**(code **)(**(int **)(param_1 + 0x6c) + 200))(1);
  }
  return;
}

