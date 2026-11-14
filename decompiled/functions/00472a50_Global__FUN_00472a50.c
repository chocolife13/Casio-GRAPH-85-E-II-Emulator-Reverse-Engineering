// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00472a50
// entry: 00472a50  size: 91


void FUN_00472a50(uint param_1,int *param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  uint uVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  uint local_4;
  
  FUN_0051dad0(param_1,&param_1,&local_4);
  iVar5 = param_5;
  uVar4 = param_4;
  uVar3 = param_3;
  piVar2 = param_2;
  do {
    do {
      FUN_0051e930(piVar2,uVar3,uVar4,iVar5);
      uVar1 = *(uint *)(*piVar2 * 0x20 + 0x18 + *(int *)(iVar5 + 0x8dc));
    } while ((uVar1 & param_1) == 0);
  } while ((local_4 & uVar1) != 0);
  return;
}

