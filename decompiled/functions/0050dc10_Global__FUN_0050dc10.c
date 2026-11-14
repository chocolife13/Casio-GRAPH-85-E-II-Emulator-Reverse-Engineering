// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0050dc10
// entry: 0050dc10  size: 632


undefined1 FUN_0050dc10(int param_1)

{
  int iVar1;
  undefined1 uVar2;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 local_30 [12];
  undefined1 local_24 [12];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  uVar2 = 0;
  FUN_004e5780(local_30);
  switch(param_1 + -1) {
  case 0:
  case 1:
  case 2:
  case 3:
    FUN_0052f760(0x41,&local_18);
    if (local_18._1_1_ == '\0') {
      return 1;
    }
    break;
  case 4:
    FUN_0052f760(0x52,&local_18);
    local_48 = local_18;
    local_44 = local_14;
    local_40 = local_10;
    iVar1 = FUN_004e72d0(&local_48,local_30);
    if (iVar1 != 0) {
      return 1;
    }
    break;
  case 5:
    FUN_0052f760(0x41,&local_18);
    local_48 = local_18;
    local_44 = local_14;
    local_40 = local_10;
    iVar1 = FUN_004e72d0(&local_48,local_30);
    if (iVar1 == 0) {
      FUN_0052f760(0x42,&local_18);
      local_48 = local_18;
      local_44 = local_14;
      local_40 = local_10;
      FUN_00481c40(&local_48,&local_48,local_24);
      FUN_0052f760(0x43,&local_18);
      local_48 = local_18;
      local_44 = local_14;
      local_40 = local_10;
      FUN_00481c40(&local_48,&local_48,&local_3c);
      FUN_00481c70(local_24,&local_3c,local_24);
      FUN_0052f760(0x41,&local_18);
      local_3c = local_18;
      local_38 = local_14;
      local_34 = local_10;
      FUN_0052f760(0x44,&local_18);
      local_48 = local_18;
      local_44 = local_14;
      local_40 = local_10;
      FUN_00481c40(&local_3c,&local_48,&local_3c);
      FUN_004e57a0(&local_48);
      local_48._0_2_ = CONCAT11(4,(undefined1)local_48);
      FUN_00481c40(&local_3c,&local_48,&local_3c);
      iVar1 = FUN_004e72d0(local_24,&local_3c);
      if (iVar1 == 0) {
        return 0;
      }
      return 1;
    }
    goto LAB_0050de7f;
  case 6:
  case 7:
  case 8:
    FUN_0052f760(0x41,&local_18);
    local_48 = local_18;
    local_44 = local_14;
    local_40 = local_10;
    iVar1 = FUN_004e72d0(&local_48,local_30);
    if (iVar1 == 0) {
      FUN_0052f760(0x42,&local_18);
      local_48 = local_18;
      local_44 = local_14;
      local_40 = local_10;
      iVar1 = FUN_004e72d0(&local_48,local_30);
      if (iVar1 == 0) {
        return 0;
      }
    }
LAB_0050de7f:
    uVar2 = 1;
  }
  return uVar2;
}

