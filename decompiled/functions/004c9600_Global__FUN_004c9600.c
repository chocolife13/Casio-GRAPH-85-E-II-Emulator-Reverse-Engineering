// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004c9600
// entry: 004c9600  size: 261


int FUN_004c9600(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  int local_4;
  
  iVar4 = *param_2;
  iVar1 = FUN_004e4000(iVar4);
  iVar2 = FUN_004e4020(iVar4);
  if (iVar2 == 0) {
    uVar5 = (uint)*(ushort *)(iVar4 + 2);
    puVar3 = (undefined4 *)FUN_004ad630(uVar5 * 2 + 2 & 0xffff);
    if (puVar3 == (undefined4 *)0x0) {
      FUN_004e5630(4,iVar4);
      return 4;
    }
    iVar2 = FUN_004ad630((uVar5 * 3 & 0x1fff) << 3);
    if (iVar2 == 0) {
      FUN_004ad6d0(puVar3);
      return 4;
    }
    FUN_004ad6d0(iVar2);
    iVar1 = FUN_004c9820(uVar5,iVar1 != 0,iVar4,*puVar3);
    if (iVar1 != 0) {
LAB_004c96a3:
      FUN_004ad6d0(puVar3);
      iVar4 = FUN_004e4020(iVar4);
      return iVar4;
    }
    local_4 = 0;
    if (0 < param_1) {
      do {
        iVar1 = FUN_004cb260(*param_2,*puVar3,uVar5);
        if (iVar1 != 0) goto LAB_004c96a3;
        local_4 = local_4 + 1;
        param_2 = param_2 + 1;
      } while (local_4 < param_1);
    }
    FUN_004ad6d0(puVar3);
    iVar2 = 0;
  }
  return iVar2;
}

