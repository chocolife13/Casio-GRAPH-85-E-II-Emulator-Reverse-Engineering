// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004f1180
// entry: 004f1180  size: 1136


undefined4 FUN_004f1180(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  char local_c0;
  char local_bf;
  undefined1 local_b4 [12];
  undefined1 local_a8 [12];
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined1 local_90 [12];
  undefined1 local_84 [12];
  undefined1 local_78 [24];
  undefined1 local_60 [12];
  undefined1 local_54 [12];
  undefined1 local_48 [60];
  undefined1 local_c [12];
  
  FUN_004e5780(local_90);
  iVar1 = FUN_004f5850(param_1,param_2,param_3,3);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = FUN_00516d40(param_3);
  if (iVar1 != 0) {
    uVar2 = FUN_004f58f0(iVar1,param_3);
    return uVar2;
  }
  iVar1 = FUN_004e71d0(param_3,local_90);
  if (iVar1 != 0) {
    uVar2 = FUN_00501ed0(param_3);
    return uVar2;
  }
  local_9c = *param_3;
  local_98 = param_3[1];
  local_94 = param_3[2];
  iVar1 = FUN_004f5290(param_2,param_3,0);
  if (iVar1 != 0) {
    iVar1 = FUN_004f5850(param_1,param_2,param_3,3);
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = FUN_00516d40(param_3);
    if (iVar1 != 0) {
      uVar2 = FUN_004f58f0(iVar1,param_3);
      return uVar2;
    }
  }
  iVar1 = FUN_004e71d0(param_3,local_90);
  if (iVar1 != 0) {
    uVar2 = FUN_00501ed0(param_3);
    return uVar2;
  }
  iVar1 = FUN_00515e10(local_84);
  if (iVar1 != 0) {
    uVar2 = FUN_00501ef0(param_3);
    return uVar2;
  }
  FUN_004e69c0(local_78,local_84,&local_c0);
  FUN_004e7910(&local_c0,&local_c0);
  uVar2 = FUN_004e57c0(local_b4,&local_c0);
  FUN_004e6d90(&local_c0,uVar2);
  FUN_004e7910(&local_c0,local_a8);
  FUN_004e6b40(local_78,local_84,&local_c0);
  FUN_004e7910(&local_c0,&local_c0);
  FUN_004e6d90(&local_c0,local_b4,&local_c0);
  FUN_004e7910(&local_c0,&local_c0);
  FUN_004e6d90(&local_c0,&local_9c,&local_c0);
  FUN_004e7910(&local_c0,&local_c0);
  FUN_004e6b40(local_a8,&local_c0,local_84);
  FUN_004e7910(local_84,local_84);
  FUN_004e69c0(local_a8,&local_c0,local_78);
  FUN_004e7910(local_78,local_78);
  FUN_004e69c0(local_48,local_54,&local_c0);
  FUN_004e7910(&local_c0,&local_c0);
  FUN_004e6d90(&local_c0,local_b4,&local_c0);
  FUN_004e7910(&local_c0,local_a8);
  FUN_004e6b40(local_48,local_54,&local_c0);
  FUN_004e7910(&local_c0,&local_c0);
  FUN_004e6d90(&local_c0,local_b4,&local_c0);
  FUN_004e7910(&local_c0,&local_c0);
  FUN_004e6d90(&local_c0,param_3,&local_c0);
  FUN_004e7910(&local_c0,&local_c0);
  FUN_004e6b40(local_a8,&local_c0,local_54);
  FUN_004e7910(local_54,local_54);
  FUN_004e69c0(local_a8,&local_c0,local_48);
  FUN_004e7910(local_48,local_48);
  FUN_004e6b40(local_78,local_84,&local_c0);
  FUN_004e7910(&local_c0,&local_c0);
  uVar2 = FUN_004e5070(0x7e,local_b4,local_60);
  FUN_004e6d90(&local_c0,uVar2);
  FUN_004e7910(local_60,local_60);
  uVar2 = FUN_004e5070(0x3e,local_b4,local_c);
  FUN_004e6d90(&local_c0,uVar2);
  FUN_004e7910(local_c,local_c);
  FUN_004e6b40(local_48,local_54,&local_c0);
  uVar2 = FUN_004e5070(0x3e,local_b4,&local_c0);
  FUN_004e6d90(&local_c0,uVar2);
  if ((local_c0 != '\0') || (local_bf != '\0')) {
    iVar1 = FUN_0051c300(local_84);
    if (iVar1 == 0) {
      FUN_00515e50(local_84);
      FUN_004f3c40(0);
      return 1;
    }
  }
  return 0x1c;
}

