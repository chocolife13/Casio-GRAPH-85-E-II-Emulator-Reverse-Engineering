// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004d7cb0
// entry: 004d7cb0  size: 331


int FUN_004d7cb0(int param_1,int *param_2,undefined4 *param_3,undefined4 *param_4,
                undefined4 *param_5,int param_6)

{
  int iVar1;
  byte local_18;
  char local_17;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if (param_6 == 0x7626) {
    local_c = *param_3;
    local_8 = param_3[1];
    local_4 = param_3[2];
  }
  param_3 = (undefined4 *)0x6;
  do {
    iVar1 = FUN_004d7e00(param_4,param_5,param_3);
    if (iVar1 != 0) break;
    iVar1 = *param_2;
    if ((*(byte *)(iVar1 * 0x20 + 0x19 + *(int *)(param_1 + 0x8dc)) & 1) == 0) {
      iVar1 = FUN_0050ebc0(param_5,&local_18,param_1,iVar1,param_2[1]);
      if (iVar1 != 0) {
        return iVar1;
      }
LAB_004d7d78:
      if (param_6 != 0x7620) goto LAB_004d7d82;
    }
    else {
      iVar1 = FUN_0050f060(param_5,&local_18,param_1,iVar1,param_2[1]);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (param_6 != 0x7624) goto LAB_004d7d78;
      iVar1 = FUN_0050f060(param_5,&local_c,param_1,param_2[2],param_2[3]);
      if (iVar1 != 0) {
        return iVar1;
      }
LAB_004d7d82:
      FUN_004e6b40(&local_18,&local_c,&local_18);
    }
    if ((local_18 == 0) && (local_17 == '\0')) {
      return 0;
    }
    if (((local_18 & 0xf0) == 0xf0) && (local_17 != '\x1d')) {
      return 0x15;
    }
    param_3 = (undefined4 *)((int)param_3 + 5);
  } while ((int)param_3 < 0xc);
  *param_5 = *param_4;
  param_5[1] = param_4[1];
  param_5[2] = param_4[2];
  return -1;
}

