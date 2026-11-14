// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0056eb8a
// entry: 0056eb8a  size: 88


int FUN_0056eb8a(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_2;
  iVar1 = FUN_00565142(&param_2);
  iVar3 = param_2;
  if (iVar1 == 0) {
    if (iVar2 != 0) {
      iVar2 = *(int *)(iVar2 + 0x1c);
    }
    iVar2 = FUN_0056568c(*(undefined4 *)(param_1 + 4),iVar2,param_3,DAT_005d50cc,DAT_005d50dc);
    iVar3 = DAT_005d50cc;
    if (iVar2 == 0) {
      iVar3 = FUN_0056339a();
    }
  }
  return iVar3;
}

