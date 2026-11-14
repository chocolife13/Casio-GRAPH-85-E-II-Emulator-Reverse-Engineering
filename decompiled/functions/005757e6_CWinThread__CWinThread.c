// decompiled from GRAPH85emulator.exe
// function: CWinThread::CWinThread
// entry: 005757e6  size: 61


/* Library Function - Single Match
    public: __thiscall CWinThread::CWinThread(void)
   
   Library: Visual Studio 2003 Release */

undefined4 * __thiscall CWinThread::CWinThread(CWinThread *this)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00555ab8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  FUN_00566409();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *extraout_ECX = &PTR_LAB_0059b9e8;
  extraout_ECX[0x13] = 0;
  extraout_ECX[0x14] = 0;
  FUN_00575823();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}

