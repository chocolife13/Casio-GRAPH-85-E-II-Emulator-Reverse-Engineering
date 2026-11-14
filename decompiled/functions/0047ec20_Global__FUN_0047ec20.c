// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0047ec20
// entry: 0047ec20  size: 395


void FUN_0047ec20(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 in_EAX;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  undefined4 local_4;
  
  iVar3 = param_4;
  iVar2 = param_3;
  iVar1 = param_3 + 0x800;
  uVar4 = FUN_004d52d0(param_4,&local_1c,iVar1,
                       CONCAT31((int3)((uint)in_EAX >> 8),*(byte *)(param_3 + 0x8e0) >> 4) &
                       0xffffff03);
  uVar5 = FUN_004d52d0(iVar3 + 0xc,&param_3,iVar1,
                       CONCAT31((int3)((ulonglong)uVar4 >> 0x28),*(byte *)(iVar2 + 0x8e0) >> 4) &
                       0xffffff03);
  param_4 = (int)uVar5;
  uVar5 = FUN_004d52d0(iVar3 + 0x18,&local_4,iVar1,
                       CONCAT31((int3)((ulonglong)uVar5 >> 0x28),*(byte *)(iVar2 + 0x8e0) >> 4) &
                       0xffffff03);
  local_8 = (int)uVar5;
  uVar5 = FUN_004d52d0(iVar3 + 0x24,&local_10,iVar1,
                       CONCAT31((int3)((ulonglong)uVar5 >> 0x28),*(byte *)(iVar2 + 0x8e0) >> 4) &
                       0xffffff03);
  local_c = (undefined4)uVar5;
  local_14 = FUN_004d52d0(iVar3 + 0x30,&local_18,iVar1,
                          CONCAT31((int3)((ulonglong)uVar5 >> 0x28),*(byte *)(iVar2 + 0x8e0) >> 4) &
                          0xffffff03);
  param_1 = param_1 * 0xf;
  FUN_0047e230(param_4,param_3,local_c,local_10,param_1 + -6,iVar2);
  if ((int)uVar4 == 0) {
    FUN_0050f940(local_1c,param_1 + -3,local_1c,param_1 + 3,iVar2,2,*(undefined1 *)(iVar2 + 0x8e2));
  }
  if (local_14 == 0) {
    FUN_0050f940(local_18,param_1 + -3,local_18,param_1 + 3,iVar2,2,*(undefined1 *)(iVar2 + 0x8e2));
  }
  if (local_8 == 0) {
    FUN_0050f940(local_4,param_1 + -6,local_4,param_1 + 6,iVar2,2,*(undefined1 *)(iVar2 + 0x8e2));
  }
  FUN_0047e140((int)uVar4,local_1c,param_4,param_3,param_1,iVar2);
  FUN_0047e140(local_c,local_10,local_14,local_18,param_1,iVar2);
  return;
}

