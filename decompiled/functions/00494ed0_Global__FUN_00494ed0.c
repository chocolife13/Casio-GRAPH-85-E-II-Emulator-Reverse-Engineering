// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00494ed0
// entry: 00494ed0  size: 621


void FUN_00494ed0(undefined4 param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined1 uStack_1bc;
  undefined1 uStack_1bb;
  undefined1 uStack_1ba;
  undefined1 uStack_1b9;
  undefined1 uStack_1b8;
  undefined1 auStack_188 [12];
  undefined1 auStack_17c [52];
  undefined1 auStack_148 [24];
  undefined1 auStack_130 [52];
  undefined1 local_fc [12];
  undefined1 auStack_f0 [12];
  undefined1 auStack_e4 [228];
  
  FUN_00491a50(local_fc);
  FUN_004e5780(auStack_188);
  iVar3 = 1;
  iVar4 = 0;
  do {
    switch(iVar4) {
    case 0:
      FUN_0052f6f0(0x126,auStack_17c);
      uStack_1bc = 0x3a;
      uStack_1bb = 0;
      FUN_004b6e70(auStack_17c,&uStack_1bc);
      cVar1 = FUN_00526090(0x28);
      if (cVar1 == '\0') {
        uStack_1bc = 0x33;
        uStack_1bb = 0x36;
        uStack_1ba = 0x35;
        uStack_1b9 = 0;
        FUN_004b6e70(auStack_17c,&uStack_1bc);
      }
      else {
        cVar1 = FUN_00526090(0x28);
        if (cVar1 == '\x01') {
          uStack_1bc = 0x33;
          uStack_1bb = 0x36;
          uStack_1ba = 0x30;
          uStack_1b9 = 0;
          FUN_004b6e70(auStack_17c,&uStack_1bc);
        }
        else {
          uStack_1bc = 0x3f;
          uStack_1bb = 0x3f;
          uStack_1ba = 0x3f;
          uStack_1b9 = 0;
          FUN_004b6e70(auStack_17c,&uStack_1bc);
        }
      }
      break;
    case 1:
      FUN_004e4120(local_fc,auStack_188,auStack_148);
      uStack_1bc = 0x6e;
      uStack_1bb = 0x20;
      uStack_1ba = 0x20;
      uStack_1b9 = 0x3d;
      uStack_1b8 = 0;
      FUN_004b6ef0(auStack_17c,&uStack_1bc);
      uVar2 = FUN_004b5030(auStack_148,auStack_130);
      FUN_004b6e70(auStack_17c,uVar2);
      break;
    case 2:
      FUN_004e4120(auStack_f0,auStack_188,auStack_148);
      uStack_1bc = 0x49;
      uStack_1bb = 0x25;
      uStack_1ba = 0x20;
      uStack_1b9 = 0x3d;
      uStack_1b8 = 0;
      FUN_004b6ef0(auStack_17c,&uStack_1bc);
      uVar2 = FUN_004b5030(auStack_148,auStack_130);
      FUN_004b6e70(auStack_17c,uVar2);
      break;
    case 3:
      FUN_004e4120(auStack_e4,auStack_188,auStack_148);
      uStack_1bc = 0x50;
      uStack_1bb = 0x56;
      uStack_1ba = 0x20;
      uStack_1b9 = 0x3d;
      uStack_1b8 = 0;
      FUN_004b6ef0(auStack_17c,&uStack_1bc);
      uVar2 = FUN_004b5030(auStack_148,auStack_130);
      FUN_004b6e70(auStack_17c,uVar2);
      break;
    default:
      uStack_1bc = 0;
      FUN_004b6ef0(auStack_17c,&uStack_1bc);
    }
    FUN_00495150(iVar3,param_1,auStack_17c);
    iVar3 = iVar3 + 1;
    iVar4 = iVar4 + 1;
  } while ((ushort)iVar3 < 8);
  return;
}

