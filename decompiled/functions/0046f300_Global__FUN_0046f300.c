// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0046f300
// entry: 0046f300  size: 383


int FUN_0046f300(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined1 local_30 [12];
  undefined1 local_24 [12];
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  cVar1 = FUN_00526090(0x2d);
  if (cVar1 != '\0') {
    uVar2 = FUN_00527440(0,param_1);
    if (uVar2 == 0) {
      return 4;
    }
    iVar3 = FUN_005284b0(0,0,uVar2);
    if (iVar3 != 0) {
      return 4;
    }
    uVar4 = 1;
    if (uVar2 != 0) {
      do {
        iVar3 = FUN_0047cac0(param_1,uVar4,local_18);
        if (iVar3 == 0) {
          FUN_004e6d00(param_3,local_18,local_30);
          FUN_004e7910(local_30,local_30);
          FUN_004e6a00(param_4,local_30,local_30);
          FUN_004e7910(local_30,local_30);
          FUN_0047cac0(param_2,uVar4,local_c);
          FUN_004e6b80(local_c,local_30,local_24);
        }
        else {
          FUN_004e5630(iVar3,local_24);
        }
        iVar3 = FUN_004e4020(local_24);
        if (iVar3 != 0) {
          FUN_00528480(0,0);
          return iVar3;
        }
        iVar3 = FUN_0047cb50(0,uVar4,local_24);
        if (iVar3 != 0) goto LAB_0046f444;
        uVar4 = uVar4 + 1;
      } while (uVar4 <= uVar2);
    }
    iVar3 = FUN_00527e80(0,0,0,cVar1);
    if (iVar3 != 0) {
LAB_0046f444:
      FUN_00528480(0,0);
      return 4;
    }
  }
  return 0;
}

