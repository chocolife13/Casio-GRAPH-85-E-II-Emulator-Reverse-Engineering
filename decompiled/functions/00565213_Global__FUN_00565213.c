// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00565213
// entry: 00565213  size: 91


LRESULT __thiscall
FUN_00565213(int param_1,uint param_2,WPARAM param_3,LPARAM param_4,LRESULT *param_5)

{
  LRESULT LVar1;
  
  if (*(int *)(param_1 + 0x38) == 0) {
    LVar1 = FUN_0056526e(param_2,param_3,param_4,param_5);
  }
  else {
    LVar1 = SendMessageA(*(HWND *)(param_1 + 0x1c),param_2 + 0x2000,param_3,param_4);
    if (((param_2 < 0x132) || (0x138 < param_2)) || (LVar1 != 0)) {
      if (param_5 != (LRESULT *)0x0) {
        *param_5 = LVar1;
      }
      LVar1 = 1;
    }
  }
  return LVar1;
}

