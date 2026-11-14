// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00486eb0
// entry: 00486eb0  size: 188


uint FUN_00486eb0(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  short local_8;
  undefined1 uStack_6;
  uint uStack_5;
  
  iVar2 = param_3;
  uVar1 = param_2;
  uVar4 = 0;
  iVar3 = FUN_00486470(param_2,param_3);
  if (iVar3 == 0) {
    return 0;
  }
  param_3 = FUN_004869c0(param_1);
  if (param_3 == 0) {
    return 0;
  }
  iVar3 = FUN_004885f0(param_1,uVar1,iVar2,&param_2,&local_8,&param_3);
  if (((iVar3 == 0) && ((uStack_5 & 4) != 0)) && (local_8 != -1)) {
    uVar4 = 1;
    if (param_4 == 3) {
      return (uStack_5 & 0xff) >> 7;
    }
    if (param_4 == 1) {
      uStack_5._0_1_ = (byte)uStack_5 | 0x80;
    }
    else {
      uStack_5._0_1_ = (byte)uStack_5 & 0x7f;
    }
    *(uint *)(param_3 + iVar2 * 4) = CONCAT13((byte)uStack_5,CONCAT12(uStack_6,local_8));
  }
  return uVar4;
}

