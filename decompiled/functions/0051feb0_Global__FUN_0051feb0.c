// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0051feb0
// entry: 0051feb0  size: 218


void FUN_0051feb0(undefined4 param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c [12];
  
  if ((*(uint *)(param_3 * 0x20 + 0x18 + *(int *)(param_2 + 0x8dc)) & 0x4000) == 0) {
    local_18 = *(undefined4 *)(param_2 + 0x86c);
    local_14 = *(undefined4 *)(param_2 + 0x870);
    local_10 = *(undefined4 *)(param_2 + 0x874);
  }
  else {
    FUN_0051ae90(0,*(int *)(param_2 + 0x8dc),param_3,&local_18);
  }
  FUN_004e6b40(param_1,&local_18,&local_18);
  FUN_004e7910(&local_18,&local_18);
  FUN_004e6d90(&local_18,param_2 + 0x884,&local_18);
  FUN_004e7910(&local_18,&local_18);
  uVar1 = FUN_004e5840(local_c,&local_18,&local_18);
  uVar1 = FUN_004e69c0(&local_18,uVar1);
  FUN_004e7680(uVar1);
  FUN_004e50a0(&local_18);
  return;
}

