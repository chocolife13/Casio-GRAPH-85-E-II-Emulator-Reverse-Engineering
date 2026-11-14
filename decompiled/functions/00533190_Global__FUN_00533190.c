// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00533190
// entry: 00533190  size: 282


uint FUN_00533190(uint param_1)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  undefined3 uVar5;
  uint uVar6;
  short sVar7;
  byte local_d;
  int local_c;
  
  uVar6 = param_1;
  local_c = 0;
  sVar7 = 1;
  bVar1 = FUN_00532fb0(param_1);
  uVar4 = bVar1 - 9;
  uVar5 = (undefined3)(uVar4 >> 8);
  switch(uVar4) {
  case 0:
    param_1._0_1_ = 8;
    local_d = 10;
    goto LAB_005331f3;
  default:
    goto switchD_005331ca_caseD_1;
  case 3:
    uVar4 = CONCAT31(uVar5,0xb);
    break;
  case 5:
    uVar4 = CONCAT31(uVar5,0xd);
    break;
  case 7:
    uVar4 = CONCAT31(uVar5,0xf);
    break;
  case 9:
    uVar4 = CONCAT31(uVar5,0x11);
  }
  local_d = (byte)uVar4;
  param_1._0_1_ = local_d;
LAB_005331f3:
  if (uVar6 != 0) {
    do {
      bVar2 = FUN_00532fb0(uVar6);
      if (sVar7 == 1) {
        if (bVar2 == bVar1) {
          local_c = local_c + 1;
        }
        else {
          if ((bVar2 != (byte)param_1) && (bVar2 != local_d)) goto LAB_0053323c;
          local_c = local_c + 0xffff;
          if ((short)local_c == 0) {
            return CONCAT31((int3)((uint)local_c >> 8),1);
          }
        }
      }
      else {
LAB_0053323c:
        cVar3 = FUN_00532a30(bVar2);
        if (cVar3 == '\0') {
          uVar4 = FUN_00532a10(bVar2);
          if ((char)uVar4 == '\0') {
            if (((bVar1 < 0x10) && (bVar2 == 5)) && (sVar7 == 1)) break;
          }
          else {
            sVar7 = sVar7 + -1;
            if (sVar7 == 0) break;
          }
        }
        else {
          sVar7 = sVar7 + 1;
        }
      }
      uVar4 = FUN_004b7780(DAT_005d5720,uVar6);
      uVar6 = uVar4;
    } while (uVar4 != 0);
  }
switchD_005331ca_caseD_1:
  return uVar4 & 0xffffff00;
}

