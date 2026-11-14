// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0051b1c0
// entry: 0051b1c0  size: 678


int FUN_0051b1c0(int *param_1,undefined4 *param_2,undefined4 param_3,char *param_4,int param_5)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined1 *local_a0;
  undefined4 *local_9c;
  undefined4 local_88;
  undefined1 local_84;
  undefined1 local_83;
  undefined1 local_64;
  undefined1 local_60 [96];
  
  if ((*param_4 == '\0') && (param_4[1] == '\0')) {
    if (*param_1 == 0x760e) {
      FUN_004e5630(3,param_5 + 0x8a8);
      *(undefined4 *)(param_5 + 0x8b4) = *param_2;
      *(undefined4 *)(param_5 + 0x8b8) = param_2[1];
      *(undefined4 *)(param_5 + 0x8bc) = param_2[2];
      FUN_0050acb0(param_5);
      iVar2 = FUN_004d5130(param_2,&local_a4,param_5 + 0x800,*(undefined1 *)(param_5 + 0x8e2));
      if (iVar2 == 0) {
        DAT_005d6800 = iVar2;
        FUN_0050f940(local_a4,1,local_a4,0x3f,param_5,*(undefined1 *)(param_5 + 0x8e3),
                     *(undefined1 *)(param_5 + 0x8e2));
      }
      *param_1 = 0x165;
      return 0;
    }
  }
  else if (*param_1 == 0x760e) {
    uVar3 = FUN_004e57a0(&local_c8,param_4,&local_c8,&local_c8);
    uVar3 = FUN_004e6dd0(uVar3);
    FUN_004e7730(uVar3);
    goto LAB_0051b2d6;
  }
  local_c8 = *(undefined4 *)param_4;
  local_c4 = *(undefined4 *)(param_4 + 4);
  local_c0 = *(undefined4 *)(param_4 + 8);
LAB_0051b2d6:
  local_bc = local_c8;
  local_b8 = local_c4;
  local_b4 = local_c0;
  uVar3 = FUN_004e6d00(&local_c8,param_2,&local_b0,&local_b0);
  FUN_004e6b80(param_3,uVar3);
  iVar2 = FUN_004e4020(&local_bc);
  if (iVar2 == 0) {
    iVar2 = FUN_004e4020(&local_b0);
    if (iVar2 == 0) {
      *(undefined4 *)(param_5 + 0x8a8) = local_bc;
      *(undefined4 *)(param_5 + 0x8ac) = local_b8;
      *(undefined4 *)(param_5 + 0x8b0) = local_b4;
      *(undefined4 *)(param_5 + 0x8b4) = local_b0;
      *(undefined4 *)(param_5 + 0x8b8) = local_ac;
      *(undefined4 *)(param_5 + 0x8bc) = local_a8;
      FUN_0050acb0(param_5);
      local_84 = *(undefined1 *)(param_5 + 0x8e3);
      uVar3 = *(undefined4 *)(param_5 + 0x8dc);
      bVar1 = *(byte *)(param_5 + 0x8e1);
      *(byte *)(param_5 + 0x8e1) = bVar1 & 0xfe;
      local_9c = &local_bc;
      local_88 = 0x1100;
      local_a0 = &LAB_0051b0f0;
      local_83 = 0;
      local_64 = 0;
      *(undefined1 ***)(param_5 + 0x8dc) = &local_a0;
      FUN_0051b140(local_60);
      iVar2 = FUN_00510270(param_5);
      FUN_0051b180(local_60);
      *(undefined4 *)(param_5 + 0x8dc) = uVar3;
      *(byte *)(param_5 + 0x8e1) =
           (*(byte *)(param_5 + 0x8e1) ^ bVar1 & 1) & 1 ^ *(byte *)(param_5 + 0x8e1);
      FUN_0050acb0(param_5);
      if (iVar2 != 0) {
        FUN_00515dd0();
        return iVar2;
      }
      *param_1 = (*param_1 != 0x760d) + 0x164;
      return 0;
    }
  }
  return 3;
}

