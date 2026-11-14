// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00412a20
// entry: 00412a20  size: 505


void FUN_00412a20(byte param_1,byte *param_2,byte *param_3,char param_4,char param_5,int *param_6,
                 int param_7,int param_8,int param_9)

{
  byte bVar1;
  byte bVar2;
  
  FUN_00414db0();
  if ((((-1 < param_7) && (param_7 < 0x80)) && (-1 < param_8)) && (param_8 < 0x40)) {
    bVar1 = FUN_0040ad10(param_7,param_8);
    if (param_5 == '\x02') {
      bVar2 = ~*param_3;
    }
    else if (param_5 == '\x03') {
      if (*param_6 == 1) {
        bVar2 = *param_3 & 0x55;
      }
      else {
        bVar2 = *param_3 & 0xaa;
      }
    }
    else {
      bVar2 = *param_3;
    }
    if (param_1 != 0) {
      bVar2 = bVar2 & param_1;
    }
    if (param_9 != 1) {
      if (param_9 == 2) {
        if (param_4 == '\x02') {
          bVar1 = *param_2;
          *param_2 = bVar1 | bVar2;
          FUN_0040ad70(param_7,param_8,bVar1 | bVar2);
          FUN_00414db0();
          return;
        }
        if (param_4 == '\x03') {
          bVar1 = *param_2 & (~param_1 | bVar2);
          *param_2 = bVar1;
          FUN_0040ad70(param_7,param_8,bVar1);
          FUN_00414db0();
          return;
        }
        if (param_4 == '\x04') {
          bVar1 = *param_2;
          *param_2 = bVar1 ^ bVar2;
          FUN_0040ad70(param_7,param_8,bVar1 ^ bVar2);
          FUN_00414db0();
          return;
        }
        bVar2 = ~param_1 & *param_2 | bVar2;
        *param_2 = bVar2;
        FUN_0040ad70(param_7,param_8,bVar2);
        FUN_00414db0();
        return;
      }
      if (param_4 == '\x02') {
        *param_2 = *param_2 | bVar2;
        FUN_00414db0();
        return;
      }
      if (param_4 == '\x03') {
        *param_2 = *param_2 & (~param_1 | bVar2);
        FUN_00414db0();
        return;
      }
      if (param_4 == '\x04') {
        *param_2 = *param_2 ^ bVar2;
        FUN_00414db0();
        return;
      }
      *param_2 = ~param_1 & *param_2 | bVar2;
      FUN_00414db0();
      return;
    }
    if (param_4 == '\x02') {
      bVar2 = bVar1 | bVar2;
    }
    else if (param_4 == '\x03') {
      bVar2 = bVar1 & (~param_1 | bVar2);
    }
    else if (param_4 == '\x04') {
      bVar2 = bVar1 ^ bVar2;
    }
    else {
      bVar2 = ~param_1 & bVar1 | bVar2;
    }
    FUN_0040ad70(param_7,param_8,bVar2);
    FUN_00414db0();
  }
  return;
}

