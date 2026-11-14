// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00528a20
// entry: 00528a20  size: 145


char FUN_00528a20(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  char cVar3;
  undefined1 local_1c [12];
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  FUN_0052f8a0(param_1,local_1c);
  puVar2 = param_3;
  puVar1 = param_2;
  *param_2 = 0;
  *param_3 = 0;
  cVar3 = FUN_004ad2a0(6,local_1c,&param_1);
  if (cVar3 == '\0') {
    cVar3 = FUN_004ad3f0(1,0x10,&local_10);
    if (cVar3 == '\0') {
      FUN_00528870(local_10,local_c,local_8,local_4,puVar1,puVar2);
    }
  }
  return cVar3;
}

