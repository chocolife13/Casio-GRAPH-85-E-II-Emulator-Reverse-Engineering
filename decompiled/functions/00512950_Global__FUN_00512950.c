// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00512950
// entry: 00512950  size: 1066


void FUN_00512950(int param_1,undefined4 param_2,int param_3,code *param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined3 uVar9;
  byte *pbVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  byte bVar10;
  int iVar11;
  bool bVar12;
  undefined1 uVar13;
  int local_10;
  undefined1 local_c [12];
  
  iVar3 = (int)param_4;
  iVar2 = param_1;
  if ((*(byte *)((int)param_4 + 0x8e2) & 1) == 0) {
    piVar1 = (int *)((int)param_4 + 0x8dc);
    param_4 = FUN_004e7290;
    iVar8 = param_5 * 0x20 + *piVar1;
    iVar4 = *(int *)(param_5 * 0x20 + 4 + *piVar1);
    iVar7 = iVar4 + 0xc;
    local_10 = iVar4;
  }
  else {
    piVar1 = (int *)((int)param_4 + 0x8dc);
    param_4 = FUN_004e7250;
    iVar8 = param_5 * 0x20 + *piVar1;
    iVar4 = *(int *)(param_5 * 0x20 + 4 + *piVar1);
    iVar7 = iVar4;
    local_10 = iVar4 + 0xc;
  }
  iVar11 = param_5 * 0x20;
  bVar10 = *(byte *)(iVar8 + 0xc);
  param_5 = CONCAT31(param_5._1_3_,bVar10);
  if ((bVar10 & 4) != 0) {
    return;
  }
  if ((bVar10 & 8) != 0) goto switchD_005129e2_default;
  uVar9 = (undefined3)((uint)iVar4 >> 8);
  switch(*(uint *)(iVar8 + 0x18) & 0x30) {
  case 0:
    FUN_004d5130(iVar4,&param_5,iVar3 + 0x800,*(undefined1 *)(iVar3 + 0x8e2));
    if (param_5 < iVar2) {
      pbVar5 = (byte *)(iVar11 + 0xc + *(int *)(iVar3 + 0x8dc));
      bVar10 = *(byte *)(iVar11 + 0xc + *(int *)(iVar3 + 0x8dc)) ^ 2;
LAB_00512a1e:
      *pbVar5 = bVar10;
      pbVar5 = (byte *)(iVar11 + 0xc + *(int *)(iVar3 + 0x8dc));
      *pbVar5 = *pbVar5 | 4;
      return;
    }
    goto switchD_005129e2_default;
  case 0x10:
    uVar13 = *(undefined1 *)(iVar3 + 0x8e2);
    break;
  case 0x20:
    if ((bVar10 & 1) == 0) {
      if ((bVar10 & 2) == 0) goto switchD_005129e2_default;
      iVar8 = (*param_4)(iVar7,iVar3 + 0x80c);
      if (iVar8 == 0) {
        FUN_004d5130(iVar7,&param_5,iVar3 + 0x800,*(undefined1 *)(iVar3 + 0x8e2));
        if (param_5 < iVar2) {
          *(byte *)(iVar11 + 0xc + *(int *)(iVar3 + 0x8dc)) =
               *(byte *)(iVar11 + 0xc + *(int *)(iVar3 + 0x8dc)) ^ 2;
          pbVar5 = (byte *)(iVar11 + 0xc + *(int *)(iVar3 + 0x8dc));
          *pbVar5 = *pbVar5 | 4;
          return;
        }
        goto switchD_005129e2_default;
      }
      *(byte *)(iVar11 + 0xc + *(int *)(iVar3 + 0x8dc)) =
           *(byte *)(iVar11 + 0xc + *(int *)(iVar3 + 0x8dc)) ^ 2;
      pbVar5 = (byte *)(iVar11 + 0xc + *(int *)(iVar3 + 0x8dc));
      goto LAB_00512a7e;
    }
    FUN_004d5130(local_10,&param_5,iVar3 + 0x800,CONCAT31(uVar9,*(undefined1 *)(iVar3 + 0x8e2)));
    if (iVar2 < param_5) {
      return;
    }
    *(byte *)(iVar11 + 0xc + *(int *)(iVar3 + 0x8dc)) =
         *(byte *)(iVar11 + 0xc + *(int *)(iVar3 + 0x8dc)) ^ 1;
    pbVar5 = (byte *)(iVar11 + 0xc + *(int *)(iVar3 + 0x8dc));
    bVar10 = *(byte *)(iVar11 + 0xc + *(int *)(iVar3 + 0x8dc)) | 2;
    goto LAB_00512a83;
  case 0x30:
    if ((bVar10 & 1) == 0) {
      if (((bVar10 & 2) != 0) &&
         (FUN_004d5130(local_10,&param_5,iVar3 + 0x800,
                       CONCAT31(uVar9,*(undefined1 *)(iVar3 + 0x8e2))), param_5 < iVar2)) {
        *(byte *)(iVar11 + 0xc + *(int *)(iVar3 + 0x8dc)) =
             *(byte *)(iVar11 + 0xc + *(int *)(iVar3 + 0x8dc)) ^ 2;
        *(byte *)(iVar11 + 0xc + *(int *)(iVar3 + 0x8dc)) =
             *(byte *)(iVar11 + 0xc + *(int *)(iVar3 + 0x8dc)) | 1;
        return;
      }
      goto switchD_005129e2_default;
    }
    iVar8 = (*param_4)(iVar7,iVar3 + 0x80c);
    if (iVar8 != 0) {
      pbVar5 = (byte *)(iVar11 + 0xc + *(int *)(iVar3 + 0x8dc));
      bVar10 = *(byte *)(iVar11 + 0xc + *(int *)(iVar3 + 0x8dc)) ^ 1;
      goto LAB_00512a1e;
    }
    uVar13 = *(undefined1 *)(iVar3 + 0x8e2);
    iVar4 = iVar7;
    break;
  default:
    goto switchD_005129e2_default;
  }
  FUN_004d5130(iVar4,&param_5,iVar3 + 0x800,uVar13);
  if (iVar2 < param_5) {
    return;
  }
  *(byte *)(iVar11 + 0xc + *(int *)(iVar3 + 0x8dc)) =
       *(byte *)(iVar11 + 0xc + *(int *)(iVar3 + 0x8dc)) ^ 1;
  pbVar5 = (byte *)(iVar11 + 0xc + *(int *)(iVar3 + 0x8dc));
LAB_00512a7e:
  bVar10 = *pbVar5 | 8;
LAB_00512a83:
  *pbVar5 = bVar10;
switchD_005129e2_default:
  uVar6 = FUN_004e5780(local_c,&param_1,iVar3 + 0x800);
  iVar7 = FUN_004d5210(uVar6);
  uVar6 = param_2;
  if (param_3 == 0) {
    FUN_0050f990(iVar2,param_2,iVar3,0x40,*(undefined1 *)(iVar3 + 0x8e2));
    if (iVar7 == 0) {
      FUN_0050f940(iVar2,uVar6,iVar2,param_1,iVar3,0x40,*(undefined1 *)(iVar3 + 0x8e2));
    }
    else {
      if (iVar7 == 0x100) {
        FUN_0050f940(iVar2,uVar6,iVar2,1,iVar3,0x40,*(undefined1 *)(iVar3 + 0x8e2));
        return;
      }
      if (iVar7 == 0x200) {
        FUN_0050f940(iVar2,uVar6,iVar2,0x3f,iVar3,0x40,*(undefined1 *)(iVar3 + 0x8e2));
        return;
      }
    }
  }
  else {
    if (param_3 == 0x100) {
      if (iVar7 == 0) {
        FUN_0050f940(iVar2,1,iVar2,param_1,iVar3,0x40,*(undefined1 *)(iVar3 + 0x8e2));
        return;
      }
      bVar12 = iVar7 == 0x200;
    }
    else {
      if (param_3 != 0x200) {
        return;
      }
      if (iVar7 == 0) {
        FUN_0050f940(iVar2,0x3f,iVar2,param_1,iVar3,0x40,*(undefined1 *)(iVar3 + 0x8e2));
        return;
      }
      bVar12 = iVar7 == 0x100;
    }
    if (bVar12) {
      FUN_0050f940(iVar2,1,iVar2,0x3f,iVar3,0x40,*(undefined1 *)(iVar3 + 0x8e2));
      return;
    }
  }
  return;
}

