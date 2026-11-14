// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004885f0
// entry: 004885f0  size: 175


undefined4
FUN_004885f0(undefined4 param_1,int param_2,int param_3,int *param_4,undefined4 *param_5,
            int *param_6)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  short sStack_a;
  
  piVar1 = param_6;
  uVar3 = *(undefined4 *)(*param_6 + 4);
  iVar2 = FUN_004871e0(param_1,param_2,param_4,*param_6);
  if (iVar2 == 0) {
    uVar3 = 1;
  }
  else {
    iVar4 = FUN_00486330(param_2,1,&param_6,*piVar1);
    if (iVar4 != 1) {
      return 1;
    }
    sStack_a = (short)((uint)uVar3 >> 0x10);
    if (sStack_a < param_2) {
      uVar3 = 1;
    }
    else if (*param_4 < param_3) {
      uVar3 = 2;
    }
    else {
      *param_5 = *(undefined4 *)(iVar2 + param_3 * 4);
      uVar3 = 0;
    }
  }
  if (piVar1 != (int *)0x0) {
    *piVar1 = iVar2;
  }
  return uVar3;
}

