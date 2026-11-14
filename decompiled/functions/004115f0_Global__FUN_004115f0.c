// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004115f0
// entry: 004115f0  size: 448


int FUN_004115f0(undefined4 param_1,undefined4 param_2,uint param_3,uint param_4)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint local_14;
  int local_10;
  uint local_c;
  int *local_8;
  int local_4;
  
  uVar4 = param_4;
  uVar2 = param_1;
  iVar10 = 0;
  local_8 = DAT_005d67e8;
  if ((param_4 & 3) != 0) {
    return 0x16;
  }
  if (param_4 != 0) {
    iVar10 = FUN_004103d0(param_1,&local_10,&param_4);
    uVar3 = param_2;
    if (iVar10 == 0) {
      iVar10 = FUN_004105d0(uVar2,param_2,&param_1,&local_14,&local_4,&local_c);
      if (iVar10 == 0) {
        if ((*(byte *)(local_14 + 0x11) & 1) != 0) {
          return 0x32;
        }
        if ((*(byte *)(local_14 + 0x11) & 6) != 0) {
          return 0x34;
        }
        FUN_00411f00();
        if (param_3 == 0) {
          if (uVar4 == local_c) {
            iVar10 = FUN_00410e00(uVar2,uVar3);
            return iVar10;
          }
        }
        else if (local_c < param_3) {
          return 0x18;
        }
        if (local_c < param_3 + uVar4) {
          return 0x17;
        }
        iVar6 = param_3 + local_4 + uVar4;
        FUN_004101a0(iVar6,param_3 + local_4,*local_8 - iVar6);
        if (1 < (byte)param_4) {
          piVar5 = (int *)(local_10 + 8);
          do {
            piVar1 = piVar5 + 4;
            piVar5 = piVar5 + 4;
            *piVar5 = *piVar1 - uVar4;
            bVar7 = (byte)param_4 - 1;
            param_4 = (uint)bVar7;
          } while (1 < bVar7);
        }
        *(uint *)(local_14 + 0xc) = *(int *)(local_14 + 0xc) - uVar4;
        iVar6 = 1;
        uVar8 = *(uint *)(local_10 + 8);
        if (uVar8 <= local_14) {
          uVar9 = ((local_14 - uVar8) + 0x14) / 0x14;
          iVar6 = uVar9 + 1;
          uVar8 = uVar8 + uVar9 * 0x14;
        }
        if (uVar8 != local_14 + 0x14) {
          return 0xff;
        }
        if ((ushort)iVar6 <= *(ushort *)(local_10 + 0xc)) {
          piVar5 = (int *)(uVar8 + 8);
          do {
            iVar6 = iVar6 + 1;
            *piVar5 = *piVar5 - uVar4;
            piVar5 = piVar5 + 5;
          } while ((ushort)iVar6 <= *(ushort *)(local_10 + 0xc));
        }
        *local_8 = *local_8 - uVar4;
      }
    }
  }
  return iVar10;
}

