// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00517750
// entry: 00517750  size: 125


undefined4 FUN_00517750(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  undefined4 local_4;
  
  uVar2 = param_2;
  uVar1 = param_1;
  local_4 = 0;
  cVar3 = FUN_004ad2a0(param_1,param_2,&param_1);
  if (cVar3 != '\0') {
    cVar3 = FUN_004aba60(uVar1,uVar2,4,&local_4);
    if (cVar3 != '\0') {
      return 4;
    }
    param_2 = CONCAT31(param_2._1_3_,2);
    FUN_004ac2f0(1,&param_2,3);
  }
  FUN_004ac2f0(2,&stack0x0000000c,0);
  return 0;
}

