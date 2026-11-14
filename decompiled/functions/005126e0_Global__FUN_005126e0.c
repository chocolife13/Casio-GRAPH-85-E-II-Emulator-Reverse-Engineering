// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005126e0
// entry: 005126e0  size: 560


int FUN_005126e0(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined2 extraout_var;
  undefined3 uVar5;
  int iVar6;
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  iVar1 = param_1;
  iVar6 = param_1 + 0x800;
  FUN_004d4e70(local_18,0x3f,iVar6);
  iVar2 = param_2;
  iVar3 = FUN_0050f060(local_18,local_c,iVar1,param_2,param_3);
  if (iVar3 == 0) {
    uVar4 = FUN_004d5130(local_c,&param_1,iVar6,*(undefined1 *)(iVar1 + 0x8e2));
    if ((*(byte *)(iVar1 + 0x8e2) & 4) == 0) {
      *(undefined2 *)(*(int *)(iVar1 + 0x8d8) + 8) = (undefined2)param_1;
      *(undefined2 *)(*(int *)(iVar1 + 0x8d8) + 10) = 0x3f;
      iVar6 = *(int *)(iVar1 + 0x8d8);
      *(short *)(iVar6 + 0xc) = (short)uVar4;
      DAT_005d6800 = 0;
      if ((*(byte *)(iVar1 + 0x8e1) & 1) == 0) {
        if (uVar4 == 0) {
          uVar5 = (undefined3)((uint)iVar6 >> 8);
          FUN_0050f940(param_1,0x3f,param_1,0x3f,iVar1,
                       CONCAT31(uVar5,*(undefined1 *)(*(int *)(iVar1 + 0x8dc) + 0x1c + iVar2 * 0x20)
                               ),CONCAT31(uVar5,*(undefined1 *)(iVar1 + 0x8e2)));
        }
      }
      else if (uVar4 == 0) {
        FUN_0050f990(param_1,0x3f,iVar1,
                     *(undefined1 *)(*(int *)(iVar1 + 0x8dc) + 0x1c + iVar2 * 0x20),
                     *(undefined1 *)(iVar1 + 0x8e2));
      }
    }
    else {
      FUN_00510880(local_c,local_18,uVar4 | 0x1000,iVar1);
    }
    iVar6 = 0x3e;
    while( true ) {
      FUN_004d4e70(local_18,iVar6,iVar1 + 0x800);
      iVar3 = FUN_0050f2c0(local_18,local_c,iVar1,iVar2,param_3);
      if (iVar3 != 0) break;
      uVar4 = FUN_004d5130(local_c,&param_1,iVar1 + 0x800,*(undefined1 *)(iVar1 + 0x8e2));
      if ((*(byte *)(iVar1 + 0x8e2) & 4) == 0) {
        **(undefined2 **)(iVar1 + 0x8d8) = (undefined2)param_1;
        *(short *)(*(int *)(iVar1 + 0x8d8) + 2) = (short)iVar6;
        *(short *)(*(int *)(iVar1 + 0x8d8) + 4) = (short)uVar4;
        if ((*(byte *)(iVar1 + 0x8e1) & 1) == 0) {
          FUN_0050ff00(iVar1,iVar2,1);
        }
        else if (uVar4 == 0) {
          uVar5 = (undefined3)(CONCAT22(extraout_var,(undefined2)param_1) >> 8);
          FUN_0050f990(param_1,iVar6,iVar1,
                       CONCAT31(uVar5,*(undefined1 *)(*(int *)(iVar1 + 0x8dc) + 0x1c + iVar2 * 0x20)
                               ),CONCAT31(uVar5,*(undefined1 *)(iVar1 + 0x8e2)));
        }
        *(undefined2 *)(*(int *)(iVar1 + 0x8d8) + 8) = (undefined2)param_1;
        *(short *)(*(int *)(iVar1 + 0x8d8) + 10) = (short)iVar6;
        *(short *)(*(int *)(iVar1 + 0x8d8) + 0xc) = (short)uVar4;
      }
      else {
        FUN_00510880(local_c,local_18,uVar4 | 0x1000,iVar1);
      }
      if (iVar6 == 1) {
        return 0;
      }
      iVar6 = iVar6 + -1;
    }
  }
  return iVar3;
}

