// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00529090
// entry: 00529090  size: 567


void FUN_00529090(undefined4 param_1,uint param_2,int param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint local_40;
  int local_3c;
  uint local_38;
  int local_34;
  undefined1 local_30 [4];
  undefined1 local_2c [4];
  undefined1 local_28 [12];
  undefined1 local_1c [12];
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  FUN_004ad550(local_2c,local_30,&local_38);
  FUN_0052f8a0(param_1,local_28);
  cVar1 = FUN_004ad2a0(6,local_28,&local_34);
  if ((cVar1 == '\0') && (cVar1 = FUN_004ad3f0(1,0x10,&local_10), cVar1 == '\0')) {
    FUN_00528870(local_10,local_c,local_8,local_4,&local_3c,&local_40);
    uVar3 = local_3c * local_40 * 0xc;
    if (0xffff < uVar3) {
      FUN_00529a30(0x32);
      return;
    }
    if (uVar3 < local_34 - 0x10U) {
      if (local_38 < (uint)(local_3c * param_3 * 0x18)) {
        FUN_00529a30(0x32);
        return;
      }
    }
    else if (local_38 < (uint)(local_3c * param_3 * 0xc)) {
      FUN_00529a30(0x32);
      return;
    }
    FUN_004e5780(local_1c);
    if ((local_40 < param_2) || (param_2 == 0)) {
      param_2 = local_40 + 1;
    }
    iVar4 = local_3c;
    iVar2 = local_3c;
    iVar5 = local_3c;
    if (local_3c * local_40 * 0xc < local_34 - 0x10U) {
      for (; iVar5 = iVar2, iVar4 != 0; iVar4 = iVar4 + -1) {
        iVar5 = param_3;
        if (param_3 != 0) {
          do {
            FUN_004abeb0(0xc,local_1c,((iVar4 + -1 + iVar2) * local_40 + param_2) * 0xc + 4);
            iVar5 = iVar5 + -1;
            iVar2 = local_3c;
          } while (iVar5 != 0);
        }
      }
    }
    for (; iVar2 != 0; iVar2 = iVar2 + -1) {
      if (param_3 != 0) {
        iVar4 = param_3;
        do {
          FUN_004abeb0(0xc,local_1c,((iVar2 + -1) * local_40 + param_2) * 0xc + 4);
          iVar4 = iVar4 + -1;
          iVar5 = local_3c;
        } while (iVar4 != 0);
      }
    }
    FUN_00528890(&local_10,iVar5,local_40 + param_3);
    cVar1 = FUN_004ac2f0(0x10,&local_10,0);
    if (((cVar1 == '\0') || (cVar1 == '\x01')) || (cVar1 == '\x02')) {
      cVar1 = '\0';
    }
  }
  FUN_00529a30(cVar1);
  return;
}

