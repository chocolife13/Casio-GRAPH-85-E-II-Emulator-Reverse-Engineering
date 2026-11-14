// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0054da30
// entry: 0054da30  size: 568


void FUN_0054da30(int param_1,int param_2,short param_3)

{
  undefined4 uVar1;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  undefined2 extraout_var_03;
  undefined2 extraout_var_04;
  undefined2 extraout_var_05;
  undefined2 extraout_var_06;
  undefined4 uVar2;
  undefined1 local_20a;
  undefined1 local_209;
  undefined2 local_208;
  undefined2 local_206;
  undefined2 local_204;
  undefined2 local_202;
  undefined1 local_200 [256];
  undefined1 local_100 [256];
  
  local_20a = 0x3a;
  local_209 = 0;
  if ((*(short *)(param_1 + 6) == 0) && (*(short *)(param_1 + 8) == 0)) {
    if (param_2 == 0) {
      uVar1 = FUN_004138b0();
      local_208 = 1;
      local_204 = 4;
      local_206 = 1;
      local_202 = 5;
      FUN_0054d1f0(uVar1,&local_208,&local_204);
      FUN_0054d310(uVar1);
      local_200[0] = 0;
      uVar1 = FUN_00488960(local_200,0xff);
      FUN_0054d340(uVar1);
      FUN_005232d0(1,7);
      FUN_005233e0(local_200);
    }
  }
  else {
    if ((*(short *)(param_1 + 6) == 0) && (param_2 == 0)) {
      uVar1 = FUN_004138b0();
      FUN_0054d1a0(uVar1,CONCAT22(extraout_var_01,*(short *)(param_1 + 8) - *(short *)(param_1 + 4))
                         + 1);
      FUN_0054c8d0(1,CONCAT22(extraout_var,*(undefined2 *)(param_1 + 8)),local_200);
      FUN_004b6e70(local_200,&local_20a);
      uVar1 = CONCAT22(extraout_var_02,*(undefined2 *)(param_1 + 8));
      uVar2 = 0x1a;
    }
    else {
      if ((*(short *)(param_1 + 8) != 0) || (param_2 != 0)) {
        if (*(short *)(param_1 + 0x14) == 1) {
          FUN_0054c8d0(*(undefined2 *)(param_1 + 0xc),*(undefined2 *)(param_1 + 0xe),local_200);
          FUN_004b6e70(local_200,&local_20a);
          uVar1 = FUN_0054c8d0(CONCAT22(extraout_var_06,*(undefined2 *)(param_1 + 0x10)),
                               CONCAT22(extraout_var_05,*(undefined2 *)(param_1 + 0x12)),local_100);
          FUN_004b6e70(local_200,uVar1);
          FUN_005232d0(1,7);
          FUN_005233e0(local_200);
        }
        goto LAB_0054dc0d;
      }
      uVar1 = FUN_004138b0();
      FUN_0054d120(uVar1,CONCAT22(extraout_var_03,*(short *)(param_1 + 6) - *(short *)(param_1 + 2))
                         + 1);
      FUN_0054c8d0(CONCAT22(extraout_var_00,*(undefined2 *)(param_1 + 6)),1,local_200);
      FUN_004b6e70(local_200,&local_20a);
      uVar2 = CONCAT22(extraout_var_04,*(undefined2 *)(param_1 + 6));
      uVar1 = 999;
    }
    uVar1 = FUN_0054c8d0(uVar2,uVar1,local_100);
    FUN_004b6e70(local_200,uVar1);
    FUN_005232d0(1,7);
    FUN_005233e0(local_200);
  }
LAB_0054dc0d:
  if (*(short *)(param_1 + 0x1e) == 1) {
    FUN_0054ce10(param_1 + 0x16,param_1,param_3 != 0);
  }
  if (*(short *)(param_1 + 0x14) == 1) {
    FUN_0054cd50(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),
                 *(undefined2 *)(param_1 + 0x14),param_1);
  }
  return;
}

