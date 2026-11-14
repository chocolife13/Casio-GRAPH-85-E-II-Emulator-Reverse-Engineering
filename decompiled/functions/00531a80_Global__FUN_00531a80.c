// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00531a80
// entry: 00531a80  size: 174


uint FUN_00531a80(ushort param_1)

{
  ushort *puVar1;
  uint uVar2;
  int iVar3;
  ushort uVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  ushort *puVar8;
  int iVar9;
  
  uVar2 = 0;
  if (PTR_DAT_005993d0 != (undefined *)0x0) {
    puVar8 = &DAT_005993d6;
    do {
      if ((*puVar8 & param_1) != 0) {
        uVar4 = *puVar8 & 0xff;
        if (uVar4 == 8) {
          uVar2 = uVar2 + 4;
          iVar3 = 0x1d;
          pcVar6 = PTR_DAT_005c421c;
          do {
            if ((*pcVar6 != '\0') || (pcVar6[1] != '\0')) {
              uVar2 = uVar2 + 0x18;
            }
            pcVar6 = pcVar6 + 0x18;
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
        else if (uVar4 == 9) {
          iVar3 = uVar2 + 0x10;
          iVar7 = 0;
          do {
            iVar5 = 0;
            iVar9 = iVar7;
            do {
              if (99 < iVar9) goto LAB_00531af2;
              if (PTR_DAT_005c4218[iVar5 + iVar7] != '\0') {
                iVar3 = iVar3 + 1;
              }
              iVar5 = iVar5 + 1;
              iVar9 = iVar9 + 1;
            } while (iVar5 < 0x20);
            iVar7 = iVar7 + 0x20;
          } while (iVar7 < 0x80);
LAB_00531af2:
          uVar2 = iVar3 + 3U & 0xfffffffc;
        }
        else {
          uVar2 = uVar2 + ((int)(short)puVar8[-1] + 3U & 0xfffffffc);
        }
      }
      puVar1 = puVar8 + 1;
      puVar8 = puVar8 + 4;
    } while (*(int *)puVar1 != 0);
  }
  return uVar2;
}

