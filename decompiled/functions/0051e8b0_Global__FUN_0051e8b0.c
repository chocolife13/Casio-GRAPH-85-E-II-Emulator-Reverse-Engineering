// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0051e8b0
// entry: 0051e8b0  size: 128


undefined4 FUN_0051e8b0(uint param_1,int *param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  uint uVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  uint local_4;
  
  if ((param_1 != 0x12e) && (param_1 != 0x15a)) {
    FUN_0051dad0(param_1,&param_1,&local_4);
    iVar5 = param_5;
    uVar4 = param_4;
    uVar3 = param_3;
    piVar2 = param_2;
    do {
      do {
        uVar6 = FUN_0051e930(piVar2,uVar3,uVar4,iVar5);
        iVar7 = *(int *)(iVar5 + 0x8dc) + *piVar2 * 0x20;
        uVar1 = *(uint *)(iVar7 + 0x18);
      } while ((param_1 & uVar1) == 0);
    } while (((local_4 & uVar1) != 0) ||
            (((uVar1 & 0x4100) == 0x4100 && ((*(byte *)(iVar7 + 0xd) & 4) != 0))));
    return uVar6;
  }
  return 0;
}

