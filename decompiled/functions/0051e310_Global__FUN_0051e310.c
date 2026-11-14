// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0051e310
// entry: 0051e310  size: 215


int FUN_0051e310(undefined4 param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int local_8;
  undefined1 local_4 [4];
  
  iVar3 = 0;
  FUN_00538710();
  FUN_0051e2a0(*(undefined4 *)(param_2 + 0x8dc));
  iVar2 = FUN_0051e1e0(param_1,&local_8,local_4,param_2);
  if (iVar2 == 0) {
    FUN_00414db0();
    do {
      FUN_0050acb0(param_2);
      uVar1 = *(uint *)(local_8 * 0x20 + 0x18 + *(int *)(param_2 + 0x8dc));
      if ((uVar1 & 0x800) == 0) {
        if ((uVar1 & 0x100) == 0) {
          if ((uVar1 & 0x400) == 0) {
            if ((uVar1 & 0x200) != 0) {
              iVar3 = FUN_005219e0(param_1,param_2,&local_8,local_4);
            }
          }
          else {
            iVar3 = FUN_0051ffc0(param_1,param_2,&local_8,local_4);
          }
        }
        else {
          iVar3 = FUN_00520e80(param_1,param_2,&local_8,local_4);
        }
      }
      else {
        iVar3 = FUN_0051f890(param_1,param_2,&local_8);
      }
    } while (iVar3 == 0);
    FUN_00414db0();
    return iVar3;
  }
  return -6;
}

