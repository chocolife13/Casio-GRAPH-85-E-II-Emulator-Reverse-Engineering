// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00562b17
// entry: 00562b17  size: 249


undefined4 FUN_00562b17(void)

{
  int iVar1;
  HRSRC hResInfo;
  HGLOBAL hResData;
  LPVOID pvVar2;
  undefined4 uVar3;
  HWND__ *pHVar4;
  BOOL BVar5;
  uint uVar6;
  HWND pHVar7;
  CDialog *this;
  HMODULE hModule;
  int unaff_EBP;
  
  FUN_00555ab8();
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffdc;
  *(CDialog **)(unaff_EBP + -0x1c) = this;
  hResData = *(HGLOBAL *)(this + 0x44);
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(this + 0x48);
  iVar1 = FUN_0057497f();
  hModule = *(HMODULE *)(iVar1 + 0xc);
  if (*(int *)(this + 0x40) != 0) {
    iVar1 = FUN_0057497f();
    hModule = *(HMODULE *)(iVar1 + 0xc);
    hResInfo = FindResourceA(hModule,*(LPCSTR *)(this + 0x40),(LPCSTR)0x5);
    hResData = LoadResource(hModule,hResInfo);
  }
  if (hResData != (HGLOBAL)0x0) {
    pvVar2 = LockResource(hResData);
    *(LPVOID *)(unaff_EBP + -0x18) = pvVar2;
  }
  if (*(int *)(unaff_EBP + -0x18) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    pHVar4 = CDialog::PreModal(this);
    *(HWND__ **)(unaff_EBP + -0x14) = pHVar4;
    FUN_00563931();
    *(undefined4 *)(unaff_EBP + -0x20) = 0;
    if (*(int *)(unaff_EBP + -0x14) != 0) {
      BVar5 = IsWindowEnabled(*(HWND *)(unaff_EBP + -0x14));
      if (BVar5 != 0) {
        EnableWindow(*(HWND *)(unaff_EBP + -0x14),0);
        *(undefined4 *)(unaff_EBP + -0x20) = 1;
      }
    }
    *(undefined4 *)(unaff_EBP + -4) = 0;
    FUN_005638e5(this);
    uVar3 = FUN_00563433(*(undefined4 *)(unaff_EBP + -0x14));
    iVar1 = FUN_00562828(*(undefined4 *)(unaff_EBP + -0x18),uVar3,hModule);
    if (iVar1 != 0) {
      if (((byte)this[0x24] & 0x10) != 0) {
        uVar3 = 4;
        uVar6 = FUN_005661de();
        if ((uVar6 & 0x100) != 0) {
          uVar3 = 5;
        }
        FUN_00565bcd(uVar3);
      }
      if (*(int *)(this + 0x1c) != 0) {
        FUN_005662f3(0,0,0,0,0,0x97);
        uVar3 = FUN_00562c2a();
        return uVar3;
      }
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (*(int *)(unaff_EBP + -0x20) != 0) {
      EnableWindow(*(HWND *)(unaff_EBP + -0x14),1);
    }
    if (*(int *)(unaff_EBP + -0x14) != 0) {
      pHVar7 = GetActiveWindow();
      if (pHVar7 == *(HWND *)(this + 0x1c)) {
        SetActiveWindow(*(HWND *)(unaff_EBP + -0x14));
      }
    }
    (**(code **)(*(int *)this + 0x58))();
    CDialog::PostModal(this);
    uVar3 = *(undefined4 *)(this + 0x2c);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar3;
}

