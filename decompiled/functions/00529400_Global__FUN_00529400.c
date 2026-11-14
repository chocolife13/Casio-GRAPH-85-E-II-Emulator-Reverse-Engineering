// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00529400
// entry: 00529400  size: 344


undefined4 FUN_00529400(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined1 local_28 [12];
  undefined1 local_1c [12];
  undefined1 local_10 [16];
  
  iVar1 = param_3;
  iVar6 = param_2;
  uVar4 = param_2 * param_3;
  if (0xfff1 < uVar4 * 0xc + 0x19) {
    return 0x30;
  }
  FUN_0052f8a0(param_1,local_28);
  cVar2 = FUN_004ad2a0(6,local_28,&param_2);
  if (cVar2 == '@') {
    FUN_004e5780(local_1c);
    FUN_00528890(local_10,iVar6,iVar1);
    cVar2 = FUN_004aba60(6,local_28,uVar4 * 0xc + 0x10,0);
    if (cVar2 == '\0') {
      cVar2 = FUN_004ac2f0(0x10,local_10,0);
      if (((cVar2 != '\0') && (cVar2 != '\x01')) && (cVar2 != '\x02')) {
        FUN_004ac5a0(6,local_28);
        uVar3 = FUN_00529a30(cVar2);
        return uVar3;
      }
      uVar5 = 1;
      if (uVar4 != 0) {
        iVar6 = 0x10;
        while( true ) {
          cVar2 = FUN_004ac2f0(0xc,local_1c,iVar6);
          if (((cVar2 != '\0') && (cVar2 != '\x01')) && (cVar2 != '\x02')) break;
          uVar5 = uVar5 + 1;
          iVar6 = iVar6 + 0xc;
          if (uVar4 < uVar5) {
            uVar3 = FUN_00529a30(cVar2);
            return uVar3;
          }
        }
        FUN_004ac5a0(6,local_28);
        uVar3 = FUN_00529a30(cVar2);
        return uVar3;
      }
    }
  }
  else {
    cVar2 = '$';
  }
  uVar3 = FUN_00529a30(cVar2);
  return uVar3;
}

