// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0043f140
// entry: 0043f140  size: 1109


char FUN_0043f140(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined3 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint local_1b8;
  int local_1b4;
  int local_1b0;
  int local_1ac;
  undefined1 local_1a8 [4];
  undefined1 local_1a4 [24];
  undefined1 local_18c [4];
  undefined1 local_188 [4];
  undefined1 local_184 [256];
  undefined1 local_84 [132];
  
  iVar6 = 0;
  if (DAT_0057f4c8 != -1) {
    do {
      pcVar1 = &DAT_0057f4c9 + iVar6;
      iVar6 = iVar6 + 1;
    } while (*pcVar1 != -1);
  }
  iVar7 = 1;
  iVar8 = iVar6 + 0x352;
  do {
    FUN_00517360(iVar7,local_184);
    iVar3 = FUN_004b7550(local_184);
    iVar7 = iVar7 + 1;
    iVar8 = iVar8 + 5 + iVar3;
  } while (iVar7 < 0x15);
  iVar7 = FUN_0052ffc0(param_3,local_1a8);
  iVar7 = iVar7 * 0x400;
  local_1ac = iVar7;
  FUN_004ad550(local_188,local_18c,&local_1b8);
  cVar2 = FUN_004ad350(&DAT_005be2a4,&DAT_005bdc38,&local_1b0);
  if (cVar2 == '\0') {
    cVar2 = FUN_004ad350(&DAT_005be2a4,&DAT_005bdc30,&local_1b4);
    if (cVar2 != '\0') {
      local_1b4 = 0;
    }
    if (local_1b4 + local_1b0 + local_1b8 < (uint)(iVar7 + iVar8)) {
      return '2';
    }
    FUN_004ac750(&DAT_005be2a4,&DAT_005bdc38);
    if (param_1 != (undefined4 *)0x0) {
      FUN_004ac750(&DAT_005be2a4,&DAT_005bdc30);
    }
  }
  else if (local_1b8 < (uint)(iVar7 + 0x28 + iVar8)) {
    return '2';
  }
  cVar2 = FUN_004abb50(&DAT_005be2a4,&DAT_005bdc38,iVar8,0);
  if (cVar2 != '\0') {
    return cVar2;
  }
  uVar5 = 0;
  iVar8 = 0;
  cVar2 = DAT_0057f4c8;
  while (cVar2 != -1) {
    uVar4 = CONCAT31(uVar5,(&DAT_0057f4c8)[iVar8]);
    if ((&DAT_0057f4c8)[iVar8] == -2) {
      local_184[iVar8] = 0;
    }
    else {
      uVar4 = FUN_00526090(uVar4);
      local_184[iVar8] = (char)uVar4;
    }
    pcVar1 = &DAT_0057f4c9 + iVar8;
    uVar5 = (undefined3)((uint)uVar4 >> 8);
    iVar8 = iVar8 + 1;
    cVar2 = *pcVar1;
  }
  local_184[iVar8] = 0x14;
  local_184[iVar8 + 1] = 0;
  cVar2 = FUN_004ac2f0(iVar8 + 2,local_184,0);
  if (((cVar2 == '\0') || (cVar2 == '\x01')) || (cVar2 == '\x02')) {
    cVar2 = FUN_004ac2f0(0x2c,param_3,iVar6 + 2);
    if (((cVar2 == '\0') || (cVar2 == '\x01')) || (cVar2 == '\x02')) {
      iVar8 = 0;
      iVar6 = iVar6 + 0x2e;
      do {
        iVar7 = iVar6;
        FUN_0052f760((char)iVar8 + 'A',local_1a4);
        cVar2 = FUN_004ac130(&DAT_005be2a4,&DAT_005bdc38,0x18,local_1a4,iVar7);
        if (((cVar2 != '\0') && (cVar2 != '\x01')) && (cVar2 != '\x02')) goto LAB_0043f55a;
        iVar8 = iVar8 + 1;
        iVar6 = iVar7 + 0x18;
      } while (iVar8 < 0x1a);
      FUN_0052f760(0xcd,local_1a4);
      cVar2 = FUN_004ac130(&DAT_005be2a4,&DAT_005bdc38,0x18,local_1a4,iVar7 + 0x18);
      if (((cVar2 == '\0') || (cVar2 == '\x01')) || (cVar2 == '\x02')) {
        FUN_0052f760(0xce,local_1a4);
        cVar2 = FUN_004ac130(&DAT_005be2a4,&DAT_005bdc38,0x18,local_1a4,iVar7 + 0x30);
        if (((cVar2 == '\0') || (cVar2 == '\x01')) || (cVar2 == '\x02')) {
          iVar6 = FUN_00515e10(local_84);
          if ((iVar6 != 0) && (iVar6 = FUN_00515f70(1), iVar6 != 0)) {
            return '2';
          }
          cVar2 = FUN_004ac130(&DAT_005be2a4,&DAT_005bdc38,0x84,local_84,iVar7 + 0x48);
          if (((cVar2 == '\0') || (cVar2 == '\x01')) || (cVar2 == '\x02')) {
            iVar7 = iVar7 + 0xcc;
            iVar6 = 1;
            do {
              uVar4 = FUN_005171e0(iVar6,local_184,iVar7);
              cVar2 = FUN_004ac130(&DAT_005be2a4,&DAT_005bdc38,4,uVar4);
              if (((cVar2 != '\0') && (cVar2 != '\x01')) && (cVar2 != '\x02')) goto LAB_0043f55a;
              iVar7 = iVar7 + 4;
              iVar6 = iVar6 + 1;
            } while (iVar6 < 0x15);
            iVar6 = 1;
            do {
              FUN_00517360(iVar6,local_184);
              iVar8 = FUN_004b7550(local_184,local_184,iVar7);
              cVar2 = FUN_004ac130(&DAT_005be2a4,&DAT_005bdc38,iVar8 + 1);
              if (((cVar2 != '\0') && (cVar2 != '\x01')) && (cVar2 != '\x02')) goto LAB_0043f55a;
              iVar3 = FUN_004b7550(local_184);
              iVar8 = local_1ac;
              iVar6 = iVar6 + 1;
              iVar7 = iVar7 + 1 + iVar3;
            } while (iVar6 < 0x15);
            if (param_1 != (undefined4 *)0x0) {
              cVar2 = FUN_004abb50(&DAT_005be2a4,&DAT_005bdc30,local_1ac,0);
              if (cVar2 != '\0') {
                return cVar2;
              }
              cVar2 = FUN_004ac2f0(iVar8,*param_1,0);
              if (((cVar2 != '\0') && (cVar2 != '\x01')) && (cVar2 != '\x02')) goto LAB_0043f55a;
            }
            return '\0';
          }
        }
      }
    }
  }
LAB_0043f55a:
  FUN_004ac750(&DAT_005be2a4,&DAT_005bdc38);
  FUN_004ac750(&DAT_005be2a4,&DAT_005bdc30);
  return cVar2;
}

