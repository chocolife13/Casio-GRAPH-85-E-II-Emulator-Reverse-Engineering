// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0041c0e0
// entry: 0041c0e0  size: 121


undefined4 FUN_0041c0e0(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 local_20;
  undefined1 local_1c [20];
  undefined4 local_8;
  
  local_20 = 0;
  uVar4 = 0;
  while( true ) {
    iVar1 = FUN_0041bac0(uVar4,&local_20);
    if (iVar1 < 0) break;
    if (iVar1 == 0) {
      uVar3 = FUN_00419fc0(0xffffffff);
      return uVar3;
    }
    iVar1 = FUN_0041af20(local_20,local_1c);
    if (iVar1 < 0) break;
    uVar2 = uVar4 & 0xffff;
    uVar4 = uVar4 + 1;
    *(undefined4 *)(param_1 + uVar2 * 4) = local_8;
    if (0x18 < (ushort)uVar4) {
      return 0;
    }
  }
  uVar3 = FUN_00419fc0(iVar1);
  return uVar3;
}

