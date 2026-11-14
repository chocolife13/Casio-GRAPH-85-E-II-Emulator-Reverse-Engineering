// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00486fd0
// entry: 00486fd0  size: 256


int FUN_00486fd0(undefined4 param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  short sVar5;
  undefined4 uVar6;
  undefined1 local_14 [4];
  undefined1 local_10 [2];
  short sStack_e;
  undefined2 local_c;
  short sStack_a;
  undefined2 local_8;
  undefined2 uStack_6;
  int local_4;
  
  if ((param_4 == (int *)0x0) || (puVar2 = (undefined4 *)*param_4, puVar2 == (undefined4 *)0x0)) {
    puVar2 = (undefined4 *)FUN_00486410(param_1,param_2,param_3,local_10,local_14);
    if (puVar2 == (undefined4 *)0x0) {
      return 0;
    }
    uVar6 = CONCAT22(sStack_a,local_c);
  }
  else {
    sStack_e = (short)((uint)*puVar2 >> 0x10);
    uVar6 = puVar2[1];
    sStack_a = (short)((uint)uVar6 >> 0x10);
    local_8 = (undefined2)puVar2[2];
    uStack_6 = (undefined2)((uint)puVar2[2] >> 0x10);
    local_4 = puVar2[3];
  }
  iVar3 = (int)sStack_e;
  sVar5 = (short)uVar6;
  iVar1 = (sStack_a + iVar3 + (int)sVar5) * 4 + 0x10;
  if (param_3 == 0) {
    piVar4 = puVar2 + 4;
    local_4 = 0;
    sVar5 = sStack_e;
  }
  else if (param_3 == 2) {
    piVar4 = puVar2 + iVar3 + 4;
    local_4 = CONCAT22(uStack_6,local_8);
  }
  else {
    if (param_3 != 1) {
      return 0;
    }
    piVar4 = puVar2 + iVar3 + sVar5 + 4;
    local_4 = local_4 + CONCAT22(uStack_6,local_8);
    sVar5 = sStack_a;
  }
  if (sVar5 < param_2) {
    param_2 = (int)sVar5;
  }
  if (1 < param_2) {
    param_2 = param_2 + -1;
    do {
      iVar3 = *piVar4;
      piVar4 = piVar4 + 1;
      local_4 = local_4 + iVar3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  if (param_4 != (int *)0x0) {
    *param_4 = (int)puVar2 + local_4 + iVar1;
  }
  return local_4 + iVar1;
}

