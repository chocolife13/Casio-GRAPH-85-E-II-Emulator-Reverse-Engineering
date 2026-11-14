// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00528820
// entry: 00528820  size: 78


undefined4 FUN_00528820(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 local_c [12];
  
  uVar2 = param_2;
  FUN_0052fbc0(param_1,param_2,local_c);
  cVar1 = FUN_004ad2a0(5,local_c,&param_2);
  if (cVar1 != '\0') {
    return 0;
  }
  uVar2 = FUN_00528740(param_1,uVar2,&DAT_005cd010);
  return uVar2;
}

