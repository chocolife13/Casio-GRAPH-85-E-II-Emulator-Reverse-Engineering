// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00490720
// entry: 00490720  size: 216


undefined4 FUN_00490720(undefined4 *param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  undefined1 local_70 [12];
  undefined1 local_64 [48];
  char local_34 [52];
  
  FUN_004e5070(*param_1,local_70);
  FUN_005237c0(5);
  FUN_00525b40(4);
  FUN_005232d0(1,2);
  uVar2 = FUN_0052f6f0(0x2ae,local_64);
  FUN_005233e0(uVar2);
  FUN_005232d0(1,3);
  uVar2 = FUN_0052f6f0(0x2af,local_64);
  FUN_005233e0(uVar2);
  uVar4 = 0xffffffff;
  pcVar6 = s_M_1_12___005bf98c;
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
  pcVar7 = local_34;
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
  uVar2 = FUN_004909c0(*(undefined2 *)(param_2 + 0xc),*(undefined4 *)(param_2 + 4),5,local_70,
                       local_34,1,0xc);
  uVar3 = FUN_004e50a0(local_70);
  *param_1 = uVar3;
  FUN_00523800(5);
  return uVar2;
}

