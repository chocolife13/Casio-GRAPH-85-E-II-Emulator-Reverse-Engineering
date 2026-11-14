// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004d7b90
// entry: 004d7b90  size: 281


int FUN_004d7b90(int param_1,int *param_2,undefined4 *param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  byte local_24;
  char local_23;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c [12];
  
  if (param_5 == 0x7626) {
    local_18 = *param_3;
    local_14 = param_3[1];
    local_10 = param_3[2];
  }
  FUN_004e5780(local_c);
  iVar1 = *param_2;
  if ((*(uint *)(iVar1 * 0x20 + 0x18 + *(int *)(param_1 + 0x8dc)) & 0x100) == 0) {
    iVar1 = FUN_0050ebc0(local_c,&local_24,param_1,iVar1,param_2[1]);
    if (iVar1 != 0) {
      return iVar1;
    }
LAB_004d7c50:
    if (param_5 == 0x7620) goto LAB_004d7c6f;
  }
  else {
    iVar1 = FUN_0050f060(local_c,&local_24,param_1,iVar1,param_2[1]);
    if (iVar1 != 0) {
      return iVar1;
    }
    if (param_5 != 0x7624) goto LAB_004d7c50;
    iVar1 = FUN_0050f060(local_c,&local_18,param_1,param_2[2],param_2[3]);
    if (iVar1 != 0) {
      return iVar1;
    }
  }
  FUN_004e6b40(&local_24,&local_18,&local_24);
LAB_004d7c6f:
  if ((local_24 == 0) && (local_23 == '\0')) {
    FUN_004e5780(param_4);
    return 0;
  }
  return (-(uint)((local_24 & 0xf0) != 0xf0) & 0xffffffea) + 0x15;
}

