// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0042dde0
// entry: 0042dde0  size: 926


uint FUN_0042dde0(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  short sVar1;
  short sVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  undefined1 local_7c;
  undefined1 uStack_7b;
  undefined2 uStack_7a;
  undefined1 uStack_78;
  undefined1 uStack_77;
  undefined2 uStack_76;
  undefined1 uStack_74;
  undefined1 uStack_73;
  undefined1 local_72;
  undefined1 uStack_71;
  undefined4 local_70;
  uint local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined1 local_58 [12];
  undefined1 local_4c [12];
  undefined1 local_40 [16];
  undefined1 local_30 [16];
  undefined1 local_20 [16];
  undefined1 local_10 [16];
  
  sVar1 = FUN_00401170(param_1);
  sVar2 = FUN_00401170(param_2);
  if (sVar1 == 0xf0) goto LAB_0042e0ed;
  if (sVar2 == 0xf0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    uVar5 = FUN_0042e840(param_1);
    return uVar5;
  }
  uVar3 = FUN_0042cff0(param_1);
  if (uVar3 == 0xf0) goto LAB_0042e0ed;
  uVar4 = FUN_0042cff0(param_2);
  if (uVar4 == 0xf0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    uVar5 = FUN_0042e840(param_1);
    return uVar5;
  }
  if (((uVar3 & 1) != 0) && ((uVar4 & 1) != 0)) {
    uVar5 = FUN_0042f540(3,param_1);
    return uVar5;
  }
  sVar1 = (short)param_3;
  if (sVar1 == 0) {
    local_7c = 1;
    uStack_7b = 0x80;
LAB_0042defc:
    uStack_73 = 0;
    uStack_74 = 0;
    uStack_76 = 0;
    uStack_77 = 0;
    uStack_78 = 0;
    uStack_7a = 0;
    local_72 = 2;
    uStack_71 = 0x10;
  }
  else {
    if (sVar1 != 1) {
      local_7c = 2;
      uStack_7b = 0;
      goto LAB_0042defc;
    }
    FUN_0042f6a0(&local_7c);
  }
  if ((uVar4 & 1) != 0) {
    uVar5 = FUN_0042cf70(param_1);
    if ((uVar5 & 4) != 0) {
      uVar5 = FUN_0042f560(0,param_1);
      return uVar5 & 0xffff0000;
    }
    uVar5 = CONCAT13(uStack_71,CONCAT12(local_72,CONCAT11(uStack_73,uStack_74)));
    *param_1 = CONCAT22(uStack_7a,CONCAT11(uStack_7b,local_7c));
    param_1[1] = CONCAT22(uStack_76,CONCAT11(uStack_77,uStack_78));
    param_1[2] = uVar5;
    return uVar5 & 0xffff0000;
  }
  FUN_0042f560(2,local_4c);
  local_64 = CONCAT22(uStack_7a,CONCAT11(uStack_7b,local_7c));
  local_60 = CONCAT22(uStack_76,CONCAT11(uStack_77,uStack_78));
  local_5c = CONCAT13(uStack_71,CONCAT12(local_72,CONCAT11(uStack_73,uStack_74)));
  FUN_00401000(&local_64,local_20);
  FUN_00401000(local_4c,local_10);
  FUN_0042c4f0(local_20,local_10);
  if ((uVar3 & 1) != 0) {
    FUN_0042f0a0(param_2);
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    FUN_00401000(param_1,local_40);
    FUN_0042c480(local_40,local_20);
    FUN_004016b0(local_40);
    FUN_00401040(local_40,param_1);
    uVar5 = FUN_0042e840(param_1);
    return uVar5;
  }
  local_70 = *param_2;
  local_6c = param_2[1];
  local_68 = param_2[2];
  FUN_00401000(&local_70,local_30);
  FUN_00401000(param_1,local_40);
  FUN_0042c4f0(local_30,local_40);
  FUN_0042fa70(local_30,param_3);
  FUN_004016b0(local_30);
  FUN_00401040(local_30,&local_70);
  if (sVar1 != 1) goto LAB_0042e119;
  FUN_0042f560(1,local_58);
  sVar1 = FUN_0042cfa0(&local_70,local_58);
  if (sVar1 != 0xf0) {
    if ((byte)((byte)param_3 & (byte)sVar1) != 0) {
      FUN_0042f6e0(&local_70);
LAB_0042e119:
      uVar5 = FUN_0042cf70(param_1);
      if ((uVar5 & 4) != 0) {
        *param_1 = local_70;
        param_1[1] = local_6c;
        param_1[2] = local_68;
        return local_6c & 0xffff0000;
      }
      FUN_0042f0a0(param_2);
      FUN_0042ccb0(param_2,&local_7c);
      *param_1 = *param_2;
      param_1[1] = param_2[1];
      param_1[2] = param_2[2];
      uVar5 = FUN_0042ca30(param_1,&local_70);
      return uVar5;
    }
    FUN_0042e640(local_58);
    uVar3 = FUN_0042cfa0(&local_70,local_58);
    if (uVar3 != 0xf0) {
      if ((uVar3 & 1) != 0) {
        FUN_0042f6e0(&local_70);
        FUN_0042e640(&local_70);
      }
      goto LAB_0042e119;
    }
  }
  *param_1 = local_70;
  param_1[1] = local_6c;
  param_1[2] = local_68;
LAB_0042e0ed:
  uVar5 = FUN_0042e840(param_1);
  return uVar5;
}

