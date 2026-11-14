// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0047b900
// entry: 0047b900  size: 827


int __thiscall
FUN_0047b900(undefined4 param_1,int param_2,int param_3,int param_4,undefined4 *param_5,
            undefined4 *param_6)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined4 extraout_ECX_05;
  undefined4 extraout_ECX_06;
  undefined4 extraout_ECX_07;
  undefined4 extraout_ECX_08;
  undefined4 extraout_ECX_09;
  undefined4 extraout_ECX_10;
  undefined4 extraout_ECX_11;
  int iVar4;
  undefined1 local_54 [12];
  undefined1 local_48 [12];
  undefined1 local_3c [12];
  undefined1 local_30 [12];
  undefined1 local_24 [12];
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  iVar4 = 0;
  iVar2 = *(short *)(param_3 + 2) + -1;
  switch(iVar2) {
  case 0:
  case 1:
    iVar4 = FUN_00527440(0,CONCAT31((int3)((uint)iVar2 >> 8),*(undefined1 *)(param_3 + 4)));
    iVar2 = iVar4 / 2 + 1;
    iVar4 = FUN_00483e70(0,(int)*(short *)(param_3 + 4),iVar2,local_54);
    param_1 = extraout_ECX;
    if (iVar4 == 0) {
      iVar4 = FUN_00483e70(0,(int)*(short *)(param_3 + 6),iVar2,local_48);
      param_1 = extraout_ECX_00;
    }
    break;
  case 2:
    iVar4 = FUN_00480600(param_2);
    iVar2 = iVar4 / 2 + 1;
    iVar4 = FUN_00480620(iVar2,param_2,local_54);
    param_1 = extraout_ECX_05;
    if (iVar4 == 0) {
      iVar4 = FUN_00480e50(iVar2,param_2,local_48);
      param_1 = extraout_ECX_06;
    }
    break;
  case 3:
  case 7:
    iVar4 = FUN_00480600(param_2);
    iVar2 = iVar4 / 2 + 1;
    iVar4 = FUN_00481670(param_2,iVar2,local_54);
    param_1 = extraout_ECX_01;
    if ((iVar4 == 0) &&
       (iVar4 = FUN_004816a0(param_2,iVar2,local_48), param_1 = extraout_ECX_02, iVar4 == 0)) {
      iVar2 = FUN_00530e20(local_3c,local_30);
      if (iVar2 == 0) {
        uVar3 = FUN_004e57c0(local_3c,local_30);
        FUN_004e6dd0(local_30,uVar3);
        FUN_004e7910(local_30,local_30);
        FUN_004e6a00(local_54,local_30,local_54);
        FUN_004e7910(local_54,local_54);
        param_1 = extraout_ECX_04;
      }
      else {
        iVar4 = 4;
        param_1 = extraout_ECX_03;
      }
    }
    break;
  case 4:
    iVar4 = FUN_00480620(3,param_2,local_54);
    if (iVar4 != 0) {
      return iVar4;
    }
    FUN_004d4e70(local_48,param_2 * 0xf,param_4 + 0x800);
    iVar4 = 0;
    param_1 = extraout_ECX_07;
    break;
  case 5:
    iVar4 = FUN_00480620(4,param_2,local_54);
    if (iVar4 != 0) {
      return iVar4;
    }
    FUN_004d4e70(local_48,param_2 * 0xf,param_4 + 0x800);
    iVar4 = 0;
    param_1 = extraout_ECX_08;
    break;
  case 6:
    iVar4 = FUN_00481110(param_2,local_3c,local_30);
    param_1 = extraout_ECX_09;
    if (iVar4 != 0) {
      return iVar4;
    }
    break;
  case 0xc:
    FUN_00483e70(0xff,param_2 * 10,5,local_c);
  case 0xb:
  case 0x10:
    FUN_00483e70(0xff,param_2 * 10,4,local_18);
  case 10:
  case 0x11:
    FUN_00483e70(0xff,param_2 * 10,3,local_24);
  case 8:
  case 9:
  case 0xd:
  case 0xe:
  case 0xf:
    FUN_00483e70(0xff,param_2 * 10,2,local_30);
    FUN_00483e70(0xff,param_2 * 10,1,local_3c);
    param_1 = extraout_ECX_10;
  }
  sVar1 = *(short *)(param_3 + 2);
  if ((sVar1 == 7) || ((8 < sVar1 && (sVar1 < 0x13)))) {
    FUN_004d4da0(local_54,0x40,param_4 + 0x800,0);
    FUN_00482660((int)*(short *)(param_3 + 2),local_3c,local_54,local_48);
    iVar4 = 0;
    param_1 = extraout_ECX_11;
  }
  iVar2 = FUN_004d5130(local_54,param_5,param_4 + 0x800,
                       CONCAT31((int3)((uint)param_1 >> 8),*(byte *)(param_4 + 0x8e0) >> 4) &
                       0xffffff03);
  if ((iVar2 != 0) || (iVar2 = FUN_004d5210(local_48,param_6,param_4 + 0x800), iVar2 != 0)) {
    *param_5 = 0xffffffff;
    *param_6 = 0xffffffff;
  }
  return iVar4;
}

