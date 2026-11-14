// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004a2670
// entry: 004a2670  size: 294


void FUN_004a2670(ushort *param_1)

{
  int iVar1;
  ushort uVar2;
  int iVar3;
  bool bVar4;
  undefined1 *puVar5;
  undefined1 local_a;
  undefined1 local_9;
  undefined1 local_8;
  undefined1 local_7;
  undefined1 local_6;
  undefined1 local_4;
  undefined1 local_3;
  undefined1 local_2;
  
  local_8 = 0xe6;
  local_7 = 0x92;
  local_6 = 0;
  local_4 = 0xe6;
  local_3 = 0x93;
  local_2 = 0;
  local_a = 0x20;
  local_9 = 0;
  iVar3 = 1;
  do {
    iVar1 = iVar3 + 1;
    FUN_005232d0(0x13,iVar1);
    if (iVar3 == 1) {
      if (param_1[5] == 0) {
LAB_004a2751:
        if ((int)(uint)param_1[5] < iVar3) {
          puVar5 = &local_a;
        }
        else {
          if (*param_1 == param_1[iVar3]) {
            FUN_00523400(&local_a);
            goto LAB_004a2781;
          }
          puVar5 = &local_a;
        }
      }
      else if (param_1[1] == 0) {
        bVar4 = *param_1 == param_1[1];
LAB_004a273c:
        if (bVar4) {
          FUN_00523400(&local_a);
          goto LAB_004a2781;
        }
        puVar5 = &local_a;
      }
      else {
        if (*param_1 == param_1[1]) {
          FUN_00523400(&local_8);
          goto LAB_004a2781;
        }
        puVar5 = &local_8;
      }
LAB_004a277c:
      FUN_005233e0(puVar5);
    }
    else {
      if ((iVar3 != 4) || (param_1[5] < 4)) goto LAB_004a2751;
      uVar2 = param_1[4];
      if (((uint)uVar2 == param_1[5] - 1) || (uVar2 == 0xffff)) {
        bVar4 = *param_1 == param_1[4];
        goto LAB_004a273c;
      }
      if (*param_1 != uVar2) {
        puVar5 = &local_4;
        goto LAB_004a277c;
      }
      FUN_00523400(&local_4);
    }
LAB_004a2781:
    iVar3 = iVar1;
    if (4 < iVar1) {
      return;
    }
  } while( true );
}

