// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00411190
// entry: 00411190  size: 445


int FUN_00411190(undefined4 param_1,undefined4 param_2,uint param_3,uint param_4,undefined4 param_5)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  byte local_1a;
  undefined1 local_19;
  uint local_18;
  int local_14;
  uint local_10;
  int local_c;
  int local_8;
  int *local_4;
  
  iVar6 = 0;
  local_4 = DAT_005d67e8;
  uVar2 = FUN_00411d60(&local_c);
  if ((param_4 & 3) != 0) {
    return 0x10;
  }
  if (param_4 != 0) {
    iVar6 = FUN_004103d0(param_1,&local_14,&local_1a);
    if (iVar6 == 0) {
      iVar6 = FUN_004105d0(param_1,param_2,&local_19,&local_18,&local_8,&local_10);
      if (iVar6 == 0) {
        if ((*(byte *)(local_18 + 0x11) & 1) != 0) {
          return 0x32;
        }
        if ((*(byte *)(local_18 + 0x11) & 6) != 0) {
          return 0x34;
        }
        if (uVar2 < param_4) {
          return 0x11;
        }
        if (local_10 < param_3) {
          return 0x12;
        }
        FUN_00411f00();
        FUN_004101a0(local_c + -1,local_c + -1 + param_4,local_c - (param_3 + local_8));
        FUN_00410170(param_3 + local_8,param_5,param_4);
        if (1 < local_1a) {
          piVar3 = (int *)(local_14 + 8);
          do {
            piVar1 = piVar3 + 4;
            piVar3 = piVar3 + 4;
            *piVar3 = *piVar1 + param_4;
            local_1a = local_1a - 1;
          } while (1 < local_1a);
        }
        *(uint *)(local_18 + 0xc) = *(int *)(local_18 + 0xc) + param_4;
        iVar4 = 1;
        uVar2 = *(uint *)(local_14 + 8);
        if (uVar2 <= local_18) {
          uVar5 = ((local_18 - uVar2) + 0x14) / 0x14;
          iVar4 = uVar5 + 1;
          uVar2 = uVar2 + uVar5 * 0x14;
        }
        if (uVar2 != local_18 + 0x14) {
          return 0xff;
        }
        if ((ushort)iVar4 <= *(ushort *)(local_14 + 0xc)) {
          piVar3 = (int *)(uVar2 + 8);
          do {
            iVar4 = iVar4 + 1;
            *piVar3 = *piVar3 + param_4;
            piVar3 = piVar3 + 5;
          } while ((ushort)iVar4 <= *(ushort *)(local_14 + 0xc));
        }
        *local_4 = *local_4 + param_4;
      }
    }
  }
  return iVar6;
}

