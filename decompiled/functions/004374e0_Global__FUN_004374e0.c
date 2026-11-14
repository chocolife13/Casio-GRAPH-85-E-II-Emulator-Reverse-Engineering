// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004374e0
// entry: 004374e0  size: 127


void FUN_004374e0(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 local_34;
  undefined1 local_30;
  
  if (param_3 < 10) {
    local_34 = DAT_0057f04e;
    local_30 = DAT_0057f052;
  }
  else if (param_3 < 100) {
    local_34 = DAT_0057f049;
    local_30 = DAT_0057f04d;
  }
  else {
    local_34 = DAT_0057f044;
    local_30 = DAT_0057f048;
  }
  FUN_0055c2fe(param_3,&param_3,10);
  FUN_004b6e70(&local_34,&param_3);
  FUN_00523a20(param_1,param_2,&local_34,0x20);
  return;
}

