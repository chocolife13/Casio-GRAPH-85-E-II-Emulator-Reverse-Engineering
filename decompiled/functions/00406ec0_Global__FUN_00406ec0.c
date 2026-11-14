// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00406ec0
// entry: 00406ec0  size: 272


undefined4 FUN_00406ec0(char *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  undefined1 local_500 [4];
  undefined1 local_4fc [4];
  undefined **local_4f8 [126];
  undefined1 local_300 [256];
  undefined1 local_200 [256];
  undefined1 local_100 [256];
  
  FUN_005603ea(0,&DAT_005a8dd8,param_1,4,s_fx_9860G_files____g1e____g1e___005a8db8,0);
  local_4f8[0] = &PTR_LAB_0057cc1c;
  iVar2 = FUN_0056054c();
  if (iVar2 != 1) {
    FUN_00567398();
    CDialog::~CDialog((CDialog *)local_4f8);
    return 0;
  }
  puVar3 = (undefined4 *)FUN_00560627(local_4fc);
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
  pcVar7 = param_1;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar7 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar7 = pcVar7 + 1;
  }
  FUN_00567398();
  FUN_0055393d(param_1,local_500,local_200,local_300,local_100);
  FUN_00560182(local_300);
  FUN_00553abf(param_1,local_500,local_200,local_300,&DAT_005cd010);
  FUN_00567398();
  CDialog::~CDialog((CDialog *)local_4f8);
  return 1;
}

