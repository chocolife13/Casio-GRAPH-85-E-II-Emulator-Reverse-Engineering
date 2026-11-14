// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0041f950
// entry: 0041f950  size: 59


void FUN_0041f950(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined1 local_18 [24];
  
  if (param_2 != 0) {
    do {
      puVar1 = (undefined4 *)FUN_00531c50(local_18,param_1);
      param_2 = param_2 + -1;
      puVar3 = param_1;
      for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar3 = *puVar1;
        puVar1 = puVar1 + 1;
        puVar3 = puVar3 + 1;
      }
      param_1 = param_1 + 6;
    } while (param_2 != 0);
  }
  return;
}

