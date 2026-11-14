// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0056ffa1
// entry: 0056ffa1  size: 249


undefined4 __thiscall
FUN_0056ffa1(int *param_1,int param_2,int param_3,uint param_4,undefined4 param_5)

{
  int iVar1;
  undefined1 local_44 [4];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  uint local_24;
  char *local_1c;
  tagRECT local_14;
  
  param_1[0x19] = param_4 & 0x40ffff;
  _memset(local_44,0,0x30);
  local_24 = param_4 | 0x40000000;
  local_1c = "AfxControlBar42s";
  local_3c = param_5;
  iVar1 = FUN_0057497f();
  local_40 = *(undefined4 *)(iVar1 + 8);
  if (param_2 == 0) {
    local_38 = 0;
  }
  else {
    local_38 = *(undefined4 *)(param_2 + 0x1c);
  }
  iVar1 = (**(code **)(*param_1 + 0x5c))(local_44);
  if (iVar1 != 0) {
    param_1[0x21] = param_3;
    FUN_00565e0f(0x10);
    FUN_00565e0f(0x3c000);
    iVar1 = FUN_005627e4(param_3,param_2);
    param_1[0x21] = 0;
    if (iVar1 != 0) {
      FUN_005662ca(param_5);
      GetWindowRect((HWND)param_1[7],&local_14);
      param_1[0x1e] = local_14.right - local_14.left;
      param_1[0x1f] = local_14.bottom - local_14.top;
      FUN_00566212(0,0x4000000,0);
      iVar1 = FUN_00565976(param_3);
      if (iVar1 != 0) {
        FUN_005662f3(0,0,0,0,0,0x54);
        return 1;
      }
    }
  }
  return 0;
}

