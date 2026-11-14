// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004b0a00
// entry: 004b0a00  size: 177


void FUN_004b0a00(void)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  char *pcVar4;
  undefined4 local_3c;
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  char local_30 [48];
  
  FUN_005237c0(5);
  FUN_00525b40(5);
  FUN_005232d0(3,2);
  FUN_005233e0(s_MCS_Free_Size_005c0984);
  cVar1 = FUN_004ad550(local_34,local_38,&local_3c);
  if (cVar1 != '\0') {
    FUN_0052b240(4);
  }
  FUN_0055c2fe(local_3c,local_30,10);
  uVar3 = 0xffffffff;
  pcVar4 = local_30;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_005232d0(0xd - (~uVar3 - 1),3);
  FUN_005233e0(local_30);
  FUN_005232d0(1,6);
  uVar2 = FUN_0052f6f0(1,local_30);
  FUN_005233e0(uVar2);
  FUN_005237c0(5);
  FUN_004af080();
  return;
}

