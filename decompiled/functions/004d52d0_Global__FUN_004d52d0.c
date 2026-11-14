// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004d52d0
// entry: 004d52d0  size: 234


uint FUN_004d52d0(undefined4 param_1,int *param_2,int param_3,byte param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte local_c [12];
  
  iVar2 = param_3;
  FUN_004e6b40(param_1,param_3,local_c);
  if ((param_4 & 0x80) == 0) {
    iVar1 = 3;
    iVar3 = 0xff;
    iVar4 = -0x7f;
  }
  else {
    iVar1 = 4;
    iVar3 = 0x7f;
    iVar4 = -0x3f;
  }
  FUN_004e6d90(local_c,iVar2 + iVar1 * 0xc,local_c);
  FUN_004e7910(local_c,local_c);
  if ((local_c[0] & 0xf0) == 0xf0) {
    return 0x2000;
  }
  iVar2 = FUN_004d4f00(local_c,&param_3);
  if (iVar2 != 0) {
    return ((iVar2 < 1) - 1 & 0xfffffc00) + 0x800;
  }
  param_3 = param_3 + 1;
  *param_2 = param_3;
  if (iVar3 < param_3) {
    return 0x400;
  }
  return (iVar4 <= param_3) - 1 & 0x800;
}

