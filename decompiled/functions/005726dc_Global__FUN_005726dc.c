// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005726dc
// entry: 005726dc  size: 149


void __thiscall FUN_005726dc(int param_1,uint param_2)

{
  int iVar1;
  LRESULT LVar2;
  
  iVar1 = FUN_00564b13();
  param_2 = param_2 & 0xfff0;
  if (*(int *)(iVar1 + 0x50) == 0) {
LAB_00572765:
    FUN_0056339a();
  }
  else {
    if (param_2 < 0xf041) {
      if (((param_2 != 0xf040) && (param_2 != 0xf000)) && (param_2 != 0xf010)) {
        iVar1 = param_2 - 0xf020;
LAB_00572726:
        if ((iVar1 != 0) && (iVar1 != 0x10)) goto LAB_00572765;
      }
    }
    else if ((param_2 != 0xf050) && (param_2 != 0xf060)) {
      iVar1 = param_2 - 0xf120;
      goto LAB_00572726;
    }
    LVar2 = SendMessageA(*(HWND *)(param_1 + 0x1c),0x365,0,(param_2 - 0xf000 >> 4) + 0x1ef00);
    if (LVar2 == 0) {
      SendMessageA(*(HWND *)(param_1 + 0x1c),0x111,0xe147,0);
    }
  }
  return;
}

