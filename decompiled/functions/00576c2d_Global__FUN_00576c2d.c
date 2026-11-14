// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00576c2d
// entry: 00576c2d  size: 1085


void FUN_00576c2d(void)

{
  int *piVar1;
  LPCSTR lpSubKey;
  undefined *puVar2;
  int iVar3;
  undefined4 *puVar4;
  HICON hIcon;
  LPSTR lpData;
  LSTATUS LVar5;
  int extraout_ECX;
  int unaff_EBP;
  char *pcVar6;
  PLONG lpcbData;
  
  FUN_00555ab8();
  puVar2 = PTR_DAT_005cba44;
  *(undefined **)(unaff_EBP + -0x30) = PTR_DAT_005cba44;
  *(undefined **)(unaff_EBP + -0x14) = puVar2;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iVar3 = FUN_0057497f();
  FUN_005693d2(*(undefined4 *)(iVar3 + 8),unaff_EBP + -0x30);
  puVar4 = *(undefined4 **)(extraout_ECX + 8);
  *(undefined4 *)(unaff_EBP + -0x38) = 1;
  if (puVar4 == (undefined4 *)0x0) {
LAB_00577043:
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_00567398();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00567398();
    ExceptionList = *(void **)(unaff_EBP + -0xc);
    return;
  }
  do {
    piVar1 = (int *)puVar4[2];
    *(undefined4 *)(unaff_EBP + -0x3c) = *puVar4;
    FUN_0056710d(unaff_EBP + -0x30);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    FUN_0056710d(unaff_EBP + -0x30);
    *(undefined1 *)(unaff_EBP + -4) = 3;
    FUN_0056710d(unaff_EBP + -0x30);
    *(undefined1 *)(unaff_EBP + -4) = 4;
    FUN_0056710d(unaff_EBP + -0x30);
    if (*(int *)(unaff_EBP + 8) != 0) {
      *(undefined **)(unaff_EBP + -0x34) = PTR_DAT_005cba44;
      *(undefined1 *)(unaff_EBP + -4) = 6;
      iVar3 = FUN_0057497f();
      hIcon = ExtractIconA(*(HINSTANCE *)(iVar3 + 8),*(LPCSTR *)(unaff_EBP + -0x30),
                           *(UINT *)(unaff_EBP + -0x38));
      if (hIcon == (HICON)0x0) {
        FUN_0056116d(unaff_EBP + -0x34,&DAT_0059c988,0);
      }
      else {
        FUN_0056116d(unaff_EBP + -0x34,&DAT_0059c988,*(undefined4 *)(unaff_EBP + -0x38));
        DestroyIcon(hIcon);
      }
      FUN_005676af(unaff_EBP + -0x34);
      *(undefined1 *)(unaff_EBP + -4) = 5;
      FUN_00567398();
    }
    puVar2 = PTR_DAT_005cba44;
    *(undefined **)(unaff_EBP + -0x18) = PTR_DAT_005cba44;
    *(undefined **)(unaff_EBP + -0x10) = puVar2;
    *(undefined **)(unaff_EBP + -0x20) = puVar2;
    iVar3 = *piVar1;
    *(undefined1 *)(unaff_EBP + -4) = 9;
    iVar3 = (**(code **)(iVar3 + 100))(unaff_EBP + -0x10,5);
    if ((iVar3 != 0) && (*(int *)(*(int *)(unaff_EBP + -0x10) + -8) != 0)) {
      iVar3 = (**(code **)(*piVar1 + 100))(unaff_EBP + -0x20,6);
      if (iVar3 == 0) {
        FUN_00567485(unaff_EBP + -0x10);
      }
      iVar3 = FUN_005768f5(*(undefined4 *)(unaff_EBP + -0x10),*(undefined4 *)(unaff_EBP + -0x20),0);
      if (iVar3 != 0) {
        if (*(int *)(unaff_EBP + 8) != 0) {
          FUN_0056116d(unaff_EBP + -0x14,"%s\\DefaultIcon",*(undefined4 *)(unaff_EBP + -0x10));
          iVar3 = FUN_005768f5(*(undefined4 *)(unaff_EBP + -0x14),*(undefined4 *)(unaff_EBP + -0x2c)
                               ,0);
          if (iVar3 == 0) goto LAB_00576fe2;
        }
        iVar3 = (**(code **)(*piVar1 + 100))(unaff_EBP + -0x14,0);
        if ((iVar3 == 0) || (*(int *)(*(int *)(unaff_EBP + -0x14) + -8) == 0)) {
          FUN_0056116d(unaff_EBP + -0x14,"%s\\shell\\open\\%s",*(undefined4 *)(unaff_EBP + -0x10),
                       "ddeexec");
          iVar3 = FUN_005768f5(*(undefined4 *)(unaff_EBP + -0x14),"[open(\"%1\")]",0);
          if (iVar3 != 0) {
            if (*(int *)(unaff_EBP + 8) == 0) {
              pcVar6 = " \"%1\"";
LAB_00576eb9:
              FUN_00567673(pcVar6);
              goto LAB_00576ebe;
            }
            FUN_0056116d(unaff_EBP + -0x14,"%s\\shell\\print\\%s",*(undefined4 *)(unaff_EBP + -0x10)
                         ,"ddeexec");
            iVar3 = FUN_005768f5(*(undefined4 *)(unaff_EBP + -0x14),"[print(\"%1\")]",0);
            if (iVar3 != 0) {
              FUN_0056116d(unaff_EBP + -0x14,"%s\\shell\\printto\\%s",
                           *(undefined4 *)(unaff_EBP + -0x10),"ddeexec");
              iVar3 = FUN_005768f5(*(undefined4 *)(unaff_EBP + -0x14),
                                   "[printto(\"%1\",\"%2\",\"%3\",\"%4\")]",0);
              if (iVar3 != 0) {
                FUN_00567673(" /dde");
                FUN_00567673(" /dde");
                pcVar6 = " /dde";
                goto LAB_00576eb9;
              }
            }
          }
        }
        else {
          FUN_00567673(" \"%1\"");
          if (*(int *)(unaff_EBP + 8) != 0) {
            FUN_00567673(" /p \"%1\"");
            pcVar6 = " /pt \"%1\" \"%2\" \"%3\" \"%4\"";
            goto LAB_00576eb9;
          }
LAB_00576ebe:
          FUN_0056116d(unaff_EBP + -0x14,"%s\\shell\\open\\%s",*(undefined4 *)(unaff_EBP + -0x10),
                       "command");
          iVar3 = FUN_005768f5(*(undefined4 *)(unaff_EBP + -0x14),*(undefined4 *)(unaff_EBP + -0x1c)
                               ,0);
          if (iVar3 != 0) {
            if (*(int *)(unaff_EBP + 8) == 0) {
LAB_00576f43:
              (**(code **)(*piVar1 + 100))(unaff_EBP + -0x18,4);
              lpSubKey = *(LPCSTR *)(unaff_EBP + -0x18);
              if (*(int *)(lpSubKey + -8) != 0) {
                lpcbData = (PLONG)(unaff_EBP + -0x40);
                *(undefined4 *)(unaff_EBP + -0x40) = 0x208;
                lpData = (LPSTR)FUN_005676c7(0x208);
                LVar5 = RegQueryValueA((HKEY)0x80000000,lpSubKey,lpData,lpcbData);
                FUN_00567716(0xffffffff);
                if ((((LVar5 != 0) || (*(int *)(*(int *)(unaff_EBP + -0x14) + -8) == 0)) ||
                    (iVar3 = FUN_005546c3(*(int *)(unaff_EBP + -0x14),
                                          *(undefined4 *)(unaff_EBP + -0x10)), iVar3 == 0)) &&
                   ((iVar3 = FUN_005768f5(*(undefined4 *)(unaff_EBP + -0x18),
                                          *(undefined4 *)(unaff_EBP + -0x10),0), iVar3 != 0 &&
                    (*(int *)(unaff_EBP + 8) != 0)))) {
                  FUN_0056116d(unaff_EBP + -0x14,"%s\\ShellNew",*(undefined4 *)(unaff_EBP + -0x18));
                  FUN_005768f5(*(undefined4 *)(unaff_EBP + -0x14),&DAT_0059c8f0,"NullFile");
                }
              }
            }
            else {
              FUN_0056116d(unaff_EBP + -0x14,"%s\\shell\\print\\%s",
                           *(undefined4 *)(unaff_EBP + -0x10),"command");
              iVar3 = FUN_005768f5(*(undefined4 *)(unaff_EBP + -0x14),
                                   *(undefined4 *)(unaff_EBP + -0x28),0);
              if (iVar3 != 0) {
                FUN_0056116d(unaff_EBP + -0x14,"%s\\shell\\printto\\%s",
                             *(undefined4 *)(unaff_EBP + -0x10),"command");
                iVar3 = FUN_005768f5(*(undefined4 *)(unaff_EBP + -0x14),
                                     *(undefined4 *)(unaff_EBP + -0x24),0);
                if (iVar3 != 0) goto LAB_00576f43;
              }
            }
          }
        }
      }
    }
LAB_00576fe2:
    *(undefined1 *)(unaff_EBP + -4) = 8;
    FUN_00567398();
    *(undefined1 *)(unaff_EBP + -4) = 7;
    FUN_00567398();
    *(undefined1 *)(unaff_EBP + -4) = 5;
    FUN_00567398();
    *(undefined1 *)(unaff_EBP + -4) = 4;
    FUN_00567398();
    *(undefined1 *)(unaff_EBP + -4) = 3;
    FUN_00567398();
    *(undefined1 *)(unaff_EBP + -4) = 2;
    FUN_00567398();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_00567398();
    *(int *)(unaff_EBP + -0x38) = *(int *)(unaff_EBP + -0x38) + 1;
    if (*(int *)(unaff_EBP + -0x3c) == 0) goto LAB_00577043;
    puVar4 = *(undefined4 **)(unaff_EBP + -0x3c);
  } while( true );
}

