// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0052ac80
// entry: 0052ac80  size: 114


void FUN_0052ac80(undefined1 *param_1)

{
  undefined4 uVar1;
  undefined1 local_38 [4];
  undefined1 local_34 [52];
  
  FUN_005232d0(1,3);
  uVar1 = FUN_0052f6f0(0x14,local_34);
  FUN_005233e0(uVar1);
  FUN_005232d0(1,4);
  uVar1 = FUN_0052f6f0(0x15,local_34);
  FUN_005233e0(uVar1);
  FUN_005232d0(3,5);
  FUN_005233e0("     f[1~20]:    ");
  FUN_00523cc0(local_38,0x11,5,1,0x14);
  *param_1 = local_38[0];
  return;
}

