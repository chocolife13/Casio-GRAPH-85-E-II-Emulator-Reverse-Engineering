// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0047ee40
// entry: 0047ee40  size: 723


int FUN_0047ee40(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 extraout_ECX;
  undefined8 uVar5;
  undefined1 local_48 [12];
  undefined1 local_3c [12];
  undefined1 local_30 [12];
  undefined1 local_24 [12];
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  iVar1 = param_1;
  iVar3 = FUN_00480620(2,param_1,local_3c);
  if ((((iVar3 == 0) && (iVar3 = FUN_00480620(3,iVar1,local_30), iVar3 == 0)) &&
      (iVar3 = FUN_00480620(4,iVar1,local_24), iVar3 == 0)) &&
     ((iVar3 = FUN_00480620(5,iVar1,local_18), iVar3 == 0 &&
      (iVar3 = FUN_00480620(6,iVar1,local_c), iVar2 = param_3, iVar3 == 0)))) {
    FUN_0047ec20(iVar1,param_2,param_3,local_3c);
    iVar4 = FUN_00480cf0(iVar1,0);
    if (iVar4 == 1) {
      param_3 = FUN_00480eb0(iVar1);
      uVar5 = FUN_00480620(1,iVar1,local_48);
      if ((int)uVar5 != 0) {
        return (int)uVar5;
      }
      iVar3 = FUN_004d5130(local_48,&param_1,iVar2 + 0x800,
                           CONCAT31((int3)((ulonglong)uVar5 >> 0x28),*(byte *)(iVar2 + 0x8e0) >> 4)
                           & 0xffffff03);
      if (iVar3 == 0) {
        FUN_005146d0(param_1,iVar1 * 0xf,1,iVar2,0x20,*(undefined1 *)(iVar2 + 0x8e2));
      }
      FUN_0052f840();
      iVar4 = 1;
      iVar3 = 0;
      if (0 < param_3) {
        do {
          iVar3 = FUN_0052f820();
          if (iVar3 == 1) goto LAB_0047f104;
          iVar3 = FUN_00480e50(iVar4,iVar1,local_48);
          if (iVar3 != 0) {
            return iVar3;
          }
          iVar3 = FUN_004d5130(local_48,&param_1,iVar2 + 0x800,*(byte *)(iVar2 + 0x8e0) >> 4 & 3);
          if (iVar3 == 0) {
            FUN_005146d0(param_1,iVar1 * 0xf,1,iVar2,0x20,*(undefined1 *)(iVar2 + 0x8e2));
          }
          iVar4 = iVar4 + 1;
          iVar3 = 0;
        } while (iVar4 <= param_3);
      }
    }
    iVar4 = FUN_00480cf0(iVar1,1);
    if (iVar4 == 1) {
      param_3 = FUN_00480ed0(iVar1);
      iVar3 = FUN_00480620(7,iVar1,local_48);
      if (iVar3 == 0) {
        iVar3 = FUN_004d5130(local_48,&param_1,iVar2 + 0x800,
                             CONCAT31((int3)((uint)extraout_ECX >> 8),*(byte *)(iVar2 + 0x8e0) >> 4)
                             & 0xffffff03);
        if (iVar3 == 0) {
          FUN_005146d0(param_1,iVar1 * 0xf,1,iVar2,0x20,*(undefined1 *)(iVar2 + 0x8e2));
        }
        FUN_0052f840();
        iVar4 = 1;
        iVar3 = 0;
        if (0 < param_3) {
          while (iVar3 = FUN_0052f820(), iVar3 != 1) {
            uVar5 = FUN_00480e80(iVar4,iVar1,local_48);
            if ((int)uVar5 != 0) {
              return (int)uVar5;
            }
            iVar3 = FUN_004d5130(local_48,&param_1,iVar2 + 0x800,
                                 CONCAT31((int3)((ulonglong)uVar5 >> 0x28),
                                          *(byte *)(iVar2 + 0x8e0) >> 4) & 0xffffff03);
            if (iVar3 == 0) {
              FUN_005146d0(param_1,iVar1 * 0xf,1,iVar2,0x20,*(undefined1 *)(iVar2 + 0x8e2));
            }
            iVar4 = iVar4 + 1;
            if (param_3 < iVar4) {
              return 0;
            }
          }
LAB_0047f104:
          iVar3 = 1;
        }
      }
    }
  }
  return iVar3;
}

