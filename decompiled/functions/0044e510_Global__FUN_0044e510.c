// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0044e510
// entry: 0044e510  size: 116


undefined4 FUN_0044e510(int param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_c;
  undefined4 local_8;
  undefined1 local_4;
  
  cVar1 = FUN_004acd20(1,param_1,param_2);
  if (cVar1 == '\0') {
    if (param_1 == 0) {
      return 0;
    }
    local_c = 0;
    local_8 = 0;
    local_4 = 0;
    cVar1 = FUN_004ad250(&local_c);
    if (cVar1 == '\0') {
      iVar2 = FUN_004b7550(&local_c);
      uVar3 = FUN_004b79b0(&local_c,param_1,iVar2 + 1);
      return uVar3;
    }
  }
  return 1;
}

