// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004b89d0
// entry: 004b89d0  size: 169


char FUN_004b89d0(undefined4 param_1)

{
  char cVar1;
  int local_c;
  char local_8 [4];
  char local_4 [4];
  
  local_8 = (char  [4])s_RANGE_005be200._0_4_;
  local_4._0_2_ = s_RANGE_005be200._4_2_;
  cVar1 = FUN_004aceb0(s__TABLE_005be208,local_8,1);
  if (cVar1 != '\0') {
    return cVar1;
  }
  cVar1 = FUN_004ad350(s__TABLE_005be208,local_8,&local_c);
  if (cVar1 != '\0') {
    return cVar1;
  }
  if (local_c == 0) {
    return 'A';
  }
  cVar1 = FUN_004ad3f0(0,local_c,param_1);
  if (cVar1 != '\0') {
    return cVar1;
  }
  return '\0';
}

