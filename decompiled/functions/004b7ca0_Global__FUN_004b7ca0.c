// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004b7ca0
// entry: 004b7ca0  size: 88


uint FUN_004b7ca0(uint param_1)

{
  char cVar1;
  undefined1 local_10 [4];
  undefined4 local_c;
  uint local_8;
  undefined2 local_4;
  
  local_c = DAT_005bdd3c;
  local_4 = 0;
  local_8 = param_1 & 0xff;
  cVar1 = FUN_004ad750(4,&local_c,local_10,&param_1);
  if (cVar1 != '\0') {
    return 0;
  }
  return param_1;
}

