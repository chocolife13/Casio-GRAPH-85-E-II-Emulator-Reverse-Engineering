// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0044eb10
// entry: 0044eb10  size: 168


undefined4 FUN_0044eb10(undefined4 param_1,undefined4 *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 local_c;
  undefined4 local_8;
  undefined1 local_4;
  
  local_c = 0;
  local_8 = 0;
  local_4 = 0;
  if (param_2[3] != 0) {
    param_2[3] = 0;
  }
  thunk_FUN_0040add0();
  cVar1 = FUN_004acd20(1,param_1,1);
  if (cVar1 == '\0') {
    cVar1 = FUN_004ad250(&local_c);
    if (cVar1 != '\0') {
      FUN_0052b240(4);
    }
    FUN_0044e6f0(&local_c,param_2,1);
    param_2[3] = *param_2;
    param_2[1] = param_2[2];
  }
  FUN_005232d0(0x15,1);
  FUN_0052f840();
  iVar2 = FUN_0052f820();
  if (iVar2 == 1) {
    FUN_0052b240(1);
    return 1;
  }
  return 0;
}

