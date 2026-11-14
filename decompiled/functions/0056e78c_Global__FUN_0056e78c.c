// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0056e78c
// entry: 0056e78c  size: 198


LRESULT __thiscall FUN_0056e78c(CWnd *param_1,uint param_2,WPARAM param_3,LRESULT param_4)

{
  int lParam;
  int iVar1;
  CWnd *pCVar2;
  LRESULT LVar3;
  
  lParam = param_4;
  if ((param_2 < 0x2b) ||
     ((((0x2f < param_2 && (param_2 != 0x39)) && (param_2 != 0x4e)) && (param_2 != 0x111)))) {
    LVar3 = FUN_005642cd(param_2,param_3,param_4);
    return LVar3;
  }
  iVar1 = (**(code **)(*(int *)param_1 + 0x9c))(param_2,param_3,param_4,&param_4);
  if (iVar1 != 0) {
    return param_4;
  }
  pCVar2 = CWnd::GetOwner(param_1);
  param_4 = SendMessageA(*(HWND *)(pCVar2 + 0x1c),param_2,param_3,lParam);
  if (param_2 != 0x4e) {
    return param_4;
  }
  iVar1 = *(int *)(lParam + 8);
  if (iVar1 == -0x208) {
    if ((*(char **)(lParam + 0xc) == (char *)0x0) || (**(char **)(lParam + 0xc) == '\0'))
    goto LAB_0056e828;
  }
  else if (iVar1 != -0x212) {
    return param_4;
  }
  if (iVar1 != -0x212) {
    return param_4;
  }
  if ((*(short **)(lParam + 0xc) != (short *)0x0) && (**(short **)(lParam + 0xc) != 0)) {
    return param_4;
  }
LAB_0056e828:
  LVar3 = FUN_005642cd(0x4e,param_3,lParam);
  return LVar3;
}

