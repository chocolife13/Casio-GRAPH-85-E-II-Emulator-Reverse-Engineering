// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00537650
// entry: 00537650  size: 313


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00537650(int param_1,int param_2,uint param_3)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  short sVar6;
  short sVar7;
  int iVar8;
  uint uVar9;
  short local_c;
  undefined1 local_4 [4];
  
  iVar8 = DAT_005d5724;
  local_c = (short)_DAT_005d5728;
  uVar9 = _DAT_005d5728 & 0xffff;
  pcVar5 = (char *)(uVar9 + DAT_005d5724);
  cVar2 = FUN_005380e0();
  if (cVar2 != '\0') {
    FUN_00526300(2);
  }
  if (param_3 == 0) {
    _DAT_005d5728 = CONCAT22(_DAT_005d572a,local_c);
    return 0;
  }
  FUN_00414db0(local_4);
  thunk_FUN_0040add0();
  iVar3 = FUN_004b7550(iVar8);
  iVar4 = iVar3 + 1;
  sVar6 = (short)iVar4;
  sVar7 = (short)param_3;
  if (*pcVar5 == -0x28) {
    if ((uint)(param_1 - iVar3) < param_3 - 1) goto LAB_00537750;
    iVar3 = iVar8 + -1 + param_3;
    while (iVar1 = (int)sVar6, (int)(uVar9 + 1) < iVar1) {
      iVar4 = iVar4 + -1;
      *(undefined1 *)(iVar1 + iVar3) = *(undefined1 *)(iVar1 + iVar8);
      sVar6 = (short)iVar4;
    }
    *(undefined1 *)(sVar6 + iVar3) = *(undefined1 *)(sVar6 + iVar8);
    if (0 < sVar7) {
      param_2 = param_2 - (int)pcVar5;
      iVar8 = (int)sVar7;
      do {
        *pcVar5 = pcVar5[param_2];
        pcVar5 = pcVar5 + 1;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
  }
  else {
    if ((uint)(param_1 - iVar3) < param_3) goto LAB_00537750;
    while (iVar3 = (int)sVar6, (int)uVar9 < iVar3) {
      iVar4 = iVar4 + -1;
      *(undefined1 *)(iVar3 + iVar8 + param_3) = *(undefined1 *)(iVar3 + iVar8);
      sVar6 = (short)iVar4;
    }
    *(undefined1 *)((int)sVar6 + iVar8 + param_3) = *(undefined1 *)(sVar6 + iVar8);
    if (0 < sVar7) {
      param_2 = param_2 - (int)pcVar5;
      iVar8 = (int)sVar7;
      do {
        *pcVar5 = pcVar5[param_2];
        pcVar5 = pcVar5 + 1;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
  }
  local_c = local_c + sVar7;
LAB_00537750:
  FUN_00414db0(local_4);
  _DAT_005d5728 = CONCAT22(_DAT_005d572a,local_c);
  return 0;
}

