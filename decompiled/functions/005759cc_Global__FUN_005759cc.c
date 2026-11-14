// decompiled from GRAPH85emulator.exe
// function: Global::FUN_005759cc
// entry: 005759cc  size: 303


undefined4 FUN_005759cc(void)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  LSTATUS LVar5;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00555ab8();
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  iVar2 = FUN_0056e265();
  *(int *)(unaff_EBP + -0x1c) = iVar2;
  while (iVar2 != 0) {
    piVar3 = (int *)FUN_0056e277(unaff_EBP + -0x1c);
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 0xc))(0,0xfffffffc,0,0);
    }
    iVar2 = *(int *)(unaff_EBP + -0x1c);
  }
  if (*(int *)(extraout_ECX + 0x7c) != 0) {
    FUN_00567406("Software\\");
    uVar1 = *(undefined4 *)(extraout_ECX + 0x7c);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    FUN_00567673(uVar1);
    uVar4 = FUN_005675a0(unaff_EBP + -0x20,unaff_EBP + -0x10,&DAT_005bfefc);
    uVar1 = *(undefined4 *)(extraout_ECX + 0x90);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_005675a0(unaff_EBP + -0x18,uVar4,uVar1);
    *(undefined1 *)(unaff_EBP + -4) = 3;
    FUN_00567398();
    FUN_00575afb(0x80000001,unaff_EBP + -0x18);
    LVar5 = RegOpenKeyA((HKEY)0x80000001,*(LPCSTR *)(unaff_EBP + -0x10),(PHKEY)(unaff_EBP + -0x14));
    if (LVar5 == 0) {
      LVar5 = RegEnumKeyA(*(HKEY *)(unaff_EBP + -0x14),0,(LPSTR)(unaff_EBP + -300),0x104);
      if (LVar5 == 0x103) {
        FUN_00575afb(0x80000001,unaff_EBP + -0x10);
      }
      RegCloseKey(*(HKEY *)(unaff_EBP + -0x14));
    }
    RegQueryValueA((HKEY)0x80000001,*(LPCSTR *)(unaff_EBP + -0x18),(LPSTR)(unaff_EBP + -300),
                   (PLONG)(unaff_EBP + -0x24));
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_00567398();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00567398();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return 1;
}

