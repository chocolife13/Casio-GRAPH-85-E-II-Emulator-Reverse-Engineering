// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00466480
// entry: 00466480  size: 537


undefined4 FUN_00466480(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined3 uVar5;
  undefined2 uVar6;
  int iVar7;
  int iVar8;
  undefined4 local_2c;
  undefined4 local_28;
  int local_24;
  int local_20;
  int local_1c;
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  FUN_004666a0(&local_1c,&local_20);
  local_24 = 1;
  if (0 < local_1c) {
    iVar1 = param_1 + 0x800;
    do {
      iVar7 = local_24;
      FUN_004666d0(local_18,1);
      FUN_00466750(local_c,1,iVar7);
      uVar2 = FUN_004d5130(local_18,&local_2c,iVar1,*(undefined1 *)(param_1 + 0x8e2));
      uVar3 = FUN_004d5210(local_c,&local_28,iVar1);
      *(undefined2 *)(*(int *)(param_1 + 0x8d8) + 8) = (undefined2)local_2c;
      iVar8 = *(int *)(param_1 + 0x8d8);
      *(undefined2 *)(iVar8 + 10) = (undefined2)local_28;
      *(short *)(*(int *)(param_1 + 0x8d8) + 0xc) = (short)(uVar2 | uVar3);
      if ((uVar2 | uVar3) == 0) {
        uVar5 = (undefined3)((uint)iVar8 >> 8);
        FUN_005146d0(local_2c,local_28,1,param_1,
                     CONCAT31(uVar5,*(undefined1 *)
                                     (*(int *)(param_1 + 0x8dc) + 0x1c + param_2 * 0x20)),
                     CONCAT31(uVar5,*(undefined1 *)(param_1 + 0x8e2)));
        FUN_0050f990(local_2c,local_28,param_1,0x20,*(undefined1 *)(param_1 + 0x8e2));
      }
      if (1 < local_20) {
        iVar8 = 2;
        do {
          iVar4 = FUN_0052f820();
          if (iVar4 != 0) {
            return 1;
          }
          FUN_004666d0(local_18,iVar8);
          FUN_00466750(local_c,iVar8,iVar7);
          uVar2 = FUN_004d5130(local_18,&local_2c,iVar1,*(undefined1 *)(param_1 + 0x8e2));
          uVar3 = FUN_004d5210(local_c,&local_28,iVar1);
          **(undefined2 **)(param_1 + 0x8d8) = (undefined2)local_2c;
          iVar7 = *(int *)(param_1 + 0x8d8);
          *(undefined2 *)(iVar7 + 2) = (undefined2)local_28;
          uVar6 = (undefined2)(uVar2 | uVar3);
          *(undefined2 *)(*(int *)(param_1 + 0x8d8) + 4) = uVar6;
          if ((uVar2 | uVar3) == 0) {
            uVar5 = (undefined3)((uint)iVar7 >> 8);
            FUN_005146d0(local_2c,local_28,1,param_1,
                         CONCAT31(uVar5,*(undefined1 *)
                                         (*(int *)(param_1 + 0x8dc) + 0x1c + param_2 * 0x20)),
                         CONCAT31(uVar5,*(undefined1 *)(param_1 + 0x8e2)));
          }
          FUN_0050fd30(param_1,0,1);
          iVar8 = iVar8 + 1;
          *(undefined2 *)(*(int *)(param_1 + 0x8d8) + 8) = (undefined2)local_2c;
          *(undefined2 *)(*(int *)(param_1 + 0x8d8) + 10) = (undefined2)local_28;
          *(undefined2 *)(*(int *)(param_1 + 0x8d8) + 0xc) = uVar6;
          iVar7 = local_24;
        } while (iVar8 <= local_20);
      }
      local_24 = iVar7 + 1;
    } while (local_24 <= local_1c);
  }
  return 0;
}

