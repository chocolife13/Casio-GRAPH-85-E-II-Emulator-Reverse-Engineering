// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00406e00
// entry: 00406e00  size: 188


undefined4 FUN_00406e00(char *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  undefined1 local_1fc [4];
  undefined **local_1f8 [126];
  
  FUN_005603ea(1,&DAT_005cd010,param_1,0x1004,s_fx_9860G_files____g1e____g1e___005a8db8,0);
  local_1f8[0] = &PTR_LAB_0057cc1c;
  iVar2 = FUN_0056054c();
  if (iVar2 != 1) {
    FUN_00567398();
    CDialog::~CDialog((CDialog *)local_1f8);
    return 0;
  }
  puVar3 = (undefined4 *)FUN_00560627(local_1fc);
  uVar4 = 0xffffffff;
  pcVar6 = (char *)*puVar3;
  do {
    pcVar7 = pcVar6;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar7 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar7;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  pcVar6 = pcVar7 + -uVar4;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)param_1 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    param_1 = param_1 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *param_1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    param_1 = param_1 + 1;
  }
  FUN_00567398();
  FUN_00567398();
  CDialog::~CDialog((CDialog *)local_1f8);
  return 1;
}

