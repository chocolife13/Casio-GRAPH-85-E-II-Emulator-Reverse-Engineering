// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00475080
// entry: 00475080  size: 363


void FUN_00475080(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  cVar1 = FUN_00526090(0x1b);
  if (cVar1 == '\x01') {
    FUN_0050acb0(param_6);
  }
  FUN_00482c30(param_1);
  cVar1 = FUN_00526090(0x1b);
  if (cVar1 == '\0') {
    switch(param_2) {
    case 1:
    case 2:
    case 3:
    case 7:
    case 9:
    case 10:
    case 0xb:
    case 0xc:
    case 0xd:
    case 0xe:
    case 0xf:
    case 0x10:
    case 0x11:
    case 0x12:
      FUN_0052f780(0x58,param_4);
      FUN_0052f780(0x59,param_5);
      FUN_0051eaa0(param_4,param_5);
      return;
    case 4:
    case 8:
      FUN_00481670(param_1,param_3,param_4);
      FUN_00530e20(local_c,local_18);
      FUN_0052f780(0x58,param_4);
      FUN_0052f780(0x46,param_5);
      FUN_00475680(param_4,param_5);
      return;
    case 5:
      FUN_0052f780(0x58,param_4);
      FUN_00475790(param_3,param_4);
      return;
    case 6:
      param_3 = param_3 + -1;
      if (param_3 == 0) {
        param_3 = 1;
      }
      else {
        iVar2 = FUN_00480eb0(param_1);
        iVar3 = FUN_00480cf0(param_1,0);
        if (iVar3 == 1) {
          iVar2 = iVar2 + 1;
        }
        if (iVar2 < param_3) {
          param_3 = param_3 - iVar2;
          if (param_3 < 4) {
            param_3 = param_3 + 1;
          }
          else {
            iVar2 = FUN_00480ed0(param_1);
            iVar3 = FUN_00480cf0(param_1,1);
            if (iVar3 == 1) {
              iVar2 = iVar2 + 1;
            }
            param_3 = ((iVar2 < param_3 + -3) - 1 & 0xfffffffb) + 5;
          }
        }
        else {
          param_3 = 0;
        }
      }
      FUN_0052f780(0x58,param_4);
      FUN_00475790(param_3,param_4);
    }
  }
  return;
}

