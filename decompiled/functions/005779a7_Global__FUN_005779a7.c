// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005779a7
// entry: 005779a7  size: 579


int FUN_005779a7(void)

{
  uint *puVar1;
  byte *pbVar2;
  ushort uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  undefined4 uVar8;
  HDC pHVar9;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00555ab8();
  *(undefined4 *)(extraout_ECX + 0x70) = *(undefined4 *)(unaff_EBP + 8);
  iVar6 = FUN_00566937(0x3c);
  *(int *)(unaff_EBP + 8) = iVar6;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar6 == 0) {
    piVar7 = (int *)0x0;
  }
  else {
    piVar7 = (int *)FUN_0057940c();
  }
  *(int **)(extraout_ECX + 0x114) = piVar7;
  iVar6 = *piVar7;
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *(undefined4 *)(iVar6 + 0x3c) = 0x7009;
  puVar1 = (uint *)(*(int *)(**(int **)(extraout_ECX + 0x114) + 0x5c) + 0x14);
  *puVar1 = *puVar1 | 0x40;
  pbVar2 = (byte *)(*(int *)(**(int **)(extraout_ECX + 0x114) + 0x5c) + 0x15);
  *pbVar2 = *pbVar2 & 0xfe;
  *(undefined4 *)(*(int *)(extraout_ECX + 0x114) + 8) = 1;
  iVar6 = FUN_00566937(0x40);
  *(int *)(unaff_EBP + 8) = iVar6;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  if (iVar6 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = FUN_0057964e();
  }
  piVar7 = *(int **)(extraout_ECX + 0x70);
  uVar4 = *(undefined4 *)(extraout_ECX + 0x114);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *(undefined4 *)(extraout_ECX + 0x74) = uVar8;
  iVar6 = (**(code **)(*piVar7 + 0xf4))(uVar4);
  if (iVar6 != 0) {
    FUN_00569c75(*(undefined4 *)(*(int *)(**(int **)(extraout_ECX + 0x114) + 0x5c) + 0x10));
    (**(code **)(**(int **)(extraout_ECX + 0x74) + 0xc))
              (*(undefined4 *)(*(int *)(**(int **)(extraout_ECX + 0x114) + 0x5c) + 0x10));
    *(undefined4 *)(*(int *)(extraout_ECX + 0x74) + 0xc) = 1;
    *(undefined4 *)(extraout_ECX + 0x84) = 1;
    (**(code **)(*(int *)(extraout_ECX + 0x78) + 0x1c))();
    pHVar9 = GetDC(*(HWND *)(extraout_ECX + 0x1c));
    piVar7 = *(int **)(extraout_ECX + 0x74);
    *(HDC *)(unaff_EBP + 8) = pHVar9;
    (**(code **)(*piVar7 + 0x10))(pHVar9);
    (**(code **)(**(int **)(extraout_ECX + 0x70) + 0xf8))
              (*(undefined4 *)(extraout_ECX + 0x74),*(undefined4 *)(extraout_ECX + 0x114));
    (**(code **)(**(int **)(extraout_ECX + 0x74) + 0x18))();
    ReleaseDC(*(HWND *)(extraout_ECX + 0x1c),*(HDC *)(unaff_EBP + 8));
    (**(code **)(*(int *)(extraout_ECX + 0x78) + 0x20))(0xffffffff);
    iVar6 = GetDeviceCaps(*(HDC *)(extraout_ECX + 0x80),0x58);
    *(int *)(extraout_ECX + 0x104) = iVar6;
    iVar6 = GetDeviceCaps(*(HDC *)(extraout_ECX + 0x80),0x5a);
    *(int *)(extraout_ECX + 0x108) = iVar6;
    uVar5 = *(uint *)(*(int *)(extraout_ECX + 0x114) + 0x18);
    *(uint *)(extraout_ECX + 0xf8) = uVar5;
    if (uVar5 == 0) {
      *(undefined4 *)(extraout_ECX + 0xf8) = 1;
    }
    else if (*(uint *)(extraout_ECX + 0xf0) < uVar5) {
      *(uint *)(extraout_ECX + 0xf8) = *(uint *)(extraout_ECX + 0xf0);
    }
    *(undefined4 *)(extraout_ECX + 0xe8) = *(undefined4 *)(extraout_ECX + 0xf8);
    FUN_0056ce5f(1,1,1,&DAT_0059ccc0,&DAT_0059ccc0);
    piVar7 = *(int **)(extraout_ECX + 0x114);
    uVar3 = *(ushort *)(*(int *)(*piVar7 + 0x5c) + 0x1e);
    if ((uVar3 < 0x8000) &&
       ((uint)uVar3 - (uint)*(ushort *)(*(int *)(*piVar7 + 0x5c) + 0x1c) < 0x8000)) {
      *(undefined4 *)(unaff_EBP + -0x24) = 3;
      *(uint *)(unaff_EBP + -0x20) = (uint)*(ushort *)(*(int *)(*piVar7 + 0x5c) + 0x1c);
      *(uint *)(unaff_EBP + -0x1c) = (uint)*(ushort *)(*(int *)(*piVar7 + 0x5c) + 0x1e);
      *(undefined4 *)(unaff_EBP + -0x18) = 1;
      iVar6 = FUN_00564d7a(1,unaff_EBP + -0x28,0);
      if (iVar6 == 0) {
        FUN_00564cd4(1,*(undefined4 *)(unaff_EBP + -0x20),*(undefined4 *)(unaff_EBP + -0x1c),0);
      }
    }
    else {
      ShowScrollBar(*(HWND *)(extraout_ECX + 0x1c),1,0);
    }
    FUN_00578891(*(undefined4 *)(*(int *)(extraout_ECX + 0x114) + 0x14),1);
    iVar6 = 1;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar6;
}

