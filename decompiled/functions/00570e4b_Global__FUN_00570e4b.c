// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00570e4b
// entry: 00570e4b  size: 283


undefined4 __fastcall FUN_00570e4b(int param_1)

{
  HWND pHVar1;
  int iVar2;
  BOOL BVar3;
  tagMSG local_20;
  
  pHVar1 = GetCapture();
  if (pHVar1 == (HWND)0x0) {
    pHVar1 = SetCapture(*(HWND *)(*(int *)(param_1 + 0x68) + 0x1c));
    FUN_00563433(pHVar1);
    pHVar1 = GetCapture();
    iVar2 = FUN_00563433(pHVar1);
    if (iVar2 == *(int *)(param_1 + 0x68)) {
      do {
        BVar3 = GetMessageA(&local_20,(HWND)0x0,0,0);
        if (BVar3 == 0) {
          AfxPostQuitMessage(local_20.wParam);
          break;
        }
        if (local_20.message == 0x100) {
          if (*(int *)(param_1 + 0x88) != 0) {
            FUN_0057056a(local_20.wParam,1);
          }
          if (local_20.wParam == 0x1b) break;
        }
        else if (local_20.message == 0x101) {
          if (*(int *)(param_1 + 0x88) != 0) {
            FUN_0057056a(local_20.wParam,0);
          }
        }
        else if (local_20.message == 0x200) {
          if (*(int *)(param_1 + 0x88) == 0) {
            FUN_005707f6(local_20.pt.x,local_20.pt.y);
          }
          else {
            FUN_005704ee(local_20.pt.x,local_20.pt.y);
          }
        }
        else {
          if (local_20.message == 0x202) {
            if (*(int *)(param_1 + 0x88) == 0) {
              FUN_0057095e();
            }
            else {
              FUN_0057059e();
            }
            return 1;
          }
          if (local_20.message == 0x204) break;
          DispatchMessageA(&local_20);
        }
        pHVar1 = GetCapture();
        iVar2 = FUN_00563433(pHVar1);
      } while (iVar2 == *(int *)(param_1 + 0x68));
    }
    FUN_00570b3b();
  }
  return 0;
}

