// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004865d0
// entry: 004865d0  size: 122


void FUN_004865d0(int param_1,byte param_2)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  undefined1 local_4 [4];
  
  iVar1 = param_1;
  iVar3 = FUN_004869c0(param_1);
  bVar2 = param_2;
  if (iVar3 != 0) {
    iVar7 = 1;
    do {
      iVar4 = FUN_00486330(iVar7,1,local_4,iVar3);
      if (((iVar4 == 1) && (iVar4 = FUN_004871e0(iVar1,iVar7,&param_1,iVar3), iVar4 != 0)) &&
         (iVar6 = 1, 0 < param_1)) {
        pbVar5 = (byte *)(iVar4 + 6);
        do {
          iVar6 = iVar6 + 1;
          *pbVar5 = *pbVar5 & bVar2;
          pbVar5 = pbVar5 + 4;
        } while (iVar6 <= param_1);
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < 0x1b);
  }
  return;
}

