// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0057a3d7
// entry: 0057a3d7  size: 106


void __fastcall FUN_0057a3d7(int param_1)

{
  tagPOINT local_14;
  tagPOINT local_c;
  
  if ((*(HDC *)(param_1 + 8) != (HDC)0x0) && (*(int *)(param_1 + 4) != 0)) {
    GetViewportOrgEx(*(HDC *)(param_1 + 8),&local_c);
    FUN_0057a4d9(&local_c);
    local_c.y = local_c.y + *(int *)(param_1 + 0x24);
    local_c.x = local_c.x + *(int *)(param_1 + 0x20);
    SetViewportOrgEx(*(HDC *)(param_1 + 4),local_c.x,local_c.y,(LPPOINT)0x0);
    GetWindowOrgEx(*(HDC *)(param_1 + 8),&local_14);
    SetWindowOrgEx(*(HDC *)(param_1 + 4),local_14.x,local_14.y,(LPPOINT)0x0);
  }
  return;
}

