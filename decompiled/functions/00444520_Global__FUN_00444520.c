// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00444520
// entry: 00444520  size: 214


void FUN_00444520(int param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5,
                 int param_6)

{
  char cVar1;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_c = 0;
  local_8 = 0;
  local_10 = DAT_005bec04;
  local_4 = 0;
  cVar1 = FUN_00526090(0x2a);
  if (-1 < cVar1) {
    if (cVar1 < '\x02') {
      if ((param_6 == 1) && ((param_1 == 0x21 || (param_1 == 0x1f)))) {
        FUN_004b1f10(param_2,&local_10);
      }
      else {
        FUN_004b1890(param_2,&local_10);
      }
    }
    else if (cVar1 == '\x02') {
      if ((param_6 == 1) && ((param_1 == 0x21 || (param_1 == 0x1f)))) {
        FUN_004b2160(param_2,&local_10);
      }
      else {
        FUN_004b1b70(param_2,&local_10);
      }
    }
  }
  FUN_00523a60(param_4 * 0x1c + 0x11,param_3 * 8 + 0x12,&local_10,param_5);
  return;
}

