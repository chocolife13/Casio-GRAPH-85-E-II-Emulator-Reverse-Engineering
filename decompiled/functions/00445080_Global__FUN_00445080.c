// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00445080
// entry: 00445080  size: 245


void FUN_00445080(int param_1,short param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint local_1c;
  undefined1 local_18 [4];
  undefined1 local_14 [4];
  char local_10 [4];
  char local_c [12];
  
  FUN_00526410();
  FUN_00526420(0xe7);
  FUN_00538980(0,0,local_18);
  puVar2 = &DAT_0057fa98;
  puVar3 = &DAT_005ce570;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  FUN_00538860(0,&DAT_005ce570);
  FUN_005383a0(0);
LAB_004450d2:
  FUN_00444f00();
  FUN_00538b30();
  if (param_1 != 0) goto code_r0x004450e0;
  param_1 = 1;
  if (param_2 != 0) {
    if (param_2 == 1) {
      local_1c = 2;
      goto LAB_004450fc;
    }
    local_1c = 3;
    goto LAB_00445134;
  }
  local_1c = 1;
  goto LAB_004450fc;
code_r0x004450e0:
  iVar1 = FUN_00526620(&local_1c);
  if (iVar1 == 0) {
    if (local_1c < 4) {
      if (local_1c == 3) {
LAB_00445134:
        FUN_00448650();
      }
      else {
LAB_004450fc:
        if (local_1c == 1) {
          FUN_00446b80();
        }
        else if (local_1c == 2) {
          FUN_00445180();
        }
      }
    }
    else if (local_1c == 0x7555) {
      local_10[0] = s__EQUA_005be254[0];
      local_10[1] = s__EQUA_005be254[1];
      local_10[2] = s__EQUA_005be254[2];
      local_10[3] = s__EQUA_005be254[3];
      local_c[0] = s__EQUA_005be254[4];
      local_c[1] = s__EQUA_005be254[5];
      FUN_0052d2d0(local_10,local_14);
    }
  }
  goto LAB_004450d2;
}

