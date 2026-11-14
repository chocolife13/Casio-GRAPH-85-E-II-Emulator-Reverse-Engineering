// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00560957
// entry: 00560957  size: 222


undefined4 __thiscall FUN_00560957(int *param_1,undefined4 param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  LRESULT LVar3;
  
  iVar1 = FUN_00564939(param_2,param_3,param_4);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_3 + 8);
    if (iVar1 == -0x25f) {
      (**(code **)(*param_1 + 0xe8))();
    }
    else {
      if (iVar1 == -0x25e) {
        uVar2 = (**(code **)(*param_1 + 0xd4))();
      }
      else {
        if (iVar1 == -0x25d) {
          LVar3 = SendMessageA((HWND)param_1[7],0x111,0xe146,0);
          if (LVar3 != 0) {
            return 1;
          }
          SendMessageA((HWND)param_1[7],0x365,0,0);
          return 1;
        }
        if (iVar1 != -0x25c) {
          if (iVar1 == -0x25b) {
            (**(code **)(*param_1 + 0xe4))();
            return 1;
          }
          if (iVar1 != -0x25a) {
            if (iVar1 == -0x259) {
              (**(code **)(*param_1 + 0xdc))();
              return 1;
            }
            return 0;
          }
          (**(code **)(*param_1 + 0xe0))();
          return 1;
        }
        uVar2 = (**(code **)(*param_1 + 0xd0))(*(undefined4 *)(param_3 + 0x10));
      }
      *param_4 = uVar2;
    }
  }
  return 1;
}

