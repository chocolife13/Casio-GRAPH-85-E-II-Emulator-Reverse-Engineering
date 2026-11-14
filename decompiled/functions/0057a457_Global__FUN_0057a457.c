// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0057a457
// entry: 0057a457  size: 130


void __fastcall FUN_0057a457(int param_1)

{
  int iVar1;
  int local_c;
  int local_8;
  
  local_c = param_1;
  local_8 = param_1;
  iVar1 = GetDeviceCaps(*(HDC *)(param_1 + 8),10);
  local_c = GetDeviceCaps(*(HDC *)(param_1 + 8),8);
  local_8 = iVar1;
  FUN_0057a4d9(&local_c);
  SetMapMode(*(HDC *)(param_1 + 4),1);
  SetWindowOrgEx(*(HDC *)(param_1 + 4),0,0,(LPPOINT)0x0);
  SetViewportOrgEx(*(HDC *)(param_1 + 4),*(int *)(param_1 + 0x20),*(int *)(param_1 + 0x24),
                   (LPPOINT)0x0);
  IntersectClipRect(*(HDC *)(param_1 + 4),-1,-1,local_c + 2,local_8 + 2);
  FUN_0057a2d2(0);
  return;
}

