// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00443b60
// entry: 00443b60  size: 124


uint FUN_00443b60(undefined4 param_1,int param_2,int param_3,int param_4,short param_5,short param_6
                 )

{
  int iVar1;
  int iVar2;
  uint uVar3;
  short sVar4;
  undefined4 local_4;
  
  local_4 = 0;
  do {
    iVar1 = (short)local_4 + 1 + param_3;
    iVar2 = (int)param_5;
    if (iVar2 < iVar1) break;
    sVar4 = 0;
    do {
      iVar2 = sVar4 + 1 + param_4;
      if (param_6 < iVar2) break;
      uVar3 = FUN_00528ac0(param_1,iVar1,iVar2,*(int *)(param_2 + (short)local_4 * 4) + sVar4 * 0x18
                          );
      if (uVar3 != 0) {
        return uVar3 & 0xffffff00;
      }
      sVar4 = sVar4 + 1;
    } while (sVar4 < 4);
    iVar2 = local_4 + 1;
    local_4 = iVar2;
  } while ((short)iVar2 < 4);
  return CONCAT31((int3)((uint)iVar2 >> 8),1);
}

