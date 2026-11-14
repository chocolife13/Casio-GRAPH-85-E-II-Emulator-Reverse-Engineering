// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005176a0
// entry: 005176a0  size: 101


undefined4 FUN_005176a0(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  char cVar2;
  undefined4 local_4;
  
  uVar1 = param_2;
  local_4 = 0;
  cVar2 = FUN_004ad2a0(param_1,param_2,&param_2);
  if (cVar2 != '\0') {
    cVar2 = FUN_004aba60(param_1,uVar1,4,&local_4);
    if (cVar2 != '\0') {
      return 4;
    }
  }
  FUN_004ac2f0(1,&stack0x0000000c,3);
  return 0;
}

