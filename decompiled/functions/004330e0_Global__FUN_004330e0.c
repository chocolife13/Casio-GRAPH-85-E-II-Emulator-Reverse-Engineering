// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004330e0
// entry: 004330e0  size: 73


int FUN_004330e0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined1 local_100 [256];
  
  iVar2 = 1;
  iVar1 = FUN_00529b70(param_1);
  if (iVar1 != param_1) {
    iVar2 = iVar1 - param_1;
    FUN_004b7750(local_100,iVar1);
    FUN_004b7750(param_1,local_100);
  }
  return iVar2;
}

