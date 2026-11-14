// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004a0c00
// entry: 004a0c00  size: 228


void FUN_004a0c00(undefined4 param_1,char *param_2)

{
  char cVar1;
  
  cVar1 = FUN_004a0820(param_1,5);
  if (cVar1 == '\n') {
    *(undefined4 *)param_2 = DAT_005bff1c;
    *(undefined2 *)(param_2 + 4) = DAT_005bff20;
    param_2[6] = DAT_005bff22;
    return;
  }
  cVar1 = FUN_004a0820(param_1,5);
  if (cVar1 == '\x0f') {
    *param_2 = ' ';
  }
  else {
    *param_2 = cVar1 + '0';
  }
  cVar1 = FUN_004a0820(param_1,4);
  if (cVar1 == '\x0f') {
    param_2[1] = ' ';
  }
  else {
    param_2[1] = cVar1 + '0';
  }
  cVar1 = FUN_004a0820(param_1,3);
  if (cVar1 == '\x0f') {
    param_2[2] = ' ';
  }
  else {
    param_2[2] = cVar1 + '0';
  }
  cVar1 = FUN_004a0820(param_1,2);
  if (cVar1 == '\x0f') {
    param_2[3] = ' ';
  }
  else {
    param_2[3] = cVar1 + '0';
  }
  cVar1 = FUN_004a0820(param_1,1);
  if (cVar1 == '\x0f') {
    param_2[4] = ' ';
  }
  else {
    param_2[4] = cVar1 + '0';
  }
  cVar1 = FUN_004a0820(param_1,0);
  if (cVar1 != '\x0f') {
    param_2[6] = '\0';
    param_2[5] = cVar1 + '0';
    return;
  }
  param_2[5] = ' ';
  param_2[6] = '\0';
  return;
}

