// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0055b336
// entry: 0055b336  size: 428


bool FUN_0055b336(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  
  if (DAT_005cc814 != 0) {
    iVar2 = param_1[5];
    if ((iVar2 != DAT_005cc8a8) || (iVar2 != DAT_005cc8b8)) {
      if (DAT_005d5568 == 0) {
        FUN_0055b4e2(1,1,iVar2,4,1,0,0,2,0,0,0);
        FUN_0055b4e2(0,1,param_1[5],10,5,0,0,2,0,0,0);
      }
      else {
        if (DAT_005d5608 != 0) {
          uVar4 = 0;
          uVar3 = 0;
          uVar5 = DAT_005d560e;
        }
        else {
          uVar4 = DAT_005d560c;
          uVar3 = DAT_005d560e;
          uVar5 = 0;
        }
        FUN_0055b4e2(1,DAT_005d5608 == 0,iVar2,DAT_005d560a,uVar3,uVar4,uVar5,DAT_005d5610,
                     DAT_005d5612,DAT_005d5614,DAT_005d5616);
        if (DAT_005d55b4 != 0) {
          uVar4 = 0;
          uVar3 = 0;
          iVar2 = param_1[5];
          uVar5 = DAT_005d55ba;
        }
        else {
          iVar2 = param_1[5];
          uVar4 = DAT_005d55b8;
          uVar3 = DAT_005d55ba;
          uVar5 = 0;
        }
        FUN_0055b4e2(0,DAT_005d55b4 == 0,iVar2,DAT_005d55b6,uVar3,uVar4,uVar5,DAT_005d55bc,
                     DAT_005d55be,DAT_005d55c0,DAT_005d55c2);
      }
    }
    iVar2 = param_1[7];
    if (DAT_005cc8ac < DAT_005cc8bc) {
      if ((DAT_005cc8ac <= iVar2) && (iVar2 <= DAT_005cc8bc)) {
        if ((DAT_005cc8ac < iVar2) && (iVar2 < DAT_005cc8bc)) {
          return true;
        }
LAB_0055b4ae:
        iVar1 = ((param_1[2] * 0x3c + param_1[1]) * 0x3c + *param_1) * 1000;
        if (iVar2 == DAT_005cc8ac) {
          return DAT_005cc8b0 <= iVar1;
        }
        return iVar1 < DAT_005cc8c0;
      }
    }
    else {
      if (iVar2 < DAT_005cc8bc) {
        return true;
      }
      if (DAT_005cc8ac < iVar2) {
        return true;
      }
      if ((iVar2 <= DAT_005cc8bc) || (DAT_005cc8ac <= iVar2)) goto LAB_0055b4ae;
    }
  }
  return false;
}

