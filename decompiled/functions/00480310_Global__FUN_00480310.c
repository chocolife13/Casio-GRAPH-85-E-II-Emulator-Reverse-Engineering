// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00480310
// entry: 00480310  size: 623


uint FUN_00480310(undefined4 param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined1 local_a8 [24];
  undefined1 local_90 [24];
  undefined1 local_78 [24];
  undefined1 local_60 [24];
  undefined1 local_48 [24];
  undefined1 local_30 [24];
  undefined1 local_18 [24];
  
  iVar9 = 0;
  do {
    uVar2 = FUN_00483d60((int)*(short *)(param_2 + 4),local_a8);
    if (uVar2 != 0) {
      return uVar2;
    }
    if ((*(short *)(param_2 + 8) != 0) &&
       (uVar2 = FUN_00483d60((int)*(short *)(param_2 + 8),local_48), uVar2 != 0)) {
      return uVar2;
    }
    switch(iVar9) {
    case 0:
      uVar2 = FUN_00484520(0,(int)*(short *)(param_2 + 4),local_30);
      goto joined_r0x0048046a;
    case 1:
      if (*(short *)(param_2 + 8) == 0) {
        iVar3 = FUN_004c3470(local_a8,local_60);
      }
      else {
        iVar3 = FUN_004c3680(local_a8,local_48,local_60);
      }
      if (iVar3 == 0) {
        uVar2 = FUN_004e4020(local_60);
        return uVar2;
      }
      break;
    case 2:
      if (*(short *)(param_2 + 8) == 0) {
        iVar3 = FUN_004c3cd0(local_a8,local_90);
      }
      else {
        iVar3 = FUN_004c3ea0(local_a8,local_48,local_90);
      }
      if (iVar3 == 0) {
        uVar2 = FUN_004e4020(local_90);
        return uVar2;
      }
      break;
    case 3:
      if (*(short *)(param_2 + 8) == 0) {
        iVar3 = FUN_004c3ec0(local_a8,local_78);
      }
      else {
        iVar3 = FUN_004c4190(local_a8,local_48,local_78);
      }
      if (iVar3 == 0) {
        uVar2 = FUN_004e4020(local_78);
        return uVar2;
      }
      break;
    case 4:
      uVar2 = FUN_00484500(0,(int)*(short *)(param_2 + 4),local_18);
joined_r0x0048046a:
      if (uVar2 != 0) {
        return uVar2;
      }
    }
    iVar3 = iVar9 + 2;
    iVar9 = iVar9 + 1;
    if (5 < iVar3) {
      FUN_004802a0(param_1);
      cVar1 = (char)param_1 * '\n';
      uVar2 = FUN_005281a0(0xff,cVar1,5);
      uVar4 = FUN_005278d0(0xff,cVar1,1,local_30);
      uVar5 = FUN_005278d0(0xff,cVar1,2,local_60);
      uVar6 = FUN_005278d0(0xff,cVar1,3,local_90);
      uVar7 = FUN_005278d0(0xff,cVar1,4,local_78);
      uVar8 = FUN_005278d0(0xff,cVar1,5,local_18);
      uVar8 = uVar2 | uVar4 | uVar5 | uVar6 | uVar7 | uVar8;
      if (uVar8 != 0) {
        uVar8 = 4;
        FUN_004802a0(param_1);
      }
      return uVar8;
    }
  } while( true );
}

