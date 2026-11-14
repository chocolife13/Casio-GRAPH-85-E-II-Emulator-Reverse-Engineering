// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00474a10
// entry: 00474a10  size: 327


int FUN_00474a10(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5,
                int *param_6,int param_7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 extraout_ECX;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  iVar1 = param_5;
  if ((*(short *)(param_3 + 2) == 4) || (*(short *)(param_3 + 2) == 8)) {
    iVar2 = FUN_00481670(param_2,param_5,local_18);
    if (iVar2 != 0) {
      FUN_0052b240(iVar2);
      return iVar2;
    }
    iVar4 = FUN_004d5130(local_18,&param_5,param_7 + 0x800,
                         CONCAT31((int3)((uint)extraout_ECX >> 8),*(byte *)(param_7 + 0x8e0) >> 4) &
                         0xffffff03);
    iVar2 = 0;
    if (iVar4 != 0) {
      param_5 = -1;
      param_2 = 0xffffffff;
    }
  }
  else {
    iVar2 = FUN_00474cc0(param_2,param_3,param_7,param_5,local_18,local_c,&param_5,&param_2);
    if (iVar2 != 0) {
      return iVar2;
    }
  }
  if (iVar1 != 1) {
    uVar3 = FUN_004e6b80(param_4,local_18,&local_24,&local_24);
    FUN_004e7620(uVar3);
    iVar4 = FUN_00469e60(param_1,&local_24);
    if (0 < iVar4) {
      *param_1 = local_24;
      param_1[1] = local_20;
      param_1[2] = local_1c;
      *param_6 = iVar1;
    }
    return iVar2;
  }
  uVar3 = FUN_004e6b80(param_4,local_18,param_1,param_1);
  FUN_004e7620(uVar3);
  *param_6 = 1;
  return iVar2;
}

