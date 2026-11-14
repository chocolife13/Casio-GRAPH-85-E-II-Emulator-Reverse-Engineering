// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004105d0
// entry: 004105d0  size: 223


int FUN_004105d0(undefined4 param_1,undefined4 param_2,undefined1 *param_3,int *param_4,int *param_5
                ,undefined4 *param_6)

{
  int iVar1;
  undefined1 *puVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined1 local_10 [8];
  undefined1 local_8 [8];
  
  piVar4 = param_5;
  piVar3 = param_4;
  puVar2 = param_3;
  *param_3 = 0;
  *param_4 = 0;
  *param_5 = 0;
  *param_6 = 0;
  iVar5 = FUN_00411e00(param_2,local_8,2);
  if (((iVar5 == 0) && (iVar5 = FUN_00411e00(param_1,local_10,2), iVar5 == 0)) &&
     (iVar5 = FUN_004103d0(local_10,&param_4,&param_3), iVar5 == 0)) {
    iVar6 = FUN_00411e80(local_8,param_4,&param_5);
    if (iVar6 != 0) {
      return 0x30;
    }
    iVar1 = param_4[2];
    iVar6 = iVar1 + ((uint)param_5 & 0xffff) * 0x14;
    *puVar2 = *(undefined1 *)(iVar1 + 0x10 + ((uint)param_5 & 0xffff) * 0x14);
    *piVar3 = iVar6;
    *piVar4 = *(int *)(iVar6 + 8) + iVar1;
    *param_6 = *(undefined4 *)(iVar6 + 0xc);
  }
  return iVar5;
}

