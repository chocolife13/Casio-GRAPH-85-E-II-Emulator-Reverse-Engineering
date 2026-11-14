// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0056b23a
// entry: 0056b23a  size: 423


undefined4 FUN_0056b23a(void)

{
  int iVar1;
  BOOL BVar2;
  undefined4 uVar3;
  PSECURITY_DESCRIPTOR pSecurityDescriptor;
  int extraout_ECX;
  uint uVar4;
  int unaff_EBP;
  
  FUN_00555ab8();
  FUN_00567323();
  if ((*(byte *)(unaff_EBP + 0xd) & 0x10) != 0) {
    iVar1 = FUN_005699e3(*(undefined4 *)(unaff_EBP + 8),unaff_EBP + -0x150);
    if (iVar1 != 0) {
      *(undefined **)(unaff_EBP + -0x10) = PTR_DAT_005cba44;
      uVar4 = 0;
      *(undefined4 *)(unaff_EBP + -4) = 0;
      FUN_005691f3(*(undefined4 *)(unaff_EBP + 8),unaff_EBP + -0x10);
      BVar2 = GetDiskFreeSpaceA(*(LPCSTR *)(unaff_EBP + -0x10),(LPDWORD)(unaff_EBP + -0x24),
                                (LPDWORD)(unaff_EBP + -0x20),(LPDWORD)(unaff_EBP + -0x1c),
                                (LPDWORD)(unaff_EBP + -0x28));
      if (BVar2 != 0) {
        uVar4 = *(int *)(unaff_EBP + -0x24) * *(int *)(unaff_EBP + -0x20) *
                *(int *)(unaff_EBP + -0x1c);
      }
      if ((uint)(*(int *)(unaff_EBP + -0x144) * 2) < uVar4) {
        uVar3 = FUN_0056b194(unaff_EBP + -0x14,*(undefined4 *)(unaff_EBP + 8),1);
        *(undefined1 *)(unaff_EBP + -4) = 1;
        FUN_00567485(uVar3);
        *(undefined1 *)(unaff_EBP + -4) = 0;
        FUN_00567398();
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_00567398();
    }
  }
  iVar1 = *(int *)(extraout_ECX + 0x10);
  if (*(int *)(iVar1 + -8) != 0) {
    iVar1 = FUN_00568a9b(iVar1,*(undefined4 *)(unaff_EBP + 0xc),*(undefined4 *)(unaff_EBP + 0x10));
    if (iVar1 != 0) {
      FUN_005674d5(*(undefined4 *)(unaff_EBP + 8));
      BVar2 = GetFileTime(*(HANDLE *)(extraout_ECX + 4),(LPFILETIME)(unaff_EBP + -0x18),
                          (LPFILETIME)(unaff_EBP + -0x30),(LPFILETIME)(unaff_EBP + -0x38));
      if (BVar2 != 0) {
        FUN_00569a95(unaff_EBP + -0x150,unaff_EBP + -0x18);
        SetFileTime(*(HANDLE *)(extraout_ECX + 4),(FILETIME *)(unaff_EBP + -0x18),
                    (FILETIME *)(unaff_EBP + -0x30),(FILETIME *)(unaff_EBP + -0x38));
      }
      *(undefined4 *)(unaff_EBP + 0xc) = 0;
      BVar2 = GetFileSecurityA(*(LPCSTR *)(unaff_EBP + 8),4,(PSECURITY_DESCRIPTOR)0x0,0,
                               (LPDWORD)(unaff_EBP + 0xc));
      if (BVar2 != 0) {
        pSecurityDescriptor = (PSECURITY_DESCRIPTOR)FUN_00566937(*(undefined4 *)(unaff_EBP + 0xc));
        BVar2 = GetFileSecurityA(*(LPCSTR *)(unaff_EBP + 8),4,pSecurityDescriptor,
                                 *(DWORD *)(unaff_EBP + 0xc),(LPDWORD)(unaff_EBP + 0xc));
        if (BVar2 != 0) {
          SetFileSecurityA(*(LPCSTR *)(extraout_ECX + 0x10),4,pSecurityDescriptor);
        }
        FUN_00566960(pSecurityDescriptor);
      }
      uVar3 = 1;
      goto LAB_0056b3d0;
    }
  }
  FUN_00567323();
  uVar3 = FUN_00568a9b(*(undefined4 *)(unaff_EBP + 8),*(undefined4 *)(unaff_EBP + 0xc),
                       *(undefined4 *)(unaff_EBP + 0x10));
LAB_0056b3d0:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar3;
}

