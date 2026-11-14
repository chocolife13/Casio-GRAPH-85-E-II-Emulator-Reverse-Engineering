// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004e1d60
// entry: 004e1d60  size: 228


void FUN_004e1d60(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  iVar1 = FUN_004e4040(param_1);
  if (iVar1 == -1) {
    for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
      *param_2 = *param_1;
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
    }
    return;
  }
  if (iVar1 == 3) {
    FUN_004e5630(3,param_2);
    return;
  }
  if (iVar1 == 2) {
    FUN_004ddc40(param_1,param_2,param_3,param_4);
    return;
  }
  FUN_004e57a0(local_18);
  iVar1 = FUN_004e4000(param_1);
  if (iVar1 == 0) {
    uVar2 = FUN_004e7620(param_1,local_c,local_18);
    iVar1 = FUN_004e72d0(uVar2);
    if (iVar1 != 0) {
      FUN_004e74b0(param_1,param_2,param_3);
      return;
    }
    if (param_4 == 0) {
      FUN_004e5630(3,param_2);
      return;
    }
  }
  FUN_004e5630(3,param_2);
  return;
}

