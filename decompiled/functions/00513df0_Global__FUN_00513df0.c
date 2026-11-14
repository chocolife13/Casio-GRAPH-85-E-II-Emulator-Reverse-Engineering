// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00513df0
// entry: 00513df0  size: 315


uint FUN_00513df0(int param_1,char *param_2,int *param_3)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined1 local_1c [4];
  undefined1 local_18 [24];
  
  iVar2 = param_1;
  iVar6 = (int)param_2 * 0x20;
  *(uint *)(iVar6 + 0x18 + *(int *)(param_1 + 0x8dc)) =
       *(uint *)(iVar6 + 0x18 + *(int *)(param_1 + 0x8dc)) | 0x8000;
  param_2 = *(char **)(iVar6 + *(int *)(param_1 + 0x8dc));
  FUN_00513f50(&param_2,local_1c);
  piVar3 = param_3;
  iVar5 = *(int *)(iVar2 + 0x8dc) + iVar6;
  if (((*(uint *)(iVar5 + 0x18) & 0x40d) == 0x40d) && (*(char *)((int)param_2 + -1) == ')')) {
    param_2 = (char *)((int)param_2 + 1);
  }
  bVar1 = *(byte *)((int)param_2 + 1);
  param_2 = (char *)((int)param_2 + 3);
  if ((((0x40 < bVar1) && (bVar1 < 0x5b)) && (bVar1 != 0x58)) &&
     ((bVar1 != 0x59 && (bVar1 != 0x54)))) {
    *(byte *)(iVar5 + 0xd) = bVar1;
    *(undefined4 *)(iVar6 + 0x10 + *(int *)(iVar2 + 0x8dc)) = 0;
    do {
      iVar5 = FUN_0050deb0(&param_2,&param_1,local_18);
      if (iVar5 == 0) {
        uVar4 = FUN_004e4020(local_18);
        return uVar4;
      }
      if (*(int *)(iVar6 + 0x10 + *(int *)(iVar2 + 0x8dc)) != 0) {
        *piVar3 = *piVar3 + 1;
      }
      *(int *)(iVar6 + 0x10 + *(int *)(iVar2 + 0x8dc)) =
           *(int *)(iVar6 + 0x10 + *(int *)(iVar2 + 0x8dc)) + 1;
      if ((char)param_1 == '\0') {
        return 0;
      }
      if ((char)param_1 == ']') {
        return -(uint)(*param_2 != '\0') & 2;
      }
    } while ((char)param_1 == ',');
  }
  return 2;
}

