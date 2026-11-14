// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00561718
// entry: 00561718  size: 163


undefined4 __thiscall FUN_00561718(int param_1,int param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  iVar1 = FUN_00574748();
  iVar2 = *(int *)(iVar1 + 0xcc);
  if (param_2 == 0) {
    if ((*(uint *)(param_1 + 0x24) & param_3) != 0) {
      if (*(int *)(iVar1 + 0xd0) == param_1) {
        FUN_00563d19(1);
      }
      if ((iVar2 != 0) && (*(int *)(iVar2 + 0x1c) != 0)) {
        _memset(&local_30,0,0x2c);
        local_28 = *(undefined4 *)(param_1 + 0x1c);
        local_30 = 0x28;
        local_2c = 1;
        local_24 = local_28;
        SendMessageA(*(HWND *)(iVar2 + 0x1c),0x405,0,(LPARAM)&local_30);
      }
      *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x24) & ~param_3;
    }
  }
  else if ((*(uint *)(param_1 + 0x24) & param_3) == 0) {
    iVar2 = FUN_0057497f();
    *(undefined1 **)(iVar2 + 0x1034) = &LAB_0056184b;
    *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x24) | param_3;
  }
  return 1;
}

