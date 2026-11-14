// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00474cc0
// entry: 00474cc0  size: 901


/* WARNING: Type propagation algorithm not settling */

int FUN_00474cc0(int param_1,int param_2,int param_3,int param_4,undefined4 param_5,
                undefined4 param_6,undefined4 *param_7,undefined4 *param_8)

{
  short sVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *extraout_EDX;
  undefined4 *extraout_EDX_00;
  undefined4 *extraout_EDX_01;
  int iVar6;
  undefined8 uVar7;
  undefined1 local_48 [12];
  undefined1 local_3c [8];
  undefined4 auStack_34 [13];
  
  auStack_34[5] = 5;
  auStack_34[10] = 5;
  auStack_34[3] = 3;
  auStack_34[8] = 3;
  iVar6 = 0;
  puVar5 = (undefined4 *)0x1;
  auStack_34[1] = 1;
  auStack_34[2] = 2;
  auStack_34[4] = 4;
  auStack_34[6] = 1;
  auStack_34[7] = 2;
  auStack_34[9] = 4;
  auStack_34[0xb] = 6;
  auStack_34[0xc] = 7;
  switch(*(short *)(param_2 + 2)) {
  case 1:
  case 2:
    iVar6 = FUN_00483e70(0,(int)*(short *)(param_2 + 4),param_4,param_5);
    if (iVar6 != 0) goto LAB_00475032;
    uVar7 = FUN_00483e70(0,(int)*(short *)(param_2 + 6),param_4,param_6);
    iVar4 = (int)uVar7;
    goto joined_r0x00474db5;
  case 3:
    iVar6 = FUN_00480620(param_4,param_1,param_5);
    if (iVar6 != 0) goto LAB_00475032;
    uVar7 = FUN_00480e50(param_4,param_1,param_6);
    iVar4 = (int)uVar7;
joined_r0x00474db5:
    puVar5 = (undefined4 *)((ulonglong)uVar7 >> 0x20);
    iVar6 = (int)uVar7;
    if (iVar4 != 0) goto LAB_00475032;
    break;
  case 4:
  case 8:
    iVar6 = FUN_00481670(param_1,param_4,param_5);
    if ((iVar6 != 0) || (iVar6 = FUN_004816a0(param_1,param_4,param_6), iVar6 != 0))
    goto LAB_00475032;
    FUN_00530e20(local_3c,local_48);
    uVar3 = FUN_004e57c0(auStack_34 + 1,local_48);
    FUN_00481d40(local_48,uVar3);
    FUN_00481c70(param_5,local_48,param_5);
    puVar5 = extraout_EDX;
    break;
  case 5:
    iVar6 = FUN_00480620(auStack_34[param_4],param_1,param_5);
    if (iVar6 != 0) goto LAB_00475032;
    FUN_004d4e70(param_6,param_1 * 0xf,param_3 + 0x800);
    puVar5 = extraout_EDX_00;
    break;
  case 6:
    param_4 = param_4 + -1;
    if (param_4 == 0) {
LAB_00474e90:
      iVar6 = FUN_00480620(puVar5,param_1,param_5);
    }
    else {
      iVar6 = FUN_00480eb0(param_1);
      if (iVar6 < param_4) {
        param_4 = param_4 - iVar6;
        iVar6 = FUN_00480cf0(param_1,0);
        uVar2 = (uint)(iVar6 != 1);
        if (param_4 <= (int)(4 - uVar2)) {
          puVar5 = (undefined4 *)auStack_34[uVar2 + param_4 + 6];
          goto LAB_00474e90;
        }
        iVar6 = param_4 + -4 + uVar2;
        iVar4 = FUN_00480cf0(param_1,1);
        if (iVar4 == 1) {
          iVar4 = 0;
          if (iVar6 == 1) {
            puVar5 = (undefined4 *)0x6;
            goto LAB_00474e90;
          }
        }
        else {
          iVar4 = 1;
        }
        iVar4 = iVar6 + -1 + iVar4;
        iVar6 = FUN_00480ed0(param_1);
        if (iVar6 < iVar4) {
          iVar6 = FUN_00480620(7,param_1,param_5);
        }
        else {
          iVar6 = FUN_00480e80(iVar4);
        }
      }
      else {
        iVar6 = FUN_00480e50(param_4,param_1,param_5);
      }
    }
    if (iVar6 != 0) goto LAB_00475032;
    FUN_004d4e70(param_6,param_1 * 0xf,param_3 + 0x800);
    puVar5 = extraout_EDX_01;
    break;
  case 7:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
    iVar4 = FUN_004d5130(param_5,param_7,param_3 + 0x800,
                         CONCAT31((int3)((uint)(*(short *)(param_2 + 2) + -1) >> 8),
                                  *(byte *)(param_3 + 0x8e0) >> 4) & 0xffffff03);
    if (iVar4 == 0) {
      uVar7 = FUN_00482ab0(param_1,(int)*(short *)(param_2 + 2),param_3,param_5,param_6);
      *param_8 = (int)uVar7;
      puVar5 = (undefined4 *)((ulonglong)uVar7 >> 0x20);
    }
    else {
      *param_8 = 0xffffffff;
      puVar5 = param_8;
    }
  }
  sVar1 = *(short *)(param_2 + 2);
  if ((0 < sVar1) && ((sVar1 < 7 || (sVar1 == 8)))) {
    iVar4 = FUN_004d5130(param_5,param_7,param_3 + 0x800,
                         CONCAT31((int3)((uint)puVar5 >> 8),*(byte *)(param_3 + 0x8e0) >> 4) &
                         0xffffff03);
    if ((iVar4 != 0) || (iVar4 = FUN_004d5210(param_6,param_8,param_3 + 0x800), iVar4 != 0)) {
      *param_7 = 0xffffffff;
      *param_8 = 0xffffffff;
    }
  }
  if (iVar6 == 0) {
    return 0;
  }
LAB_00475032:
  FUN_0052b240(iVar6);
  return iVar6;
}

