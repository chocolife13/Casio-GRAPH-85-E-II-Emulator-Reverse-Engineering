// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00498bd0
// entry: 00498bd0  size: 253


int FUN_00498bd0(char *param_1,int param_2,int param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  undefined1 local_44 [8];
  int local_3c;
  undefined1 local_34 [52];
  
  FUN_00523740();
  FUN_004b7b40(param_1,local_34,0x10);
  FUN_0051ea40(local_34,0x10);
  FUN_00496a30(param_3,param_4,local_34,0);
  cVar1 = *param_1;
  iVar7 = 0;
  pcVar5 = param_1;
  for (iVar6 = param_2; (cVar1 != '\0' && (iVar6 != 0)); iVar6 = iVar6 + iVar2) {
    iVar2 = FUN_004b7370(*pcVar5);
    if (iVar2 == 0) {
      iVar2 = -1;
    }
    else {
      iVar2 = -2;
    }
    uVar3 = FUN_004b78f0(pcVar5);
    uVar3 = FUN_004b79f0(uVar3,local_34);
    iVar4 = FUN_004b6bd0(uVar3);
    iVar7 = iVar7 + iVar4;
    pcVar5 = (char *)FUN_004b7840(pcVar5);
    cVar1 = *pcVar5;
  }
  FUN_00413ad0(local_44);
  iVar6 = param_2;
  if ((local_3c != 0) && (0xf < iVar7)) {
    iVar7 = FUN_004b6bd0(local_34);
    iVar7 = 0x10 - iVar7;
    iVar2 = FUN_004b73a0(param_1 + param_2 + -1);
    iVar6 = param_2 + -1;
    if (iVar2 != 0) {
      iVar6 = param_2 + -2;
    }
  }
  FUN_0040aca0(param_3 + iVar7 * 6,param_4);
  return iVar6;
}

