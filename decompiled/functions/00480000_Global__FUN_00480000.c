// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00480000
// entry: 00480000  size: 464


int FUN_00480000(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined1 local_180 [384];
  
  iVar1 = FUN_00481e10(0x15,(int)*(short *)(param_1 + 6),(int)*(short *)(param_1 + 8));
  if (iVar1 == 0) {
    iVar1 = FUN_00484020((int)*(short *)(param_1 + 6),(int)*(short *)(param_1 + 10));
    iVar2 = FUN_004802f0(iVar1);
    if (iVar2 != 1) {
      iVar1 = FUN_00484040((int)*(short *)(param_1 + 6),(int)*(short *)(param_1 + 10));
      iVar2 = FUN_004802f0(iVar1);
      if (iVar2 != 1) {
        iVar1 = FUN_00484020((int)*(short *)(param_1 + 8),(int)*(short *)(param_1 + 10));
        iVar2 = FUN_004802f0(iVar1);
        if (iVar2 != 1) {
          iVar1 = FUN_00484040((int)*(short *)(param_1 + 8),(int)*(short *)(param_1 + 10));
          iVar2 = FUN_004802f0(iVar1);
          if (iVar2 != 1) {
            iVar1 = FUN_00484540((int)*(short *)(param_1 + 6),(int)*(short *)(param_1 + 10));
            iVar2 = FUN_004802f0(iVar1);
            if (iVar2 != 1) {
              puVar4 = &stack0xfffffe68;
              uVar3 = FUN_004e5780();
              iVar1 = FUN_004e71d0(local_180,uVar3);
              if (iVar1 == 1) {
                return 3;
              }
              iVar1 = FUN_00484540((int)*(short *)(param_1 + 8),(int)*(short *)(param_1 + 10));
              iVar2 = FUN_004802f0(iVar1);
              if (iVar2 != 1) {
                iVar1 = FUN_004845f0((int)*(short *)(param_1 + 6),(int)*(short *)(param_1 + 8),
                                     (int)*(short *)(param_1 + 10));
                iVar2 = FUN_004802f0(iVar1);
                if ((iVar2 != 1) && (iVar1 = FUN_00531340(0x15), iVar1 == 0)) {
                  iVar2 = 0;
                  do {
                    puVar4 = puVar4 + 0x18;
                    iVar2 = iVar2 + 1;
                    iVar1 = FUN_00531850(iVar2,puVar4);
                    if (iVar1 != 0) {
                      FUN_00531380();
                      iVar1 = 4;
                    }
                  } while (iVar2 < 0x10);
                }
              }
            }
          }
        }
      }
    }
  }
  return iVar1;
}

