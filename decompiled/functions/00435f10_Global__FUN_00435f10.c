// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00435f10
// entry: 00435f10  size: 964


uint FUN_00435f10(char param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  uint local_c0;
  int local_bc [5];
  undefined1 local_a8 [4];
  undefined1 local_a4 [4];
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined1 local_94;
  undefined1 local_8c [24];
  undefined1 local_74 [4];
  undefined1 local_70 [12];
  char local_64 [4];
  char local_60 [4];
  char local_5c [92];
  
  local_c0 = 0;
  local_98 = DAT_005bea08;
  local_94 = DAT_005bea0c;
  FUN_00538a00(local_70);
  FUN_0053c6f0(1);
  FUN_0053edf0(2);
  local_9c = FUN_00526410();
  FUN_00526420(100);
  FUN_005387f0(2);
  local_bc[0] = (int)param_1;
  local_bc[1] = 1;
  local_bc[2] = 1;
  local_bc[3] = 1;
  local_bc[4] = 1;
  iVar2 = FUN_00528a20(local_bc[0],local_a8,local_a4);
  bVar1 = false;
  if (iVar2 != 0) {
    FUN_0052b240(4);
switchD_00436078_caseD_ffffffff:
    FUN_00538810();
    FUN_00538a50(local_70);
    FUN_00526420(local_9c);
    return local_c0;
  }
switchD_00436078_caseD_fffffff2:
  while( true ) {
    if (!bVar1) {
      iVar2 = FUN_00528ac0(local_bc[0],local_bc[3],local_bc[4],local_8c);
      if (iVar2 == 0) {
        FUN_004b5030(local_8c,local_64);
      }
      else {
        local_64[0] = s_Mem_ERROR_0057ede8[0];
        local_64[1] = s_Mem_ERROR_0057ede8[1];
        local_64[2] = s_Mem_ERROR_0057ede8[2];
        local_64[3] = s_Mem_ERROR_0057ede8[3];
        local_60[0] = s_Mem_ERROR_0057ede8[4];
        local_60[1] = s_Mem_ERROR_0057ede8[5];
        local_60[2] = s_Mem_ERROR_0057ede8[6];
        local_60[3] = s_Mem_ERROR_0057ede8[7];
        local_5c[0] = s_Mem_ERROR_0057ede8[8];
        local_5c[1] = s_Mem_ERROR_0057ede8[9];
      }
    }
    FUN_00414240();
    FUN_00436f70(local_bc,local_64);
    FUN_00538b30();
    iVar2 = FUN_00526620(&local_c0);
    if (iVar2 == 0) break;
    if ((local_c0 != 0xe) && (local_c0 != 0xd)) goto code_r0x00436051;
  }
  goto switchD_00436078_caseD_fffffff1;
code_r0x00436051:
  uVar3 = FUN_004378b0(1,&local_c0,local_bc);
  switch(uVar3) {
  case 0xfffffff1:
switchD_00436078_caseD_fffffff1:
    if (local_c0 < 0x7548) {
      if (local_c0 == 0x7547) {
switchD_00436176_caseD_7542:
        FUN_00436330(local_bc,local_c0);
        bVar1 = false;
        break;
      }
      if (0x7531 < local_c0) {
        switch(local_c0) {
        case 0x7532:
          goto switchD_00436078_caseD_ffffffff;
        default:
          goto switchD_00436078_caseD_fffffff2;
        case 0x7542:
        case 0x7544:
        case 0x7545:
          goto switchD_00436176_caseD_7542;
        }
      }
      if (local_c0 == 0x7531) {
        local_c0 = FUN_00526040();
        iVar2 = FUN_004378b0(1,&local_c0,local_bc);
      }
      else {
        switch(local_c0) {
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
          bVar1 = false;
          uVar3 = FUN_00436450(local_c0,local_bc);
          FUN_0052b240(uVar3);
          goto switchD_00436078_caseD_fffffff2;
        case 10:
          FUN_00437560(local_bc);
          local_c0 = 0x7545;
          iVar2 = FUN_004378b0(0,&local_c0,local_bc);
          break;
        case 0xb:
        case 0xc:
        case 0xd:
        case 0xe:
          bVar1 = false;
          iVar2 = FUN_00436790(local_c0,local_bc,&local_a0);
          if (iVar2 == -1) goto switchD_00436078_caseD_ffffffff;
          if (iVar2 == 0) {
            FUN_0052b240(local_a0);
          }
        default:
          goto switchD_00436078_caseD_fffffff2;
        }
      }
    }
    else {
      if (local_c0 < 0x755f) {
        if (local_c0 == 0x755e) {
          FUN_004b5e70(local_8c,local_64);
          bVar1 = true;
        }
        else if (local_c0 == 0x754a) {
          FUN_004b5ad0(local_8c,local_64);
          bVar1 = true;
        }
        else {
          if (local_c0 == 0x754d) goto switchD_00436078_caseD_ffffffff;
          if (local_c0 == 0x7555) {
            FUN_0052d2d0(&local_98,local_74);
            bVar1 = false;
          }
        }
        break;
      }
      if (local_c0 != 31000) {
        if ((0x7949 < local_c0) && (local_c0 < 0x794d)) {
          if (local_c0 == 0x794a) {
            FUN_004b6300(local_8c,local_64);
          }
          else {
            if (local_c0 == 0x794b) {
              FUN_004b6330(local_8c,local_64,0);
              bVar1 = true;
              break;
            }
            if (local_c0 == 0x794c) {
              FUN_004b6330(local_8c,local_64,1);
              bVar1 = true;
              break;
            }
          }
          bVar1 = true;
        }
        break;
      }
      iVar2 = FUN_0052aae0();
      if (iVar2 != -5) {
        if (iVar2 == -1) goto switchD_00436078_caseD_ffffffff;
        break;
      }
      local_c0 = 0xf91b;
      iVar2 = FUN_004378b0(1,&local_c0,local_bc);
    }
    if (iVar2 != -2) {
      if (iVar2 == -1) goto switchD_00436078_caseD_ffffffff;
      if (iVar2 != 0) break;
    }
  case 0xfffffffe:
  case 0:
    bVar1 = false;
    break;
  case 0xffffffff:
    goto switchD_00436078_caseD_ffffffff;
  }
  goto switchD_00436078_caseD_fffffff2;
}

