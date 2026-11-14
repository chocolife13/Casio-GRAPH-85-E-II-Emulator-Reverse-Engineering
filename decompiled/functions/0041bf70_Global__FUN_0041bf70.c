// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0041bf70
// entry: 0041bf70  size: 319


undefined4 FUN_0041bf70(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_8;
  int local_4;
  
  local_4 = 0;
  local_8 = 0;
  iVar1 = FUN_0041bf10(param_1);
  if (iVar1 == -1) {
    uVar2 = FUN_00419fc0(0xfffffffe);
    return uVar2;
  }
  if (((&DAT_005d8744)[param_1 * 10] & 0xfff0000) != 0x1200000) {
    return 0;
  }
  iVar1 = 1;
  while( true ) {
    iVar3 = FUN_0041ba80((&DAT_005d8744)[param_1 * 10],iVar1,&local_8);
    if (iVar3 < 0) break;
    if (iVar3 == 0) {
      if ((short)iVar1 == 0) goto LAB_0041bff2;
      local_4 = iVar1 + -1;
      iVar1 = 1;
      if ((short)local_4 == 0) {
        return 0;
      }
      goto LAB_0041c015;
    }
    iVar1 = iVar1 + 1;
  }
LAB_0041c09e:
  uVar2 = FUN_00419fc0(iVar3);
  return uVar2;
LAB_0041c015:
  iVar3 = FUN_0041ba80((&DAT_005d8744)[param_1 * 10],iVar1,&local_8);
  if (iVar3 < 0) goto LAB_0041c09e;
  if (iVar3 == 0) {
LAB_0041bff2:
    uVar2 = FUN_00419fc0(0xffffffff);
    return uVar2;
  }
  iVar3 = FUN_0041adb0(local_8,&DAT_005d8960 + param_1 * 0x24);
  if (iVar3 < 0) goto LAB_0041c09e;
  if (*(short *)(&DAT_005d8972 + param_1 * 0x24) != -1) {
    return 0;
  }
  iVar3 = FUN_00418e50(local_8);
  if (iVar3 < 0) goto LAB_0041c09e;
  FUN_00419700(10);
  FUN_004193e0(&local_4,2);
  FUN_00419120();
  FUN_00418f90();
  iVar1 = iVar1 + 1;
  if ((ushort)local_4 < (ushort)iVar1) {
    return 0;
  }
  goto LAB_0041c015;
}

