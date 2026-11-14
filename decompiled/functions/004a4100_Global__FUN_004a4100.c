// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004a4100
// entry: 004a4100  size: 275


void FUN_004a4100(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 local_34 [52];
  
  FUN_005232d0(1,1);
  uVar1 = FUN_0052f6f0(500,local_34,0x15);
  FUN_00523470(uVar1);
  FUN_005232d0(1,2);
  FUN_00523470(&DAT_00584ed8,0x15);
  FUN_005232d0(1,3);
  uVar1 = FUN_0052f6f0(0x1f5,local_34,0x15);
  FUN_00523470(uVar1);
  FUN_005232d0(1,4);
  uVar1 = FUN_0052f6f0(0x291,local_34,0x15);
  FUN_00523470(uVar1);
  FUN_005232d0(1,5);
  iVar2 = FUN_004ab180();
  if (iVar2 == 0) {
    puVar3 = &DAT_005cd010;
  }
  else {
    puVar3 = (undefined1 *)FUN_0052f6f0(0x292,local_34,0x15);
  }
  FUN_00523470(puVar3);
  FUN_005232d0(1,6);
  uVar1 = FUN_0052f6f0(0x1f6,local_34,0x15);
  FUN_00523470(uVar1);
  FUN_005232d0(1,7);
  uVar1 = FUN_0052f6f0(0x1f7,local_34,0x15);
  FUN_00523470(uVar1);
  return;
}

