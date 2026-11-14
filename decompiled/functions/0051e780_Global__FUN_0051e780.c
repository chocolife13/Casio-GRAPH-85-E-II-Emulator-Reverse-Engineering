// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0051e780
// entry: 0051e780  size: 290


undefined4 FUN_0051e780(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 local_9c [12];
  undefined1 local_90 [12];
  undefined1 local_84 [24];
  undefined1 local_6c [96];
  undefined1 local_c [12];
  
  FUN_00515e10(local_90);
  uVar1 = FUN_004e5070(8,local_c,local_9c);
  FUN_004e6d00(local_6c,uVar1);
  FUN_004e7910(local_9c,local_9c);
  if (param_1 == 0x7545) {
    FUN_004e6a00(local_90,local_9c,local_90);
    FUN_004e7910(local_90,local_90);
    FUN_004e6a00(local_84,local_9c,local_84);
  }
  else {
    FUN_004e6b80(local_90,local_9c,local_90);
    FUN_004e7910(local_90,local_90);
    FUN_004e6b80(local_84,local_9c,local_84);
  }
  FUN_004e7910(local_84,local_84);
  iVar2 = FUN_0051c300(local_90);
  if (iVar2 != 0) {
    FUN_0052b240(iVar2);
    return 1;
  }
  FUN_00515e50(local_90);
  FUN_00516ae0();
  return 0;
}

