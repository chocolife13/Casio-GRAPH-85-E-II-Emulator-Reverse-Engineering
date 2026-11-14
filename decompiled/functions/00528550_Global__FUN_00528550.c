// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00528550
// entry: 00528550  size: 334


undefined4 FUN_00528550(undefined4 param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int local_3c;
  int local_38;
  undefined1 local_34 [4];
  undefined1 local_30 [4];
  undefined1 local_2c [12];
  undefined1 local_20 [8];
  undefined2 local_18;
  undefined1 local_10 [8];
  uint local_8;
  
  FUN_004ad550(local_30,local_34,&local_38);
  local_18 = *(undefined2 *)(param_3 + 2);
  FUN_004b6ef0(local_20,0);
  FUN_0052fbc0(param_1,param_2,local_2c);
  cVar1 = FUN_004ad2a0(5,local_2c,&local_3c);
  if (cVar1 == '\0') {
    cVar1 = FUN_004ad3f0(1,0x10,local_10);
    if (cVar1 != '\0') {
      return 4;
    }
    FUN_004b71f0(local_20,local_10,8);
    local_8 = local_8 & 0xffff;
    if (local_8 * 0xc < local_3c - 0x10U) {
      local_8 = local_8 * 2;
    }
    if (local_8 != 0) {
      uVar3 = (uint)*(ushort *)(param_3 + 2);
      iVar2 = FUN_004e4000(param_3);
      if (iVar2 == 1) {
        uVar3 = uVar3 * 2;
      }
      if (local_38 + local_8 * 0xc < (uVar3 & 0xffff) * 0xc) {
        return 4;
      }
      FUN_004ac5a0(5,local_2c);
    }
  }
  cVar1 = FUN_004ad8f0(5,local_2c,*(undefined4 *)(param_3 + 8),0,0);
  if (cVar1 == '\0') {
    cVar1 = FUN_004abeb0(0x10,local_20,0);
    if (cVar1 == '\0') {
      return 0;
    }
  }
  else {
    FUN_004fd9e0(param_3);
  }
  FUN_004ac5a0(5,local_2c);
  return 4;
}

