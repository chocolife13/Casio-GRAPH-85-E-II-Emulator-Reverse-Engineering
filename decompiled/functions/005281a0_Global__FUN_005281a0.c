// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005281a0
// entry: 005281a0  size: 319


void FUN_005281a0(undefined4 param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined1 local_28 [12];
  undefined1 local_1c [12];
  undefined1 local_10 [16];
  
  FUN_0052fbc0(param_1,param_2,local_28);
  cVar2 = FUN_004ad2a0(5,local_28,&param_2);
  if (cVar2 == '@') {
    FUN_004e5780(local_1c);
    uVar1 = param_3;
    FUN_00527410(local_10,param_3,1);
    cVar2 = FUN_004aba60(5,local_28,uVar1 * 0xc + 0x10,0);
    if (cVar2 == '\0') {
      cVar2 = FUN_004ac2f0(0x10,local_10,0);
      if (((cVar2 != '\0') && (cVar2 != '\x01')) && (cVar2 != '\x02')) {
        FUN_004ac5a0(5,local_28);
        FUN_00529a30(cVar2);
        return;
      }
      uVar4 = 1;
      if (uVar1 != 0) {
        iVar3 = 0x10;
        while( true ) {
          cVar2 = FUN_004ac2f0(0xc,local_1c,iVar3);
          if (((cVar2 != '\0') && (cVar2 != '\x01')) && (cVar2 != '\x02')) break;
          uVar4 = uVar4 + 1;
          iVar3 = iVar3 + 0xc;
          if (uVar1 < uVar4) {
            FUN_00529a30(cVar2);
            return;
          }
        }
        FUN_004ac5a0(5,local_28);
        FUN_00529a30(cVar2);
        return;
      }
    }
  }
  else {
    cVar2 = '$';
  }
  FUN_00529a30(cVar2);
  return;
}

