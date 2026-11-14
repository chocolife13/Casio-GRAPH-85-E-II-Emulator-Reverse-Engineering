// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005106b0
// entry: 005106b0  size: 354


int FUN_005106b0(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  
  iVar5 = 0;
  if (*(char *)(*(int *)(param_1 + 0x8dc) + 0x1c) != '\0') {
    iVar4 = 0;
    do {
      if ((*(byte *)(param_1 + 0x8e0) & 0xc0) == 0x40) {
        FUN_00510380(param_1,iVar5);
        FUN_0040ae30();
        thunk_FUN_0040add0();
      }
      uVar2 = *(uint *)(iVar4 + 0x18 + *(int *)(param_1 + 0x8dc));
      if ((uVar2 & 0x800) == 0) {
        iVar1 = 1;
        do {
          if ((uVar2 & 0x100) == 0) {
            if ((uVar2 & 0x400) != 0) {
              iVar3 = FUN_00511e30(param_1,iVar5,iVar1);
              goto LAB_00510792;
            }
            if ((uVar2 & 0x200) != 0) {
              iVar3 = FUN_005126e0(param_1,iVar5,iVar1);
              goto LAB_00510792;
            }
          }
          else {
            iVar3 = FUN_00512360(param_1,iVar5,iVar1);
LAB_00510792:
            if (iVar3 != 0) {
              return iVar3;
            }
          }
          uVar2 = *(uint *)(iVar4 + 0x18 + *(int *)(param_1 + 0x8dc));
          if (((uVar2 & 0xa000) == 0) ||
             (iVar1 == *(int *)(iVar4 + *(int *)(param_1 + 0x8dc) + 0x10))) goto LAB_00510710;
          iVar1 = iVar1 + 1;
        } while( true );
      }
      iVar1 = FUN_00511b30(param_1,iVar5);
      if (iVar1 != 0) {
        return iVar1;
      }
LAB_00510710:
      if ((*(byte *)(param_1 + 0x8e2) & 4) != 0) {
        uVar2 = *(uint *)(iVar4 + 0x18 + *(int *)(param_1 + 0x8dc));
        if ((uVar2 & 0x100) == 0) {
          if ((uVar2 & 0x200) == 0) goto LAB_005107f5;
          FUN_00510880(param_1 + 0x800,param_1 + 0x83c,0x2000,param_1);
          uVar6 = 0x2000;
        }
        else {
          FUN_00510880(param_1 + 0x800,param_1 + 0x83c,0x1000,param_1);
          uVar6 = 0x1000;
        }
        FUN_00510880(param_1 + 0x80c,param_1 + 0x848,uVar6,param_1);
      }
LAB_005107f5:
      iVar5 = iVar5 + 1;
      iVar1 = iVar4 + 0x3c;
      iVar4 = iVar4 + 0x20;
    } while (*(char *)(iVar1 + *(int *)(param_1 + 0x8dc)) != '\0');
  }
  return 0;
}

