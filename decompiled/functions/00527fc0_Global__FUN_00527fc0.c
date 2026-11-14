// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00527fc0
// entry: 00527fc0  size: 471


void FUN_00527fc0(int param_1,int param_2,uint param_3,uint param_4)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined1 local_24 [4];
  undefined1 local_20 [4];
  undefined1 local_1c [12];
  undefined1 local_10 [16];
  
  FUN_0052fbc0(param_2,param_3,local_1c);
  FUN_004ad550(local_20,local_24,&param_3);
  iVar3 = FUN_005273e0(param_1);
  uVar1 = param_4;
  uVar5 = param_4;
  if (iVar3 == 1) {
    uVar5 = param_4 * 2;
  }
  param_4 = uVar5;
  cVar2 = FUN_004ad2a0(5,local_1c,&param_2);
  if (cVar2 == '\0') {
    param_3 = param_3 + param_2;
    if (param_3 < uVar5 * 0xc + 0x10) {
      FUN_00529a30(0x30);
      return;
    }
    FUN_004ac5a0(5,local_1c);
  }
  cVar2 = FUN_004aba60(5,local_1c,uVar5 * 0xc + 0x10,0);
  if (cVar2 == '\0') {
    FUN_00527410(local_10,uVar1,1);
    cVar2 = FUN_004ac2f0(0x10,local_10,0);
    if (((cVar2 == '\0') || (cVar2 == '\x01')) || (cVar2 == '\x02')) {
      uVar4 = 1;
      if (uVar1 != 0) {
        iVar3 = 0x10;
        do {
          cVar2 = FUN_004ac2f0(0xc,param_1,iVar3);
          if (((cVar2 != '\0') && (cVar2 != '\x01')) && (cVar2 != '\x02')) {
            FUN_004ac5a0(5,local_1c);
            uVar5 = param_4;
            break;
          }
          uVar4 = uVar4 + 1;
          iVar3 = iVar3 + 0xc;
          uVar5 = param_4;
        } while (uVar4 <= uVar1);
      }
      if ((uVar1 == uVar5) || (uVar5 = 1, uVar1 == 0)) goto LAB_00528186;
      iVar3 = uVar1 * 0xc + 0x10;
      while( true ) {
        cVar2 = FUN_004ac2f0(0xc,param_1 + 0xc,iVar3);
        if (((cVar2 != '\0') && (cVar2 != '\x01')) && (cVar2 != '\x02')) break;
        uVar5 = uVar5 + 1;
        iVar3 = iVar3 + 0xc;
        if (uVar1 < uVar5) {
          FUN_00529a30(cVar2);
          return;
        }
      }
    }
    FUN_004ac5a0(5,local_1c);
  }
LAB_00528186:
  FUN_00529a30(cVar2);
  return;
}

