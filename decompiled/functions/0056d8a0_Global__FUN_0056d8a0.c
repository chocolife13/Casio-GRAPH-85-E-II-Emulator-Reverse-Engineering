// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0056d8a0
// entry: 0056d8a0  size: 82


void __thiscall FUN_0056d8a0(int param_1,int param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(param_1 + 0x5c) + param_2 * 0x14;
  uVar2 = *(uint *)(*(int *)(param_1 + 0x5c) + 8 + param_2 * 0x14);
  if (uVar2 != param_3) {
    if (((uVar2 ^ param_3) & 0x8000000) != 0) {
      *(uint *)(iVar1 + 8) = param_3;
      FUN_00574de0(1,0);
    }
    *(uint *)(iVar1 + 0xc) = *(uint *)(iVar1 + 0xc) | 1;
    *(uint *)(iVar1 + 8) = param_3;
    FUN_0056d8f2(param_2,*(undefined4 *)(iVar1 + 0x10),1);
  }
  return;
}

