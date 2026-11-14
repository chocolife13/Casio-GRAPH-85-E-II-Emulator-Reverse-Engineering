// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0057a2d2
// entry: 0057a2d2  size: 261


void __thiscall FUN_0057a2d2(int param_1,int param_2)

{
  LPSIZE lpsize;
  LPSIZE lpsize_00;
  int iVar1;
  int iVar2;
  LONG LVar3;
  undefined4 uVar4;
  
  if (param_2 != 0) {
    lpsize = (LPSIZE)(param_1 + 0x38);
    GetViewportExtEx(*(HDC *)(param_1 + 8),lpsize);
    lpsize_00 = (LPSIZE)(param_1 + 0x30);
    GetWindowExtEx(*(HDC *)(param_1 + 8),lpsize_00);
    LVar3 = lpsize_00->cx;
    while ((((-0x4000 < LVar3 && (lpsize_00->cx < 0x4000)) && (iVar2 = lpsize->cx, -0x4000 < iVar2))
           && (iVar2 < 0x4000))) {
      LVar3 = lpsize_00->cx * 2;
      lpsize_00->cx = LVar3;
      lpsize->cx = iVar2 * 2;
    }
    iVar2 = *(int *)(param_1 + 0x34);
    while (((-0x4000 < iVar2 && (*(int *)(param_1 + 0x34) < 0x4000)) &&
           ((iVar1 = *(int *)(param_1 + 0x3c), -0x4000 < iVar1 && (iVar1 < 0x4000))))) {
      iVar2 = *(int *)(param_1 + 0x34) * 2;
      *(int *)(param_1 + 0x34) = iVar2;
      *(int *)(param_1 + 0x3c) = iVar1 * 2;
    }
    iVar2 = GetDeviceCaps(*(HDC *)(param_1 + 8),0x58);
    LVar3 = FUN_005794ef(lpsize->cx,*(undefined4 *)(param_1 + 0x10),DAT_005d50c0,
                         *(undefined4 *)(param_1 + 0x14),iVar2);
    lpsize->cx = LVar3;
    iVar2 = GetDeviceCaps(*(HDC *)(param_1 + 8),0x5a);
    uVar4 = FUN_005794ef(*(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x10),
                         DAT_005d50c4,*(undefined4 *)(param_1 + 0x14),iVar2);
    *(undefined4 *)(param_1 + 0x3c) = uVar4;
  }
  if (*(HDC *)(param_1 + 4) != (HDC)0x0) {
    SetMapMode(*(HDC *)(param_1 + 4),8);
    SetWindowExtEx(*(HDC *)(param_1 + 4),*(int *)(param_1 + 0x30),*(int *)(param_1 + 0x34),
                   (LPSIZE)0x0);
    SetViewportExtEx(*(HDC *)(param_1 + 4),*(int *)(param_1 + 0x38),*(int *)(param_1 + 0x3c),
                     (LPSIZE)0x0);
    FUN_0057a3d7();
  }
  return;
}

