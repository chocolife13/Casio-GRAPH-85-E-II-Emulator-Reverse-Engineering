// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00410c90
// entry: 00410c90  size: 361


int FUN_00410c90(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 local_20 [8];
  undefined1 local_18 [8];
  undefined1 local_10 [8];
  undefined1 local_8 [8];
  
  iVar1 = FUN_00411e00(param_2,local_20,2);
  if (iVar1 == 0) {
    iVar1 = FUN_00411e00(param_1,local_18,2);
    if (iVar1 == 0) {
      iVar1 = FUN_00411e00(param_4,local_10,2);
      if (iVar1 == 0) {
        iVar1 = FUN_00411e00(param_3,local_8,2);
        if (iVar1 == 0) {
          iVar1 = FUN_004105d0(local_18,local_20,&local_2c,&local_30,&local_28,&param_2);
          if (iVar1 == 0) {
            if ((*(byte *)(local_30 + 0x11) & 6) != 0) {
              return 0x34;
            }
            iVar1 = FUN_004106b0(local_8,local_10,local_2c,param_2,local_28);
            if (iVar1 == 0) {
              iVar1 = FUN_004105d0(local_18,local_20,&local_2c,&local_30,&local_28,&param_2);
              if (iVar1 != 0) {
                return 0xff;
              }
              iVar1 = FUN_004105d0(local_8,local_10,&local_2c,&local_30,&local_24,&param_2);
              if (iVar1 == 0) {
                FUN_00410210(local_24,local_28,param_2);
              }
            }
          }
        }
      }
    }
  }
  return iVar1;
}

