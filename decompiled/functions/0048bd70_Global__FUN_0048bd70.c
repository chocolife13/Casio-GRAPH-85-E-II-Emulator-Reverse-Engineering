// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0048bd70
// entry: 0048bd70  size: 428


undefined4 FUN_0048bd70(int param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined1 local_60 [12];
  undefined1 local_54 [12];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  FUN_004e5780(&local_48);
  uStack_c = local_48;
  uStack_18 = local_48;
  uStack_24 = local_48;
  uStack_30 = local_48;
  uStack_3c = local_48;
  uStack_8 = uStack_44;
  uStack_4 = uStack_40;
  uStack_14 = uStack_44;
  uStack_10 = uStack_40;
  uStack_20 = uStack_44;
  uStack_1c = uStack_40;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  uStack_38 = uStack_44;
  uStack_34 = uStack_40;
  if (*(int *)(param_1 + 0x90) == 0) {
    FUN_004e6a00(param_1 + 0x24,param_1 + 0x3c,param_2);
    FUN_004e6dd0(param_2,param_1 + 0x30,param_2);
    FUN_004e7730(param_2,param_2);
    return param_2;
  }
  if ((*(char *)(param_1 + 0x30) == '\0') && (*(char *)(param_1 + 0x31) == '\0')) {
    FUN_004e6dd0(param_1 + 0x3c,param_1 + 0x24,param_2);
    FUN_004e7730(param_2,param_2);
  }
  else {
    local_6c = *(undefined4 *)(param_1 + 0x30);
    uStack_68 = *(undefined4 *)(param_1 + 0x34);
    uStack_64 = *(undefined4 *)(param_1 + 0x38);
    cVar1 = FUN_00526090(0x27);
    if (cVar1 == '\0') {
      FUN_004e57a0(&local_6c);
      FUN_004e6a00(&local_6c,param_1 + 0x18,&local_6c);
      FUN_004e6d00(&local_6c,(undefined4 *)(param_1 + 0x30),&local_6c);
    }
    FUN_004e6d00(param_1 + 0x3c,param_1 + 0x18,local_54);
    FUN_004e6b80(&local_6c,local_54,local_54);
    FUN_004e6d00(param_1 + 0x24,param_1 + 0x18,local_60);
    FUN_004e6a00(&local_6c,local_60,local_60);
    FUN_004e6dd0(local_54,local_60,param_2);
  }
  FUN_004e7430(param_2,param_2);
  FUN_0048e6c0(param_1 + 0x18,local_60);
  FUN_004e6dd0(param_2,local_60,param_2);
  return param_2;
}

