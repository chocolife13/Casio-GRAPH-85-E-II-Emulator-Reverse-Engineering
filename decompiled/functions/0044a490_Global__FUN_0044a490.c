// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0044a490
// entry: 0044a490  size: 203


undefined4 FUN_0044a490(undefined4 *param_1,undefined4 *param_2)

{
  char cVar1;
  undefined4 *local_20;
  undefined1 local_1c [4];
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  FUN_004e4c30(s__9E99_005bec1c,local_18);
  FUN_004e4c30(&DAT_005bec14,local_c);
  cVar1 = FUN_004abb50(s__EQUA_005be254,s_EQSLVLMT_005be248,0x18,local_18);
  if (cVar1 == '\0') {
    FUN_004e4c30(s__9E99_005bec1c,param_1);
    FUN_004e4c30(&DAT_005bec14,param_2);
    return 0;
  }
  if (cVar1 == '%') {
    FUN_004ad800(s__EQUA_005be254,s_EQSLVLMT_005be248,local_1c,&local_20);
    *param_1 = *local_20;
    param_1[1] = local_20[1];
    param_1[2] = local_20[2];
    *param_2 = local_20[3];
    param_2[1] = local_20[4];
    param_2[2] = local_20[5];
    return 0;
  }
  return 4;
}

