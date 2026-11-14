// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00552310
// entry: 00552310  size: 421


uint FUN_00552310(undefined4 param_1,int param_2,undefined4 *param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  
  puVar1 = param_3;
  uVar2 = 0xfffffffe;
  switch(param_8) {
  case 1:
    iVar3 = FUN_004797b0(2,param_4,param_5,param_2,param_2 + 4,0xc,param_6,param_1);
    return -(uint)(iVar3 != 0x7534) & 0xfffffffe;
  case 2:
    iVar3 = FUN_004797b0(1,param_4,param_5,param_2,param_2 + 4,0xc,param_6,param_1);
    return -(uint)(iVar3 != 0x7534) & 0xfffffffe;
  case 3:
    uVar4 = 2;
    param_3 = (undefined4 *)*param_3;
    break;
  case 4:
    param_3 = (undefined4 *)*param_3;
    iVar3 = FUN_0054f860(param_4,param_5,0xc,param_6,6,&param_3,param_1,0,1);
    if (iVar3 != 0x7534) {
      return 0xfffffffe;
    }
    *puVar1 = param_3;
    return 0;
  case 5:
    param_3 = (undefined4 *)*param_3;
    iVar3 = FUN_0054f860(param_4,param_5,0xc,param_6,0x1a,&param_3,param_1,0,0);
    if (iVar3 != 0x7534) {
      return 0xfffffffe;
    }
    *puVar1 = param_3;
    return 0;
  case 6:
    uVar4 = 0;
    param_3 = (undefined4 *)*param_3;
    break;
  case 7:
    iVar3 = FUN_0054f860(param_4,param_5,0xc,param_6,0,0,param_1,param_7,4);
    uVar2 = -(uint)(iVar3 != 0x7534) & 0xfffffffe;
  default:
    return uVar2;
  }
  iVar3 = FUN_0054f860(param_4,param_5,0xc,param_6,6,&param_3,param_1,0,uVar4);
  if (iVar3 != 0x7534) {
    return 0xfffffffe;
  }
  *puVar1 = param_3;
  return 0;
}

