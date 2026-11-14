// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00421f60
// entry: 00421f60  size: 755


int FUN_00421f60(char *param_1,char *param_2,char *param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  char local_44 [8];
  undefined1 local_3c;
  char local_38 [8];
  undefined1 local_30;
  undefined1 local_2c [44];
  
  _strncpy(local_44,param_2,8);
  _strncpy(local_38,param_3,8);
  local_3c = 0;
  local_30 = 0;
  iVar1 = FUN_00421eb0(param_1,s_PROGRAM_005be048);
  if ((iVar1 == 0) || (iVar1 = FUN_00421eb0(param_1,s_S_SHEET_005be040), iVar1 == 0)) {
    return 5;
  }
  if (*param_1 != '@') {
    iVar1 = FUN_00427f30(param_1,0,local_2c,0);
    if (iVar1 == -1) {
      iVar1 = FUN_00427ce0(param_1,0,local_2c,0);
      if (iVar1 == -1) {
        iVar1 = FUN_00427630(param_1,0,local_2c,0);
        if (iVar1 == -1) {
          iVar1 = FUN_004280b0(param_1,0,local_2c,0);
          if (iVar1 == -1) {
            uVar2 = FUN_004b6ca0(s_LIST_005be038);
            iVar1 = FUN_004b79b0(param_1,s_LIST_005be038,uVar2);
            if (iVar1 != 0) {
              return 2;
            }
            iVar1 = FUN_004b6ca0(s_LIST_005be038);
            uVar2 = FUN_0055401d(param_1 + iVar1);
            FUN_0052fbc0(0,uVar2,param_3);
            return 2;
          }
          if (param_4 == 0) {
            FUN_004280b0(param_1,0,local_2c,1);
            iVar1 = 1;
          }
          else {
            iVar1 = FUN_00421ef0(param_1);
            if (iVar1 == 1) {
              FUN_004280b0(param_1,0,local_2c,1);
              return 1;
            }
          }
        }
        else {
          if (param_4 == 0) {
            FUN_00427630(param_1,0,local_2c,1);
            return 1;
          }
          iVar1 = FUN_00421ef0(param_1);
          if (iVar1 == 1) {
            FUN_00427630(param_1,0,local_2c,1);
            return 1;
          }
        }
      }
      else {
        if (param_4 == 0) {
          FUN_00427ce0(param_1,0,local_2c,1);
          return 1;
        }
        iVar1 = FUN_00421ef0(param_1);
        if (iVar1 == 1) {
          FUN_00427ce0(param_1,0,local_2c,1);
          return 1;
        }
      }
    }
    else {
      if (param_4 == 0) {
        FUN_00427f30(param_1,0,local_2c,1);
        return 1;
      }
      iVar1 = FUN_00421ef0(param_1);
      if (iVar1 == 1) {
        FUN_00427f30(param_1,0,local_2c,1);
        return 1;
      }
    }
    return iVar1;
  }
  iVar1 = FUN_00429460(local_44,0,local_2c);
  if ((iVar1 == -1) || (iVar1 = FUN_00421f30(local_44,local_38), iVar1 == 0)) {
    return 2;
  }
  if (param_4 == 0) {
    FUN_00429460(param_1,0,local_2c,1);
    return 1;
  }
  iVar1 = FUN_00421ef0(local_38);
  if (iVar1 != 1) {
    return iVar1;
  }
  FUN_00429460(param_1,0,local_2c,1);
  return 1;
}

