// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004f1d80
// entry: 004f1d80  size: 418


undefined4
FUN_004f1d80(undefined4 *param_1,byte *param_2,undefined4 param_3,int param_4,undefined4 *param_5)

{
  bool bVar1;
  undefined4 *puVar2;
  byte bVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  char *pcVar7;
  uint uVar8;
  uint uVar9;
  undefined4 *puVar10;
  undefined4 local_c [2];
  undefined1 local_4;
  
  puVar2 = param_1;
  bVar3 = FUN_0052f6b0(0x47);
  if (10 < bVar3) {
    uVar5 = FUN_004f58f0(6,param_3);
    return uVar5;
  }
  FUN_004fe330(param_2,param_1);
  if (*param_2 == 0x22) {
    FUN_004fe330(param_2,param_1);
    bVar3 = 0;
    bVar1 = false;
    iVar6 = FUN_004f9b40(param_2);
    while (iVar6 == 0) {
      if ((bVar1) && (bVar3 < 9)) {
        *(char *)((int)local_c + (uint)bVar3) = (char)param_1;
        bVar3 = bVar3 + 1;
      }
      param_1 = (undefined4 *)(uint)*param_2;
      bVar1 = true;
      FUN_004fe330(param_2,puVar2);
      iVar6 = FUN_004f9b40(param_2);
    }
    if (((char)param_1 == '\"') && (bVar3 < 9)) {
      uVar8 = 9 - bVar3;
      puVar10 = (undefined4 *)((int)local_c + (uint)bVar3);
      for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *puVar10 = 0;
        puVar10 = puVar10 + 1;
      }
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined1 *)puVar10 = 0;
        puVar10 = (undefined4 *)((int)puVar10 + 1);
      }
      if (*param_2 == 0) {
        *param_2 = 0x22;
      }
      else {
        FUN_004fe3e0(param_2,puVar2);
      }
      param_5[1] = *puVar2;
      pcVar7 = (char *)FUN_004f5920(local_c);
      if (pcVar7 == (char *)0x0) {
        uVar5 = FUN_004f58f0(5,param_3);
        return uVar5;
      }
      if (*pcVar7 == '\0') {
        *(undefined4 *)(param_4 + 0x138) = 1;
      }
      *puVar2 = pcVar7;
      cVar4 = FUN_0052f6b0(0x47);
      FUN_0052f6c0(0x47,cVar4 + '\x01');
      bVar3 = FUN_0052f6b0(0x47);
      if (1 < bVar3) {
        param_5 = param_5 + 0xf;
      }
      *(undefined1 *)((int)param_5 + 0x11) = 0;
      *(undefined1 *)(param_5 + 5) = 0;
      param_5[2] = local_c[0];
      param_5[3] = local_c[1];
      *(undefined1 *)(param_5 + 4) = local_4;
      *param_5 = *puVar2;
      return 1;
    }
  }
  uVar5 = FUN_004f58f0(2,param_3);
  return uVar5;
}

