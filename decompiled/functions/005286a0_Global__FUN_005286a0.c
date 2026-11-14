// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005286a0
// entry: 005286a0  size: 157


undefined4 FUN_005286a0(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  char cVar2;
  undefined1 local_1c [12];
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  FUN_0052fbc0(param_1,param_2,local_1c);
  puVar1 = param_3;
  param_2 = 0;
  *(undefined1 *)param_3 = 0;
  cVar2 = FUN_004ad2a0(5,local_1c,&param_1);
  if (cVar2 == '\0') {
    cVar2 = FUN_004ad3f0(1,0x10,&local_10);
    if (cVar2 == '\0') {
      FUN_00527400(local_10,local_c,local_8,local_4,&param_2);
      *puVar1 = local_10;
      puVar1[1] = local_c;
      *(undefined1 *)(puVar1 + 2) = 0;
    }
  }
  return param_2;
}

