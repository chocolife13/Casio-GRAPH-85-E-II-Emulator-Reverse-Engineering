// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00500090
// entry: 00500090  size: 566


undefined4 FUN_00500090(undefined4 param_1,byte *param_2,undefined1 *param_3)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  undefined4 uVar4;
  byte bVar5;
  byte bVar6;
  bool bVar7;
  byte local_a;
  byte local_9;
  uint local_8;
  uint local_4;
  
  *param_3 = 9;
  param_3[1] = 0x90;
  *(undefined4 *)(param_3 + 2) = 0;
  bVar6 = 2;
  *(undefined2 *)(param_3 + 6) = 0;
  local_8 = CONCAT31(local_8._1_3_,2);
  param_3[8] = 0;
  bVar5 = 3;
  local_4 = CONCAT31(local_4._1_3_,1);
  while( true ) {
    bVar1 = *param_2;
    if (bVar1 == 0x2e) {
      if (bVar6 < 8) {
        local_8 = CONCAT31(local_8._1_3_,bVar6) | 0xe;
        bVar6 = bVar6 | 0xe;
        goto switchD_00500124_caseD_2;
      }
      goto LAB_005001e4;
    }
    if (bVar1 == 0xf) break;
    if (bVar6 == 2) {
      bVar6 = 0;
      local_8 = (uint)local_8._1_3_ << 8;
    }
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(local_8 & 0xff) {
    case 0:
      if (bVar1 != 0x30) {
        bVar6 = 1;
        local_8 = CONCAT31(local_8._1_3_,1);
        if (bVar5 < 0x12) {
          pbVar3 = param_3 + (local_4 & 0xff);
          *pbVar3 = *pbVar3 | bVar1 & 0xf;
          if ((bVar5 & 1) == 0) {
            *pbVar3 = *pbVar3 << 4;
          }
          bVar5 = bVar5 + 1;
          local_4 = CONCAT31(local_4._1_3_,bVar5 >> 1);
        }
        iVar2 = FUN_004fc2e0(param_3);
        if (iVar2 == 0) goto LAB_0050029b;
      }
      break;
    case 0xe:
      if (bVar1 == 0x30) {
        FUN_004fc100(param_3);
        break;
      }
      bVar6 = 0xf;
      local_8 = CONCAT31(local_8._1_3_,0xf);
      goto LAB_005000e7;
    }
switchD_00500124_caseD_2:
    FUN_004fe330(param_2,param_1);
LAB_005000e7:
    iVar2 = FUN_004f9e20(param_2);
    if (iVar2 == 0) {
      if ((param_3[1] & 0xf) != 0) {
        return 1;
      }
      param_3[1] = 0;
      *param_3 = 0;
      return 1;
    }
  }
  if (bVar6 == 2) {
    FUN_004e57a0(param_3);
  }
  local_9 = 0;
  local_a = 0;
  bVar7 = true;
  do {
    FUN_004fe330(param_2,param_1);
    bVar7 = (bool)(bVar7 ^ 1);
    FUN_005016f0(param_2,param_1);
  } while (*param_2 == 0x87);
  iVar2 = FUN_004f9d40(param_2);
  if (iVar2 != 0) {
    local_9 = *param_2 << 4;
    FUN_004fe330(param_2,param_1);
    iVar2 = FUN_004f9d40(param_2);
    if (iVar2 != 0) {
      local_a = local_9 >> 4;
      local_9 = *param_2 << 4;
      FUN_004fe330(param_2,param_1);
    }
    if ((param_3[1] & 0xf) == 0) {
      FUN_004e5780(param_3);
      return 1;
    }
    if (bVar7) {
      if (((local_a != 0) || (local_9 != 0)) && (iVar2 = FUN_004fc120(param_3,&local_a), iVar2 == 0)
         ) {
        FUN_004e5780(param_3);
        return 1;
      }
      return 1;
    }
    iVar2 = FUN_004fc1d0(param_3,&local_a);
    if (iVar2 != 0) {
      return 1;
    }
LAB_0050029b:
    uVar4 = FUN_00501ed0(param_3);
    return uVar4;
  }
LAB_005001e4:
  uVar4 = FUN_00501f30(param_3);
  return uVar4;
}

