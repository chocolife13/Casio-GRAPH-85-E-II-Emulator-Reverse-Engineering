// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00499740
// entry: 00499740  size: 466


undefined4 FUN_00499740(byte *param_1,ushort *param_2)

{
  char cVar1;
  undefined1 uVar2;
  short sVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  int iVar6;
  int iVar7;
  ushort *puVar8;
  char *pcVar9;
  undefined4 *puVar10;
  byte local_406;
  byte local_405;
  undefined4 local_404;
  char local_400 [4];
  char local_3fc [4];
  char local_3f8 [2];
  char cStack_3f6;
  char cStack_3f5;
  
  puVar8 = param_2;
  puVar10 = &DAT_005d6da0;
  for (iVar7 = 5; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar10 = *(undefined4 *)puVar8;
    puVar8 = puVar8 + 2;
    puVar10 = puVar10 + 1;
  }
  local_404 = 0;
  cVar1 = FUN_00538090(local_400,param_1);
  if (cVar1 != '\0') {
    cVar1 = FUN_00533be0(local_400,&local_404,0,0,1,0,0,&local_406,&local_405);
    param_2[2] = (ushort)(cVar1 == '\0');
    FUN_00523740();
    *param_2 = (ushort)local_405;
    param_2[1] = (ushort)local_406;
    return 1;
  }
  param_2[1] = 8;
  if ((*param_1 & 0x70) == 0x20) {
    local_400[0] = s_List_Result_005bfd2c[0];
    local_400[1] = s_List_Result_005bfd2c[1];
    local_400[2] = s_List_Result_005bfd2c[2];
    local_400[3] = s_List_Result_005bfd2c[3];
    local_3fc[0] = s_List_Result_005bfd2c[4];
    local_3fc[1] = s_List_Result_005bfd2c[5];
    local_3fc[2] = s_List_Result_005bfd2c[6];
    local_3fc[3] = s_List_Result_005bfd2c[7];
    local_3f8[0] = s_List_Result_005bfd2c[8];
    local_3f8[1] = s_List_Result_005bfd2c[9];
    cStack_3f6 = s_List_Result_005bfd2c[10];
    cStack_3f5 = s_List_Result_005bfd2c[0xb];
  }
  else if ((*param_1 & 0x70) == 0x30) {
    local_400[0] = s_Mat_Result_005bfd20[0];
    local_400[1] = s_Mat_Result_005bfd20[1];
    local_400[2] = s_Mat_Result_005bfd20[2];
    local_400[3] = s_Mat_Result_005bfd20[3];
    local_3fc[0] = s_Mat_Result_005bfd20[4];
    local_3fc[1] = s_Mat_Result_005bfd20[5];
    local_3fc[2] = s_Mat_Result_005bfd20[6];
    local_3fc[3] = s_Mat_Result_005bfd20[7];
    cStack_3f6 = s_Mat_Result_005bfd20[10];
    local_3f8[0] = s_Mat_Result_005bfd20[8];
    local_3f8[1] = s_Mat_Result_005bfd20[9];
  }
  else {
    FUN_00496c70(param_1,local_400);
    puVar5 = (undefined1 *)FUN_004b6f30(local_400,0xd);
    if (puVar5 != (undefined1 *)0x0) {
      param_2[1] = param_2[1] << 1;
      *puVar5 = 0;
      pcVar9 = puVar5 + 1;
      iVar7 = FUN_004b6ca0(local_400);
      iVar6 = FUN_004b6ca0(pcVar9);
      if (iVar6 < iVar7) {
        pcVar9 = local_400;
      }
      sVar3 = FUN_004b6bd0(pcVar9);
      *param_2 = sVar3 * 6;
      goto LAB_0049981b;
    }
  }
  sVar3 = FUN_004b6bd0(local_400);
  *param_2 = sVar3 * 6;
LAB_0049981b:
  param_2[2] = 0;
  uVar4 = FUN_00526090(0x57,0);
  FUN_004955a0(param_2,uVar4);
  uVar4 = FUN_00526090(0x2a,1);
  FUN_004955a0(param_2,uVar4);
  uVar4 = FUN_00526090(0x13,2);
  FUN_004955a0(param_2,uVar4);
  uVar2 = FUN_00526090(0x2b);
  *(undefined1 *)(param_2 + 9) = uVar2;
  return 0;
}

