// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004d4da0
// entry: 004d4da0  size: 203


void FUN_004d4da0(undefined4 *param_1,int param_2,int param_3,byte param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if ((param_4 & 0x80) == 0) {
    iVar3 = 3;
    iVar1 = 0x7e;
  }
  else {
    iVar3 = 4;
    iVar1 = 0x3e;
  }
  if (param_2 + -1 == iVar1) {
    *param_1 = *(undefined4 *)(param_3 + 0xc);
    param_1[1] = *(undefined4 *)(param_3 + 0x10);
    param_1[2] = *(undefined4 *)(param_3 + 0x14);
    return;
  }
  uVar2 = FUN_004e5070(param_2 + -1,&local_c,&local_c);
  FUN_004e6cc0(param_3 + iVar3 * 0xc,uVar2);
  FUN_004e7910(&local_c,&local_c);
  FUN_004e69c0(param_3,&local_c,&local_c);
  FUN_004e7910(&local_c,&local_c);
  FUN_004d4d50(&local_c,param_3 + 0x24);
  *param_1 = local_c;
  param_1[1] = local_8;
  param_1[2] = local_4;
  return;
}

