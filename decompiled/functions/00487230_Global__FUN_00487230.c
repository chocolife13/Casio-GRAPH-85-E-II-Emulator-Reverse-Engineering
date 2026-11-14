// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00487230
// entry: 00487230  size: 1029


undefined4
FUN_00487230(undefined4 param_1,undefined4 param_2,int param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  short sVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  bool bVar9;
  undefined4 local_28;
  int *local_24;
  int local_20;
  int local_1c;
  int local_18;
  undefined1 local_14 [4];
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  local_1c = 1;
  iVar1 = FUN_00486470(param_2,param_3);
  if (iVar1 == 0) {
    return 0;
  }
  piVar2 = (int *)FUN_004869c0(param_1);
  if (piVar2 == (int *)0x0) {
    return 1;
  }
  local_24 = piVar2;
  iVar1 = FUN_00486330(param_2,1,local_14,piVar2);
  if (((iVar1 == 1) &&
      (iVar1 = FUN_004885f0(param_1,param_2,param_3,&local_20,&local_28,&local_24), iVar1 == 0)) &&
     (param_3 <= local_20)) {
    if (local_20 < param_3 + -1 + param_4) {
      param_4 = (local_20 - param_3) + 1;
    }
    iVar7 = 0;
    iVar1 = param_3 + -1 + param_4;
    local_1c = param_3;
    piVar3 = local_24;
    local_18 = iVar1;
    if (param_3 <= iVar1) {
      do {
        local_28 = piVar3[local_1c];
        if ((short)local_28 != -1) {
          uVar6 = 0;
          uVar8 = 0;
          if ((local_28 & 0x4000000) != 0) {
            iVar1 = FUN_004b7550((((local_28 & 0xffff) + 4 + local_20 * 4) - iVar7) + (int)piVar3);
            uVar8 = iVar1 + 4U & 0xfffffffc;
            if ((param_6 == 4) || (piVar3 = local_24, param_5 == 0)) {
              FUN_004acb90(uVar8,((((local_28 & 0xffff) + 4 + local_20 * 4) - iVar7) - (int)piVar2)
                                 + (int)local_24);
              local_10 = *piVar2;
              local_c = piVar2[1];
              local_8 = piVar2[2];
              local_4 = piVar2[3];
              local_24 = piVar2;
              local_24 = (int *)FUN_004871e0(param_1,param_2,&local_20,piVar2);
              piVar3 = local_24;
              uVar6 = uVar8;
              if (local_24 == (int *)0x0) {
                return 0;
              }
            }
          }
          if ((local_28 & 0x2000000) != 0) {
            if (param_6 == 2) {
              if (param_5 == 0) goto LAB_004873ef;
              iVar1 = FUN_004b7550((((local_28 & 0xffff) + 4 + local_20 * 4) - iVar7) + uVar8 +
                                   (int)piVar3);
              uVar6 = iVar1 + 4 + uVar6 & 0xfffffffc;
              iVar1 = ((((local_28 & 0xffff) + 4 + local_20 * 4) - iVar7) - (int)piVar2) + uVar8 +
                      (int)local_24;
              uVar8 = uVar6;
            }
            else {
              if (param_5 != 0) goto LAB_004874c1;
LAB_004873ef:
              iVar1 = FUN_004b7550((((local_28 & 0xffff) + 4 + local_20 * 4) - iVar7) + (int)piVar3)
              ;
              uVar8 = iVar1 + 4U & 0xfffffffc;
              uVar6 = uVar6 + uVar8;
              iVar1 = ((((local_28 & 0xffff) + 4 + local_20 * 4) - iVar7) - (int)piVar2) +
                      (int)local_24;
            }
            FUN_004acb90(uVar8,iVar1);
            local_10 = *piVar2;
            local_c = piVar2[1];
            local_8 = piVar2[2];
            local_4 = piVar2[3];
            local_24 = piVar2;
            piVar3 = (int *)FUN_004871e0(param_1,param_2,&local_20,piVar2);
            local_24 = piVar3;
            if (piVar3 == (int *)0x0) {
              return 0;
            }
          }
LAB_004874c1:
          if ((param_5 == 1) && (uVar6 != 0)) {
            bVar5 = local_28._3_1_ & ~(byte)param_6;
            local_28 = CONCAT13(bVar5,(undefined3)local_28);
            if (param_6 == 4) {
              local_28 = CONCAT13(bVar5,(undefined3)local_28) & 0x7f00ffff;
            }
            bVar9 = local_28._3_1_ == '\0';
            if (bVar9) {
              local_28 = CONCAT22(local_28._2_2_,0xffff);
            }
            else if (local_1c != param_3) {
              local_28 = CONCAT22(local_28._2_2_,(short)local_28 - (short)uVar6);
            }
            piVar3[local_1c] = local_28;
            piVar3 = local_24;
          }
          iVar7 = iVar7 + uVar6;
          iVar1 = local_18;
        }
        local_1c = local_1c + 1;
      } while (local_1c <= iVar1);
      iVar1 = local_1c;
      if (iVar7 != 0) {
        for (; iVar1 <= local_20; iVar1 = iVar1 + 1) {
          local_28 = piVar3[iVar1];
          sVar4 = (short)local_28;
          if (sVar4 != -1) {
            local_28._2_2_ = (undefined2)(local_28 >> 0x10);
            local_28 = CONCAT22(local_28._2_2_,sVar4 - (short)iVar7);
            piVar3[iVar1] = local_28;
            piVar3 = local_24;
          }
        }
      }
    }
    if (param_5 == 0) {
      FUN_004acb90(param_4 * 4,(param_3 * 4 - (int)piVar2) + (int)piVar3);
      local_20 = local_20 - param_4;
      *local_24 = local_20;
      iVar7 = iVar7 + param_4 * 4;
    }
    local_1c = 1;
    local_24 = piVar2;
    local_24 = (int *)FUN_004871e0(param_1,param_2,&local_20,piVar2);
    if (local_24 == (int *)0x0) {
      return 0;
    }
    if (-iVar7 != 0) {
      local_10 = *piVar2;
      local_c = piVar2[1];
      local_8 = piVar2[2];
      local_4 = piVar2[3];
      FUN_00486870(1,param_2,-iVar7,piVar2,&local_10);
      FUN_00486210(param_1,param_2,piVar2);
    }
  }
  return local_1c;
}

