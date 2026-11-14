// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0047f8d0
// entry: 0047f8d0  size: 327


int FUN_0047f8d0(short *param_1,short *param_2,int param_3)

{
  int iVar1;
  undefined4 local_c;
  undefined4 local_8;
  
  *param_1 = *param_2;
  if (param_3 == 0) {
    local_c = *(undefined4 *)(param_2 + 9);
    local_8 = *(undefined4 *)(param_2 + 0xb);
    iVar1 = FUN_00489760(&local_c,0,0x1d,0x1101);
    if (iVar1 == 0) {
      local_c = *(undefined4 *)(param_2 + 0xd);
      local_8 = *(undefined4 *)(param_2 + 0xf);
      iVar1 = FUN_00489760(&local_c,0,0x1e,0x1101);
      if (iVar1 == 0) {
        local_c = *(undefined4 *)(param_2 + 0x11);
        local_8 = *(undefined4 *)(param_2 + 0x13);
        iVar1 = FUN_00489760(&local_c,0,0x1f,0x1101);
        param_1[3] = 0x1d;
        param_1[4] = 0x1e;
        if (((param_2[0x11] == 0) || (*param_1 == 0x11)) || (*param_1 == 0x12)) {
          param_1[5] = 0;
          iVar1 = 0;
        }
        else if (iVar1 == 0) {
          param_1[5] = 0x1f;
          return 0;
        }
      }
    }
  }
  else {
    local_c = *(undefined4 *)(param_2 + 1);
    local_8 = *(undefined4 *)(param_2 + 3);
    iVar1 = FUN_00489760(&local_c,0,0x1b,0x1101);
    if (iVar1 == 0) {
      local_c = *(undefined4 *)(param_2 + 5);
      local_8 = *(undefined4 *)(param_2 + 7);
      iVar1 = FUN_00489760(&local_c,0,0x1c,0x1101);
      param_1[1] = 0x1b;
      if (param_2[5] != 0) {
        param_1[2] = 0x1c;
        return iVar1;
      }
      param_1[2] = 0;
      return 0;
    }
  }
  return iVar1;
}

