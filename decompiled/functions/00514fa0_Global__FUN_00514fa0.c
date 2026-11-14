// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00514fa0
// entry: 00514fa0  size: 90


uint FUN_00514fa0(void)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = FUN_004ab6a0(s__TABLE_005be208);
  if (iVar2 == 0) {
    iVar2 = FUN_004ab6a0(s__RECUR_005be280);
    if (iVar2 == 0) {
      cVar1 = FUN_00526090(0x22);
      uVar3 = (uint)cVar1;
      if (3 < uVar3) goto switchD_00514fd4_caseD_3;
      switch(uVar3) {
      case 0:
        return CONCAT31(cVar1 >> 7,1);
      case 1:
        return CONCAT31(cVar1 >> 7,2);
      case 3:
        goto switchD_00514fd4_caseD_3;
      }
      goto switchD_00514fd4_caseD_2;
    }
  }
  cVar1 = FUN_00526090(0x31);
  uVar3 = (uint)cVar1;
  if (uVar3 != 0) {
    uVar3 = uVar3 - 1;
switchD_00514fd4_caseD_3:
    return uVar3 & 0xffffff00;
  }
switchD_00514fd4_caseD_2:
  return CONCAT31((int3)(uVar3 >> 8),3);
}

