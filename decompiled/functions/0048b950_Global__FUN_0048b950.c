// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0048b950
// entry: 0048b950  size: 358


void FUN_0048b950(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_1c4 [8];
  undefined1 uStack_1bc;
  undefined1 uStack_1bb;
  undefined1 uStack_1ba;
  undefined1 uStack_1b9;
  undefined1 uStack_1b8;
  undefined1 uStack_1b7;
  undefined1 uStack_1b6;
  undefined1 uStack_1b5;
  undefined1 uStack_1b4;
  undefined1 uStack_1b3;
  undefined1 auStack_188 [12];
  undefined1 auStack_17c [52];
  undefined1 auStack_148 [24];
  undefined1 auStack_130 [52];
  undefined1 local_fc [12];
  undefined1 auStack_f0 [228];
  short sStack_c;
  
  FUN_00491a50(local_fc);
  FUN_004e5780(auStack_188);
  iVar2 = 1;
  iVar3 = 1;
  do {
    if (iVar3 == 1) {
      FUN_0052f6f0(0x128,auStack_17c);
    }
    else if (iVar3 == 2) {
      uStack_1bc = 0x49;
      uStack_1bb = 0x25;
      uStack_1ba = 0x20;
      uStack_1b9 = 0x3d;
      uStack_1b8 = 0;
      FUN_004b6ef0(auStack_17c,&uStack_1bc);
      FUN_004e4120(auStack_f0,auStack_188,auStack_148);
      uVar1 = FUN_004b5030(auStack_148,auStack_130);
      FUN_004b6e70(auStack_17c,uVar1);
    }
    else if (iVar3 == 3) {
      uStack_1bc = 0x43;
      uStack_1bb = 0x73;
      uStack_1ba = 0x68;
      uStack_1b9 = 0x3d;
      uStack_1b8 = 0x4c;
      uStack_1b7 = 0x69;
      uStack_1b6 = 0x73;
      uStack_1b5 = 0x74;
      uStack_1b4 = 0x20;
      uStack_1b3 = 0;
      FUN_004b6ef0(auStack_17c,&uStack_1bc);
      FUN_0055c2fe((int)sStack_c,auStack_1c4,10);
      FUN_004b6e70(auStack_17c,auStack_1c4);
    }
    else {
      uStack_1bc = 0;
      FUN_004b6ef0(auStack_17c,&uStack_1bc);
    }
    FUN_00495150(iVar2,param_1,auStack_17c);
    iVar2 = iVar2 + 1;
    iVar3 = iVar3 + 1;
  } while ((ushort)iVar2 < 8);
  return;
}

