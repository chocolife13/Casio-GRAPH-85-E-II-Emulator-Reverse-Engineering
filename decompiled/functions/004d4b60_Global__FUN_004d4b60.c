// decompiled from GRAPH85emulator.exe
// function: Global::FUN_004d4b60
// entry: 004d4b60  size: 468


byte FUN_004d4b60(undefined4 *param_1,byte *param_2,uint param_3)

{
  undefined4 *puVar1;
  byte *pbVar2;
  byte bVar3;
  int iVar4;
  uint unaff_EBX;
  uint uVar5;
  undefined3 uVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 local_8;
  undefined4 local_4;
  
  puVar1 = param_1;
  uVar5 = unaff_EBX & 0xffffff00;
  uVar8 = 0xf00;
  local_8 = *param_1;
  param_1 = (undefined4 *)CONCAT22(param_1._2_2_,0x30);
  uVar7 = param_3 & 0xff;
  uVar6 = (undefined3)(unaff_EBX >> 8);
  if (uVar7 < 2) {
    switch((int)param_3 >> 8 & 0xff) {
    case 0:
      uVar5 = CONCAT31(uVar6,1);
      break;
    case 1:
      uVar5 = CONCAT31(uVar6,2);
      break;
    case 2:
      uVar5 = CONCAT31(uVar6,4);
      break;
    case 4:
      uVar8 = 0x4f00;
    case 3:
      uVar5 = CONCAT31(uVar6,8);
    }
    if (uVar7 == 1) {
      FUN_004fe330(&param_1,&local_8);
      while ((char)param_1 != -0x45) {
        if ((char)param_1 == '\0') {
          uVar5 = uVar5 | 0x10;
          break;
        }
        FUN_004fe330(&param_1,&local_8);
      }
    }
  }
  else if (uVar7 == 2) {
    uVar5 = CONCAT31(uVar6,2);
  }
  bVar3 = FUN_0052f6b0(0x4a);
  bVar3 = (byte)uVar5 | bVar3;
  local_4 = CONCAT31(local_4._1_3_,bVar3);
  FUN_0052f6c0(0x4a,local_4);
  pbVar2 = param_2;
  iVar4 = FUN_00501ca0(puVar1,&param_1,param_2,1,uVar8);
  FUN_0052f6c0(0x4a,CONCAT31((int3)(uVar5 >> 8),bVar3) & 0xffffffe0);
  if (iVar4 == 0) {
    bVar3 = pbVar2[1];
    if ((bVar3 != 3) && (bVar3 != 0x11)) {
      if (bVar3 != 0x1d) {
        return bVar3;
      }
      return 0;
    }
  }
  else {
    bVar3 = *pbVar2;
    if (uVar7 == 1) {
      if (((bVar3 & 0xf0) == 0xa0) || ((bVar3 & 0x70) == 0x30)) {
        FUN_004fd9e0(pbVar2);
        FUN_004e5630(2,pbVar2);
        return 2;
      }
    }
    else if ((bVar3 & 0x60) == 0x20) {
      FUN_004fd9e0(pbVar2);
      FUN_004e5630(2,pbVar2);
      return 2;
    }
    if (((((char)param_1 != '\0') && ((char)param_1 != ',')) &&
        ((param_3 != 2 || ((char)param_1 != ']')))) &&
       (((param_3 & 0x300) != 0x300 || ((char)param_1 != -10)))) {
      FUN_004e5630(2,pbVar2);
      return 2;
    }
    if (((bVar3 & 0x80) != 0) && ((bVar3 & 0xf0) != 0xf0)) {
      FUN_004e5630(3,pbVar2);
    }
  }
  return 0;
}

