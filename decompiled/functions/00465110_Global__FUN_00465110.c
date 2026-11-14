// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00465110
// entry: 00465110  size: 246


void FUN_00465110(undefined4 param_1,undefined4 param_2,undefined1 param_3,undefined1 param_4,
                 int param_5)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 local_24;
  undefined1 local_23;
  char local_22 [4];
  char local_1e [30];
  
  cVar1 = FUN_00526090(0x1b);
  if (cVar1 != '\x01') {
    local_24 = param_3;
    local_23 = 0x3d;
    iVar2 = FUN_004e4020(param_1);
    if (iVar2 == 0) {
      uVar3 = FUN_004b1d20(param_1,local_22);
      FUN_0051f5a0(uVar3);
    }
    else {
      local_22[0] = s_ERROR_005a8cfc[0];
      local_22[1] = s_ERROR_005a8cfc[1];
      local_22[2] = s_ERROR_005a8cfc[2];
      local_22[3] = s_ERROR_005a8cfc[3];
      local_1e[0] = s_ERROR_005a8cfc[4];
      local_1e[1] = s_ERROR_005a8cfc[5];
    }
    FUN_0051ea40(&local_24,0x10);
    FUN_00523a20(1,8,&local_24,0x20);
    if (param_5 != 1) {
      local_24 = param_4;
      local_23 = 0x3d;
      iVar2 = FUN_004e4020(param_2);
      if (iVar2 == 0) {
        uVar3 = FUN_004b1d20(param_2,local_22);
        FUN_0051f5a0(uVar3);
      }
      else {
        local_22[0] = s_ERROR_005a8cfc[0];
        local_22[1] = s_ERROR_005a8cfc[1];
        local_22[2] = s_ERROR_005a8cfc[2];
        local_22[3] = s_ERROR_005a8cfc[3];
        local_1e[0] = s_ERROR_005a8cfc[4];
        local_1e[1] = s_ERROR_005a8cfc[5];
      }
      FUN_0051ea40(&local_24,0x10);
      FUN_00523a20(0x11,8,&local_24,0x20);
    }
  }
  return;
}

