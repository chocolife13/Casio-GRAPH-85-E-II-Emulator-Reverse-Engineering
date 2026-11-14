// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004abeb0
// entry: 004abeb0  size: 310


undefined4 FUN_004abeb0(uint param_1,undefined4 *param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 *puVar5;
  int local_c;
  uint local_8;
  undefined1 local_4 [4];
  
  uVar4 = param_1;
  if (DAT_005d5b70 == '\0') {
    return 0x55;
  }
  if ((DAT_005d5b70 == '\x01') || (DAT_005d5b70 == '\x04')) {
    FUN_004105d0(&DAT_005d5870,&DAT_005d5760,&param_1,local_4,&local_c,&local_8);
    iVar1 = FUN_004b7550(local_c + 10);
    if (uVar4 <= local_8 - (iVar1 + 0xb)) {
      for (uVar2 = iVar1 + 10; param_3 <= uVar2; uVar2 = uVar2 - 1) {
        *(undefined1 *)(uVar2 + local_c + uVar4) = *(undefined1 *)(uVar2 + local_c);
      }
      puVar5 = (undefined4 *)(param_3 + local_c);
      for (uVar2 = uVar4 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar5 = *param_2;
        param_2 = param_2 + 1;
        puVar5 = puVar5 + 1;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined1 *)puVar5 = *(undefined1 *)param_2;
        param_2 = (undefined4 *)((int)param_2 + 1);
        puVar5 = (undefined4 *)((int)puVar5 + 1);
      }
      return 0;
    }
  }
  uVar2 = param_3;
  DAT_005d6048 = FUN_00411350(&DAT_005d5870,&DAT_005d5760,param_3,uVar4 + 3 & 0xfffffffc,param_2);
  if (DAT_005d6048 == 0) {
    if ((uVar4 & 3) != 0) {
      FUN_004105d0(&DAT_005d5870,&DAT_005d5760,&param_1,local_4,&local_c,&local_8);
      uVar2 = uVar2 + uVar4;
      if (uVar2 < local_8) {
        do {
          uVar2 = uVar2 + 1;
          *(undefined1 *)(local_c + -1 + uVar2) =
               *(undefined1 *)((-uVar4 & 3) + local_c + -1 + uVar2);
        } while (uVar2 < local_8);
      }
    }
    return 0;
  }
  uVar3 = FUN_004ab770(DAT_005d6048);
  return uVar3;
}

