// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00481010
// entry: 00481010  size: 254


uint FUN_00481010(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 local_90 [24];
  undefined1 local_78 [72];
  undefined1 local_30 [48];
  
  FUN_004802a0(param_1);
  uVar2 = FUN_00483e50((int)*(short *)(param_2 + 4),param_3);
  if ((((uVar2 == 0) && (uVar2 = FUN_00483e30((int)*(short *)(param_2 + 4),param_4), uVar2 == 0)) &&
      (uVar2 = FUN_00484540((int)*(short *)(param_2 + 4),(int)*(short *)(param_2 + 8),local_90),
      uVar2 == 0)) &&
     ((uVar2 = FUN_004e4020(local_78), uVar2 == 0 && (uVar2 = FUN_004e4020(local_30), uVar2 == 0))))
  {
    cVar1 = (char)param_1 * '\n';
    uVar3 = FUN_005281a0(0xff,cVar1,2);
    uVar4 = FUN_005278d0(0xff,cVar1,1,local_78);
    uVar2 = FUN_005278d0(0xff,cVar1,2,local_30);
    uVar2 = uVar3 | uVar4 | uVar2;
    if (uVar2 != 0) {
      uVar2 = 4;
      FUN_004802a0(param_1);
    }
  }
  return uVar2;
}

