// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00515450
// entry: 00515450  size: 269


void FUN_00515450(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined1 local_38 [12];
  undefined1 local_2c;
  char local_2b;
  undefined1 local_2a;
  undefined1 local_29 [41];
  
  puVar3 = param_2 + 0x100;
  for (iVar2 = 0x100; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  iVar2 = FUN_00514e90();
  if (iVar2 != 0) {
    FUN_005166a0(param_2,iVar2);
  }
  puVar3 = param_2;
  for (iVar2 = 0x100; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *param_1;
    param_1 = param_1 + 1;
    puVar3 = puVar3 + 1;
  }
  FUN_0050acb0(param_2);
  uVar1 = FUN_004e5070((int)*(short *)(param_3 + 0x28),local_38,local_38);
  FUN_004e6d00(param_3 + 0x18,uVar1);
  FUN_004e7910(local_38,local_38);
  FUN_004e6a00(param_3,local_38,local_38);
  FUN_004e7910(local_38,local_38);
  FUN_0052f780(*(char *)(param_3 + 0x26) + '@',local_38);
  if ((*(byte *)(param_2 + 0x238) & 0xc0) != 0) {
    if ((*(byte *)(param_2 + 0x238) & 0xc0) == 0x40) {
      FUN_00510380(param_2,0);
    }
    local_2b = *(char *)(param_3 + 0x26) + '@';
    local_2c = 0x20;
    local_2a = 0x3d;
    FUN_005232d0(1,8);
    iVar2 = FUN_004b22b0(local_38,local_29,0x15);
    FUN_00523470(iVar2 + -3);
  }
  FUN_0040ae30();
  return;
}

