// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00527280
// entry: 00527280  size: 167


void FUN_00527280(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined1 uVar2;
  undefined4 local_1c;
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  FUN_0052fbc0(param_1,param_2,local_18);
  FUN_0052fbc0(param_3,param_4,local_c);
  cVar1 = FUN_004ad2a0(5,local_18,&param_1);
  if (cVar1 == '\0') {
    cVar1 = FUN_004ad750(5,local_c,&param_2,&local_1c);
    if (cVar1 == '\0') {
      if (param_1 == param_2) {
        uVar2 = FUN_004abff0(5,local_18,param_2,local_1c,0);
        FUN_00529a30(uVar2);
        return;
      }
      cVar1 = '\x15';
    }
  }
  FUN_00529a30(cVar1);
  return;
}

