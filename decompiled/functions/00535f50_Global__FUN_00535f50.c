// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00535f50
// entry: 00535f50  size: 661


undefined1 FUN_00535f50(short *param_1,char *param_2,char *param_3)

{
  undefined4 uVar1;
  undefined1 uVar2;
  char cVar3;
  char cVar4;
  short sVar5;
  ushort uVar6;
  char *pcVar7;
  byte bVar8;
  short sVar9;
  ushort uVar10;
  
  uVar1 = DAT_005d5720;
  *param_2 = '\0';
  *param_3 = '\0';
  pcVar7 = *(char **)param_1;
  sVar5 = 0;
  sVar9 = 1;
LAB_00535f7e:
  do {
    uVar2 = FUN_00532fb0(pcVar7);
    pcVar7 = (char *)FUN_004b7780(uVar1,pcVar7);
    if (pcVar7 == (char *)0x0) {
      param_1[0] = 0;
      param_1[1] = 0;
      return 0;
    }
    cVar3 = FUN_00532a30(uVar2);
    if (cVar3 == '\0') {
      cVar3 = FUN_00532a10(uVar2);
      if (cVar3 != '\0') {
        sVar9 = sVar9 + -1;
        if (((sVar9 == 0) && (*pcVar7 != '\x1b')) && (*pcVar7 != -0x4c)) {
          if ((*pcVar7 == '\x1d') || (*pcVar7 == -0x5c)) {
            pcVar7 = (char *)FUN_004b7780(uVar1,pcVar7);
            if (*pcVar7 == '\x1f') {
              pcVar7 = (char *)FUN_004b7780(uVar1,pcVar7);
            }
          }
          cVar3 = FUN_00533160(pcVar7);
          if (cVar3 == '\0') {
            param_1[0] = 0;
            param_1[1] = 0;
            return 0;
          }
          cVar4 = FUN_005330a0(pcVar7);
          uVar6 = FUN_00533620(pcVar7);
          uVar10 = *param_1 - (short)pcVar7;
          if (uVar6 < uVar10) {
            param_1[0] = 0;
            param_1[1] = 0;
            return 0;
          }
          *(char **)param_1 = pcVar7;
          if (cVar3 == '\a') {
            bVar8 = 0;
            param_1 = (short *)((uint)param_1._1_3_ << 8);
            goto LAB_00536080;
          }
          if (cVar3 != '\b') {
            if ((cVar3 != '\x01') && (cVar3 != '\x06')) {
              uVar6 = FUN_00533380(pcVar7,1);
              if (uVar6 <= uVar10) {
                if ((cVar3 == '\x02') || (cVar3 == '\x03')) {
                  *param_2 = '\x01';
                  return 1;
                }
                uVar6 = FUN_00533380(pcVar7,2);
                if (uVar10 < uVar6) {
                  *param_2 = '\x01';
                  return 1;
                }
                if ((cVar3 != '\x05') && ((cVar3 != '\x04' || (cVar4 == '\n')))) {
                  uVar6 = FUN_00533380(pcVar7,3);
                  *param_2 = '\x03' - (uVar10 < uVar6);
                  return 1;
                }
                *param_2 = '\x02';
                return 1;
              }
            }
            *param_2 = '\0';
            return 1;
          }
          bVar8 = 0;
          param_1 = (short *)((uint)param_1._1_3_ << 8);
          break;
        }
      }
    }
    else if (sVar5 != 0) {
      sVar9 = sVar9 + 1;
      sVar5 = sVar5 + 1;
      goto LAB_00535f7e;
    }
    sVar5 = sVar5 + 1;
  } while( true );
  while( true ) {
    bVar8 = bVar8 + 1;
    param_1 = (short *)CONCAT31(param_1._1_3_,bVar8);
    if (5 < bVar8) break;
    uVar6 = FUN_00533550(pcVar7,param_1,0);
    if ((uVar6 == 0) || (uVar10 < uVar6)) break;
  }
  *param_2 = bVar8 - 1;
  bVar8 = 0;
  param_1 = (short *)((uint)param_1 & 0xffffff00);
  do {
    uVar6 = FUN_00533550(pcVar7,*param_2,param_1);
    if ((uVar6 == 0) || (uVar10 < uVar6)) break;
    bVar8 = bVar8 + 1;
    param_1 = (short *)CONCAT31(param_1._1_3_,bVar8);
  } while (bVar8 < 6);
  *param_3 = bVar8 - 1;
  return 1;
  while( true ) {
    bVar8 = bVar8 + 1;
    param_1 = (short *)CONCAT31(param_1._1_3_,bVar8);
    if (0x13 < bVar8) break;
LAB_00536080:
    uVar6 = FUN_005334d0(pcVar7,param_1);
    if ((uVar6 == 0) || (uVar10 < uVar6)) break;
  }
  *param_2 = bVar8 - 1;
  return 1;
}

