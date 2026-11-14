// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005361f0
// entry: 005361f0  size: 307


ushort FUN_005361f0(char *param_1)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  char cVar4;
  undefined1 uVar5;
  short sVar6;
  ushort uVar7;
  int iVar8;
  
  uVar7 = 0;
  cVar3 = FUN_00532fb0(param_1);
  if (cVar3 == '\x01') {
    sVar6 = FUN_00533620(param_1);
    return sVar6 + 1;
  }
  cVar4 = FUN_00532ad0(cVar3);
  if (cVar4 == '\0') {
    if (cVar3 != '\0') {
      return 0;
    }
    if (*param_1 == -0x28) {
      return 0;
    }
    for (; (((cVar3 = *param_1, cVar3 == -0x79 || (cVar3 == '-')) || (cVar3 == -0x67)) ||
           ((cVar3 == '+' || (cVar3 == -0x77)))); param_1 = param_1 + 1) {
      uVar7 = uVar7 + 1;
    }
    iVar8 = FUN_004f9d80(param_1);
    if (iVar8 == 0) {
      iVar8 = FUN_004b7370(*param_1);
      return (iVar8 != 0) + 1;
    }
    bVar2 = false;
    bVar1 = false;
    do {
      if (*param_1 == '\x0f') {
        if (bVar2) {
          return uVar7;
        }
        bVar2 = true;
        bVar1 = true;
        do {
          do {
            cVar3 = param_1[1];
            param_1 = param_1 + 1;
            uVar7 = uVar7 + 1;
          } while (cVar3 == -0x79);
        } while (((cVar3 == '-') || (cVar3 == -0x67)) || ((cVar3 == '+' || (cVar3 == -0x77))));
      }
      else {
        if (*param_1 == '.') {
          if (bVar1) {
            return uVar7;
          }
          bVar1 = true;
        }
        param_1 = param_1 + 1;
        uVar7 = uVar7 + 1;
      }
      iVar8 = FUN_004f9e20(param_1);
    } while (iVar8 != 0);
  }
  else {
    uVar7 = FUN_005336e0(param_1,0);
    uVar5 = FUN_00532fb0(param_1 + uVar7);
    cVar3 = FUN_00532ab0(uVar5);
    if ((cVar3 != '\0') && (iVar8 = FUN_004b73a0(param_1 + uVar7), iVar8 == 0)) {
      return uVar7 + 1;
    }
  }
  return uVar7;
}

