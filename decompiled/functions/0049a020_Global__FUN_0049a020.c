// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0049a020
// entry: 0049a020  size: 264


undefined4 FUN_0049a020(byte *param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  int iVar10;
  int local_4;
  
  bVar1 = *param_1;
  if (((bVar1 & 0x80) == 0) || (bVar2 = true, (bVar1 & 0xf0) == 0xf0)) {
    bVar2 = false;
  }
  if ((bVar1 & 0x60) != 0x20) {
    if ((bVar2) && (iVar10 = FUN_004e96c0(param_1 + 0xc), iVar10 != 0)) {
      return 1;
    }
    uVar4 = FUN_004e96c0(param_1);
    return uVar4;
  }
  uVar5 = (uint)*(ushort *)(param_1 + 2);
  pbVar9 = (byte *)**(undefined4 **)(param_1 + 8);
  pbVar7 = pbVar9 + uVar5 * 0xc;
  if ((bVar1 & 0x70) == 0x20) {
    param_1 = (byte *)0x1;
  }
  else {
    param_1 = (byte *)(uint)*(ushort *)(param_1 + 4);
  }
  local_4 = 0;
  if (uVar5 != 0) {
    do {
      iVar10 = 0;
      pbVar6 = pbVar7;
      pbVar8 = pbVar9;
      if (param_1 != (byte *)0x0) {
        do {
          pbVar7 = pbVar6;
          if (((bVar2) && ((*pbVar8 & 0x80) != 0)) && ((*pbVar8 & 0xf0) != 0xf0)) {
            pbVar7 = pbVar6 + 0xc;
            iVar3 = FUN_004e96c0(pbVar6);
            if (iVar3 != 0) {
              return 1;
            }
          }
          pbVar9 = pbVar8 + 0xc;
          iVar3 = FUN_004e96c0(pbVar8);
          if (iVar3 != 0) {
            return 1;
          }
          iVar10 = iVar10 + 1;
          pbVar6 = pbVar7;
          pbVar8 = pbVar9;
        } while (iVar10 < (int)param_1);
      }
      local_4 = local_4 + 1;
    } while (local_4 < (int)uVar5);
  }
  return 0;
}

