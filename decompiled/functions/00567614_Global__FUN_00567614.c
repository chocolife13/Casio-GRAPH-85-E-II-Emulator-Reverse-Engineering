// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00567614
// entry: 00567614  size: 95


void __thiscall FUN_00567614(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  if (param_2 != 0) {
    iVar1 = *param_1;
    if ((*(int *)(iVar1 + -0xc) < 2) && (*(int *)(iVar1 + -8) + param_2 <= *(int *)(iVar1 + -4))) {
      FUN_00555c70(*(int *)(iVar1 + -8) + iVar1,param_3,param_2);
      *(int *)(*param_1 + -8) = *(int *)(*param_1 + -8) + param_2;
      *(undefined1 *)(*(int *)(*param_1 + -8) + *param_1) = 0;
    }
    else {
      FUN_005674fc(*(undefined4 *)(iVar1 + -8),iVar1,param_2,param_3);
      FUN_00567300(iVar1 + -0xc);
    }
  }
  return;
}

