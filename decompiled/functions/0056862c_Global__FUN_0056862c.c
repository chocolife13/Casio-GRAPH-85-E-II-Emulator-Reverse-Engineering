// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0056862c
// entry: 0056862c  size: 577


void FUN_0056862c(void)

{
  byte bVar1;
  int *piVar2;
  UINT_PTR uIDNewItem;
  LPCSTR lpNewItem;
  undefined *puVar3;
  LPSTR lpString;
  int iVar4;
  byte *pbVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int extraout_ECX;
  byte *pbVar8;
  int iVar9;
  int unaff_EBP;
  int iVar10;
  UINT UVar11;
  
  FUN_00555ab8();
  piVar2 = *(int **)(unaff_EBP + 8);
  iVar10 = *(int *)(extraout_ECX + 0x1c);
  iVar4 = piVar2[3];
  *(int *)(unaff_EBP + -0x18) = iVar4;
  if ((*(int *)(iVar10 + -8) == 0) && (iVar4 != 0)) {
    UVar11 = 0;
    *(int *)(unaff_EBP + 8) = piVar2[1];
    iVar10 = 0x100;
    lpString = (LPSTR)FUN_005676c7(0x100);
    GetMenuStringA(*(HMENU *)(*(int *)(unaff_EBP + -0x18) + 4),*(UINT *)(unaff_EBP + 8),lpString,
                   iVar10,UVar11);
    FUN_00567716(0xffffffff);
  }
  if (*(int *)(**(int **)(extraout_ECX + 8) + -8) == 0) {
    if (*(int *)(*(int *)(extraout_ECX + 0x1c) + -8) != 0) {
      (**(code **)(*piVar2 + 0xc))(*(int *)(extraout_ECX + 0x1c));
    }
    (**(code **)*piVar2)(0);
  }
  else if (piVar2[3] != 0) {
    iVar10 = 0;
    if (0 < *(int *)(extraout_ECX + 4)) {
      do {
        DeleteMenu(*(HMENU *)(piVar2[3] + 4),piVar2[1] + iVar10,0);
        iVar10 = iVar10 + 1;
      } while (iVar10 < *(int *)(extraout_ECX + 4));
    }
    GetCurrentDirectoryA(0x104,(LPSTR)(unaff_EBP + -0x130));
    iVar4 = lstrlenA((LPCSTR)(unaff_EBP + -0x130));
    puVar3 = PTR_DAT_005cba44;
    *(undefined1 *)(unaff_EBP + -0x130 + iVar4) = 0x5c;
    *(undefined1 *)(unaff_EBP + -0x12f + iVar4) = 0;
    iVar4 = iVar4 + 1;
    *(int *)(unaff_EBP + -0x18) = iVar4;
    *(undefined **)(unaff_EBP + -0x14) = puVar3;
    iVar9 = 0;
    *(undefined **)(unaff_EBP + -0x10) = puVar3;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    iVar10 = *(int *)(extraout_ECX + 4);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (0 < iVar10) {
      while (iVar10 = FUN_00568526(unaff_EBP + -0x14,iVar9,unaff_EBP + -0x130,iVar4,1), iVar10 != 0)
      {
        *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + -0x14);
        pbVar5 = (byte *)FUN_005676c7(*(int *)(*(int *)(unaff_EBP + -0x14) + -8) * 2);
        for (pbVar8 = *(byte **)(unaff_EBP + 8); *pbVar8 != 0; pbVar8 = pbVar8 + 1) {
          if (*pbVar8 == 0x26) {
            *pbVar5 = 0x26;
            pbVar5 = pbVar5 + 1;
          }
          bVar1 = *pbVar8;
          *(byte *)(unaff_EBP + 0xb) = bVar1;
          if (((&DAT_005da801)[bVar1] & 4) != 0) {
            *pbVar5 = *(byte *)(unaff_EBP + 0xb);
            pbVar5 = pbVar5 + 1;
            pbVar8 = pbVar8 + 1;
          }
          *pbVar5 = *pbVar8;
          pbVar5 = pbVar5 + 1;
        }
        *pbVar5 = 0;
        FUN_00567716(0xffffffff);
        wsprintfA((LPSTR)(unaff_EBP + -0x2c),"&%d ",
                  (uint)(*(int *)(extraout_ECX + 0x14) + 1 + iVar9) % 10);
        uVar6 = FUN_00567406(unaff_EBP + -0x2c);
        *(undefined1 *)(unaff_EBP + -4) = 2;
        puVar7 = (undefined4 *)FUN_0056753a(unaff_EBP + -0x1c,uVar6,unaff_EBP + -0x10);
        UVar11 = piVar2[2];
        *(undefined4 *)(unaff_EBP + 8) = *puVar7;
        uIDNewItem = piVar2[1];
        lpNewItem = *(LPCSTR *)(unaff_EBP + 8);
        piVar2[2] = UVar11 + 1;
        piVar2[1] = uIDNewItem + 1;
        InsertMenuA(*(HMENU *)(piVar2[3] + 4),UVar11,0x400,uIDNewItem,lpNewItem);
        FUN_00567398();
        *(undefined1 *)(unaff_EBP + -4) = 1;
        FUN_00567398();
        iVar9 = iVar9 + 1;
        if (*(int *)(extraout_ECX + 4) <= iVar9) break;
        iVar4 = *(int *)(unaff_EBP + -0x18);
      }
    }
    piVar2[2] = piVar2[2] + -1;
    iVar10 = GetMenuItemCount(*(HMENU *)(piVar2[3] + 4));
    *(undefined1 *)(unaff_EBP + -4) = 0;
    piVar2[8] = iVar10;
    piVar2[6] = 1;
    FUN_00567398();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00567398();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

