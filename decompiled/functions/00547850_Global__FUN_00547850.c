// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00547850
// entry: 00547850  size: 554


void FUN_00547850(undefined4 param_1,undefined4 *param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  undefined4 local_30;
  undefined4 *local_2c;
  int local_28;
  int *local_24;
  int local_20;
  undefined4 *local_1c;
  int local_18;
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar5 = (int)param_2;
  iVar1 = FUN_00486470(param_2,param_3);
  if (iVar1 == 0) {
    for (iVar5 = 0x41; iVar5 != 0; iVar5 = iVar5 + -1) {
      *param_4 = 0;
      param_4 = param_4 + 1;
    }
    return;
  }
  puVar2 = (undefined4 *)FUN_004869c0(param_1);
  if (puVar2 != (undefined4 *)0x0) {
    local_10 = *puVar2;
    local_28 = iVar5;
    local_c = puVar2[1];
    local_14 = 4;
    local_8 = puVar2[2];
    local_2c = param_4 + 0x3c;
    local_4 = puVar2[3];
    piVar6 = param_4 + 0x14;
    local_24 = puVar2 + iVar5 + 3;
    local_18 = 0;
    param_4 = (undefined4 *)param_3;
    local_1c = puVar2;
    while( true ) {
      do {
        iVar1 = local_18;
        piVar6[-0x14] = 0;
        *piVar6 = 0;
        piVar6[0x14] = 0;
        *(undefined1 *)((int)local_2c + local_18) = 0;
        if (((iVar5 <= local_10._2_2_) && (*local_24 != 0)) &&
           (param_2 = puVar2, iVar3 = FUN_00486fd0(param_1,iVar5,0,&param_2), iVar3 != 0)) {
          iVar3 = FUN_00546ac0(param_2,param_4);
          piVar6[-0x14] = iVar3;
        }
        if ((iVar5 <= local_c._2_2_) &&
           (param_2 = puVar2,
           iVar3 = FUN_004885f0(param_1,iVar5,param_4,&local_20,&local_30,&param_2), iVar3 == 0)) {
          *(undefined1 *)((int)local_2c + iVar1) = local_30._3_1_;
          if (((local_30 & 0x4000000) != 0) && ((short)local_30 != -1)) {
            *piVar6 = (int)param_2 + local_20 * 4 + (local_30 & 0xffff) + 4;
            iVar1 = local_18;
          }
          if ((local_30 & 0x4000000) == 0) {
            uVar4 = 0;
          }
          else {
            iVar5 = FUN_004b7550((int)param_2 + local_20 * 4 + (local_30 & 0xffff) + 4);
            uVar4 = iVar5 + 4U & 0xfffffffc;
          }
          puVar2 = local_1c;
          iVar5 = local_28;
          if (((local_30 & 0x2000000) != 0) && ((short)local_30 != -1)) {
            piVar6[0x14] = uVar4 + (local_30 & 0xffff) + 4 + local_20 * 4 + (int)param_2;
          }
        }
        local_18 = iVar1 + 1;
        piVar6 = piVar6 + 1;
        param_4 = (undefined4 *)((int)param_4 + 1);
      } while (local_18 < 5);
      local_2c = (undefined4 *)((int)local_2c + 5);
      iVar5 = iVar5 + 1;
      local_24 = local_24 + 1;
      local_14 = local_14 + -1;
      if (local_14 == 0) break;
      param_4 = (undefined4 *)param_3;
      local_18 = 0;
      local_28 = iVar5;
    }
    return;
  }
  for (iVar5 = 0x41; iVar5 != 0; iVar5 = iVar5 + -1) {
    *param_4 = 0;
    param_4 = param_4 + 1;
  }
  return;
}

