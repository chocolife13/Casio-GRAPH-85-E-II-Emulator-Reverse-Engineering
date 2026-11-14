// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005769c6
// entry: 005769c6  size: 615


void FUN_005769c6(void)

{
  undefined4 *puVar1;
  int *piVar2;
  LPCSTR lpSubKey;
  undefined4 *puVar3;
  undefined *puVar4;
  int iVar5;
  LPSTR lpData;
  LSTATUS LVar6;
  int extraout_ECX;
  int unaff_EBP;
  PLONG lpcbData;
  
  FUN_00555ab8();
  puVar4 = PTR_DAT_005cba44;
  *(undefined **)(unaff_EBP + -0x20) = PTR_DAT_005cba44;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined **)(unaff_EBP + -0x10) = puVar4;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iVar5 = FUN_0057497f();
  FUN_005693d2(*(undefined4 *)(iVar5 + 8),unaff_EBP + -0x20);
  puVar3 = *(undefined4 **)(extraout_ECX + 8);
  puVar4 = PTR_DAT_005cba44;
  while (PTR_DAT_005cba44 = puVar4, puVar3 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*puVar3;
    piVar2 = (int *)puVar3[2];
    *(undefined **)(unaff_EBP + -0x18) = puVar4;
    *(undefined **)(unaff_EBP + -0x14) = puVar4;
    *(undefined **)(unaff_EBP + -0x1c) = puVar4;
    iVar5 = *piVar2;
    *(undefined1 *)(unaff_EBP + -4) = 4;
    iVar5 = (**(code **)(iVar5 + 100))(unaff_EBP + -0x14,5);
    if ((iVar5 != 0) && (*(int *)(*(int *)(unaff_EBP + -0x14) + -8) != 0)) {
      iVar5 = (**(code **)(*piVar2 + 100))(unaff_EBP + -0x1c,6);
      if (iVar5 == 0) {
        FUN_00567485(unaff_EBP + -0x14);
      }
      FUN_0056116d(unaff_EBP + -0x10,"%s\\DefaultIcon",*(undefined4 *)(unaff_EBP + -0x14));
      FUN_0057685f(*(undefined4 *)(unaff_EBP + -0x10));
      iVar5 = (**(code **)(*piVar2 + 100))(unaff_EBP + -0x10,0);
      if ((iVar5 == 0) || (*(int *)(*(int *)(unaff_EBP + -0x10) + -8) == 0)) {
        FUN_0056116d(unaff_EBP + -0x10,"%s\\shell\\open\\%s",*(undefined4 *)(unaff_EBP + -0x14),
                     "ddeexec");
        FUN_0057685f(*(undefined4 *)(unaff_EBP + -0x10));
        FUN_0056116d(unaff_EBP + -0x10,"%s\\shell\\print\\%s",*(undefined4 *)(unaff_EBP + -0x14),
                     "ddeexec");
        FUN_0057685f(*(undefined4 *)(unaff_EBP + -0x10));
        FUN_0056116d(unaff_EBP + -0x10,"%s\\shell\\printto\\%s",*(undefined4 *)(unaff_EBP + -0x14),
                     "ddeexec");
        FUN_0057685f(*(undefined4 *)(unaff_EBP + -0x10));
      }
      FUN_0056116d(unaff_EBP + -0x10,"%s\\shell\\open\\%s",*(undefined4 *)(unaff_EBP + -0x14),
                   "command");
      FUN_0057685f(*(undefined4 *)(unaff_EBP + -0x10));
      FUN_0056116d(unaff_EBP + -0x10,"%s\\shell\\print\\%s",*(undefined4 *)(unaff_EBP + -0x14),
                   "command");
      FUN_0057685f(*(undefined4 *)(unaff_EBP + -0x10));
      FUN_0056116d(unaff_EBP + -0x10,"%s\\shell\\printto\\%s",*(undefined4 *)(unaff_EBP + -0x14),
                   "command");
      FUN_0057685f(*(undefined4 *)(unaff_EBP + -0x10));
      (**(code **)(*piVar2 + 100))(unaff_EBP + -0x18,4);
      lpSubKey = *(LPCSTR *)(unaff_EBP + -0x18);
      if (*(int *)(lpSubKey + -8) != 0) {
        lpcbData = (PLONG)(unaff_EBP + -0x24);
        *(undefined4 *)(unaff_EBP + -0x24) = 0x208;
        lpData = (LPSTR)FUN_005676c7(0x208);
        LVar6 = RegQueryValueA((HKEY)0x80000000,lpSubKey,lpData,lpcbData);
        FUN_00567716(0xffffffff);
        if (((LVar6 != 0) || (*(int *)(*(int *)(unaff_EBP + -0x10) + -8) == 0)) ||
           (iVar5 = FUN_005546c3(*(int *)(unaff_EBP + -0x10),*(undefined4 *)(unaff_EBP + -0x14)),
           iVar5 == 0)) {
          FUN_0056116d(unaff_EBP + -0x10,"%s\\ShellNew",*(undefined4 *)(unaff_EBP + -0x18));
          FUN_0057685f(*(undefined4 *)(unaff_EBP + -0x10));
          FUN_0057685f(*(undefined4 *)(unaff_EBP + -0x18));
        }
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 3;
    FUN_00567398();
    *(undefined1 *)(unaff_EBP + -4) = 2;
    FUN_00567398();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_00567398();
    puVar3 = puVar1;
    puVar4 = PTR_DAT_005cba44;
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00567398();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00567398();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

