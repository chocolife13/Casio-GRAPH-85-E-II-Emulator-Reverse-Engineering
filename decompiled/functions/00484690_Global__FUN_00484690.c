// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00484690
// entry: 00484690  size: 455


int FUN_00484690(uint param_1,undefined1 param_2,undefined4 param_3,undefined4 *param_4)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  undefined1 local_a8 [12];
  undefined1 local_9c [12];
  undefined1 local_90 [12];
  undefined1 local_84 [12];
  undefined1 local_78 [12];
  undefined1 local_6c [24];
  undefined4 local_54 [21];
  
  iVar5 = 7;
  puVar4 = local_54;
  do {
    iVar5 = iVar5 + -1;
    *puVar4 = *param_4;
    puVar4[1] = param_4[1];
    puVar4[2] = param_4[2];
    param_4 = param_4 + 6;
    puVar4 = puVar4 + 3;
  } while (iVar5 != 0);
  FUN_004e5780(local_90);
  cVar1 = FUN_00526090(0x2d);
  if (cVar1 != '\0') {
    uVar2 = FUN_00527440(0,param_1);
    if (uVar2 == 0) {
      return 4;
    }
    iVar5 = FUN_005284b0(0,0,uVar2);
    if (iVar5 != 0) {
      return 4;
    }
    uVar6 = 1;
    if (uVar2 != 0) {
      do {
        iVar5 = FUN_00483e70(0,param_1 & 0xff,uVar6,local_84);
        if (iVar5 == 0) {
          FUN_00482660(param_3,local_54,local_84,local_9c);
          FUN_00483e70(0,param_2,uVar6,local_78);
          FUN_004e6b80(local_78,local_9c,local_a8);
        }
        else {
          FUN_004e5630(iVar5,local_a8);
        }
        iVar5 = FUN_004e4020(local_a8);
        if (iVar5 != 0) {
          FUN_00528480(0,0);
          return iVar5;
        }
        uVar3 = FUN_004e4120(local_a8,local_90,local_6c);
        iVar5 = FUN_005278d0(0,0,uVar6,uVar3);
        if (iVar5 != 0) goto LAB_00484813;
        uVar6 = uVar6 + 1;
      } while (uVar6 <= uVar2);
    }
    iVar5 = FUN_00527e80(0,0,0,cVar1);
    if (iVar5 != 0) {
LAB_00484813:
      FUN_00528480(0,0);
      return 4;
    }
  }
  return 0;
}

