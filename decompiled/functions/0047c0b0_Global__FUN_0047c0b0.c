// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0047c0b0
// entry: 0047c0b0  size: 181


int FUN_0047c0b0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 local_24;
  undefined1 local_20;
  undefined1 local_1f;
  undefined4 local_1e;
  undefined2 local_1a;
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  local_24 = DAT_005bf658;
  local_20 = DAT_005bf65c;
  local_1a = DAT_005bf654;
  local_1f = 0;
  local_1e = DAT_005bf650;
  while( true ) {
    iVar1 = FUN_005245e0(param_1,param_2,5,param_3,s_X__005bed58);
    if (iVar1 != 0) {
      return iVar1;
    }
    FUN_004e4c30(&local_1e,local_18);
    FUN_004e4c30(&local_24,local_c);
    iVar1 = FUN_004e72d0(param_3,local_18);
    if ((iVar1 != 1) && (iVar1 = FUN_004e7310(param_3,local_c), iVar1 != 1)) break;
    FUN_0052b240(8);
    param_2 = 0x7545;
    param_1 = 0;
  }
  return 0;
}

