// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0044a770
// entry: 0044a770  size: 387


int FUN_0044a770(undefined4 param_1,undefined4 *param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  undefined1 uVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  int local_2c;
  undefined1 local_24 [36];
  
  local_2c = 0;
  param_2[0x8f] = 0;
  iVar2 = FUN_004b7370(*(undefined1 *)(param_2[0x7f] + -1 + param_2[0x80]));
  if (iVar2 == 0) {
    iVar2 = param_2[0x80];
    uVar6 = 0;
    cVar4 = *(char *)(param_2[0x7f] + -1 + iVar2);
    if (cVar4 == '\0') {
      return 1;
    }
    iVar8 = 1;
  }
  else {
    iVar2 = param_2[0x80];
    iVar8 = 2;
    uVar6 = *(undefined1 *)(param_2[0x7f] + -1 + iVar2);
    cVar4 = *(char *)(param_2[0x7f] + iVar2);
  }
  param_2[0x80] = iVar2 + iVar8;
  sVar1 = CONCAT11(uVar6,cVar4);
  FUN_004b79f0(sVar1,local_24);
  iVar3 = FUN_004b6bd0(local_24);
  iVar2 = 0;
  iVar8 = iVar3;
  do {
    if (iVar8 == 0) {
      return iVar2 + local_2c;
    }
    uVar7 = param_2[0x82] + 1;
    param_2[0x82] = uVar7;
    if (uVar7 < 0x16) {
      if (sVar1 == 0xd) goto LAB_0044a85c;
      if (sVar1 == 0xc) goto LAB_0044a850;
    }
    else {
LAB_0044a850:
      if ((sVar1 == 0xd) || (sVar1 == 0xc)) {
LAB_0044a85c:
        local_2c = 0x16 - uVar7;
      }
      param_2[0x82] = 1;
      param_2[0x83] = param_2[0x83] + 1;
    }
    if (6 < (uint)param_2[0x83]) {
      param_2[0x83] = 6;
      param_2[0x8f] = 1;
      param_2[0x7e] = param_2[0x7e] + 1;
      if (param_2[0x85] == 1) {
        param_2[0x88] = param_2[0x88] + -1;
      }
      iVar2 = 5;
      puVar10 = param_2;
      do {
        iVar2 = iVar2 + -1;
        puVar9 = (undefined4 *)((int)puVar10 + 0x2a);
        puVar11 = puVar10;
        for (iVar5 = 10; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar11 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar11 = puVar11 + 1;
        }
        *(undefined2 *)puVar11 = *(undefined2 *)puVar9;
        puVar10 = (undefined4 *)((int)puVar10 + 0x2a);
      } while (iVar2 != 0);
    }
    iVar8 = iVar8 + -1;
    iVar2 = iVar3;
  } while( true );
}

