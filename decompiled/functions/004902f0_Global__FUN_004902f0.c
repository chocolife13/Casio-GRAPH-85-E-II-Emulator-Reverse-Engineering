// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004902f0
// entry: 004902f0  size: 617


void FUN_004902f0(undefined4 param_1)

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
  undefined1 auStack_188 [52];
  undefined1 auStack_154 [12];
  undefined1 auStack_148 [24];
  undefined1 local_130 [144];
  undefined1 auStack_a0 [84];
  short sStack_4c;
  short sStack_4a;
  short sStack_48;
  short sStack_46;
  short sStack_44;
  short sStack_42;
  undefined1 auStack_34 [52];
  
  FUN_00491a50(local_130);
  FUN_004e5780(auStack_154);
  iVar3 = 1;
  iVar4 = 0;
  do {
    switch(iVar4) {
    case 0:
      FUN_0052f6f0(300,auStack_188);
      uStack_1bc = 0x3a;
      uStack_1bb = 0;
      FUN_004b6e70(auStack_188,&uStack_1bc);
      cVar1 = FUN_00526090(0x28);
      if (cVar1 == '\0') {
        uStack_1bc = 0x33;
        uStack_1bb = 0x36;
        uStack_1ba = 0x35;
        uStack_1b9 = 0;
        FUN_004b6e70(auStack_188,&uStack_1bc);
      }
      else {
        cVar1 = FUN_00526090(0x28);
        if (cVar1 == '\x01') {
          uStack_1bc = 0x33;
          uStack_1bb = 0x36;
          uStack_1ba = 0x30;
          uStack_1b9 = 0;
          FUN_004b6e70(auStack_188,&uStack_1bc);
        }
        else {
          uStack_1bc = 0x3f;
          uStack_1bb = 0x3f;
          uStack_1ba = 0x3f;
          uStack_1b8 = 0;
          FUN_004b6e70(auStack_188,&uStack_1bc);
        }
      }
      break;
    case 1:
      uStack_1bc = 100;
      uStack_1bb = 0x31;
      uStack_1ba = 0x20;
      uStack_1b9 = 0x3d;
      uStack_1b8 = 0;
      FUN_004b6ef0(auStack_188,&uStack_1bc);
      uStack_1bc = 0;
      FUN_00490ac0((int)sStack_48,(int)sStack_4a,(int)sStack_4c,&uStack_1bc);
      FUN_004b6e70(auStack_188,&uStack_1bc);
      break;
    case 2:
      uStack_1bc = 100;
      uStack_1bb = 0x32;
      uStack_1ba = 0x20;
      uStack_1b9 = 0x3d;
      uStack_1b8 = 0;
      FUN_004b6ef0(auStack_188,&uStack_1bc);
      uStack_1bc = 0;
      FUN_00490ac0((int)sStack_42,(int)sStack_44,(int)sStack_46,&uStack_1bc);
      FUN_004b6e70(auStack_188,&uStack_1bc);
      break;
    case 3:
      FUN_004e4120(auStack_a0,auStack_154,auStack_148);
      uStack_1bc = 0x44;
      uStack_1bb = 0x20;
      uStack_1ba = 0x20;
      uStack_1b9 = 0x3d;
      uStack_1b8 = 0;
      FUN_004b6ef0(auStack_188,&uStack_1bc);
      uVar2 = FUN_004b5030(auStack_148,auStack_34);
      FUN_004b6e70(auStack_188,uVar2);
      break;
    default:
      uStack_1bc = 0;
      FUN_004b6ef0(auStack_188,&uStack_1bc);
    }
    FUN_00495150(iVar3,param_1,auStack_188);
    iVar3 = iVar3 + 1;
    iVar4 = iVar4 + 1;
  } while ((ushort)iVar3 < 8);
  return;
}

