// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00489a20
// entry: 00489a20  size: 579


int FUN_00489a20(int param_1,undefined4 *param_2,int param_3,int param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar4 = param_1;
  iVar5 = 1;
  iVar2 = FUN_0048a190(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58),
                       *(undefined4 *)(param_1 + 0x5c),1,9999,&param_1);
  if ((iVar2 != 0) ||
     (iVar3 = FUN_0048a190(*(undefined4 *)(iVar4 + 0x60),*(undefined4 *)(iVar4 + 100),
                           *(undefined4 *)(iVar4 + 0x68),1,9999,&param_1), iVar2 = param_3,
     iVar3 != 0)) {
    FUN_004e5630(8,param_2);
    return 8;
  }
  bVar1 = *(byte *)(iVar4 + 0x24) & 0xf0;
  if ((bVar1 == 0x50) || (bVar1 == 0x60)) {
    iVar5 = -1;
  }
  *(undefined4 *)(param_3 + 0x78) = 0x28;
  if (((*(int *)(param_3 + 0x7c) != 0x2f) || (*(int *)(param_3 + 0x84) == 1)) ||
     (*(int *)(param_3 + 0x88) == 0)) {
    FUN_00489c80(iVar4,param_3);
    iVar4 = FUN_00489dc0(iVar4,iVar2);
    if (iVar4 != 0) {
      FUN_004e5630(iVar4,param_2);
      return iVar4;
    }
  }
  iVar3 = param_4;
  iVar4 = *(int *)(iVar2 + 0x88);
  if (iVar4 != *(int *)(iVar2 + 0x84)) {
    do {
      *(int *)(iVar2 + 0x88) = iVar4 + 1;
      if ((*(int *)(iVar2 + 0x7c) != 0x29) && (*(int *)(iVar2 + 0x7c) != 0x2c)) {
        FUN_00489f40(iVar2);
      }
      FUN_0048a020(iVar2);
      FUN_0048a0f0(iVar2);
      iVar4 = FUN_0052f820();
      if (iVar4 != 0) {
        FUN_004e5630(1,param_2);
        return 1;
      }
      if (*(int *)(iVar2 + 0x7c) == 0x2e) {
        FUN_004e5070(*(undefined4 *)(iVar2 + 0x88),&local_c);
        iVar4 = iVar3 + 0x800;
        FUN_004d5130(&local_c,&local_10,iVar4,0);
        if (iVar5 == -1) {
          FUN_004e7620(iVar2 + 0x54,&local_c);
        }
        else {
          local_c = *(undefined4 *)(iVar2 + 0x54);
          local_8 = *(undefined4 *)(iVar2 + 0x58);
          local_4 = *(undefined4 *)(iVar2 + 0x5c);
        }
        FUN_004d5210(&local_c,&local_14,iVar4);
        FUN_0050f990(local_10,local_14,iVar3,2,0);
      }
      iVar4 = *(int *)(iVar2 + 0x88);
    } while (iVar4 != *(int *)(iVar2 + 0x84));
  }
  switch(*(undefined4 *)(iVar2 + 0x7c)) {
  case 0x29:
  case 0x2c:
    puVar6 = (undefined4 *)(iVar2 + 0x48);
    break;
  case 0x2a:
  case 0x2d:
  case 0x2e:
  case 0x2f:
    puVar6 = (undefined4 *)(iVar2 + 0x54);
    break;
  case 0x2b:
    puVar6 = (undefined4 *)(iVar2 + 0x3c);
    break;
  default:
    goto switchD_00489c10_default;
  }
  *param_2 = *puVar6;
  param_2[1] = puVar6[1];
  param_2[2] = puVar6[2];
switchD_00489c10_default:
  iVar4 = FUN_004e4020(param_2);
  return iVar4;
}

