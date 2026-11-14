// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005292d0
// entry: 005292d0  size: 303


void FUN_005292d0(uint param_1,undefined4 param_2)

{
  undefined4 uVar1;
  char cVar2;
  char cVar3;
  undefined1 uVar4;
  int local_2c;
  int local_28;
  undefined4 local_24;
  undefined1 local_20 [4];
  undefined1 local_1c [4];
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  FUN_0052f8a0(param_1,local_c);
  uVar1 = param_2;
  FUN_0052f8a0(param_2,local_18);
  cVar2 = FUN_004ad2a0(6,local_18,&local_2c);
  cVar3 = FUN_004ad2a0(6,local_c,&param_1);
  if (cVar3 == '\0') {
    if (cVar2 != '@') {
      FUN_004ad550(local_1c,local_20,&local_28);
      if ((uint)(local_28 + local_2c) < param_1) {
        FUN_00529a30(0x33);
        return;
      }
      FUN_00529950(uVar1);
    }
    cVar3 = FUN_004aba60(6,local_18,param_1,0);
    if (cVar3 == '\0') {
      FUN_004ad750(6,local_c,&param_1,&local_24);
      cVar3 = FUN_004abff0(6,local_18,param_1,local_24,0);
    }
  }
  else if (cVar3 == '@') {
    uVar4 = FUN_004ac5a0(6,local_18);
    FUN_00529a30(uVar4);
    return;
  }
  FUN_00529a30(cVar3);
  return;
}

