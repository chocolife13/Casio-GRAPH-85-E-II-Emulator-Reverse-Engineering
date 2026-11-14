// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005157b0
// entry: 005157b0  size: 422


uint FUN_005157b0(byte *param_1)

{
  undefined4 uVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  char local_99;
  uint local_98;
  undefined4 local_94;
  undefined1 local_90 [4];
  undefined1 local_8c [12];
  undefined1 local_80 [128];
  
  if ((*param_1 == 1) || ((char)*param_1 < '\0')) {
    uVar1 = FUN_00526410();
    FUN_00526420(0xd7);
    FUN_00538a00(local_8c);
    FUN_0053c690(5);
    FUN_00538980(0,0,local_90);
    FUN_00538860(0,0);
    FUN_005387f0(0);
    do {
      FUN_0051f7b0(local_80);
      FUN_0051f870();
      iVar2 = FUN_00526620(&local_94);
      FUN_0051f7f0(local_80);
      while (iVar2 != 0) {
        FUN_0051f7b0(local_80);
        FUN_0051f870();
        iVar2 = FUN_00526620(&local_94);
        FUN_0051f7f0(local_80);
      }
      switch(local_94) {
      case 0x7532:
      case 0x753f:
      case 0x7557:
        uVar4 = 1;
LAB_00515924:
        FUN_00538810();
        FUN_00538a50(local_8c);
        FUN_005389c0(0,0,local_90);
        FUN_00526420(uVar1);
        return uVar4;
      case 0x7534:
        if (-1 < (char)*param_1) {
          uVar4 = 0;
          goto LAB_00515924;
        }
        *param_1 = ~*param_1 + 1;
        FUN_00538810();
        FUN_00538a50(local_8c);
        FUN_005389c0(0,0,local_90);
        FUN_00526420(uVar1);
        goto LAB_005158bd;
      case 0x754d:
        uVar4 = 0xffffffff;
        goto LAB_00515924;
      }
    } while( true );
  }
LAB_005158bd:
  FUN_0052f840();
  bVar3 = 0;
  local_99 = '\x01';
  local_98 = 0;
  if ('\x01' < (char)*param_1) {
    do {
      if (bVar3 != 0) break;
      FUN_0040e610(0xfa);
      iVar2 = FUN_0052f820();
      if (iVar2 != 0) {
        bVar3 = 1;
      }
      local_99 = local_99 + '\x01';
    } while (local_99 < (char)*param_1);
    local_98 = (uint)bVar3;
  }
  return local_98;
}

