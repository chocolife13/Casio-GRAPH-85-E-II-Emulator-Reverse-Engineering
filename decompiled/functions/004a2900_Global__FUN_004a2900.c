// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004a2900
// entry: 004a2900  size: 119


void FUN_004a2900(int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar3 = DAT_005d6060;
  do {
    sVar1 = *(short *)(iVar2 + iVar3);
    if (sVar1 < 0x38e) {
      if (sVar1 == 0x38d) goto LAB_004a294e;
      if (sVar1 < 0x8e) {
        if ((sVar1 == 0x8d) || ((0x36 < sVar1 && (sVar1 < 0x39)))) goto LAB_004a294e;
      }
      else if (sVar1 == 0x187) goto LAB_004a294e;
    }
    else {
      if (((sVar1 != 0x398) && (sVar1 != 0x3b0)) && ((sVar1 != 0x3b1 || (param_1 != 0))))
      goto LAB_004a296c;
LAB_004a294e:
      *(undefined2 *)(iVar2 + iVar3) = 0;
      *(undefined2 *)(iVar2 + 2 + DAT_005d6060) = 0;
      *(undefined4 *)(iVar2 + 4 + DAT_005d6060) = 0;
      iVar3 = DAT_005d6060;
    }
LAB_004a296c:
    iVar2 = iVar2 + 8;
    if (0x2f < iVar2) {
      return;
    }
  } while( true );
}

