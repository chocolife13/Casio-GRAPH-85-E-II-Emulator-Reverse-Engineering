// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00535b10
// entry: 00535b10  size: 150


bool FUN_00535b10(char *param_1)

{
  ushort uVar1;
  short sVar2;
  short sVar3;
  char local_5;
  undefined4 local_4;
  
  if (*param_1 != '\x1b') {
    return false;
  }
  FUN_00535f50(&param_1,&local_4,&local_5);
  local_5 = FUN_00533160(param_1);
  if (((local_5 != '\x01') && (local_5 != '\x03')) && (local_5 != '\x05')) {
    return false;
  }
  uVar1 = FUN_00533380(param_1,local_4);
  param_1 = param_1 + uVar1;
  sVar2 = FUN_005332e0(param_1);
  sVar3 = FUN_005361f0(param_1);
  if (sVar3 == 0) {
    sVar3 = 1;
  }
  return sVar2 == sVar3;
}

