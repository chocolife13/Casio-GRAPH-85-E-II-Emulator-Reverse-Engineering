// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0048a020
// entry: 0048a020  size: 168


void FUN_0048a020(undefined4 *param_1)

{
  char cVar1;
  undefined1 local_c [12];
  
  if ((param_1[0x22] == 1) && (cVar1 = FUN_00526090(0x27), cVar1 == '\0')) {
    *param_1 = param_1[0xc];
    param_1[1] = param_1[0xd];
    param_1[2] = param_1[0xe];
  }
  else {
    FUN_004e6d00(param_1 + 0xf,param_1 + 6,local_c);
    FUN_004e6a00(param_1 + 0xc,local_c,param_1);
  }
  switch(param_1[0x1f]) {
  case 0x29:
  case 0x2a:
  case 0x2b:
  case 0x2e:
  case 0x2f:
    param_1[0x12] = *param_1;
    param_1[0x13] = param_1[1];
    param_1[0x14] = param_1[2];
    return;
  case 0x2c:
  case 0x2d:
    if ((int)param_1[0x20] <= (int)param_1[0x22]) {
      FUN_004e6a00(param_1 + 0x12,param_1,param_1 + 0x12);
    }
  }
  return;
}

