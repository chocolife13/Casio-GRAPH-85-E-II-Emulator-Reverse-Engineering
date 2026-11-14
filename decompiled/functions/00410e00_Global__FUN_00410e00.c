// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00410e00
// entry: 00410e00  size: 350


int FUN_00410e00(uint param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  byte bVar8;
  ushort uVar9;
  undefined1 local_11;
  uint local_10;
  int local_c;
  int local_8;
  int local_4;
  
  uVar7 = param_1;
  piVar4 = DAT_005d67e8;
  iVar5 = FUN_004103d0(param_1,&local_c,&param_1);
  if ((iVar5 == 0) &&
     (iVar5 = FUN_004105d0(uVar7,param_2,&local_11,&local_10,&local_8,&local_4), iVar5 == 0)) {
    if ((*(byte *)(local_10 + 0x11) & 1) != 0) {
      return 0x32;
    }
    if ((*(byte *)(local_10 + 0x11) & 6) != 0) {
      return 0x34;
    }
    FUN_00411f00();
    iVar3 = *piVar4;
    iVar1 = local_4 + 0x14;
    FUN_004101a0(local_10 + 0x14,local_10,local_8 - (local_10 + 0x14));
    FUN_004101a0(local_4 + local_8,local_8 + -0x14,iVar3 - (local_4 + local_8));
    *(short *)(local_c + 0xc) = *(short *)(local_c + 0xc) + -1;
    if (1 < (byte)param_1) {
      piVar6 = (int *)(local_c + 8);
      do {
        piVar2 = piVar6 + 4;
        piVar6 = piVar6 + 4;
        *piVar6 = *piVar2 - iVar1;
        bVar8 = (byte)param_1 - 1;
        param_1 = (uint)bVar8;
      } while (1 < bVar8);
    }
    uVar9 = 1;
    for (uVar7 = *(uint *)(local_c + 8); uVar7 < local_10; uVar7 = uVar7 + 0x14) {
      uVar9 = uVar9 + 1;
      *(int *)(uVar7 + 8) = *(int *)(uVar7 + 8) + -0x14;
    }
    if (uVar7 != local_10) {
      return 0xff;
    }
    if (uVar9 <= *(ushort *)(local_c + 0xc)) {
      do {
        uVar9 = uVar9 + 1;
        *(int *)(local_10 + 8) = *(int *)(local_10 + 8) - iVar1;
        local_10 = local_10 + 0x14;
      } while (uVar9 <= *(ushort *)(local_c + 0xc));
    }
    *piVar4 = *piVar4 - iVar1;
  }
  return iVar5;
}

