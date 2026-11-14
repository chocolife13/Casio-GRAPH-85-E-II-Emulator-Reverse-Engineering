// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004883a0
// entry: 004883a0  size: 430


undefined4
FUN_004883a0(undefined4 param_1,int param_2,int param_3,undefined4 *param_4,int param_5,
            undefined4 *param_6)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 local_8;
  undefined1 local_4 [4];
  
  uVar3 = param_3;
  iVar2 = param_2;
  iVar1 = FUN_00486470(param_2,param_3);
  if (iVar1 == 0) {
    return 0;
  }
  param_3 = FUN_004869c0(param_1);
  if (param_3 == 0) {
    return 0;
  }
  iVar1 = FUN_00486330(iVar2,1,local_4,param_3);
  if (iVar1 != 1) {
    return 0;
  }
  uVar6 = 0;
  iVar2 = FUN_004885f0(param_1,iVar2,uVar3,&param_2,&local_8,&param_3);
  puVar5 = param_6;
  if (iVar2 == 0) {
    if ((((byte)param_5 & local_8._3_1_) != 0) && ((short)local_8 != -1)) {
      if (param_5 == 4) {
        if (param_6 != (undefined4 *)0x0) {
          uVar3 = FUN_004b7550(param_3 + (local_8 & 0xffff) + 4 + param_2 * 4);
          *puVar5 = uVar3;
          return 1;
        }
        puVar5 = (undefined4 *)(param_3 + (local_8 & 0xffff) + 4 + param_2 * 4);
        for (iVar2 = 0x3f; iVar2 != 0; iVar2 = iVar2 + -1) {
          *param_4 = *puVar5;
          puVar5 = puVar5 + 1;
          param_4 = param_4 + 1;
        }
        *(undefined2 *)param_4 = *(undefined2 *)puVar5;
        *(undefined1 *)((int)param_4 + 2) = *(undefined1 *)((int)puVar5 + 2);
        return 1;
      }
      if (param_5 == 2) {
        if ((local_8 & 0x4000000) == 0) {
          uVar4 = 0;
        }
        else {
          iVar2 = FUN_004b7550(param_3 + (local_8 & 0xffff) + 4 + param_2 * 4);
          uVar4 = iVar2 + 4U & 0xfffffffc;
        }
        puVar5 = param_6;
        if (param_6 != (undefined4 *)0x0) {
          uVar3 = FUN_004b7550(uVar4 + (local_8 & 0xffff) + 4 + param_2 * 4 + param_3);
          *puVar5 = uVar3;
          return 1;
        }
        puVar5 = (undefined4 *)(uVar4 + (local_8 & 0xffff) + 4 + param_2 * 4 + param_3);
        for (iVar2 = 0x40; iVar2 != 0; iVar2 = iVar2 + -1) {
          *param_4 = *puVar5;
          puVar5 = puVar5 + 1;
          param_4 = param_4 + 1;
        }
        uVar6 = 1;
      }
    }
  }
  return uVar6;
}

