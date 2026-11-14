// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0047fd90
// entry: 0047fd90  size: 458


int FUN_0047fd90(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined1 local_12c [12];
  undefined1 local_120 [144];
  undefined1 local_90 [24];
  undefined1 local_78 [24];
  undefined1 local_60 [24];
  undefined1 local_48 [24];
  undefined1 local_30 [24];
  undefined1 local_18 [24];
  
  iVar1 = FUN_00481e10(0x14,(int)*(short *)(param_1 + 2),0,(int)*(short *)(param_1 + 4));
  if (iVar1 == 0) {
    iVar1 = FUN_00484060((int)*(short *)(param_1 + 2),(int)*(short *)(param_1 + 4),local_60);
    iVar2 = FUN_004802f0(iVar1);
    if (iVar2 != 1) {
      iVar1 = FUN_00484080((int)*(short *)(param_1 + 2),(int)*(short *)(param_1 + 4),local_48);
      iVar2 = FUN_004802f0(iVar1);
      if (iVar2 != 1) {
        iVar1 = FUN_004840a0((int)*(short *)(param_1 + 2),(int)*(short *)(param_1 + 4),local_30);
        iVar2 = FUN_004802f0(iVar1);
        if (iVar2 != 1) {
          iVar1 = FUN_00484020((int)*(short *)(param_1 + 2),(int)*(short *)(param_1 + 4),local_90);
          iVar2 = FUN_004802f0(iVar1);
          if (iVar2 != 1) {
            iVar1 = FUN_00484040((int)*(short *)(param_1 + 2),(int)*(short *)(param_1 + 4),local_78)
            ;
            iVar2 = FUN_004802f0(iVar1);
            if (iVar2 != 1) {
              iVar1 = FUN_00484540((int)*(short *)(param_1 + 2),(int)*(short *)(param_1 + 4),
                                   local_120);
              iVar2 = FUN_004802f0(iVar1);
              if (iVar2 != 1) {
                uVar3 = FUN_004e5780(local_12c);
                iVar1 = FUN_004e71d0(local_120,uVar3);
                if (iVar1 == 1) {
                  iVar1 = 3;
                }
                else {
                  iVar1 = FUN_004817f0(local_18,param_2);
                  if ((iVar1 == 0) && (iVar1 = FUN_00531340(0x14,0xc), iVar1 == 0)) {
                    puVar4 = local_120;
                    iVar2 = 0;
                    while( true ) {
                      iVar2 = iVar2 + 1;
                      iVar1 = FUN_00531850(iVar2,puVar4);
                      if (iVar1 != 0) break;
                      puVar4 = puVar4 + 0x18;
                      if (0xb < iVar2) {
                        return 0;
                      }
                    }
                  }
                }
                goto LAB_0047ff44;
              }
            }
          }
        }
      }
    }
    if (iVar1 == 0) {
      return 0;
    }
  }
LAB_0047ff44:
  FUN_00531380();
  FUN_00531390();
  return iVar1;
}

