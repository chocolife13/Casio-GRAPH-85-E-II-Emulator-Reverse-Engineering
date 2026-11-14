// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005499a0
// entry: 005499a0  size: 790


undefined4
FUN_005499a0(undefined4 *param_1,undefined4 param_2,int param_3,int param_4,uint param_5,
            undefined4 param_6,uint param_7)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 local_36;
  undefined1 local_35;
  undefined1 local_34;
  undefined1 local_33;
  char local_32;
  undefined1 local_31;
  undefined2 local_30;
  short local_2e;
  uint3 local_2c;
  undefined1 uStack_29;
  uint local_28;
  undefined1 local_24 [12];
  undefined1 local_18 [24];
  
  local_28 = 0;
  FUN_0052f860();
  thunk_FUN_0040add0();
  local_30 = 0;
  local_2e = 0;
  uVar2 = FUN_004b6ca0(*param_1);
  local_34 = 0x24;
  local_33 = 0;
  local_36 = 0x3f;
  local_35 = 0;
  _local_2c = CONCAT31(stack0xffffffd5,0x31);
  local_32 = '\0';
  uVar3 = FUN_00488960(param_6,param_7,local_18,0);
  iVar4 = FUN_00486570(uVar3);
  if ((iVar4 == 1) && (iVar4 = FUN_004e4020(local_18), iVar4 == 2)) {
    FUN_004b6ef0(param_2,*param_1);
    return 0;
  }
  iVar4 = FUN_0052f820();
  param_7 = uVar2;
  do {
    if (iVar4 == 1) {
      return 1;
    }
    iVar4 = FUN_005495b0(param_1,&local_30,&local_28);
    if (iVar4 == 1) {
      local_31 = 0;
      local_32 = (char)local_30 + '@';
      iVar4 = (int)local_2e;
      if (param_4 == 1) {
        if ((iVar4 < param_3) || ((int)(param_3 + -1 + param_5) < iVar4)) {
          iVar1 = param_3 + -1 + param_5;
          if (-1 < (int)(iVar4 - ((iVar4 <= iVar1) - 1 & param_5))) {
            if ((local_28 & 1) != 0) {
              FUN_004b6e70(param_2,&local_34);
            }
            FUN_004b6e70(param_2,&local_32);
            if (iVar1 < local_2e) {
              local_2e = local_2e - (short)param_5;
            }
            if ((local_28 & 2) != 0) {
              FUN_004b6e70(param_2,&local_34);
            }
            goto LAB_00549b48;
          }
          FUN_004b6e70(param_2,&local_36);
          FUN_004b6e70(param_2,&local_36);
        }
        else {
          FUN_004b6e70(param_2,&local_36);
          FUN_004b6e70(param_2,&local_36);
        }
      }
      else if ((int)(iVar4 + ((iVar4 < param_3) - 1 & param_5)) < 1000) {
        if ((local_28 & 1) != 0) {
          FUN_004b6e70(param_2,&local_34);
        }
        FUN_004b6e70(param_2,&local_32);
        iVar4 = (int)local_2e;
        if (param_3 <= iVar4) {
          if (((((local_2e < 1) || (9 < local_2e)) || ((int)(iVar4 + param_5) < 10)) ||
              (99 < (int)(iVar4 + param_5))) &&
             (((local_2e < 10 || (99 < local_2e)) || ((int)(iVar4 + param_5) < 100)))) {
            if (((0 < local_2e) && (local_2e < 10)) && (99 < (int)(iVar4 + param_5))) {
              param_7 = param_7 + 2;
            }
          }
          else {
            param_7 = param_7 + 1;
          }
          if (0xff < param_7) {
            return 4;
          }
          local_2e = local_2e + (short)param_5;
        }
        if ((local_28 & 2) != 0) {
          FUN_004b6e70(param_2,&local_34);
        }
LAB_00549b48:
        uVar3 = FUN_0054c7e0((int)local_2e,local_24);
        FUN_004b6e70(param_2,uVar3);
      }
      else {
        FUN_004b6e70(param_2,&local_36);
        FUN_004b6e70(param_2,&local_36);
      }
    }
    else {
      FUN_004fe330(&local_2c,param_1);
      iVar4 = FUN_004b6ab0(_local_2c);
      if (iVar4 == 0) {
        local_2c._0_2_ = (ushort)(byte)local_2c;
      }
      else {
        local_2c = (uint3)(ushort)local_2c;
      }
      FUN_004b6e70(param_2,&local_2c);
    }
    if ((byte)local_2c == '\0') {
      return 0;
    }
    iVar4 = FUN_0052f820();
  } while( true );
}

