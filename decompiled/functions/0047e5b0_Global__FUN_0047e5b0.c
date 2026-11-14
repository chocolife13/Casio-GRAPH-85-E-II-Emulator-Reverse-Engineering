// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0047e5b0
// entry: 0047e5b0  size: 414


int FUN_0047e5b0(undefined4 param_1,int param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  iVar2 = param_3;
  iVar4 = FUN_00482050(0,(int)*(short *)(param_2 + 4),(int)*(short *)(param_2 + 6),
                       (int)*(short *)(param_2 + 8));
  if (iVar4 == 0) {
    return 9;
  }
  local_20 = iVar4;
  iVar5 = FUN_0047e560(param_1,param_2,param_3);
  if (iVar5 == 0) {
    FUN_0052f840();
    iVar5 = 0;
    local_24 = 1;
    bVar1 = false;
    iVar7 = param_2;
    if (0 < iVar4) {
      while (iVar4 = local_24, iVar5 = FUN_0052f820(), iVar5 != 1) {
        iVar5 = FUN_00483e70(0,(int)*(short *)(param_2 + 4),iVar4,local_18);
        if (iVar5 != 0) {
          return iVar5;
        }
        uVar8 = FUN_00483e70(0,(int)*(short *)(param_2 + 6),iVar4,local_c);
        local_1c = (int)uVar8;
        if (local_1c != 0) {
          return local_1c;
        }
        iVar5 = FUN_004d52d0(local_18,&local_2c,iVar2 + 0x800,
                             CONCAT31((int3)((ulonglong)uVar8 >> 0x28),*(byte *)(iVar2 + 0x8e0) >> 4
                                     ) & 0xffffff03);
        if ((iVar5 == 0) &&
           (iVar6 = FUN_004d53c0(local_c,&local_28,iVar2 + 0x800), iVar3 = local_28,
           iVar5 = local_2c, iVar6 == 0)) {
          if (bVar1) {
            FUN_005146d0(iVar7,param_3,0,iVar2,0x20,*(undefined1 *)(iVar2 + 0x8e2));
            FUN_0050f940(iVar7,param_3,iVar5,iVar3,iVar2,2,*(undefined1 *)(iVar2 + 0x8e2));
            param_3 = iVar3;
            iVar7 = iVar5;
            iVar4 = local_24;
          }
          else {
            param_3 = local_28;
            bVar1 = true;
            iVar7 = iVar5;
          }
        }
        else {
          bVar1 = false;
        }
        local_24 = iVar4 + 1;
        if (local_20 < local_24) {
          return local_1c;
        }
      }
      iVar5 = 1;
    }
  }
  return iVar5;
}

