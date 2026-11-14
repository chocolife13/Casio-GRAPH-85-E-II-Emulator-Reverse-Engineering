// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0043ad90
// entry: 0043ad90  size: 477


undefined4 FUN_0043ad90(undefined4 param_1,int param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined1 local_e;
  undefined1 local_d;
  undefined4 local_c;
  char local_8;
  byte bStack_7;
  
  local_c = 0;
  local_e = 0x20;
  local_d = 0;
  if (*(int *)(param_2 + 0x30) != 1) {
    if (*(int *)(param_2 + 0x2c) == 1) {
      FUN_0043aa70(param_2);
      FUN_0052f880();
      return local_c;
    }
    uVar1 = FUN_004b7d80();
    if (uVar1 != 0) {
      FUN_0052f840();
      thunk_FUN_0040add0();
      if (0xff < uVar1) {
        uVar1 = 0x100;
      }
      puVar2 = (undefined4 *)FUN_00407130(uVar1 + 0x100 & 0xffffff00);
      if (puVar2 == (undefined4 *)0x0) {
        FUN_0052b240(4);
        local_c = 0xffffffff;
        FUN_0052f880();
        return local_c;
      }
      puVar5 = puVar2;
      for (uVar4 = uVar1 + 1 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar5 = 0;
        puVar5 = puVar5 + 1;
      }
      for (uVar4 = uVar1 + 1 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined1 *)puVar5 = 0;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
      }
      iVar3 = FUN_004b8050();
      if (uVar1 != 0) {
        puVar5 = puVar2;
        uVar4 = uVar1;
        do {
          *(undefined1 *)puVar5 = *(undefined1 *)((iVar3 - (int)puVar2) + (int)puVar5);
          puVar5 = (undefined4 *)((int)puVar5 + 1);
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      *(undefined4 *)(param_2 + 0x40) = 1;
      uVar4 = 0;
      if (uVar1 != 0) {
        do {
          iVar3 = FUN_004b7370(*(undefined1 *)(uVar4 + (int)puVar2));
          if (iVar3 == 0) {
            local_8 = ' ';
            if (*(char *)(uVar4 + (int)puVar2) != '\0') {
              local_8 = *(char *)(uVar4 + (int)puVar2);
            }
            bStack_7 = 0;
          }
          else {
            local_8 = *(char *)(uVar4 + 1 + (int)puVar2);
            bStack_7 = *(byte *)(uVar4 + (int)puVar2);
            uVar4 = uVar4 + 1;
          }
          FUN_00438c70((uint)bStack_7 << 8 | CONCAT11(bStack_7,local_8) & 0xff,param_2);
          iVar3 = FUN_0052f820();
          if (iVar3 == 1) {
            FUN_005232d0(0x15,1);
            FUN_005233e0(&local_e);
            FUN_0052b240(1);
            break;
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < uVar1);
      }
      *(undefined4 *)(param_2 + 0x40) = 0;
      FUN_00523740();
      uVar1 = 0;
      iVar3 = param_2 + 0x60;
      do {
        uVar1 = uVar1 + 1;
        FUN_005232d0(1,uVar1);
        FUN_00523470(iVar3,0x15);
        iVar3 = iVar3 + 0x2a;
      } while (uVar1 < 7);
      FUN_005232d0(*(undefined4 *)(param_2 + 0x18),*(undefined4 *)(param_2 + 0x1c));
      FUN_00527030();
      FUN_00407170(puVar2);
    }
  }
  FUN_0052f880();
  return local_c;
}

