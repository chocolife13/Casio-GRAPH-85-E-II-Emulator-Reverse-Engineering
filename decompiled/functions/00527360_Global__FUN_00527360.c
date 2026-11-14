// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00527360
// entry: 00527360  size: 121


uint FUN_00527360(uint param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  int local_20;
  undefined1 local_1c [4];
  undefined1 local_18 [24];
  
  FUN_004ad8a0(local_1c,&local_20);
  uVar3 = 1;
  local_20 = local_20 + 0x10;
  uVar2 = 0;
  if (param_1 != 0) {
    iVar4 = 0x11;
    do {
      FUN_004ad3f0(iVar4,0xc,local_18);
      iVar1 = FUN_005273e0(local_18);
      if ((iVar1 == 1) && (bVar5 = uVar2 != 0, uVar2 = uVar3, bVar5)) {
        return 0;
      }
      uVar3 = uVar3 + 1;
      iVar4 = iVar4 + 0xc;
    } while (uVar3 <= param_1);
  }
  return uVar2;
}

