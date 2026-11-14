// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0041d050
// entry: 0041d050  size: 987


/* WARNING: Removing unreachable block (ram,0x0041d160) */
/* WARNING: Removing unreachable block (ram,0x0041d221) */

int FUN_0041d050(ushort param_1,int param_2,short *param_3,ushort *param_4)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  ushort uVar4;
  uint uVar5;
  uint local_14;
  int local_10;
  uint local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_4 = 0;
  local_14 = 0;
  local_8 = 0;
  local_c = 0xffffffff;
  local_10 = 0;
  uVar1 = DAT_005d8730;
  if ((param_1 == 7) && (iVar2 = FUN_0041ce50(), uVar1 = DAT_005d8730, iVar2 != 0)) {
    local_10 = 1;
  }
  do {
    uVar1 = uVar1 - 1;
    if (uVar1 < 0x19) {
LAB_0041d367:
      if (3 < param_1) {
        if (param_1 < 6) {
          iVar2 = FUN_0041c350(0,1);
          if (iVar2 < 0) {
            return iVar2;
          }
          *param_3 = 1;
          *param_4 = 0;
          if (0xffff < param_2) {
            return -0xc;
          }
          return param_2;
        }
        if (param_1 == 7) {
          if ((local_10 == 0) && (iVar2 = FUN_0041c350(0,(local_14 & 0xffff) + 1), iVar2 < 0)) {
            return iVar2;
          }
          *param_3 = (short)local_14 + 1;
          *param_4 = 0;
          return 0x10000;
        }
      }
      iVar2 = FUN_0041c350(0,1);
      if (-1 < iVar2) {
        *param_3 = 1;
        *param_4 = 0;
        iVar2 = param_2;
        if (0xffff < param_2) {
          iVar2 = 0x10000;
        }
      }
      return iVar2;
    }
    iVar2 = FUN_00418e50(uVar1);
    if (iVar2 < 0) {
      return iVar2;
    }
    FUN_00419650(0);
    FUN_00419220(&local_c,4);
    FUN_00419650(8);
    FUN_00419220(&local_4,2);
    if ((local_c & 0xfff0000) == 0x1300000) {
      FUN_00419650(0xe);
      FUN_00419220(&local_14,2);
      FUN_00419650(0x10);
      FUN_00419220(param_4,2);
      FUN_00419650(0x12);
      FUN_00419220(&local_8,2);
      *param_4 = ((*param_4 + (short)local_8) - (*param_4 + (short)local_8 & 0xf)) + 0xf;
      *param_3 = (short)local_14;
      FUN_00418f90();
      uVar4 = *param_4;
      uVar5 = (uint)uVar4;
      iVar2 = param_2;
      if (uVar4 == 0xffff) {
        if (param_1 != 7) {
          iVar2 = FUN_0041c350(0,(local_14 & 0xffff) + 1);
          if (iVar2 < 0) {
            return iVar2;
          }
          *param_3 = (short)local_14 + 1;
          goto LAB_0041d291;
        }
        if ((local_10 == 0) && (iVar2 = FUN_0041c350(0,(local_14 & 0xffff) + 1), iVar2 < 0)) {
          return iVar2;
        }
        *param_3 = (short)local_14 + 1;
        *param_4 = 0;
LAB_0041d1c0:
        iVar2 = 0x10000;
      }
      else {
        switch(param_1) {
        case 2:
          iVar3 = uVar5 - (uVar5 & 0x80001fff);
          uVar5 = iVar3 + 0x1fff;
          uVar4 = (ushort)uVar5;
          *param_4 = uVar4;
          if (uVar4 != 0xffff) {
            uVar5 = uVar5 & 0xffff;
            iVar2 = 0xffff - uVar5;
            if (0x1fff < iVar2) {
              if (param_2 < (int)(0x10000 - uVar5)) {
                iVar2 = param_2;
              }
              *param_4 = (short)iVar3 + 0x2000;
              break;
            }
          }
          iVar2 = FUN_0041c350(0,(local_14 & 0xffff) + 1);
          if (iVar2 < 0) {
            return iVar2;
          }
          *param_3 = (short)local_14 + 1;
LAB_0041d291:
          *param_4 = 0;
          iVar2 = param_2;
          if (0xffff < param_2) goto LAB_0041d1c0;
          break;
        default:
          if ((int)(0x10000 - uVar5) <= param_2) {
            iVar2 = 0xffff - uVar5;
          }
LAB_0041d359:
          *param_4 = uVar4 + 1;
          break;
        case 4:
        case 5:
          if (param_2 < (int)(0x10000 - uVar5)) goto LAB_0041d359;
          iVar3 = FUN_0041c350(0,(local_14 & 0xffff) + 1);
          if (iVar3 < 0) {
            return iVar3;
          }
          *param_3 = (short)local_14 + 1;
          *param_4 = 0;
          if (0xffff < param_2) {
            iVar2 = -0xc;
          }
          break;
        case 7:
          if ((local_10 == 0) && (iVar2 = FUN_0041c350(0,(local_14 & 0xffff) + 1), iVar2 < 0)) {
            return iVar2;
          }
          *param_3 = (short)local_14 + 1;
          *param_4 = 0;
          iVar2 = 0x10000;
        }
      }
      if (0x18 < uVar1) {
        return iVar2;
      }
      goto LAB_0041d367;
    }
    FUN_00418f90();
  } while( true );
}

