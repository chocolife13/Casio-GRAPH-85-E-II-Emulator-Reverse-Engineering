// decompiled from GRAPH85emulator.exe
// function: Global::FUN_00575607
// entry: 00575607  size: 310


void FUN_00575607(void)

{
  int *piVar1;
  int iVar2;
  CWinThread *this;
  int unaff_EBP;
  
  FUN_00555ab8();
  *(CWinThread **)(unaff_EBP + -0x10) = this;
  *(undefined ***)this = &PTR_LAB_0059b8dc;
  piVar1 = *(int **)(this + 0x80);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(1);
  }
  if (*(int **)(this + 0xa8) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xa8) + 0x14))(1);
  }
  iVar2 = FUN_0057497f();
  if (*(char *)(iVar2 + 0x14) == '\0') {
    if (DAT_005d4e38 != (int *)0x0) {
      (**(code **)(*DAT_005d4e38 + 4))(1);
      DAT_005d4e38 = (int *)0x0;
    }
    if (DAT_005d4e34 != (int *)0x0) {
      (**(code **)(*DAT_005d4e34 + 4))(1);
      DAT_005d4e34 = (int *)0x0;
    }
  }
  if (*(int *)(this + 0x94) != 0) {
    FUN_0056c2fb(*(int *)(this + 0x94));
  }
  if (*(int *)(this + 0x98) != 0) {
    FUN_0056c2fb(*(int *)(this + 0x98));
  }
  if (*(ATOM *)(this + 0xb0) != 0) {
    GlobalDeleteAtom(*(ATOM *)(this + 0xb0));
  }
  if (*(ATOM *)(this + 0xb2) != 0) {
    GlobalDeleteAtom(*(ATOM *)(this + 0xb2));
  }
  if (*(int **)(this + 0xac) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xac) + 4))(1);
  }
  iVar2 = FUN_0057497f();
  if (*(int *)(iVar2 + 0x10) == *(int *)(this + 0x78)) {
    *(undefined4 *)(iVar2 + 0x10) = 0;
  }
  if (*(CWinThread **)(iVar2 + 4) == this) {
    *(undefined4 *)(iVar2 + 4) = 0;
  }
  FUN_00553b50(*(undefined4 *)(this + 0x78));
  FUN_00553b50(*(undefined4 *)(this + 0x7c));
  FUN_00553b50(*(undefined4 *)(this + 0x88));
  FUN_00553b50(*(undefined4 *)(this + 0x8c));
  FUN_00553b50(*(undefined4 *)(this + 0x90));
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *(undefined4 *)(this + 0x28) = 0;
  CWinThread::~CWinThread(this);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

