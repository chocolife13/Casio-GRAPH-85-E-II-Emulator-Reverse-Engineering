// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00494560
// entry: 00494560  size: 480


undefined4
FUN_00494560(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined1 local_90 [12];
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined1 local_60 [12];
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 local_c [12];
  
  iVar1 = FUN_00515e10(&local_84);
  if (iVar1 != 0) {
    iVar1 = FUN_00515f70(1);
    if (iVar1 != 0) {
      return 4;
    }
    FUN_00515e10(&local_84);
  }
  FUN_004e5780(&local_9c);
  local_84 = *param_1;
  local_54 = *param_3;
  local_80 = param_1[1];
  local_50 = param_3[1];
  local_7c = param_1[2];
  local_78 = *param_2;
  local_4c = param_3[2];
  local_74 = param_2[1];
  local_70 = param_2[2];
  local_48 = *param_4;
  local_64 = local_94;
  local_44 = param_4[1];
  local_34 = local_94;
  local_6c = local_9c;
  local_3c = local_9c;
  local_40 = param_4[2];
  local_68 = local_98;
  local_38 = local_98;
  FUN_004e6b40(&local_78,&local_84,&local_9c);
  FUN_004e7910(&local_9c,&local_9c);
  uVar2 = FUN_004e5070(0x7e,local_90,local_60);
  FUN_004e6d90(&local_9c,uVar2);
  FUN_004e7910(local_60,local_60);
  uVar2 = FUN_004e5070(0x3e,local_90,local_c);
  FUN_004e6d90(&local_9c,uVar2);
  FUN_004e7910(local_c,local_c);
  FUN_004e6b40(&local_48,&local_54,&local_9c);
  uVar2 = FUN_004e5070(0x3e,local_90,&local_9c);
  FUN_004e6d90(&local_9c,uVar2);
  if (((char)(undefined2)local_9c != '\0') || ((char)((ushort)(undefined2)local_9c >> 8) != '\0')) {
    iVar1 = FUN_0051c300(&local_84);
    if (iVar1 == 0) {
      uVar2 = FUN_00515e50(&local_84);
      return uVar2;
    }
  }
  return 0x1c;
}

