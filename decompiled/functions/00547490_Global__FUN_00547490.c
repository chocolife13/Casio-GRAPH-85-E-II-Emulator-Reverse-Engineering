// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00547490
// entry: 00547490  size: 285


undefined4
FUN_00547490(undefined4 param_1,int *param_2,int *param_3,int param_4,undefined4 *param_5,
            byte param_6)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  ushort *puVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int local_8;
  undefined1 local_4 [4];
  
  if (param_4 == 0) {
    iVar5 = 1;
    iVar6 = 1;
  }
  else {
    iVar5 = *param_2;
    if (*param_3 < 999) {
      iVar6 = *param_3 + 1;
    }
    else {
      iVar6 = 1;
      iVar5 = iVar5 + 1;
    }
  }
  DAT_005d2930._0_1_ = 0;
  iVar1 = FUN_004869c0(param_1);
  if (iVar1 == 0) {
    return 0;
  }
  do {
    if (0x1a < iVar5) {
      *param_5 = 0;
      return 0;
    }
    iVar2 = FUN_00486330(iVar5,1,local_4,iVar1);
    if ((iVar2 == 1) &&
       (piVar3 = (int *)FUN_004871e0(param_1,iVar5,&local_8,iVar1), piVar3 != (int *)0x0)) {
      if (iVar6 <= local_8) {
        puVar4 = (ushort *)(piVar3 + iVar6);
        for (; iVar6 <= *piVar3; iVar6 = iVar6 + 1) {
          if (((*(byte *)((int)puVar4 + 3) & 4) != 0) && ((byte)((byte)puVar4[1] & ~param_6) == 0))
          {
            *param_2 = iVar5;
            *param_3 = iVar6;
            puVar7 = (undefined4 *)((int)piVar3 + *piVar3 * 4 + *puVar4 + 4);
            puVar8 = &DAT_005d2930;
            for (iVar5 = 0x40; iVar5 != 0; iVar5 = iVar5 + -1) {
              *puVar8 = *puVar7;
              puVar7 = puVar7 + 1;
              puVar8 = puVar8 + 1;
            }
            *param_5 = &DAT_005d2930;
            return 1;
          }
          puVar4 = puVar4 + 2;
        }
      }
      iVar6 = 1;
    }
    iVar5 = iVar5 + 1;
  } while( true );
}

