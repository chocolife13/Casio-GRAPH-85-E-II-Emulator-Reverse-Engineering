// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00486a90
// entry: 00486a90  size: 358


byte FUN_00486a90(undefined4 param_1,int param_2,uint param_3,byte param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  undefined1 local_1c [4];
  undefined1 local_18 [24];
  
  iVar3 = param_2;
  iVar1 = FUN_00486470(param_2,param_3);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = FUN_004869c0(param_1);
  if (iVar1 == 0) {
    return 0;
  }
  iVar6 = 0;
  bVar4 = 0;
  iVar2 = FUN_00486330(iVar3,1,local_1c,iVar1);
  iVar5 = param_3;
  if (((iVar2 == 1) &&
      (iVar6 = FUN_004871e0(param_1,iVar3,&param_2,iVar1), iVar5 = param_3, iVar6 != 0)) &&
     ((int)param_3 <= param_2)) {
    iVar1 = *(int *)(iVar6 + param_3 * 4);
    param_3._3_1_ = (byte)((uint)iVar1 >> 0x18);
    bVar4 = param_3._3_1_;
    param_3 = iVar1;
  }
  switch(param_5) {
  case 1:
    iVar3 = FUN_00486570(param_1,iVar3,iVar5,local_18,0);
    if (iVar3 == 1) {
      return bVar4 | 1;
    }
    break;
  case 2:
    break;
  case 3:
    if (bVar4 != 0) {
      return param_3._2_1_;
    }
    break;
  case 4:
  case 5:
  case 6:
  case 7:
    if (bVar4 != 0) {
      if (param_5 == 6) {
        param_3._0_3_ = CONCAT12(param_3._2_1_ & ~param_4,(undefined2)param_3);
        *(uint *)(iVar6 + iVar5 * 4) = param_3;
        return 1;
      }
      if (param_5 != 5) {
        param_3._0_3_ = CONCAT12(param_4,(undefined2)param_3);
        if (param_5 == 7) {
          param_3 = CONCAT13(param_3._3_1_,(undefined3)param_3) & 0x7fffffff;
        }
        *(uint *)(iVar6 + iVar5 * 4) = param_3;
        return 1;
      }
      param_3._0_3_ = CONCAT12(param_3._2_1_ | param_4,(undefined2)param_3);
      *(uint *)(iVar6 + iVar5 * 4) = param_3;
      return 1;
    }
    break;
  default:
    bVar4 = 0;
  }
  return bVar4;
}

