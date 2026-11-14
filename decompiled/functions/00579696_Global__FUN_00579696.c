// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00579696
// entry: 00579696  size: 79


void __thiscall FUN_00579696(CPreviewDC *param_1,HDC param_2)

{
  int iVar1;
  
  iVar1 = SaveDC(param_2);
  *(int *)(param_1 + 0x18) = iVar1;
  FUN_00569d33(param_2);
  if (*(int *)(param_1 + 8) != 0) {
    FUN_0057a2d2(0);
    if (*(HGDIOBJ *)(param_1 + 0x28) == (HGDIOBJ)0x0) {
      FUN_00579967();
    }
    else {
      SelectObject(*(HDC *)(param_1 + 4),*(HGDIOBJ *)(param_1 + 0x28));
    }
    CPreviewDC::MirrorAttributes(param_1);
  }
  return;
}

