// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0048fa50
// entry: 0048fa50  size: 164


void FUN_0048fa50(undefined4 param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5,
                 undefined4 param_6,int param_7)

{
  char cVar1;
  int local_8;
  int local_4;
  
  local_4 = 0;
  local_8 = 0;
  cVar1 = FUN_00526090(0x28);
  if (cVar1 == '\x01') {
    if (0x1e < param_4) {
      param_4 = 0x1e;
    }
    if ((param_3 == 2) && ((param_4 == 0x1c || (param_4 == 0x1d)))) {
      param_4 = 0x1e;
    }
    if ((0x1e < param_7) && (param_7 = 0x1f, param_4 == 0x1e)) {
      param_7 = 0x1e;
    }
  }
  FUN_0048fde0(param_2,param_3,param_4,&local_4);
  FUN_0048fde0(param_5,param_6,param_7,&local_8);
  FUN_0048fdb0(local_8 - local_4,param_1);
  return;
}

