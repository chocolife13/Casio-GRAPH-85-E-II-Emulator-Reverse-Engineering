// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00527e80
// entry: 00527e80  size: 315


void FUN_00527e80(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  char cVar2;
  undefined1 uVar3;
  int local_28;
  undefined4 local_24;
  undefined1 local_20 [4];
  undefined1 local_1c [4];
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  FUN_0052fbc0(param_1,param_2,local_c);
  FUN_0052fbc0(param_3,param_4,local_18);
  cVar1 = FUN_004ad2a0(5,local_18,&param_1);
  cVar2 = FUN_004ad2a0(5,local_c,&param_2);
  if (cVar2 == '\0') {
    if (cVar1 != '@') {
      FUN_004ad550(local_1c,local_20,&local_28);
      if ((uint)(local_28 + param_1) < param_2) {
        FUN_00529a30(0x33);
        return;
      }
      FUN_004ac5a0(5,local_18);
    }
    cVar2 = FUN_004aba60(5,local_18,param_2,0);
    if (cVar2 == '\0') {
      FUN_004ad750(5,local_c,&param_2,&local_24);
      cVar2 = FUN_004abff0(5,local_18,param_2,local_24,0);
    }
  }
  else if (cVar2 == '@') {
    uVar3 = FUN_004ac5a0(5,local_18);
    FUN_00529a30(uVar3);
    return;
  }
  FUN_00529a30(cVar2);
  return;
}

