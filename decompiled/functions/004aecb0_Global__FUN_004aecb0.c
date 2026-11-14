// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004aecb0
// entry: 004aecb0  size: 415


undefined4 FUN_004aecb0(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *local_420;
  undefined1 local_419;
  int local_418;
  undefined1 local_412 [2];
  undefined4 local_410;
  undefined4 local_40c;
  undefined4 local_408;
  undefined4 local_404;
  undefined1 local_400 [1024];
  
  iVar2 = FUN_00531b30(0x8000);
  iVar3 = FUN_004adeb0(s__REV2_005be1f8,&local_418,local_412);
  if (iVar3 == 0) {
    iVar3 = FUN_004103d0(s__REV2_005be1f8,&local_420,&local_419);
    if (iVar3 == 0) {
      iVar3 = FUN_0042a210(local_420[2],local_418,iVar2 + 0x10000);
      if (-1 < iVar3) {
        local_410 = *local_420;
        local_40c = local_420[1];
        local_408 = local_420[2];
        uVar1 = local_420[3];
        local_404 = uVar1;
        iVar3 = FUN_0042a1f0(DAT_005d67e8,0x10000,0);
        if (-1 < iVar3) {
          iVar3 = FUN_0042a1f0(local_400,iVar2,0x10000);
          if (-1 < iVar3) {
            FUN_00531ca0(0x8000,local_400,1);
            FUN_004adde0(s__REV2_005be1f8);
            if (local_418 != 0) {
              iVar3 = FUN_004106b0(s__REV2_005be1f8,s_PictTemp_005c07a4,0x4e,local_418 + -0x14,
                                   DAT_005d67e8);
              if (iVar3 != 0) {
                return 4;
              }
              FUN_004103d0(s__REV2_005be1f8,&local_420,&local_419);
              iVar2 = FUN_0042a1f0(local_420[2],local_418,iVar2 + 0x10000);
              if (iVar2 < 0) goto LAB_004aee12;
            }
            *(short *)(local_420 + 3) = (short)uVar1;
            *(char *)((int)local_420 + 0xe) = (char)((uint)local_404 >> 0x10);
            *(char *)((int)local_420 + 0xf) = (char)((uint)local_404 >> 0x18);
            return 0;
          }
        }
      }
    }
  }
LAB_004aee12:
  FUN_004ad5a0();
  return 0x17;
}

