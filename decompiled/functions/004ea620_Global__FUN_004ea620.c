// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004ea620
// entry: 004ea620  size: 119


void FUN_004ea620(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined1 local_30 [12];
  undefined1 local_24 [12];
  undefined4 local_18 [3];
  undefined1 local_c [12];
  
  FUN_004e73d0(param_1,local_30);
  uVar1 = FUN_004e7470(param_1 + 0xc,local_24,1,local_18);
  FUN_004e6d00(local_30,uVar1);
  uVar1 = FUN_004e7450(param_1 + 0xc,local_24,1,local_c);
  FUN_004e6d00(local_30,uVar1);
  puVar3 = local_18;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *param_2 = *puVar3;
    puVar3 = puVar3 + 1;
    param_2 = param_2 + 1;
  }
  return;
}

