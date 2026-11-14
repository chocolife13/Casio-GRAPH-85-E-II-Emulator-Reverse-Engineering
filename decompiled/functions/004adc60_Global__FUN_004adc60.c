// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004adc60
// entry: 004adc60  size: 231


short FUN_004adc60(undefined4 *param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  short sVar3;
  int iVar4;
  char *pcVar5;
  undefined4 *puVar6;
  int iVar7;
  
  sVar3 = 0;
  bVar1 = false;
  if ((param_2 == 0x1000) || (param_2 == 0x800)) {
    bVar1 = true;
  }
  puVar6 = param_1;
  for (iVar2 = 0x128; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  iVar7 = 3;
  iVar2 = DAT_005d67e8 + 0x100;
  do {
    iVar4 = iVar2;
    if (*(short *)(iVar4 + 0xc) != 0) {
      FUN_004b71f0(param_1,iVar4,8);
      param_1 = param_1 + 2;
      sVar3 = sVar3 + 1;
    }
    iVar7 = iVar7 + -1;
    iVar2 = iVar4 + 0x10;
  } while (iVar7 != 0);
  if ((!bVar1) && (*(short *)(iVar4 + 0x2c) != 0)) {
    FUN_004b71f0(param_1,iVar4 + 0x20,8);
    param_1 = param_1 + 2;
    sVar3 = sVar3 + 1;
  }
  if ((!bVar1) && (*(short *)(iVar4 + 700) != 0)) {
    FUN_004b71f0(param_1,iVar4 + 0x2b0,8);
    param_1 = param_1 + 2;
    sVar3 = sVar3 + 1;
  }
  pcVar5 = (char *)(iVar4 + 0x2c0);
  do {
    if ((*pcVar5 != '\0') && (*(short *)(pcVar5 + 0xc) != 0)) {
      FUN_004b71f0(param_1,pcVar5,8);
      param_1 = param_1 + 2;
      sVar3 = sVar3 + 1;
    }
    pcVar5 = pcVar5 + 0x10;
    iVar2 = FUN_004b79b0(pcVar5,s__APLWORK_005abd00,8);
  } while (iVar2 != 0);
  return sVar3;
}

