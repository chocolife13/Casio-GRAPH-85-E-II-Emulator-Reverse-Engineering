// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00487180
// entry: 00487180  size: 90


int FUN_00487180(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                undefined4 param_5,undefined4 *param_6)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar1 = FUN_00486870(0,param_2,param_3,param_4,param_5);
  puVar3 = param_6;
  if ((iVar1 == 1) && (param_6 != (undefined4 *)0x0)) {
    iVar2 = FUN_00486fd0(param_1,param_2,0,&param_4);
    if (iVar2 != 0) {
      for (iVar2 = 0x20; iVar2 != 0; iVar2 = iVar2 + -1) {
        *param_4 = *puVar3;
        puVar3 = puVar3 + 1;
        param_4 = param_4 + 1;
      }
    }
  }
  return iVar1;
}

