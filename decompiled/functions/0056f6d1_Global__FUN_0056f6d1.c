// decompiled from GRAPH85emulator.exe
// function: Global::FUN_0056f6d1
// entry: 0056f6d1  size: 1508


undefined4 FUN_0056f6d1(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  BOOL BVar4;
  int *piVar5;
  undefined4 extraout_ECX;
  int unaff_EBP;
  undefined4 uVar6;
  
  FUN_00555ab8();
  *(undefined4 *)(unaff_EBP + -0x14) = extraout_ECX;
  FUN_00567406(*(undefined4 *)(unaff_EBP + 8));
  uVar6 = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_005753ef();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  *(undefined4 *)(unaff_EBP + -0x30) = 4;
  puVar1 = (undefined4 *)FUN_00560ded(unaff_EBP + -0x18,7);
  iVar2 = FUN_005546c3(*puVar1,"[open(\"");
  FUN_00567398();
  if (iVar2 == 0) {
    *(undefined4 *)(unaff_EBP + -0x30) = 1;
    uVar6 = FUN_00560d71(unaff_EBP + -0x18,*(int *)(*(int *)(unaff_EBP + 8) + -8) + -7);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    FUN_00567485(uVar6);
    *(undefined1 *)(unaff_EBP + -4) = 1;
  }
  else {
    puVar1 = (undefined4 *)FUN_00560ded(unaff_EBP + -0x18,8);
    iVar2 = FUN_005546c3(*puVar1,"[print(\"");
    FUN_00567398();
    if (iVar2 == 0) {
      *(undefined4 *)(unaff_EBP + -0x30) = 2;
      uVar6 = FUN_00560d71(unaff_EBP + -0x18,*(int *)(*(int *)(unaff_EBP + 8) + -8) + -8);
      *(undefined1 *)(unaff_EBP + -4) = 3;
      FUN_00567485(uVar6);
      *(undefined1 *)(unaff_EBP + -4) = 1;
    }
    else {
      puVar1 = (undefined4 *)FUN_00560ded(unaff_EBP + -0x18,10);
      iVar2 = FUN_005546c3(*puVar1,"[printto(\"");
      FUN_00567398();
      if (iVar2 != 0) goto LAB_0056fc8a;
      *(undefined4 *)(unaff_EBP + -0x30) = 3;
      uVar6 = FUN_00560d71(unaff_EBP + -0x18,*(int *)(*(int *)(unaff_EBP + 8) + -8) + -10);
      *(undefined1 *)(unaff_EBP + -4) = 4;
      FUN_00567485(uVar6);
      *(undefined1 *)(unaff_EBP + -4) = 1;
    }
  }
  FUN_00567398();
  iVar2 = FUN_0056775e(0x22);
  if (iVar2 == -1) {
    uVar6 = 0;
    goto LAB_0056fc8a;
  }
  uVar6 = FUN_00560ded(unaff_EBP + -0x18,iVar2);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_00567485(uVar6);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00567398();
  uVar6 = FUN_00560d71(unaff_EBP + -0x18,*(int *)(*(int *)(unaff_EBP + 8) + -8) - iVar2);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_00567485(uVar6);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00567398();
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x10) = 1;
  iVar2 = FUN_0057497f();
  if (*(int *)(*(int *)(iVar2 + 4) + 0xac) == 0) {
    iVar2 = FUN_0057497f();
    *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(*(int *)(iVar2 + 4) + 0xac);
  }
  else {
    iVar2 = FUN_0057497f();
    iVar2 = *(int *)(iVar2 + 4);
    iVar3 = FUN_0057497f();
    *(undefined4 *)(*(int *)(iVar3 + 4) + 0x74) = *(undefined4 *)(iVar2 + 0xac);
    iVar2 = FUN_0057497f();
    *(int *)(*(int *)(iVar2 + 4) + 0xac) = unaff_EBP + -0x40;
  }
  if (*(int *)(unaff_EBP + -0x30) == 1) {
    iVar2 = FUN_0057497f();
    iVar2 = *(int *)(*(int *)(iVar2 + 4) + 0x1c);
    iVar3 = FUN_0057497f();
    iVar3 = *(int *)(*(int *)(iVar3 + 4) + 0x74);
    if ((iVar3 == -1) || (iVar3 == 1)) {
      BVar4 = IsIconic(*(HWND *)(iVar2 + 0x1c));
      iVar3 = (-(uint)(BVar4 != 0) & 4) + 5;
    }
    FUN_00566342(iVar3);
    if (iVar3 != 6) {
      SetForegroundWindow(*(HWND *)(iVar2 + 0x1c));
    }
    iVar2 = FUN_0057497f();
    (**(code **)(**(int **)(iVar2 + 4) + 0x7c))(*(undefined4 *)(unaff_EBP + -0x2c));
    iVar2 = FUN_0057391f();
    if (iVar2 == 0) {
      FUN_00573910(1);
    }
    iVar2 = FUN_0057497f();
    *(undefined4 *)(*(int *)(iVar2 + 4) + 0x74) = 0xffffffff;
  }
  else if (*(int *)(unaff_EBP + -0x30) == 3) {
    puVar1 = (undefined4 *)FUN_00560ded(unaff_EBP + -0x1c,3);
    iVar2 = FUN_005546c3(*puVar1,&DAT_0059ca24);
    FUN_00567398();
    if (iVar2 == 0) {
      uVar6 = FUN_00560d71(unaff_EBP + -0x1c,*(int *)(*(int *)(unaff_EBP + 8) + -8) + -3);
      *(undefined1 *)(unaff_EBP + -4) = 7;
      FUN_00567485(uVar6);
      *(undefined1 *)(unaff_EBP + -4) = 1;
      FUN_00567398();
      iVar2 = FUN_0056775e(0x22);
      if (iVar2 != -1) {
        uVar6 = FUN_00560ded(unaff_EBP + -0x1c,iVar2);
        *(undefined1 *)(unaff_EBP + -4) = 8;
        FUN_00567485(uVar6);
        *(undefined1 *)(unaff_EBP + -4) = 1;
        FUN_00567398();
        uVar6 = FUN_00560d71(unaff_EBP + -0x1c,*(int *)(*(int *)(unaff_EBP + 8) + -8) - iVar2);
        *(undefined1 *)(unaff_EBP + -4) = 9;
        FUN_00567485(uVar6);
        *(undefined1 *)(unaff_EBP + -4) = 1;
        FUN_00567398();
        puVar1 = (undefined4 *)FUN_00560ded(unaff_EBP + -0x1c,3);
        iVar2 = FUN_005546c3(*puVar1,&DAT_0059ca24);
        FUN_00567398();
        if (iVar2 == 0) {
          uVar6 = FUN_00560d71(unaff_EBP + -0x1c,*(int *)(*(int *)(unaff_EBP + 8) + -8) + -3);
          *(undefined1 *)(unaff_EBP + -4) = 10;
          FUN_00567485(uVar6);
          *(undefined1 *)(unaff_EBP + -4) = 1;
          FUN_00567398();
          iVar2 = FUN_0056775e(0x22);
          if (iVar2 != -1) {
            uVar6 = FUN_00560ded(unaff_EBP + -0x1c,iVar2);
            *(undefined1 *)(unaff_EBP + -4) = 0xb;
            FUN_00567485(uVar6);
            *(undefined1 *)(unaff_EBP + -4) = 1;
            FUN_00567398();
            uVar6 = FUN_00560d71(unaff_EBP + -0x1c,*(int *)(*(int *)(unaff_EBP + 8) + -8) - iVar2);
            *(undefined1 *)(unaff_EBP + -4) = 0xc;
            FUN_00567485(uVar6);
            *(undefined1 *)(unaff_EBP + -4) = 1;
            FUN_00567398();
            puVar1 = (undefined4 *)FUN_00560ded(unaff_EBP + -0x1c,3);
            iVar2 = FUN_005546c3(*puVar1,&DAT_0059ca24);
            FUN_00567398();
            if (iVar2 == 0) {
              uVar6 = FUN_00560d71(unaff_EBP + -0x1c,*(int *)(*(int *)(unaff_EBP + 8) + -8) + -3);
              *(undefined1 *)(unaff_EBP + -4) = 0xd;
              FUN_00567485(uVar6);
              *(undefined1 *)(unaff_EBP + -4) = 1;
              FUN_00567398();
              iVar2 = FUN_0056775e(0x22);
              if (iVar2 != -1) {
                uVar6 = FUN_00560ded(unaff_EBP + -0x1c,iVar2);
                *(undefined1 *)(unaff_EBP + -4) = 0xe;
                FUN_00567485(uVar6);
                *(undefined1 *)(unaff_EBP + -4) = 1;
                FUN_00567398();
                uVar6 = FUN_00560d71(unaff_EBP + -0x1c,
                                     *(int *)(*(int *)(unaff_EBP + 8) + -8) - iVar2);
                *(undefined1 *)(unaff_EBP + -4) = 0xf;
                FUN_00567485(uVar6);
                *(undefined1 *)(unaff_EBP + -4) = 1;
                FUN_00567398();
                goto LAB_0056fbe4;
              }
            }
          }
        }
      }
    }
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
  }
  else {
LAB_0056fbe4:
    iVar2 = FUN_0056f68f();
    iVar3 = FUN_0057497f();
    piVar5 = (int *)(**(code **)(**(int **)(iVar3 + 4) + 0x7c))(*(undefined4 *)(unaff_EBP + -0x2c));
    iVar3 = FUN_0057497f();
    *(int *)(*(int *)(iVar3 + 4) + 0xac) = unaff_EBP + -0x40;
    iVar3 = FUN_0057497f();
    SendMessageA(*(HWND *)(*(int *)(*(int *)(iVar3 + 4) + 0x1c) + 0x1c),0x111,0xe108,0);
    iVar3 = FUN_0057497f();
    *(undefined4 *)(*(int *)(iVar3 + 4) + 0xac) = 0;
    iVar3 = FUN_0056f68f();
    if (iVar2 < iVar3) {
      (**(code **)(*piVar5 + 0x7c))();
    }
    iVar2 = FUN_0057391f();
    if (iVar2 == 0) {
      iVar2 = FUN_0057497f();
      PostMessageA(*(HWND *)(*(int *)(*(int *)(iVar2 + 4) + 0x1c) + 0x1c),0x10,0,0);
    }
  }
  iVar2 = FUN_0057497f();
  uVar6 = *(undefined4 *)(unaff_EBP + -0x10);
  *(undefined4 *)(*(int *)(iVar2 + 4) + 0xac) = *(undefined4 *)(unaff_EBP + -0x18);
LAB_0056fc8a:
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_0057544a();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00567398();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar6;
}

