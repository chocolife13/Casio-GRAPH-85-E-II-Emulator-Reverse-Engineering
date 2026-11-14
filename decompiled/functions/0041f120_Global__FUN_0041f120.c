// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0041f120
// entry: 0041f120  size: 684


/* WARNING: Removing unreachable block (ram,0x0041f233) */
/* WARNING: Removing unreachable block (ram,0x0041f2b9) */

int FUN_0041f120(undefined4 param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  uint local_14;
  uint local_10;
  int local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_14 = 0;
  local_8 = 0;
  local_4 = 0;
  local_c = 0;
  local_10 = 0xffffffff;
  iVar2 = FUN_0041a050(param_1);
  uVar1 = DAT_005d8730;
  if (iVar2 == 0) {
    return -5;
  }
  do {
    uVar1 = uVar1 - 1;
    if (uVar1 < 0x19) {
LAB_0041f357:
      if (3 < param_2) {
        if (param_2 < 6) {
          iVar2 = FUN_0041c8d0();
          return ((0 < iVar2) - 1 & 0xfffefffc) + 0x10000;
        }
        if (param_2 == 7) {
          iVar2 = FUN_0041c8d0();
          return ((1 < iVar2) - 1 & 0xfffdfffc) + 0x20000;
        }
      }
      iVar2 = FUN_0041c8d0();
      if (0 < iVar2) {
        return iVar2 << 0x10;
      }
      return -4;
    }
    iVar2 = FUN_00418e50(uVar1);
    if (iVar2 < 0) {
      return iVar2;
    }
    FUN_00419650(0);
    FUN_00419220(&local_10,4);
    FUN_00419650(8);
    FUN_00419220(&local_8,2);
    if ((local_10 & 0xfff0000) == 0x1300000) {
      FUN_00419650(0xe);
      FUN_00419220(&local_4,2);
      FUN_00419650(0x10);
      FUN_00419220(&local_14,2);
      FUN_00419650(0x12);
      FUN_00419220(&local_c,2);
      local_14 = local_14 + local_c + (0xf - (local_14 + local_c & 0xf));
      FUN_00418f90();
      if ((short)local_14 == -1) {
        if (param_2 == 7) {
switchD_0041f2a2_caseD_7:
          iVar2 = FUN_0041c8d0();
          iVar2 = ((1 < iVar2) - 1 & 0xfffdfffc) + 0x20000;
        }
        else {
LAB_0041f27a:
          iVar2 = FUN_0041c8d0();
          if (iVar2 < 1) {
            iVar2 = -4;
          }
          else {
            iVar2 = iVar2 << 0x10;
          }
        }
      }
      else {
        switch(param_2) {
        case 2:
          local_14 = local_14 + (0x1fff - (local_14 & 0x1fff));
          if (((short)local_14 == -1) || ((int)(0xffff - (local_14 & 0xffff)) < 0x2000))
          goto LAB_0041f27a;
          iVar2 = FUN_0041c8d0();
          if (-1 < iVar2) {
            iVar2 = iVar2 * 0x10000 - (local_14 & 0xffff);
            goto LAB_0041f34c;
          }
          iVar2 = -4;
          break;
        default:
          iVar2 = FUN_0041c8d0();
          if (iVar2 < 0) {
            iVar2 = -4;
          }
          else {
            iVar2 = iVar2 * 0x10000 - (local_14 & 0xffff);
LAB_0041f34c:
            iVar2 = iVar2 + 0xffff;
          }
          break;
        case 4:
        case 5:
          iVar2 = FUN_0041c8d0();
          if (iVar2 < 1) {
            iVar2 = 0xffff - (local_14 & 0xffff);
          }
          else {
            iVar2 = 0x10000;
          }
          break;
        case 7:
          goto switchD_0041f2a2_caseD_7;
        }
      }
      if (0x18 < uVar1) {
        return iVar2;
      }
      goto LAB_0041f357;
    }
    FUN_00418f90();
  } while( true );
}

