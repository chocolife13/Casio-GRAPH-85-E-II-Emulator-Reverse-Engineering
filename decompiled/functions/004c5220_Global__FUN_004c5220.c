// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004c5220
// entry: 004c5220  size: 86


bool FUN_004c5220(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_30 [6];
  undefined1 local_18 [24];
  
  puVar2 = local_30;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  iVar1 = FUN_004e4000(param_1);
  if (iVar1 != 0) {
    return false;
  }
  FUN_004e25f0(param_1,local_18,1);
  iVar1 = FUN_004e71d0(local_18,local_30);
  return iVar1 == 1;
}

