// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00535800
// entry: 00535800  size: 378


undefined4 FUN_00535800(char *param_1)

{
  ushort uVar1;
  char cVar2;
  char cVar3;
  ushort uVar4;
  ushort uVar5;
  int iVar6;
  ushort uVar7;
  short sVar8;
  
  sVar8 = 1;
  uVar7 = 1;
  uVar4 = 1;
  uVar5 = 1;
  if (*param_1 == ',') {
    for (iVar6 = FUN_004b7780(DAT_005d5720,param_1); iVar6 != 0;
        iVar6 = FUN_004b7780(DAT_005d5720,iVar6)) {
      cVar2 = FUN_00532fb0(iVar6);
      if (sVar8 == 1) {
        if (cVar2 == '\t') {
          uVar7 = uVar7 + 1;
        }
        else {
          if (cVar2 == '\n') {
            uVar7 = uVar7 - 1;
            uVar1 = uVar7;
            goto joined_r0x005358b8;
          }
          if (cVar2 == '\b') {
            if (1 < uVar7) {
              uVar7 = uVar7 - 1;
            }
          }
          else if (cVar2 == '\f') {
            uVar4 = uVar4 + 1;
          }
          else if (cVar2 == '\v') {
            uVar4 = uVar4 - 1;
            uVar1 = uVar4;
joined_r0x005358b8:
            if (uVar1 == 0) {
              return 1;
            }
          }
          else if (cVar2 == '\x0e') {
            uVar5 = uVar5 + 1;
          }
          else {
            if (cVar2 == '\r') {
              uVar5 = uVar5 - 1;
              uVar1 = uVar5;
              goto joined_r0x005358b8;
            }
            cVar3 = FUN_00535660(iVar6);
            if ((((cVar3 != '\0') && (uVar7 == 1)) && (uVar4 == 1)) && (uVar5 == 1)) {
              return 1;
            }
          }
        }
      }
      cVar3 = FUN_00532a30(cVar2);
      if (cVar3 == '\0') {
        cVar3 = FUN_00532a10(cVar2);
        if (cVar3 == '\0') {
          if ((cVar2 == '\x05') && (sVar8 == 1)) {
            return 0;
          }
        }
        else {
          sVar8 = sVar8 + -1;
          if (sVar8 == 0) {
            return 0;
          }
        }
      }
      else {
        sVar8 = sVar8 + 1;
      }
    }
  }
  return 0;
}

