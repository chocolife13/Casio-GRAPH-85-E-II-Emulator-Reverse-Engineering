// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0051f5e0
// entry: 0051f5e0  size: 454


void FUN_0051f5e0(int param_1,int param_2)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  undefined *puVar5;
  undefined1 local_5c [12];
  undefined1 local_50 [12];
  undefined1 local_44 [68];
  
  FUN_0051eb90(param_1);
  if (*(char *)(param_1 + 0x27) != '\0') {
    pbVar1 = (byte *)(param_2 + 0xa8);
    iVar3 = FUN_004e4020(pbVar1);
    if (iVar3 == 0) {
      FUN_004b6ef0(local_44,&DAT_005be9d8);
      if ((*pbVar1 == 0) && (*(char *)(param_2 + 0xa9) == '\0')) {
        iVar3 = FUN_004b6ca0(local_44);
        uVar4 = FUN_004b1890(param_2 + 0xb4,local_44 + iVar3);
        FUN_0051f5a0(uVar4);
      }
      else {
        uVar4 = FUN_004e57a0(local_50);
        uVar4 = FUN_004e7620(pbVar1,local_5c,uVar4);
        iVar3 = FUN_004e71d0(uVar4);
        if (iVar3 == 0) {
          iVar3 = FUN_004b6ca0(local_44);
          uVar4 = FUN_004b1890(pbVar1,local_44 + iVar3);
          FUN_0051f5a0(uVar4);
        }
        else if (((*pbVar1 & 0xf0) == 0x50) || ((*pbVar1 & 0xf0) == 0x60)) {
          FUN_004b6e70(local_44,&DAT_005c3314);
        }
        FUN_004b6e70(local_44,&DAT_005be980);
        if ((*(byte *)(param_2 + 0xb4) != 0) || (*(char *)(param_2 + 0xb5) != '\0')) {
          bVar2 = *(byte *)(param_2 + 0xb4) & 0xf0;
          if ((bVar2 == 0x50) || (bVar2 == 0x60)) {
            puVar5 = &DAT_005a9190;
          }
          else {
            puVar5 = &DAT_005a9194;
          }
          FUN_004b6e70(local_44,puVar5);
          iVar3 = FUN_004b6ca0(local_44);
          uVar4 = FUN_004e7620(param_2 + 0xb4,local_5c,local_44 + iVar3);
          uVar4 = FUN_004b1890(uVar4);
          FUN_0051f5a0(uVar4);
        }
      }
    }
    else {
      FUN_004b6ef0(local_44,&DAT_005bf3d0);
      iVar3 = FUN_004b6ca0(local_44);
      uVar4 = FUN_004b1890(param_2 + 0xb4,local_44 + iVar3);
      FUN_0051f5a0(uVar4);
    }
    FUN_0051ea40(local_44,0x20);
    FUN_00523a20(1,7,local_44,0x20);
  }
  return;
}

