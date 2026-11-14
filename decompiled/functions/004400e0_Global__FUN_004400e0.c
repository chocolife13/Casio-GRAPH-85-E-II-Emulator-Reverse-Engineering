// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004400e0
// entry: 004400e0  size: 429


undefined4
FUN_004400e0(int param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  char local_24;
  byte local_23;
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  FUN_004426c0(1,&local_24);
  FUN_004427c0(0x11d,&local_24);
  if (local_24 == '\x10') {
    if (local_23 < 0x10) {
      iVar1 = FUN_004e50a0(&local_24);
    }
    else {
LAB_00440135:
      iVar1 = -1;
    }
  }
  else {
    if ((local_24 != '\0') || (local_23 != 0)) goto LAB_00440135;
    iVar1 = 0;
  }
  if (param_3 == 1) {
    if (iVar1 != 0) {
      iVar1 = 1;
      goto LAB_0044026a;
    }
  }
  else {
    if (param_3 != 2) {
      if (param_3 == 3) {
        if (iVar1 == 0) {
LAB_004401af:
          FUN_00440290(1,param_1,param_2,param_4,param_5);
          FUN_00440410();
          FUN_004426c0(2,local_18);
          FUN_004426c0(1,local_c);
          iVar1 = FUN_004e7210(local_18,local_c);
          if (iVar1 == 0) {
            return 1;
          }
          FUN_00440290(2,param_1 + 1,param_2,param_4,param_5);
          FUN_00440410();
          return 2;
        }
        if (iVar1 != 1) goto LAB_00440265;
      }
      else {
        if (param_3 != 4) {
          if (param_3 == 0) {
            FUN_004427c0(0x11d,&local_24);
            return 0;
          }
          goto LAB_0044026a;
        }
        if (iVar1 == 1) goto LAB_004401af;
        if (iVar1 != 2) {
          iVar1 = 3;
          goto LAB_0044026a;
        }
      }
      uVar2 = 2;
      goto LAB_00440170;
    }
    if (iVar1 != 1) {
LAB_00440265:
      iVar1 = 2;
LAB_0044026a:
      uVar2 = FUN_004e5070(iVar1,local_18);
      FUN_004427c0(0x11d,uVar2);
      return 0;
    }
  }
  uVar2 = 1;
LAB_00440170:
  FUN_00440290(uVar2,param_1,param_2,param_4,param_5);
  FUN_00440410();
  return 1;
}

