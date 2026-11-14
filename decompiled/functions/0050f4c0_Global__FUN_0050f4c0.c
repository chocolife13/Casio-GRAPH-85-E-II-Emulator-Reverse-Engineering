// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0050f4c0
// entry: 0050f4c0  size: 772


void FUN_0050f4c0(uint param_1,uint param_2,undefined4 param_3,uint param_4,undefined4 param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  switch(param_4 & 0xff) {
  case 3:
    FUN_0050f990(param_1,param_2,param_3,0x20,param_5);
    FUN_0050f990(param_1 - 1,param_2,param_3,0x20,param_5);
    FUN_0050f990(param_1,param_2 - 1,param_3,0x20,param_5);
    FUN_0050f990(param_1 - 1,param_2 - 1,param_3,0x20,param_5);
    DAT_005d6800 = DAT_005d6800 + 1;
    return;
  case 4:
    iVar5 = param_1 - 1;
    if (iVar5 < (int)(param_1 + 2)) {
      iVar1 = param_2 - 1;
      do {
        for (; iVar1 < (int)(param_2 + 2); iVar1 = iVar1 + 1) {
          FUN_0050f990(iVar5,iVar1,param_3,0x20,param_5);
        }
        iVar5 = iVar5 + 1;
        iVar1 = param_2 - 1;
      } while (iVar5 < (int)(param_1 + 2));
      DAT_005d6800 = DAT_005d6800 + 1;
      return;
    }
    goto LAB_0050f7b4;
  case 5:
    if ((int)DAT_005d6800 % 3 == 0) {
      FUN_0050f990(param_1 - 1,param_2 - 1,param_3,0x20,param_5);
      FUN_0050f990(param_1 - 1,param_2,param_3,0x20,param_5);
      FUN_0050f990(param_1,param_2 - 1,param_3,0x20,param_5);
      FUN_0050f990(param_1,param_2,param_3,0x20,param_5);
      DAT_005d6800 = DAT_005d6800 + 1;
      return;
    }
    goto LAB_0050f7b4;
  case 6:
    if (((DAT_005d6800 & 1) != 0) && (uVar2 = param_1 - 1, (int)uVar2 < (int)(param_1 + 2))) {
      do {
        uVar3 = param_2 - 1;
        if ((int)uVar3 < (int)(param_2 + 2)) {
          do {
            if ((uVar3 != param_2) || (uVar2 != param_1)) {
              FUN_0050f990(uVar2,uVar3,param_3,0x20,param_5);
            }
            uVar3 = uVar3 + 1;
          } while ((int)uVar3 < (int)(param_2 + 2));
        }
        uVar2 = uVar2 + 1;
      } while ((int)uVar2 < (int)(param_1 + 2));
      DAT_005d6800 = DAT_005d6800 + 1;
      return;
    }
    goto LAB_0050f7b4;
  case 7:
    iVar5 = param_1 - 1;
    if (iVar5 < (int)(param_1 + 2)) {
      iVar1 = param_2 - 1;
      do {
        if (iVar1 < (int)(param_2 + 2)) {
          uVar2 = iVar1 + iVar5;
          iVar4 = iVar1;
          do {
            if ((uVar2 & 1) != 0) {
              FUN_0050f990(iVar5,iVar4,param_3,0x20,param_5);
            }
            iVar4 = iVar4 + 1;
            uVar2 = uVar2 + 1;
          } while (iVar4 < (int)(param_2 + 2));
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < (int)(param_1 + 2));
      DAT_005d6800 = DAT_005d6800 + 1;
      return;
    }
    goto LAB_0050f7b4;
  case 8:
    if ((DAT_005d6800 & 1) != 0) goto LAB_0050f7b4;
    param_4 = 0x20;
    break;
  case 9:
    if ((param_2 & 1) == 0) goto LAB_0050f7b4;
    param_4 = 0x20;
    break;
  case 10:
    if ((param_1 & 1) == 0) goto LAB_0050f7b4;
    param_4 = 0x20;
    break;
  case 0xb:
    if ((DAT_005d6800 & 1) == 0) {
      FUN_0050f990(param_1,param_2,param_3,0x40,param_5);
    }
  default:
    param_4 = param_4 & 0xffffffe0;
    break;
  case 0x40:
    if ((param_1 + param_2 & 1) == 0) goto LAB_0050f7b4;
    param_4 = 0x40;
  }
  FUN_0050f990(param_1,param_2,param_3,param_4,param_5);
LAB_0050f7b4:
  DAT_005d6800 = DAT_005d6800 + 1;
  return;
}

