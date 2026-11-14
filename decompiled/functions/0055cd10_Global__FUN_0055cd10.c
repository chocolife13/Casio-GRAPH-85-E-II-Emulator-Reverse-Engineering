// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0055cd10
// entry: 0055cd10  size: 306


void FUN_0055cd10(HDC param_1,int *param_2,ushort param_3,ushort param_4,ushort param_5)

{
  COLORREF color;
  RECT RStack_10;
  
  color = SetBkColor(param_1,(&DAT_005da984)[param_3]);
  RStack_10.left = *param_2;
  RStack_10.top = param_2[1];
  RStack_10.right = param_2[2];
  RStack_10.bottom = RStack_10.top + 1;
  if ((param_5 & 2) != 0) {
    ExtTextOutA(param_1,0,0,2,&RStack_10,(LPCSTR)0x0,0,(INT *)0x0);
  }
  RStack_10.bottom = param_2[3];
  RStack_10.right = RStack_10.left + 1;
  if ((param_5 & 1) != 0) {
    ExtTextOutA(param_1,0,0,2,&RStack_10,(LPCSTR)0x0,0,(INT *)0x0);
  }
  if (param_3 != param_4) {
    SetBkColor(param_1,(&DAT_005da984)[param_4]);
  }
  RStack_10.right = param_2[2];
  RStack_10.left = RStack_10.right + -1;
  if ((param_5 & 4) != 0) {
    ExtTextOutA(param_1,0,0,2,&RStack_10,(LPCSTR)0x0,0,(INT *)0x0);
  }
  if ((param_5 & 8) != 0) {
    RStack_10.left = *param_2;
    RStack_10.top = RStack_10.bottom + -1;
    if ((param_5 & 0x1000) != 0) {
      RStack_10.right = RStack_10.right + -2;
    }
    ExtTextOutA(param_1,0,0,2,&RStack_10,(LPCSTR)0x0,0,(INT *)0x0);
  }
  SetBkColor(param_1,color);
  return;
}

