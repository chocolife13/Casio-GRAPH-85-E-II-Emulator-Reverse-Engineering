// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0056cb6a
// entry: 0056cb6a  size: 317


LRESULT FUN_0056cb6a(void)

{
  LSTATUS LVar1;
  HWND hWnd;
  BYTE local_90 [128];
  DWORD local_10 [2];
  HKEY local_8;
  
  if (DAT_005d333c != 0) {
    return DAT_005d5320;
  }
  DAT_005d333c = 1;
  if (DAT_005d531c == 0) {
    DAT_005d5318 = RegisterWindowMessageA("MSH_SCROLL_LINES_MSG");
    if (DAT_005d5318 == 0) {
      DAT_005d531c = 1;
      goto LAB_0056cbba;
    }
    DAT_005d531c = 2;
  }
  if (((DAT_005d531c == 2) && (hWnd = FindWindowA("MouseZ","Magellan MSWHEEL"), hWnd != (HWND)0x0))
     && (DAT_005d5318 != 0)) {
    DAT_005d5320 = SendMessageA(hWnd,DAT_005d5318,0,0);
    return DAT_005d5320;
  }
LAB_0056cbba:
  DAT_005d5320 = 3;
  if (DAT_005d5104 == 0) {
    LVar1 = RegOpenKeyExA((HKEY)0x80000001,"Control Panel\\Desktop",0,1,&local_8);
    if (LVar1 == 0) {
      local_10[1] = 0x80;
      LVar1 = RegQueryValueExA(local_8,"WheelScrollLines",(LPDWORD)0x0,local_10,local_90,
                               local_10 + 1);
      if (LVar1 == 0) {
        DAT_005d5320 = FUN_005570c0(local_90,0,10);
      }
      RegCloseKey(local_8);
    }
  }
  else if (DAT_005d5100 == 0) {
    SystemParametersInfoA(0x68,0,&DAT_005d5320,0);
  }
  return DAT_005d5320;
}

