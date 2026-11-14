// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00415640
// entry: 00415640  size: 571


/* WARNING: Removing unreachable block (ram,0x00415752) */
/* WARNING: Removing unreachable block (ram,0x004157dc) */

int FUN_00415640(int param_1)

{
  undefined4 in_EAX;
  undefined2 uVar3;
  int iVar1;
  uint uVar2;
  ushort uVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  uint local_1c [3];
  undefined4 local_e;
  undefined4 local_a;
  uint local_6;
  
  uVar3 = (undefined2)((uint)in_EAX >> 0x10);
  uVar6 = 0;
  uVar4 = DAT_005d8730 - 1;
  uVar5 = (uint)uVar4;
  while( true ) {
    if (uVar4 < 0x19) {
      FUN_0041c2f0(CONCAT22(uVar3,*(undefined2 *)(param_1 + 0x100c)));
      return 9;
    }
    iVar1 = FUN_00418e50(uVar5 & 0xffff);
    if (iVar1 < 0) break;
    FUN_00419650(0);
    FUN_00419220(local_1c,4);
    uVar2 = local_1c[0];
    if (((local_1c[0] & 0xfff0000) == 0x1300000) && ((local_1c[0] & 0xffff) != 0)) {
      FUN_00419650(0xe);
      FUN_00419220(&local_e,2);
      FUN_00419650(0x12);
      FUN_00419220(&local_a,2);
      FUN_00419650(0x14);
      FUN_00419220((int)&local_a + 2,2);
      FUN_00419650(0x16);
      FUN_00419220(&local_6,2);
      if ((local_a._2_2_ != -1) && ((short)local_6 != -1)) {
        uVar5 = 0;
        if ((int)((local_a & 0xffff) + 0x10 + (local_6 & 0xffff)) >> 4 != 0) {
          uVar2 = 0;
          do {
            iVar1 = uVar2 - (uVar2 & 0x8000001f);
            FUN_00419f20(param_1 + 0x1014 + ((int)(iVar1 + (iVar1 >> 0x1f & 0x1fU)) >> 5) * 4,0,
                         uVar2 & 0x8000001f,1);
            uVar5 = uVar5 + 1;
            uVar2 = uVar5 & 0xffff;
          } while (uVar2 < (uint)((int)((local_a & 0xffff) + 0x10 + (local_6 & 0xffff)) >> 4));
        }
        if (*(short *)(param_1 + 0x100c) == -1) {
          iVar1 = FUN_0041ccb0();
          if (iVar1 < 0) {
            return iVar1;
          }
          *(short *)(param_1 + 0x100c) = (short)iVar1;
          param_1 = param_1 + 0xc;
          iVar1 = 0x400;
          do {
            FUN_00419f20(param_1,1,0,0);
            param_1 = param_1 + 4;
            iVar1 = iVar1 + -1;
          } while (iVar1 != 0);
          return 4;
        }
        return 4;
      }
      if ((short)uVar6 != (short)local_e) {
        iVar1 = param_1 + 0xc;
        iVar7 = 0x400;
        do {
          FUN_00419f20(iVar1,1,0,0);
          iVar1 = iVar1 + 4;
          iVar7 = iVar7 + -1;
          uVar6 = local_e;
        } while (iVar7 != 0);
      }
      iVar1 = (uVar5 & 0xffff) - (uVar5 & 0x1f);
      FUN_00419f20(param_1 + 0xc + ((int)(iVar1 + (iVar1 >> 0x1f & 0x1fU)) >> 5) * 4,0,uVar5 & 0x1f,
                   1);
      uVar2 = FUN_00418f90();
    }
    uVar3 = (undefined2)(uVar2 >> 0x10);
    uVar5 = uVar5 + 0xffff;
    uVar4 = (ushort)uVar5;
  }
  return iVar1;
}

