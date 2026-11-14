// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0048ce10
// entry: 0048ce10  size: 263


int FUN_0048ce10(int param_1,char *param_2)

{
  int iVar1;
  undefined1 local_c [12];
  
  iVar1 = FUN_0048d360(param_1);
  if (iVar1 == 0) {
    iVar1 = FUN_0048cf20(param_1,param_2);
    if (iVar1 == 1) {
      if ((*(byte *)(param_1 + 0x90) & 0x40) != 0) {
        FUN_004e6d00(param_1 + 0xc,param_1 + 0x30,param_2);
        if ((*param_2 == '\0') && (param_2[1] == '\0')) {
          FUN_004e6dd0(param_1 + 0x3c,param_1 + 0x24,param_2);
          FUN_004e7730(param_2,param_2);
          FUN_004e57a0(local_c);
          FUN_004e6dd0(local_c,param_1 + 0xc,local_c);
          FUN_004e6fb0(local_c,param_2,param_2);
          FUN_004e57a0(local_c);
          FUN_004e6b80(param_2,local_c,param_2);
          FUN_004e7730(local_c,local_c);
          iVar1 = FUN_00469e60(param_2,local_c);
          if (iVar1 < 1) {
            return 3;
          }
          FUN_004e7be0(param_2,param_2,2);
          return 0;
        }
      }
      iVar1 = 1;
    }
  }
  return iVar1;
}

