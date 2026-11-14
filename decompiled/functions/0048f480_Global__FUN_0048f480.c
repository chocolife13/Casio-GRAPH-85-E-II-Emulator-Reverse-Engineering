// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0048f480
// entry: 0048f480  size: 449


void FUN_0048f480(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined1 uStack_1bc;
  undefined1 uStack_1bb;
  undefined1 uStack_1ba;
  undefined1 uStack_1b9;
  undefined1 uStack_1b8;
  undefined1 auStack_188 [12];
  undefined1 auStack_17c [24];
  undefined1 auStack_164 [52];
  undefined1 auStack_130 [52];
  undefined1 local_fc [108];
  undefined1 auStack_90 [12];
  undefined1 auStack_84 [12];
  undefined1 auStack_78 [120];
  
  FUN_00491a50(local_fc);
  FUN_004e5780(auStack_188);
  iVar2 = 1;
  iVar3 = 0;
  do {
    switch(iVar3) {
    case 0:
      FUN_0052f6f0(299,auStack_164);
      break;
    case 1:
      uStack_1bc = 0x43;
      uStack_1bb = 0x73;
      uStack_1ba = 0x74;
      uStack_1b9 = 0x3d;
      uStack_1b8 = 0;
      FUN_004e4120(auStack_90,auStack_188,auStack_17c);
      FUN_004b6ef0(auStack_164,&uStack_1bc);
      uVar1 = FUN_004b5030(auStack_17c,auStack_130);
      FUN_004b6e70(auStack_164,uVar1);
      break;
    case 2:
      uStack_1bc = 0x53;
      uStack_1bb = 0x65;
      uStack_1ba = 0x6c;
      uStack_1b9 = 0x3d;
      uStack_1b8 = 0;
      FUN_004e4120(auStack_84,auStack_188,auStack_17c);
      FUN_004b6ef0(auStack_164,&uStack_1bc);
      uVar1 = FUN_004b5030(auStack_17c,auStack_130);
      FUN_004b6e70(auStack_164,uVar1);
      break;
    case 3:
      uStack_1bc = 0x4d;
      uStack_1bb = 0x72;
      uStack_1ba = 0x67;
      uStack_1b9 = 0x3d;
      uStack_1b8 = 0;
      FUN_004e4120(auStack_78,auStack_188,auStack_17c);
      FUN_004b6ef0(auStack_164,&uStack_1bc);
      uVar1 = FUN_004b5030(auStack_17c,auStack_130);
      FUN_004b6e70(auStack_164,uVar1);
      break;
    default:
      uStack_1bc = 0;
      FUN_004b6ef0(auStack_164,&uStack_1bc);
    }
    FUN_00495150(iVar2,param_1,auStack_164);
    iVar2 = iVar2 + 1;
    iVar3 = iVar3 + 1;
  } while ((ushort)iVar2 < 8);
  return;
}

