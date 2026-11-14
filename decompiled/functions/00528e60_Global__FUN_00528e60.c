// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00528e60
// entry: 00528e60  size: 553


void FUN_00528e60(undefined4 param_1,uint param_2,int param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_40;
  uint local_3c;
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
  if ((cVar1 != '\0') || (cVar1 = FUN_004ad3f0(1,0x10,&local_10), cVar1 != '\0')) goto LAB_00529078;
  FUN_00528870(local_10,local_c,local_8,local_4,&local_3c,&local_40);
  uVar2 = local_3c * local_40 * 0xc;
  if (0xffff < uVar2) {
    FUN_00529a30(0x32);
    return;
  }
  if (uVar2 < local_34 - 0x10U) {
    if (local_38 < (uint)(local_40 * param_3 * 0x18)) {
      FUN_00529a30(0x32);
      return;
    }
  }
  else if (local_38 < (uint)(local_40 * param_3 * 0xc)) {
    FUN_00529a30(0x32);
    return;
  }
  FUN_004e5780(local_1c);
  if ((local_3c < param_2) || (param_2 == 0)) {
    param_2 = local_3c + 1;
  }
  iVar3 = local_40;
  if (local_3c * local_40 * 0xc < local_34 - 0x10U) {
    iVar5 = local_40;
    iVar4 = param_3;
    if (param_3 != 0) {
      do {
        for (; iVar5 != 0; iVar5 = iVar5 + -1) {
          FUN_004abeb0(0xc,local_1c,((local_3c - 1) + param_2) * iVar3 * 0xc + 0x10);
          iVar3 = local_40;
        }
        iVar4 = iVar4 + -1;
        iVar5 = iVar3;
      } while (iVar4 != 0);
      goto LAB_00529004;
    }
  }
  else {
LAB_00529004:
    iVar5 = param_3;
    if (param_3 != 0) {
      do {
        if (iVar3 != 0) {
          iVar4 = iVar3;
          do {
            FUN_004abeb0(0xc,local_1c,(param_2 - 1) * iVar3 * 0xc + 0x10);
            iVar4 = iVar4 + -1;
            iVar3 = local_40;
          } while (iVar4 != 0);
        }
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  FUN_00528890(&local_10,local_3c + param_3,iVar3);
  cVar1 = FUN_004ac2f0(0x10,&local_10,0);
  if (((cVar1 == '\0') || (cVar1 == '\x01')) || (cVar1 == '\x02')) {
    cVar1 = '\0';
  }
LAB_00529078:
  FUN_00529a30(cVar1);
  return;
}

