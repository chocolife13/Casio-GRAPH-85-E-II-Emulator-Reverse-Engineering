// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00410f60
// entry: 00410f60  size: 365


int FUN_00410f60(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 local_41;
  int local_40;
  undefined1 local_3c [4];
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  undefined1 local_30 [4];
  undefined1 local_2c [8];
  char local_24 [4];
  char local_20 [4];
  undefined1 local_1c [8];
  undefined1 local_14 [8];
  char local_c [4];
  char local_8 [4];
  char local_4;
  
  local_24 = (char  [4])s_val_ren_005abd0c._0_4_;
  local_c = (char  [4])s__APLWORK_005abd00._0_4_;
  local_8 = (char  [4])s__APLWORK_005abd00._4_4_;
  local_20 = (char  [4])s_val_ren_005abd0c._4_4_;
  local_4 = s__APLWORK_005abd00[8];
  iVar1 = FUN_00411e00(param_2,local_1c,2);
  if (iVar1 == 0) {
    iVar1 = FUN_00411e00(param_3,local_14,2);
    if (iVar1 == 0) {
      iVar1 = FUN_00411e00(param_1,local_2c,2);
      if (iVar1 == 0) {
        iVar1 = FUN_004103d0(local_2c,local_34,&local_41);
        if (iVar1 == 0) {
          iVar1 = FUN_004105d0(local_2c,local_1c,&param_2,&local_40,local_38,local_3c);
          if (iVar1 != 0) {
            return 0x30;
          }
          if ((*(byte *)(local_40 + 0x11) & 1) != 0) {
            return 0x32;
          }
          if ((*(byte *)(local_40 + 0x11) & 6) != 0) {
            return 0x34;
          }
          iVar1 = FUN_004105d0(local_2c,local_14,&param_2,local_30,local_38,local_3c);
          if (iVar1 == 0) {
            return 0x31;
          }
          iVar1 = FUN_004110d0(local_2c,local_1c,local_c,local_24);
          if (iVar1 == 0) {
            iVar1 = FUN_004110d0(local_c,local_24,local_2c,local_14);
          }
        }
      }
    }
  }
  return iVar1;
}

