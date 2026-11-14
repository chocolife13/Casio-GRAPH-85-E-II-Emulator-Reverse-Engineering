// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004ac2f0
// entry: 004ac2f0  size: 379


char FUN_004ac2f0(uint param_1,int param_2,int param_3)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int local_18;
  uint local_14;
  undefined1 local_10 [4];
  undefined1 local_c [4];
  undefined1 local_8 [4];
  undefined1 local_4 [4];
  
  uVar6 = param_1;
  param_1._0_1_ = '\0';
  iVar7 = param_2;
  if (param_2 == 0) {
    iVar7 = DAT_005d67e8;
  }
  DAT_005d6048 = FUN_004105d0(&DAT_005d5870,&DAT_005d5760,&param_2,local_c,local_10,&local_18);
  iVar1 = param_3;
  if (DAT_005d6048 != 0) {
    cVar2 = FUN_004ab770(DAT_005d6048);
    return cVar2;
  }
  uVar3 = local_18 - param_3;
  uVar5 = uVar6;
  if (uVar3 == uVar6) {
    param_1._0_1_ = '\x01';
  }
  else if (uVar3 < uVar6) {
    if (DAT_005d5b70 == '\0') {
      return '\x15';
    }
    param_1._0_1_ = '\x02';
    uVar5 = uVar3;
  }
  if (DAT_005d5b70 == '\0') {
    iVar4 = FUN_004ab700(DAT_005d5760);
    puVar8 = (undefined4 *)(iVar1 + iVar7);
    puVar9 = (undefined4 *)(PTR_DAT_005c421c + iVar4 * 0x18);
    for (uVar5 = uVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar9 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar9 = puVar9 + 1;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined1 *)puVar9 = *(undefined1 *)puVar8;
      puVar8 = (undefined4 *)((int)puVar8 + 1);
      puVar9 = (undefined4 *)((int)puVar9 + 1);
    }
    return '\0';
  }
  FUN_00411870(local_4,local_8,&local_14);
  uVar6 = (uVar6 - uVar5) + 3 & 0xfffffffc;
  if (local_14 < uVar6) {
    return 'Q';
  }
  if (uVar5 != 0) {
    DAT_005d6048 = FUN_00411520(&DAT_005d5870,&DAT_005d5760,iVar1,uVar5,iVar7);
    if (DAT_005d6048 != 0) {
      cVar2 = FUN_004ab770(DAT_005d6048);
      return cVar2;
    }
  }
  if ((char)param_1 == '\x02') {
    DAT_005d6048 = FUN_00411350(&DAT_005d5870,&DAT_005d5760,local_18,uVar6,uVar5 + iVar7);
    if (DAT_005d6048 != 0) {
      cVar2 = FUN_004ab770(DAT_005d6048);
      return cVar2;
    }
  }
  return (char)param_1;
}

