// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00565629
// entry: 00565629  size: 99


int FUN_00565629(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_2;
  iVar1 = FUN_00565142(&param_2);
  if (iVar1 == 0) {
    iVar1 = FUN_0057633b(FUN_0057434e);
    if (iVar2 != 0) {
      iVar2 = *(int *)(iVar2 + 0x1c);
    }
    iVar2 = FUN_0056568c(*(undefined4 *)(param_1 + 4),iVar2,param_3,*(undefined4 *)(iVar1 + 4),
                         *(undefined4 *)(iVar1 + 8));
    if (iVar2 == 0) {
      param_2 = FUN_0056339a();
    }
    else {
      param_2 = *(int *)(iVar1 + 4);
    }
  }
  return param_2;
}

