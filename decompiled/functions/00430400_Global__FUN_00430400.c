// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00430400
// entry: 00430400  size: 132


undefined4 FUN_00430400(undefined4 *param_1,undefined4 *param_2)

{
  undefined1 local_48 [12];
  undefined1 local_3c [12];
  undefined1 local_30 [12];
  undefined1 local_24 [12];
  undefined1 local_18 [24];
  
  FUN_0052f760(0xc0,local_18);
  FUN_004e4080(local_18,local_30);
  FUN_004e5b70(local_30,local_48);
  FUN_004300e0(local_48,&DAT_005cdbd4);
  FUN_00526090(0x29);
  FUN_004e5b70(local_24,local_3c);
  FUN_004300e0(local_3c,&DAT_005cdcf4);
  *param_1 = &DAT_005cdbd4;
  *param_2 = &DAT_005cdcf4;
  return 0x43;
}

