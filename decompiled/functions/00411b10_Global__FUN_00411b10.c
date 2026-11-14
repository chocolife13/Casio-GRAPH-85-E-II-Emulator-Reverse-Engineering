// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00411b10
// entry: 00411b10  size: 550


int FUN_00411b10(int param_1,ushort *param_2,int *param_3)

{
  int iVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint local_14;
  uint local_10;
  int local_c [3];
  
  iVar6 = FUN_00411d80(param_1,&local_10);
  if (iVar6 == 0) {
    if (param_1 == 1) {
      FUN_00411d60(&local_14);
      param_1 = iVar6;
    }
    else {
      iVar6 = FUN_00411d80((char)param_1 + -1,local_c);
      if (iVar6 != 0) {
        return iVar6;
      }
      local_14 = *(uint *)(local_c[0] + 8);
      param_1 = 0;
    }
    if ((local_10 & 3) != 0) {
      return 0xcf;
    }
    if ((local_14 & 3) != 0) {
      return 0xd0;
    }
    *param_3 = 0;
    uVar2 = *(ushort *)(local_10 + 0xc);
    *param_2 = uVar2;
    iVar6 = param_1;
    if (uVar2 == 0) {
      if (*(uint *)(local_10 + 8) != local_14) {
        return 0xc2;
      }
    }
    else {
      iVar3 = *(int *)(local_10 + 8);
      uVar7 = (uint)uVar2;
      uVar11 = 1;
      uVar9 = *(uint *)(iVar3 + 8);
      iVar4 = *(int *)(iVar3 + -8 + uVar7 * 0x14);
      iVar1 = iVar3 + uVar7 * 0x14;
      iVar5 = *(int *)(iVar1 + -0xc);
      puVar8 = (uint *)(iVar3 + 8);
      uVar10 = uVar9;
      if (uVar7 != 0) {
        do {
          *param_3 = *param_3 + puVar8[1] + 0x14;
          uVar7 = *puVar8;
          if (uVar7 != uVar9) {
            return 0xd1;
          }
          uVar9 = puVar8[1];
          if (uVar9 == 0) {
            return 0xc6;
          }
          if ((uVar9 & 3) != 0) {
            return 199;
          }
          if (uVar7 < uVar10) {
            return 200;
          }
          if ((uVar7 & 3) != 0) {
            return 0xce;
          }
          uVar9 = uVar9 + uVar7;
          puVar8 = puVar8 + 5;
          uVar11 = uVar11 + 1;
          uVar10 = uVar7;
        } while (uVar11 <= *param_2);
      }
      if (local_14 - *(int *)(local_10 + 8) != *param_3) {
        return 0xc0;
      }
      if ((uint)(iVar1 - iVar3) / 0x14 != (uint)*param_2) {
        return 0xc1;
      }
      if (iVar4 + iVar5 + iVar3 != local_14) {
        param_1 = 0xc5;
        iVar6 = param_1;
      }
    }
  }
  param_1 = iVar6;
  return param_1;
}

