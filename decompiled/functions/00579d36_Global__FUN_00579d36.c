// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00579d36
// entry: 00579d36  size: 622


void __thiscall
FUN_00579d36(int param_1,int *param_2,int *param_3,byte *param_4,uint *param_5,int param_6,
            int param_7,uint *param_8,undefined4 param_9,byte *param_10,int *param_11,int *param_12)

{
  byte bVar1;
  byte *pbVar2;
  DWORD DVar3;
  uint uVar4;
  BOOL BVar5;
  int iVar6;
  int iVar7;
  byte *pbVar8;
  int *lpBuffer;
  tagTEXTMETRICA local_b0;
  tagTEXTMETRICA local_78;
  tagSIZE local_40;
  tagPOINT local_38;
  tagSIZE local_30;
  UINT local_28;
  uint local_24;
  int local_20;
  byte *local_1c;
  uint local_18;
  uint local_14;
  int local_10;
  int local_c;
  uint local_8;
  
  GetTextMetricsA(*(HDC *)(param_1 + 8),&local_78);
  GetTextMetricsA(*(HDC *)(param_1 + 4),&local_b0);
  GetTextExtentPoint32A(*(HDC *)(param_1 + 8),&DAT_005ca840,1,&local_30);
  local_28 = GetTextAlign(*(HDC *)(param_1 + 8));
  local_24 = local_28 & 1;
  if (local_24 != 0) {
    GetCurrentPositionEx(*(HDC *)(param_1 + 4),&local_38);
    *param_3 = local_38.x;
  }
  iVar7 = *param_3;
  local_1c = param_4;
  local_c = 0;
  local_14 = 0;
  local_20 = iVar7;
  if (param_6 != 0) {
    if (param_7 == 1) {
      local_14 = *param_8;
    }
    else {
      DVar3 = GetTabbedTextExtentA(*(HDC *)(param_1 + 8),"\t",1,0,(INT *)0x0);
      local_14 = DVar3 & 0xffff;
    }
  }
  local_8 = 0;
  pbVar8 = param_4;
  lpBuffer = param_11;
  param_4 = (byte *)iVar7;
  if (*param_5 != 0) {
    do {
      bVar1 = *pbVar8;
      local_18 = (uint)(bVar1 == local_78.tmBreakChar);
      if ((local_18 == 0) && ((param_6 == 0 || (bVar1 != 9)))) {
        uVar4 = (uint)bVar1;
        if (((&DAT_005da801)[uVar4] & 4) == 0) {
          GetCharWidthA(*(HDC *)(param_1 + 4),uVar4,uVar4,&local_10);
          BVar5 = GetCharWidthA(*(HDC *)(param_1 + 8),(uint)*pbVar8,(uint)*pbVar8,lpBuffer);
          if (BVar5 == 0) {
            *lpBuffer = local_78.tmAveCharWidth;
          }
        }
        else {
          *lpBuffer = local_78.tmAveCharWidth;
          local_10 = local_b0.tmAveCharWidth;
        }
        local_10 = local_10 - local_b0.tmOverhang;
        *lpBuffer = *lpBuffer - local_78.tmOverhang;
        iVar7 = *lpBuffer;
        param_4 = (byte *)((int)param_4 + iVar7);
        if (lpBuffer != param_11) {
          iVar6 = (iVar7 - local_10) / 2;
          lpBuffer[-1] = lpBuffer[-1] + iVar6;
          *lpBuffer = iVar7 - iVar6;
        }
        *param_10 = *pbVar8;
        pbVar2 = param_10 + 1;
        if (((&DAT_005da801)[*pbVar8] & 4) != 0) {
          param_10[1] = pbVar8[1];
          iVar7 = *lpBuffer;
          param_4 = (byte *)((int)param_4 + iVar7);
          lpBuffer = lpBuffer + 1;
          local_8 = local_8 + 1;
          *lpBuffer = iVar7;
          pbVar2 = param_10 + 2;
        }
        param_10 = pbVar2;
        lpBuffer = lpBuffer + 1;
      }
      else {
        GetTextExtentPoint32A
                  (*(HDC *)(param_1 + 8),(LPCSTR)local_1c,(int)(pbVar8 + (local_18 - (int)local_1c))
                   ,&local_40);
        iVar7 = (local_40.cx - local_78.tmOverhang) + local_20;
        if (local_18 == 0) {
          iVar7 = FUN_00579d02(iVar7,param_7,param_8,param_9,local_14);
        }
        if (lpBuffer == param_11) {
          local_c = local_c + (iVar7 - (int)param_4);
        }
        else {
          lpBuffer[-1] = lpBuffer[-1] + (iVar7 - (int)param_4);
        }
        local_1c = pbVar8 + 1;
        param_4 = (byte *)iVar7;
        local_20 = iVar7;
      }
      pbVar8 = (byte *)FUN_005560f4(pbVar8);
      local_8 = local_8 + 1;
    } while (local_8 < *param_5);
  }
  local_30.cx = (int)param_4 - *param_3;
  uVar4 = local_28 & 6;
  *param_12 = 0;
  iVar7 = local_c;
  if (uVar4 != 0) {
    if (uVar4 != 6) {
      if (uVar4 == 2) {
        *param_12 = local_c;
      }
      goto LAB_00579f6f;
    }
    iVar7 = local_c / 2;
  }
  *param_3 = *param_3 + iVar7;
LAB_00579f6f:
  if (local_24 != 0) {
    MoveToEx(*(HDC *)(param_1 + 4),*param_3,local_38.y,(LPPOINT)0x0);
  }
  *param_5 = (int)lpBuffer - (int)param_11 >> 2;
  *param_2 = local_30.cx;
  param_2[1] = local_30.cy;
  return;
}

