// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0056ed0c
// entry: 0056ed0c  size: 112


uint __thiscall FUN_0056ed0c(int param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  HDWP pvVar3;
  uint uVar4;
  
  uVar2 = FUN_005661de();
  uVar2 = uVar2 & 0x10000000;
  uVar4 = uVar2 | *(uint *)(param_1 + 100) & 0xff00;
  uVar1 = *(uint *)(param_1 + 0x60);
  if ((uVar1 & 3) == 0) {
    return uVar4;
  }
  if ((uVar1 & 1) == 0) {
    if (uVar2 != 0) goto LAB_0056ed6f;
    uVar2 = 0x40;
  }
  else {
    if (uVar2 == 0) {
LAB_0056ed6f:
      *(uint *)(param_1 + 0x60) = uVar1 & 0xfffffffc;
      return uVar4;
    }
    uVar2 = 0x80;
  }
  if (*param_2 != 0) {
    *(uint *)(param_1 + 0x60) = uVar1 & 0xfffffffc;
    pvVar3 = DeferWindowPos((HDWP)*param_2,*(HWND *)(param_1 + 0x1c),(HWND)0x0,0,0,0,0,uVar2 | 0x17)
    ;
    *param_2 = (int)pvVar3;
  }
  return uVar4 ^ 0x10000000;
}

