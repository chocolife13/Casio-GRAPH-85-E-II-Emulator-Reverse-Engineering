// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00549710
// entry: 00549710  size: 653


undefined4
FUN_00549710(undefined4 *param_1,undefined4 param_2,int param_3,short param_4,int param_5,
            undefined4 param_6,undefined4 param_7)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  char local_36;
  undefined1 local_35;
  undefined1 local_34;
  undefined1 local_33;
  undefined1 local_32;
  undefined1 local_31;
  short local_30;
  short local_2e;
  uint3 local_2c;
  undefined1 uStack_29;
  uint local_28;
  undefined1 local_24 [12];
  undefined1 local_18 [24];
  
  local_28 = 0;
  FUN_0052f860();
  thunk_FUN_0040add0();
  local_32 = 0x24;
  local_31 = 0;
  local_34 = 0x3f;
  local_33 = 0;
  _local_2c = CONCAT22(stack0xffffffd6,0x31);
  uVar2 = FUN_00488960(param_6,param_7,local_18,0);
  iVar3 = FUN_00486570(uVar2);
  if ((iVar3 == 1) && (iVar3 = FUN_004e4020(local_18), iVar3 == 2)) {
    FUN_004b6ef0(param_2,*param_1);
  }
  else {
    iVar3 = FUN_0052f820();
    while( true ) {
      if (iVar3 == 1) {
        return 1;
      }
      iVar3 = FUN_005495b0(param_1,&local_30,&local_28);
      if (iVar3 == 1) {
        local_35 = 0;
        local_36 = (char)local_30 + '@';
        if (param_4 == 1) {
          if ((local_30 < param_3) || (param_5 + -1 + param_3 < (int)local_30)) {
            if ((local_28 & 1) != 0) {
              FUN_004b7710(param_2,&local_32);
            }
            if (param_3 < local_30) {
              local_30 = local_30 - (short)param_5;
              local_36 = (char)local_30 + '@';
              local_35 = 0;
            }
            FUN_004b6e70(param_2,&local_36);
            if ((local_28 & 2) != 0) {
              FUN_004b7710(param_2,&local_32);
            }
            uVar2 = FUN_0054c7e0((int)local_2e,local_24);
            FUN_004b6e70(param_2,uVar2);
          }
          else {
            FUN_004b6e70(param_2,&local_34);
            FUN_004b6e70(param_2,&local_34);
          }
        }
        else {
          if (param_3 <= local_30) {
            local_30 = local_30 + (short)param_5;
          }
          if (local_30 < 0x1b) {
            cVar1 = (char)local_30;
            if ((local_28 & 1) != 0) {
              FUN_004b7710(param_2,&local_32);
              cVar1 = (char)local_30;
            }
            local_36 = cVar1 + '@';
            local_35 = 0;
            FUN_004b7710(param_2,&local_36);
            if ((local_28 & 2) != 0) {
              FUN_004b7710(param_2,&local_32);
            }
            uVar2 = FUN_0054c7e0((int)local_2e,local_24);
            FUN_004b6e70(param_2,uVar2);
          }
          else {
            FUN_004b7710(param_2,&local_34);
            FUN_004b7710(param_2,&local_34);
          }
        }
      }
      else {
        FUN_004fe330(&local_2c,param_1);
        iVar3 = FUN_004b6ab0(_local_2c);
        if (iVar3 == 0) {
          local_2c._0_2_ = (ushort)(byte)local_2c;
        }
        else {
          local_2c = (uint3)(ushort)local_2c;
        }
        FUN_004b6e70(param_2,&local_2c);
      }
      if ((byte)local_2c == '\0') break;
      iVar3 = FUN_0052f820();
    }
  }
  return 0;
}

