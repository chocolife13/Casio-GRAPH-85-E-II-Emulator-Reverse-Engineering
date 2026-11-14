// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004633e0
// entry: 004633e0  size: 77


void FUN_004633e0(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (param_2 == 0x22) {
      iVar1 = FUN_004645e0(param_1,param_3);
    }
    else if (param_2 == 0x23) {
      iVar1 = FUN_00464630(param_1,param_3);
    }
    switch(iVar1) {
    case 0x22:
    case 0x23:
      param_2 = iVar1;
      break;
    case -0xe:
    case -0xd:
    case -0xb:
    case -6:
    case -2:
    case -1:
    case 0:
      return;
    }
  } while( true );
}

