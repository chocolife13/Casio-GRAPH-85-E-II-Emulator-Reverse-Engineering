// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0042aa50
// entry: 0042aa50  size: 99


void FUN_0042aa50(undefined4 *param_1,short *param_2,int param_3)

{
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < param_3) {
    while (*param_2 != -1) {
      if (*param_2 == 0) {
        uVar1 = 0;
        goto LAB_0042aa8b;
      }
      iVar3 = iVar3 + 1;
      *(char *)param_1 = (char)*param_2;
      param_1 = (undefined4 *)((int)param_1 + 1);
      param_2 = param_2 + 1;
      if (param_3 <= iVar3) {
        return;
      }
    }
    uVar1 = 0xff;
LAB_0042aa8b:
    if (iVar3 < param_3) {
      for (uVar2 = (uint)(param_3 - iVar3) >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
        *param_1 = CONCAT22(CONCAT11(uVar1,uVar1),CONCAT11(uVar1,uVar1));
        param_1 = param_1 + 1;
      }
      for (uVar2 = param_3 - iVar3 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
        *(undefined1 *)param_1 = uVar1;
        param_1 = (undefined4 *)((int)param_1 + 1);
      }
    }
  }
  return;
}

