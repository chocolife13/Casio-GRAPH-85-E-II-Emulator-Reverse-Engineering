// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0052f8a0
// entry: 0052f8a0  size: 714


int FUN_0052f8a0(char param_1,int param_2)

{
  undefined4 uVar1;
  undefined1 local_6c;
  undefined1 local_6b;
  undefined1 local_6a;
  undefined1 local_69;
  undefined1 local_68;
  undefined1 local_67;
  undefined1 local_64 [8];
  undefined1 local_5c;
  undefined1 local_5b;
  undefined1 local_5a;
  undefined1 local_59;
  undefined1 local_58;
  undefined1 local_57;
  undefined1 local_56;
  undefined1 local_55;
  undefined1 local_54;
  undefined1 local_53;
  undefined1 local_52;
  undefined1 local_51;
  undefined1 local_50;
  undefined1 local_4f;
  undefined1 local_4e;
  undefined1 local_4d;
  undefined1 local_4c;
  undefined1 local_48;
  undefined1 local_47;
  undefined1 local_46;
  undefined1 local_45;
  undefined1 local_44;
  undefined1 local_43;
  undefined1 local_42;
  undefined1 local_41;
  undefined1 local_40;
  undefined1 local_3c;
  undefined1 local_3b;
  undefined1 local_3a;
  undefined1 local_39;
  undefined1 local_38;
  undefined1 local_37;
  undefined1 local_36;
  undefined1 local_35;
  undefined1 local_34;
  undefined1 local_30;
  undefined1 local_2f;
  undefined1 local_2e;
  undefined1 local_2d;
  undefined1 local_2c;
  undefined1 local_2b;
  undefined1 local_2a;
  undefined1 local_29;
  undefined1 local_28;
  undefined1 local_24;
  undefined1 local_23;
  undefined1 local_22;
  undefined1 local_21;
  undefined1 local_20;
  undefined1 local_1f;
  undefined1 local_1e;
  undefined1 local_1d;
  undefined1 local_1c;
  undefined1 local_18;
  undefined1 local_17;
  undefined1 local_16;
  undefined1 local_15;
  undefined1 local_14;
  undefined1 local_13;
  undefined1 local_12;
  undefined1 local_11;
  undefined1 local_10;
  undefined1 local_c;
  undefined1 local_b;
  undefined1 local_a;
  undefined1 local_9;
  undefined1 local_8;
  undefined1 local_7;
  undefined1 local_6;
  undefined1 local_5;
  undefined1 local_4;
  
  local_59 = 0x5f;
  local_69 = 0x5f;
  local_5c = 0x4d;
  local_5b = 0x41;
  local_5a = 0x54;
  local_58 = 0x41;
  local_57 = 0x4e;
  local_56 = 0x53;
  local_55 = 0;
  local_6c = 0x4d;
  local_6b = 0x41;
  local_6a = 0x54;
  local_68 = 0x41;
  local_67 = 0;
  local_54 = 0x50;
  local_53 = 0x4f;
  local_52 = 0x4c;
  local_51 = 0x59;
  local_50 = 0x43;
  local_4f = 0x4f;
  local_4e = 0x45;
  local_4d = 0x46;
  local_4c = 0;
  local_48 = 0x50;
  local_47 = 0x4f;
  local_46 = 0x4c;
  local_45 = 0x59;
  local_44 = 0x52;
  local_43 = 0x53;
  local_42 = 0x4c;
  local_41 = 0x54;
  local_40 = 0;
  local_3c = 0x53;
  local_3b = 0x49;
  local_3a = 0x4d;
  local_39 = 0x4c;
  local_38 = 0x43;
  local_37 = 0x4f;
  local_36 = 0x45;
  local_35 = 0x46;
  local_34 = 0;
  local_30 = 0x53;
  local_2f = 0x49;
  local_2e = 0x4d;
  local_2d = 0x4c;
  local_2c = 0x52;
  local_2b = 0x53;
  local_2a = 0x4c;
  local_29 = 0x54;
  local_28 = 0;
  local_24 = 0x50;
  local_23 = 0x4f;
  local_22 = 0x4c;
  local_21 = 0x59;
  local_20 = 0x4d;
  local_1f = 0x55;
  local_1e = 0x4c;
  local_1d = 0x54;
  local_1c = 0;
  local_18 = 0x47;
  local_17 = 0x52;
  local_16 = 0x41;
  local_15 = 0x50;
  local_14 = 0x48;
  local_13 = 0x54;
  local_12 = 0x42;
  local_11 = 0x4c;
  local_10 = 0;
  local_c = 0x52;
  local_b = 0x45;
  local_a = 0x43;
  local_9 = 0x55;
  local_8 = 0x52;
  local_7 = 0x54;
  local_5 = 0x4c;
  local_6 = 0x42;
  local_4 = 0;
  switch(param_1) {
  case '\0':
    FUN_004b6ef0(param_2,&local_5c);
    return param_2;
  case '\x01':
  case '\x02':
  case '\x03':
  case '\x04':
  case '\x05':
  case '\x06':
  case '\a':
  case '\b':
  case '\t':
  case '\n':
  case '\v':
  case '\f':
  case '\r':
  case '\x0e':
  case '\x0f':
  case '\x10':
  case '\x11':
  case '\x12':
  case '\x13':
  case '\x14':
  case '\x15':
  case '\x16':
  case '\x17':
  case '\x18':
  case '\x19':
  case '\x1a':
    FUN_004b6ef0(param_2,&local_6c);
    *(char *)(param_2 + 4) = *(char *)(param_2 + 4) + param_1 + -1;
    return param_2;
  default:
    FUN_004b6ef0(param_2,&local_6c);
    *(undefined1 *)(param_2 + 4) = 0;
    uVar1 = FUN_0055c2fe(param_1 + -0x28,local_64,10);
    FUN_004b6e70(param_2,uVar1);
    return param_2;
  case '\x1e':
    FUN_004b6ef0(param_2,&local_54);
    return param_2;
  case '\x1f':
    FUN_004b6ef0(param_2,&local_48);
    return param_2;
  case ' ':
    FUN_004b6ef0(param_2,&local_3c);
    return param_2;
  case '!':
    FUN_004b6ef0(param_2,&local_30);
    return param_2;
  case '\"':
    FUN_004b6ef0(param_2,&local_24);
    return param_2;
  case '#':
    FUN_004b6ef0(param_2,&local_18);
    return param_2;
  case '$':
    FUN_004b6ef0(param_2,&local_c);
    return param_2;
  }
}

