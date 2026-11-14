// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00513100
// entry: 00513100  size: 1021


void FUN_00513100(code *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  int iVar7;
  undefined1 local_24 [12];
  byte local_18 [12];
  undefined1 local_c [12];
  
  iVar7 = param_2;
  iVar2 = (int)param_1;
  if ((*(byte *)((int)param_1 + 0x8e2) & 1) == 0) {
    iVar4 = *(int *)((int)param_1 + 0x8dc) + param_2 * 0x20;
    pcVar6 = FUN_004e7250;
    param_1 = FUN_004e7290;
    iVar3 = *(int *)(iVar4 + 4);
    param_2 = iVar3 + 0xc;
    iVar5 = iVar3;
  }
  else {
    piVar1 = (int *)((int)param_1 + 0x8dc);
    pcVar6 = FUN_004e7290;
    param_1 = FUN_004e7250;
    iVar4 = param_2 * 0x20 + *piVar1;
    iVar3 = *(int *)(param_2 * 0x20 + 4 + *piVar1);
    iVar5 = iVar3 + 0xc;
    param_2 = iVar3;
  }
  iVar7 = iVar7 * 0x20;
  switch(*(uint *)(iVar4 + 0x18) & 0x30) {
  case 0:
    iVar4 = (*pcVar6)(iVar3,iVar2 + 0x800);
    if (iVar4 != 0) {
      *(undefined1 *)(iVar7 + 0xc + *(int *)(iVar2 + 0x8dc)) = 4;
      return;
    }
    iVar4 = (*param_1)(*(undefined4 *)(iVar7 + 4 + *(int *)(iVar2 + 0x8dc)),iVar2 + 0x80c);
    if (iVar4 == 0) {
      *(undefined1 *)(iVar7 + 0xc + *(int *)(iVar2 + 0x8dc)) = 2;
      return;
    }
    *(undefined1 *)(iVar7 + 0xc + *(int *)(iVar2 + 0x8dc)) = 8;
    return;
  case 0x10:
    iVar4 = (*pcVar6)(iVar3,iVar2 + 0x800);
    if (iVar4 != 0) {
      *(undefined1 *)(iVar7 + 0xc + *(int *)(iVar2 + 0x8dc)) = 8;
      return;
    }
    param_2 = *(int *)(iVar7 + 4 + *(int *)(iVar2 + 0x8dc));
    break;
  case 0x20:
    iVar4 = (*pcVar6)(param_2,iVar2 + 0x800);
    if (iVar4 != 0) {
      *(undefined1 *)(iVar7 + 0xc + *(int *)(iVar2 + 0x8dc)) = 4;
      return;
    }
    iVar4 = (*param_1)(iVar5,iVar2 + 0x80c);
    if (iVar4 != 0) {
      *(undefined1 *)(iVar7 + 0xc + *(int *)(iVar2 + 0x8dc)) = 4;
      return;
    }
    iVar4 = (*pcVar6)(iVar5,iVar2 + 0x800);
    if (iVar4 == 0) {
      *(undefined1 *)(iVar7 + 0xc + *(int *)(iVar2 + 0x8dc)) = 1;
      return;
    }
    iVar4 = (*param_1)(param_2,iVar2 + 0x80c);
    if (iVar4 == 0) {
      *(undefined1 *)(iVar7 + 0xc + *(int *)(iVar2 + 0x8dc)) = 2;
      return;
    }
    *(undefined1 *)(iVar7 + 0xc + *(int *)(iVar2 + 0x8dc)) = 8;
    return;
  case 0x30:
    iVar4 = FUN_004e71d0(iVar5,param_2);
    if (iVar4 != 0) {
      *(undefined1 *)(iVar7 + 0xc + *(int *)(iVar2 + 0x8dc)) = 8;
      return;
    }
    FUN_004e6b80(param_2,iVar5,local_18);
    if ((local_18[0] & 0xf0) != 0xf0) {
      FUN_004e7620(local_18,local_18);
      FUN_004e7620(iVar2 + 0x824,local_24);
      iVar4 = FUN_004e7250(local_18,local_24);
      if (iVar4 != 0) {
        *(undefined1 *)(iVar7 + 0xc + *(int *)(iVar2 + 0x8dc)) = 8;
        return;
      }
      FUN_004e57c0(local_c);
      FUN_004e6d00(local_24,local_c,local_24);
      iVar4 = FUN_004e7250(local_18,local_24);
      if ((iVar4 != 0) && (iVar4 = (*pcVar6)(iVar5,iVar2 + 0x80c), iVar4 != 0)) {
        FUN_004e6dd0(iVar2 + 0x824,local_c,local_c);
        FUN_004e6a00(iVar2 + 0x800,local_c,local_24);
        iVar4 = (*pcVar6)(local_24,iVar5);
        while (iVar4 != 0) {
          FUN_004e6a00(local_24,iVar2 + 0x824,local_24);
          iVar4 = (*pcVar6)(local_24,iVar5);
        }
        FUN_004e6a00(local_24,iVar2 + 0x824,local_24);
        iVar4 = (*pcVar6)(param_2,local_24);
        if (iVar4 != 0) {
          *(undefined1 *)(iVar7 + 0xc + *(int *)(iVar2 + 0x8dc)) = 8;
          return;
        }
      }
    }
    iVar4 = (*pcVar6)(param_2,iVar2 + 0x800);
    if (iVar4 != 0) {
      *(undefined1 *)(iVar7 + 0xc + *(int *)(iVar2 + 0x8dc)) = 8;
      return;
    }
    iVar4 = (*param_1)(iVar5,iVar2 + 0x80c);
    if (iVar4 != 0) {
      *(undefined1 *)(iVar7 + 0xc + *(int *)(iVar2 + 0x8dc)) = 8;
      return;
    }
    iVar4 = (*pcVar6)(iVar5,iVar2 + 0x800);
    if (iVar4 == 0) {
      *(undefined1 *)(iVar7 + 0xc + *(int *)(iVar2 + 0x8dc)) = 2;
      return;
    }
    break;
  default:
    return;
  }
  iVar4 = (*param_1)(param_2,iVar2 + 0x80c);
  if (iVar4 == 0) {
    *(undefined1 *)(iVar7 + 0xc + *(int *)(iVar2 + 0x8dc)) = 1;
    return;
  }
  *(undefined1 *)(iVar7 + 0xc + *(int *)(iVar2 + 0x8dc)) = 4;
  return;
}

