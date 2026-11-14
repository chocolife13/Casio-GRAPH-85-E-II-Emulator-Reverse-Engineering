// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005772bf
// entry: 005772bf  size: 521


void FUN_005772bf(void)

{
  ushort uVar1;
  LPCSTR lpString2;
  ushort *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int extraout_ECX;
  CDialog *this;
  int unaff_EBP;
  bool bVar5;
  
  FUN_00555ab8();
  if ((*(int *)(unaff_EBP + 8) == 0) && (*(HGLOBAL *)(extraout_ECX + 0x98) != (HGLOBAL)0x0)) {
    puVar2 = (ushort *)GlobalLock(*(HGLOBAL *)(extraout_ECX + 0x98));
    if ((puVar2[3] & 1) == 0) goto LAB_005774b7;
    FUN_0056120b(1,0x14000c,0);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    FUN_0056147b();
    if (*(int *)(*(int *)(unaff_EBP + -0x60) + 0xc) == 0) {
      if (*(int *)(extraout_ECX + 0x94) != 0) {
        FUN_0056c2fb(*(int *)(extraout_ECX + 0x94));
      }
      FUN_0056c2fb(*(undefined4 *)(extraout_ECX + 0x98));
      *(undefined4 *)(extraout_ECX + 0x94) = 0;
      *(undefined4 *)(extraout_ECX + 0x98) = 0;
    }
    else {
      puVar3 = (undefined4 *)FUN_005613c2(unaff_EBP + -0x10);
      lpString2 = (LPCSTR)*puVar3;
      uVar1 = *puVar2;
      *(undefined1 *)(unaff_EBP + -4) = 1;
      iVar4 = lstrcmpA((LPCSTR)((uint)uVar1 + (int)puVar2),lpString2);
      if (iVar4 == 0) {
        puVar3 = (undefined4 *)FUN_005613ff(unaff_EBP + -0x14);
        iVar4 = lstrcmpA((LPCSTR)((uint)puVar2[1] + (int)puVar2),(LPCSTR)*puVar3);
        *(bool *)(unaff_EBP + 0xb) = iVar4 != 0;
        FUN_00567398();
        if (*(char *)(unaff_EBP + 0xb) != '\0') goto LAB_005773d7;
        puVar3 = (undefined4 *)FUN_0056143d(unaff_EBP + -0x18);
        iVar4 = lstrcmpA((LPCSTR)((uint)puVar2[2] + (int)puVar2),(LPCSTR)*puVar3);
        bVar5 = iVar4 != 0;
        FUN_00567398();
        if (bVar5) goto LAB_005773d7;
      }
      else {
LAB_005773d7:
        bVar5 = true;
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      FUN_00567398();
      if (bVar5) {
        if (*(int *)(extraout_ECX + 0x94) != 0) {
          FUN_0056c2fb(*(int *)(extraout_ECX + 0x94));
        }
        FUN_0056c2fb(*(undefined4 *)(extraout_ECX + 0x98));
        iVar4 = *(int *)(unaff_EBP + -0x60);
        *(undefined4 *)(extraout_ECX + 0x94) = *(undefined4 *)(iVar4 + 8);
        *(undefined4 *)(extraout_ECX + 0x98) = *(undefined4 *)(iVar4 + 0xc);
      }
      else {
        iVar4 = *(int *)(*(int *)(unaff_EBP + -0x60) + 8);
        if (iVar4 != 0) {
          FUN_0056c2fb(iVar4);
        }
        iVar4 = *(int *)(*(int *)(unaff_EBP + -0x60) + 0xc);
        if (iVar4 != 0) {
          FUN_0056c2fb(iVar4);
        }
      }
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    this = (CDialog *)(unaff_EBP + -0xbc);
  }
  else {
    FUN_0056120b(1,0x14000c,0);
    *(undefined4 *)(unaff_EBP + -4) = 2;
    FUN_0056147b();
    if (*(int *)(extraout_ECX + 0x94) != 0) {
      FUN_0056c2fb(*(int *)(extraout_ECX + 0x94));
    }
    if (*(int *)(extraout_ECX + 0x98) != 0) {
      FUN_0056c2fb(*(int *)(extraout_ECX + 0x98));
    }
    iVar4 = *(int *)(unaff_EBP + -0x104);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    *(undefined4 *)(extraout_ECX + 0x94) = *(undefined4 *)(iVar4 + 8);
    *(undefined4 *)(extraout_ECX + 0x98) = *(undefined4 *)(iVar4 + 0xc);
    this = (CDialog *)(unaff_EBP + -0x160);
  }
  CDialog::~CDialog(this);
LAB_005774b7:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

