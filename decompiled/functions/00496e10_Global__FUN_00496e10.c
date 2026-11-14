// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00496e10
// entry: 00496e10  size: 946


void FUN_00496e10(undefined4 param_1,undefined4 param_2,int param_3)

{
  byte *pbVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  char *pcVar5;
  int iVar6;
  undefined4 *puVar7;
  short *psVar8;
  undefined4 *puVar9;
  undefined1 local_416;
  undefined1 local_415;
  int local_414;
  char local_40e [2];
  int local_40c;
  uint local_408;
  undefined4 local_404;
  char local_400 [4];
  char local_3fc [4];
  char local_3f8 [2];
  char cStack_3f6;
  char cStack_3f5;
  
  local_414 = 0;
  local_40c = 0;
  local_40e[0] = -0x28;
  local_40e[1] = 0;
  FUN_00496700(param_1,&local_408);
  if (local_408 < 0x6000001) {
    if (local_408 == 0x6000000) {
      uVar3 = FUN_00495720(param_1);
      FUN_00496b50((int)(short)param_2,uVar3);
      uVar3 = FUN_00495770(param_1,local_400,0x10);
      FUN_004b7b40(uVar3);
      FUN_00496a30(1,(short)param_2 + 2,local_400,0);
      local_404 = CONCAT22(local_404._2_2_ + -1,(short)local_404);
    }
    else if (local_408 == 0x3000000) {
      pcVar5 = (char *)FUN_00495770(param_1);
      if ((local_408 == 0x3000000) && (*pcVar5 == '\0')) {
        pcVar5 = local_40e;
      }
      iVar2 = FUN_00495720(param_1);
      psVar8 = (short *)(iVar2 + 4);
      iVar2 = FUN_0040ad00();
      if (iVar2 == 2) {
        *psVar8 = 0;
      }
      if (*psVar8 != 0) {
        local_414 = CONCAT22((short)((uint)iVar2 >> 0x10),*psVar8) + -1;
      }
      FUN_00533be0(pcVar5,&local_414,0,param_2,1,param_3,1,&local_415,&local_416);
      FUN_00523740();
      if (*psVar8 != 0) {
        *psVar8 = (short)local_414 + 1;
      }
    }
    else if (local_408 == 0x4000000) {
      local_40c = 0x80 - local_404;
      pbVar1 = (byte *)FUN_00496880(param_1);
      iVar2 = FUN_00495720(param_1);
      puVar7 = (undefined4 *)(iVar2 + 0x18);
      puVar9 = &DAT_005d6da0;
      for (iVar6 = 5; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar9 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar9 = puVar9 + 1;
      }
      uVar3 = FUN_00538090(local_400,pbVar1);
      if ((char)uVar3 == '\0') {
        if ((*pbVar1 & 0x70) == 0x20) {
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
        else if ((*pbVar1 & 0x70) == 0x30) {
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
          FUN_00496c70(pbVar1,local_400);
          puVar4 = (undefined1 *)FUN_004b6f30(local_400,0xd);
          if (puVar4 != (undefined1 *)0x0) {
            *puVar4 = 0;
            iVar2 = FUN_004b6bd0(local_400);
            FUN_00496a30(iVar2 * -6 + 0x80,(int)(short)param_2,local_400,0);
            iVar2 = FUN_004b6bd0(puVar4 + 1);
            FUN_00496a30(iVar2 * -6 + 0x80,(short)param_2 + 8,puVar4 + 1,0);
            goto LAB_00497165;
          }
        }
        iVar2 = FUN_004b6bd0(local_400);
        FUN_00496a30(iVar2 * -6 + 0x80,(int)(short)param_2,local_400,0);
      }
      else {
        if (*(short *)(iVar2 + 0x1c) != 0) {
          local_414 = CONCAT22((short)((uint)uVar3 >> 0x10),*(short *)(iVar2 + 0x1c)) + -1;
        }
        FUN_00533be0(local_400,&local_414,local_40c,param_2,0,param_3,1,&local_415,&local_416);
        FUN_00523740();
        if (*(short *)(iVar2 + 0x1c) != 0) {
          *(short *)(iVar2 + 0x1c) = (short)local_414 + 1;
        }
      }
    }
    else {
      if (local_408 != 0x5000000) {
        return;
      }
      FUN_00496c20((int)(short)param_2);
    }
  }
  else {
    if (local_408 == 0x7000000) {
      uVar3 = FUN_00495770(param_1,0);
      FUN_00496a30(1,(int)(short)param_2,uVar3);
      return;
    }
    if ((local_408 != 0x81000000) && (local_408 != 0x82000000)) {
      return;
    }
    uVar3 = FUN_00495770(param_1);
    FUN_00533be0(uVar3,&local_414,0,param_2,1,param_3,1,&local_415,&local_416);
    FUN_00523740();
  }
LAB_00497165:
  if (param_3 == 0) {
    return;
  }
  FUN_00496ab0((int)(short)local_40c,(int)(short)param_2,(int)(short)local_404,(int)local_404._2_2_)
  ;
  return;
}

