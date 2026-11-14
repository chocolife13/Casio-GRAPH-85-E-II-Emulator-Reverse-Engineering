// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00434d40
// entry: 00434d40  size: 210


undefined4 FUN_00434d40(char *param_1,undefined4 param_2,uint param_3,uint param_4)

{
  ulonglong uVar1;
  uint uVar2;
  
  uVar2 = param_3 / 100;
  if (uVar2 == 0) {
    *param_1 = ' ';
  }
  else {
    *param_1 = (char)uVar2 + '0';
  }
  uVar1 = ((ulonglong)param_3 % 100) / 10;
  if (((int)uVar1 == 0) && (uVar2 == 0)) {
    param_1[1] = ' ';
  }
  else {
    param_1[1] = (char)uVar1 + '0';
  }
  param_1[3] = -0x57;
  param_1[2] = (char)(((ulonglong)param_3 % 100) % 10) + '0';
  uVar2 = param_4 / 100;
  if (uVar2 == 0) {
    param_1[4] = ' ';
  }
  else {
    param_1[4] = (char)uVar2 + '0';
  }
  uVar1 = (ulonglong)param_4 % 100;
  if (((int)(uVar1 / 10) == 0) && (uVar2 == 0)) {
    param_1[5] = ' ';
  }
  else {
    param_1[5] = (char)(uVar1 / 10) + '0';
  }
  param_1[7] = ' ';
  param_1[8] = '\0';
  param_1[6] = (char)(uVar1 % 10) + '0';
  return (int)(uVar1 / 10);
}

