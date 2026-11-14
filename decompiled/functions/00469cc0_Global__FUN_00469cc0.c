// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00469cc0
// entry: 00469cc0  size: 352


undefined4 FUN_00469cc0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  uint *puVar5;
  uint local_18;
  uint local_14;
  int local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  FUN_005234d0(&local_10);
  FUN_00527030();
  local_18 = local_18 & 0xffff0000;
  *param_1 = 0;
  do {
    while( true ) {
      FUN_005232d0(param_2,param_3);
      if ((char)local_18 == '\0') {
        puVar5 = (uint *)&DAT_005ad48c;
      }
      else {
        puVar5 = &local_18;
      }
      FUN_00523420(puVar5);
      FUN_005232d0(param_2,param_3);
      iVar1 = FUN_00526620(&local_14);
      if (iVar1 == 0) break;
      iVar1 = 0;
      if (DAT_00581b88 != 0) {
        puVar3 = &DAT_00581b88;
        uVar2 = DAT_00581b88;
        do {
          if (uVar2 == local_14) break;
          uVar2 = puVar3[1];
          puVar3 = puVar3 + 1;
          iVar1 = iVar1 + 1;
        } while (uVar2 != 0);
      }
      if ((&DAT_00581b88)[iVar1] == 0) {
        if (local_14 == 0xbb) {
          local_18 = CONCAT31(local_18._1_3_,0x47);
        }
        else if ((0x40 < local_14) && (local_14 < 0x5b)) {
          local_18 = CONCAT31(local_18._1_3_,(char)local_14);
        }
      }
      else {
        local_18 = CONCAT31(local_18._1_3_,(&UNK_00581bec)[iVar1 * 4]);
      }
    }
    switch(local_14) {
    case 0x7531:
      local_18 = CONCAT31(local_18._1_3_,0x41);
      break;
    case 0x7532:
      uVar4 = 0xfffffffe;
LAB_00469df6:
      FUN_005232d0(local_c,local_8);
      if (local_10 == -1) {
        FUN_00523740();
      }
      return uVar4;
    case 0x7534:
      if ((char)local_18 != '\0') {
        uVar4 = 0;
        *param_1 = (local_18 & 0xff) - 0x40;
        goto LAB_00469df6;
      }
      break;
    case 0x753f:
    case 0x7549:
      local_18 = (uint)local_18._1_3_ << 8;
      break;
    case 0x754d:
      uVar4 = 0xffffffff;
      goto LAB_00469df6;
    }
  } while( true );
}

