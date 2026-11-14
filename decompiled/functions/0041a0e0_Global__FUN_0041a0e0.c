// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0041a0e0
// entry: 0041a0e0  size: 696


undefined4 FUN_0041a0e0(int param_1,int param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  undefined2 local_4c;
  undefined2 local_4a;
  undefined2 local_48;
  undefined2 local_46;
  undefined2 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined2 local_38;
  undefined2 local_36;
  undefined2 local_34;
  undefined2 local_32;
  undefined2 local_30;
  undefined2 local_2e;
  undefined2 local_2c;
  undefined2 local_2a;
  undefined2 local_28;
  undefined2 local_26;
  undefined2 local_24;
  undefined2 local_22;
  undefined2 local_20;
  undefined2 local_1c;
  undefined2 local_1a;
  undefined2 local_18;
  undefined2 local_16;
  undefined2 local_14;
  undefined2 local_12;
  undefined2 local_10;
  undefined2 local_e;
  undefined2 local_c;
  undefined2 local_a;
  undefined2 local_8;
  undefined2 local_6;
  undefined2 local_4;
  
  local_38 = 0;
  local_36 = 0;
  local_34 = 0;
  local_32 = 0;
  local_30 = 0;
  local_2e = 0;
  local_2c = 0;
  local_2a = 0;
  local_28 = 0;
  local_26 = 0;
  local_24 = 0;
  local_22 = 0;
  local_20 = 0;
  local_40 = 0;
  local_3c = 0;
  local_1c = 0x45;
  local_1a = 0x41;
  local_18 = 0x43;
  local_16 = 0x54;
  local_14 = 0x57;
  local_12 = 0x4f;
  local_10 = 0x52;
  local_e = 0x4b;
  local_c = 0x2e;
  local_a = 0x74;
  local_8 = 0x6d;
  local_6 = 0x70;
  local_4 = 0;
  local_4c = 0x2e;
  local_4a = 0;
  local_48 = 0x2e;
  local_46 = 0x2e;
  local_44 = 0;
  if (param_2 == 0) {
    FUN_0042a4c0(&local_38,param_1,0xc);
  }
  else {
    iVar1 = FUN_0042ac10(param_1,0x5c);
    param_3 = (uint)(param_1 + 0xc == iVar1);
    iVar1 = FUN_0042ac10(param_1,0x5c,0xc);
    FUN_0042a4c0(&local_38,iVar1 + 2);
  }
  iVar1 = FUN_0042ac10(param_1,0x2e);
  if (iVar1 == 0) {
    iVar1 = FUN_0042a410(&local_38);
    if (iVar1 == 1) {
      iVar1 = FUN_0042a440(&local_38,&local_4c);
      if (iVar1 != 0) {
        return 8;
      }
    }
    else if ((iVar1 == 2) && (iVar1 = FUN_0042a440(&local_38,&local_48), iVar1 != 0)) {
      return 9;
    }
  }
  else {
    iVar2 = FUN_0042a410(iVar1 + 2);
    if (iVar2 == 3) {
      FUN_0042a4c0(&local_40,iVar1 + 2,3);
      FUN_0042ab70(&local_40,2);
      if ((local_40 & 0xffff) == 0x67) {
        if ((local_40._2_2_ == 0x31) && (local_3c._2_2_ == 0)) {
          switch(local_3c & 0xffff) {
          case 0x61:
            if (param_3 != 0) {
              return 2;
            }
            break;
          case 0x65:
            return 3;
          case 0x6c:
            if (param_3 != 0) {
              return 4;
            }
            break;
          case 0x6d:
            return 6;
          case 0x6e:
            if (param_3 != 0) {
              return 5;
            }
          }
        }
      }
      else if (((((local_40 & 0xffff) == 0x74) && (local_40._2_2_ == 0x6d)) &&
               ((short)local_3c == 0x70)) &&
              (((local_3c._2_2_ == 0 && (param_3 != 0)) &&
               (iVar1 = FUN_0042a440(&local_38,&local_1c), iVar1 != 0)))) {
        return 7;
      }
    }
  }
  return 1;
}

