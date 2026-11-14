// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004e9760
// entry: 004e9760  size: 136


void FUN_004e9760(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined1 local_30 [12];
  undefined1 local_24 [12];
  undefined4 local_18 [3];
  undefined1 local_c [12];
  
  uVar1 = FUN_004e6d00(param_1 + 0xc,param_2 + 0xc,local_30,local_18);
  uVar1 = FUN_004e6d00(param_1,param_2,local_24,uVar1);
  FUN_004e6c30(uVar1);
  uVar1 = FUN_004e6d00(param_1 + 0xc,param_2,local_30,local_c);
  uVar1 = FUN_004e6d00(param_1,param_2 + 0xc,local_24,uVar1);
  FUN_004e6ab0(uVar1);
  puVar3 = local_18;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *param_3 = *puVar3;
    puVar3 = puVar3 + 1;
    param_3 = param_3 + 1;
  }
  return;
}

